#ifndef LOG_H
#define LOG_H
//#include <time.h>
//#include <stdint.h>
#include "constants.h"
#include "libraries.h"
#include "fatfs.h"
#include "variables_external.h"
#include "functions_external.h"


typedef union{
    int32_t time_ms;
    unsigned long uLMkTime;
    unsigned char uChMkTime[4];
    
}UNN_MicroSec;

typedef union{
    time_t time_dat;
    unsigned long arU32MkTime[sizeof(time_t)>>2];
    unsigned char arU08MkTime[sizeof(time_t)];
    
}UNN_UnixTime;

typedef union{
    unsigned long uLCmd[N_BIG];
    unsigned char uChCmd[(N_BIG<<2)];
    
}UNN_CmdState;

typedef struct tag_CmdPlusTimeStateElem{
    UNN_CmdState cmd;
    UNN_UnixTime unix_time;
    UNN_MicroSec mksec;
} CmdPlusTimeStateElem;

#ifndef EXT_SRAM_512
    #define AMOUNT_CMD_PLUS_TIME_RECORD 4
#else
    #define AMOUNT_CMD_PLUS_TIME_RECORD 400 
#endif


  

#define AMOUNT_CMD_PLUS_TIME_STAMP_RECORD 101 //400
#define FIFTY_YEAR_NUMBER  ((unsigned long long)1000*3600*365*50)

typedef struct tag_CmdPlusTimeHolder{
    CmdPlusTimeStateElem arrCmdPlusTimeHolder[AMOUNT_CMD_PLUS_TIME_RECORD];
    short shIndexWR;
    short shTotalFixElem;
    unsigned long u32IDModifyIndexWR;//Identificator Last Changes Statistics Reg
//  int   cmdPlusTimeHolderBusy;
} CmdPlusTimeHolder;    
extern CmdPlusTimeHolder holderCmdPlusTime;



typedef struct tag_CmdPlusTimeStampElem{
    UNN_CmdState cmd;
    UNN_UnixTime unix_time;
    UNN_MicroSec mksec;
} CmdPlusTimeStampElem;

typedef struct tag_AdditionalInfoCmdPlusTimeStamp{
    unsigned long long ullTimeStamp;
    long lNumAlterSigInElem;// analog number_changes_into_current_item
} AdditionalInfoCmdPlusTimeStamp;

typedef struct tag_CmdPlusTimeStampHolder{
    CmdPlusTimeStampElem arrCmdPlusTimeStampElem[AMOUNT_CMD_PLUS_TIME_STAMP_RECORD];
    AdditionalInfoCmdPlusTimeStamp arrAdditionalInfoCmdPlusTimeStamp[AMOUNT_CMD_PLUS_TIME_STAMP_RECORD];
    short shIndexWR;
    short shIndexRD;
    short shTotalFixElem;
    short shSumDifersElem;
    short shAmount100msElem;
    unsigned long long uLLDrecTimeStampVal;
} CmdPlusTimeStampHolder;    
extern CmdPlusTimeStampHolder holderCmdPlusTimeStamp;

typedef struct tag_dig_reg_uniq_vars{
   unsigned int *number_items_dr;
   unsigned int *number_changes_into_dr_record;
   unsigned int *time_from_start_record_dr;
   unsigned int *blocking_continue_monitoring_min_U;    
   unsigned int *previous_active_functions;
   unsigned int *p_active_functions;
} DigRegUniqVarsAddreses;

#define SIZE_QUUE ((int32_t)(MAX_EVENTS_IN_ONE_RECORD - 1))//100//102  7
typedef struct Queue_tag {
    unsigned char size;//front, rear
    unsigned char capacity;
    unsigned char existent_elem;
    unsigned char amount_elem;
    uint8_t arTimeLab            [SIZE_QUUE];
} QueueChangeMarker;




extern short GetAmountFixElem(void);

void CleanCmdPlusTimeLog(void);
void ChekCurrentStateCmd(unsigned int *p_active_functions);
void CmdPlusTimeLogHundler(unsigned int *p_active_functions);
extern void GetCmdPlusTimeLogElem(unsigned int *p_elem, long lIdx);
extern void GetDateTimeLogElem(unsigned int *p_elem, long lIdx);
extern void GetMsLogElem(unsigned int *p_elem, long lIdx);

extern void CmdPlusTimeStampLogHundler(unsigned int *p_active_functions);
extern void put_before_info_in_buf (unsigned char * const, DigRegUniqVarsAddreses *ptDRecUniqVarsAddreses);
extern void put_before_info_in_buf_from_queue (unsigned char * const, DigRegUniqVarsAddreses *ptDRecUniqVarsAddreses);

extern void TestStateNameSpaceFooBrrr(DigRegUniqVarsAddreses *ptDRecUniqVarsAddreses );
extern void PuCmdinRawBuf(unsigned int *p_active_functions);
extern void FillBeforeBufinDirectOrder(unsigned char * const, DigRegUniqVarsAddreses *ptDRUVAd);
extern void* FillBeforeBufReverseOrder(unsigned char * const, DigRegUniqVarsAddreses *ptDRUVAd);
extern void InithldQueueChangeMarker(void);
extern int enQueue(int value);
extern int deQueue(void);
int getFromRear(int distance);
int getFromFront(int distance);
//~~~ SREC  Part for change 
//==============+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//--------------  15:49 2021-10-28  !!!!!!!!!!!!!!      --------------
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

typedef struct tag_Date_holder{
    long int mday;
    long int mon; 
    long int year;
}DateHolder;
typedef struct tag_one_date_elements_dsc{
    DateHolder dateHolder;
    short amountElemForThisDate;
    short numFierstElemForThisDate;//or Index 1st elem  in arrCmdPlusTimeHolder
}OneDateElmsDsc;

typedef struct tag_DifferDatePlRefTagsInfoDsc{
   OneDateElmsDsc arrDatePlRefTags[AMOUNT_CMD_PLUS_TIME_RECORD];

short amountDifferentOneDateElms;
short indexBaseDatein_arrCmdPlusTimeHolder;

}DiffInfoDsc;
extern DiffInfoDsc hldDiffInfo;
void FillDiffInfo(void);
//..................................................................................
//``````````````````````````````````````````````````````````````````````````````````
extern void FillTwoLineElemInfoForCurrEkrIndexPos(long ekrIndexPos);
extern void Fill2LnScrElemCalcInfo(void* pv2LnCalcInfo ,long ekrIndexPos);//?void FillTwoLineElemInfoForCurrEkrIndexPos1(long ekrIndexPos);
extern void Put2LineElemInfoUsingEkrIndexPos(void*pv2LnCalcInfo,long ekrIndexPos);
typedef struct tag_TwoLnCalcInfo{
    short selectorOneDateElm;            
    short selectorCmdPlusTimeStateElem;
    short selIdxBitCmdPlusTimeStateElem;
    long  calculatedScrIndexPos;         
    long  calculatedMaxScrIndexPos;
    union Scr2LnCalcInfoEvt{
          struct {//.TNV - take new Value
              unsigned int selectorOneDateElemTNV      :1; //0 -selectorOneDateElem take new val 
              unsigned int b1                          :1; //1
              unsigned int bFierstOneDateElem          :1; //2
              unsigned int bLastOneDateElem            :1; //3
              unsigned int b4      :1; //4
              unsigned int b5      :1; //5
              unsigned int b6      :1; //6
              unsigned int b7      :1; //7
          } boolEvtScr;
          unsigned char u8EvtScr;
    };
    char  activeScr;  
}TwoLnCalcInfo;
extern TwoLnCalcInfo scrTwoLnCalcInfo;
extern unsigned int maxAmountTwoLineSttLogElem;
extern char fierstViewAfterEnterKeyPressed;
extern short selectorOneDateElem,fierstSelectedOneDateElem;
extern long  ekr2LineIndexPos;

enum TWO_LINE_SCREEN_INDICATOR_WHAT_TYPE_INFO_SHOWED{
//_SLOG_VALUE_LIST
//SR - statistical REG or SLOG - statistical LOGGER
  SHOW_DATE_PLUS_SPACE = 0,
  SHOW_TIME_MS_STATE_NAME_COMAND,
  TOTAL_SHOWING_TYPES_INFORMATION          //??

};
typedef struct tag_make_ekran_func_Var{


            uint8_t *name_string_tmp;
            unsigned char *pvStrBuf;
            long index_of_ekran;
}Func_make_ekran_variables;
long Calc2LineIndexPos_for_selOneDateElem(long idxOneDateElem);
//?long Calc2LineIndexPos_for_selOneDateElem1(long idxOneDateElem);
void Put2LineElemInfoUsingEkrIndexPos(void*pv2LnCalcInfo,long ekrIndexPos);//TwoLnCalcInfo *pTwoLnCalcInfo
long Calc2lineIndexPosUsingBitCmdValuesAttachedToOneDateElem(long idxOneDateElem);
//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
//""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""

/*
typedef union U32_cmd1_Unn{ 
   struct {
      unsigned int BLOCK_VKL_VV                :1; //0
      unsigned int RESET_LEDS                  :1; //1
      unsigned int RESET_RELES                 :1; //2
      unsigned int MISCEVE_DYSTANCIJNE         :1; //3
      unsigned int STATE_VV                    :1; //4
      unsigned int OTKL_VID_ZOVN_ZAHYSTIV      :1; //5
      unsigned int VKL_VV                      :1; //6
      unsigned int CTRL_VKL                    :1; //7
      unsigned int OTKL_VV                     :1; //8
      unsigned int CTRL_OTKL                   :1; //9
      unsigned int PRYVID_VV                   :1;//10
      unsigned int PEREVYSHCHENNJA_Inom_V      :1;//11
      unsigned int KRYTYCHNYJ_RESURS_VYMY      :1;//12
      unsigned int VYCHERPANYJ_RESURS_VYM      :1;//13
      unsigned int DEFECT                      :1;//14
      unsigned int AVAR_DEFECT                 :1;//15
      unsigned int WORK_A_REJESTRATOR          :1;//16
      unsigned int WORK_D_REJESTRATOR          :1;//17
      unsigned int VIDKL_VID_ZAKHYSTIV         :1;//18
      unsigned int WORK_BO                     :1;//19
      unsigned int WORK_BV                     :1;//20
      unsigned int l1_GRUPA_USTAVOK             :1;//21
      unsigned int l2_GRUPA_USTAVOK             :1;//22
      unsigned int l3_GRUPA_USTAVOK             :1;//23
      unsigned int l4_GRUPA_USTAVOK             :1;//24
      unsigned int INVERS_DV_GRUPA_USTAVO      :1;//25
      unsigned int BLK_GRUP_USTAVOK_VID_Z      :1;//26
      unsigned int RESET_BLOCK_READY_TU_V      :1;//27
      unsigned int READY_TU                    :1;//28
      unsigned int SETTINGS_CHANGED            :1;//29
      unsigned int BLOCK_MTZ1                  :1;//30
      unsigned int BLOCK_MTZ2                  :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd1_wrp; 

typedef union U32_cmd2_Unn{ 
   struct {
      unsigned int BLOCK_USK_MTZ2            :1; //0
      unsigned int BLOCK_MTZ3                :1; //1
      unsigned int BLOCK_MTZ4                :1; //2
      unsigned int SECTOR_VPERED_MTZN1       :1; //3
      unsigned int SECTOR_NAZAD_MTZN1        :1; //4
      unsigned int PO_MTZ1                   :1; //5
      unsigned int PO_MTZN1_VPERED           :1; //6
      unsigned int PO_MTZN1_NAZAD            :1; //7
      unsigned int PO_U_MTZPN1               :1; //8
      unsigned int PO_MTZPN1                 :1; //9
      unsigned int MTZ1                      :1;//10
      unsigned int SECTOR_VPERED_MTZN2       :1;//11
      unsigned int SECTOR_NAZAD_MTZN2        :1;//12
      unsigned int PO_MTZ2                   :1;//13
      unsigned int PO_MTZN2_VPERED           :1;//14
      unsigned int PO_MTZN2_NAZAD            :1;//15
      unsigned int PO_U_MTZPN2               :1;//16
      unsigned int PO_MTZPN2                 :1;//17
      unsigned int MTZ2                      :1;//18
      unsigned int SECTOR_VPERED_MTZN3       :1;//19
      unsigned int SECTOR_NAZAD_MTZN3        :1;//20
      unsigned int PO_MTZ3                   :1;//21
      unsigned int PO_MTZN3_VPERED           :1;//22
      unsigned int PO_MTZN3_NAZAD            :1;//23
      unsigned int PO_U_MTZPN3               :1;//24
      unsigned int PO_MTZPN3                 :1;//25
      unsigned int MTZ3                      :1;//26
      unsigned int SECTOR_VPERED_MTZN4       :1;//27
      unsigned int SECTOR_NAZAD_MTZN4        :1;//28
      unsigned int PO_MTZ4                   :1;//29
      unsigned int PO_MTZN4_VPERED           :1;//30
      unsigned int PO_MTZN4_NAZAD            :1;//31    
                             
    } bool_val;
    unsigned long U32V;
} U32_cmd2_wrp; 


typedef union U32_cmd3_Unn{ 
   struct {
      unsigned int PO_U_MTZPN4         :1; //0
      unsigned int PO_MTZPN4           :1; //1
      unsigned int MTZ4                :1; //2
      unsigned int PO_BLOCK_U_MTZN     :1; //3
      unsigned int NCN_MTZ             :1; //4
      unsigned int BLOCK_MTZ04_1       :1; //5
      unsigned int BLOCK_MTZ04_2       :1; //6
      unsigned int BLOCK_USK_MTZ       :1; //7
      unsigned int PO_MTZ04_1          :1; //8
      unsigned int MTZ04_1             :1; //9
      unsigned int PO_MTZ04_2          :1;//10
      unsigned int MTZ04_2             :1;//11
      unsigned int BLOCK_ZDZ           :1;//12
      unsigned int PUSK_ZDZ_VID_       :1;//13
      unsigned int LIGHT_ZDZ_FRO       :1;//14
      unsigned int PO_ZDZ              :1;//15
      unsigned int ZDZ                 :1;//16
      unsigned int BLOCK_NZZ           :1;//17
      unsigned int PO_NZZ              :1;//18
      unsigned int NZZ                 :1;//19
      unsigned int PO_3I0              :1;//20
      unsigned int l3I0                 :1;//21
      unsigned int lPO_3U0              :1;//22
      unsigned int l3U0                 :1;//23
      unsigned int SECTOR_NZZ           :1;//24
      unsigned int BLOCK_TZNP1          :1;//25
      unsigned int SECTOR_TZNP1_VPERED  :1;//26
      unsigned int SECTOR_TZNP1_NAZAD   :1;//27
      unsigned int PO_3I0_TZNP1_VPERED  :1;//28
      unsigned int PO_3I0_TZNP1_NAZAD   :1;//29
      unsigned int PO_3U0_TZNP1_VPERED  :1;//30
      unsigned int PO_3U0_TZNP1_NAZAD   :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd3_wrp; 

typedef union U32_cmd4_Unn{ 
   struct {
      unsigned int PO_TZNP1_VPERED       :1; //0
      unsigned int PO_TZNP1_NAZAD        :1; //1
      unsigned int TZNP1                 :1; //2
      unsigned int BLOCK_TZNP2           :1; //3
      unsigned int SECTOR_TZNP2_VPERED   :1; //4
      unsigned int SECTOR_TZNP2_NAZAD    :1; //5
      unsigned int PO_3I0_TZNP2_VPERED   :1; //6
      unsigned int PO_3I0_TZNP2_NAZAD    :1; //7
      unsigned int PO_3U0_TZNP2_VPERED   :1; //8
      unsigned int PO_3U0_TZNP2_NAZAD    :1; //9
      unsigned int PO_TZNP2_VPERED       :1;//10
      unsigned int PO_TZNP2_NAZAD        :1;//11
      unsigned int TZNP2                 :1;//12
      unsigned int BLOCK_TZNP3           :1;//13
      unsigned int SECTOR_TZNP3_VPERED   :1;//14
      unsigned int SECTOR_TZNP3_NAZAD    :1;//15
      unsigned int PO_3I0_TZNP3_VPERED   :1;//16
      unsigned int PO_3I0_TZNP3_NAZAD    :1;//17
      unsigned int PO_3U0_TZNP3_VPERED   :1;//18
      unsigned int PO_3U0_TZNP3_NAZAD    :1;//19
      unsigned int PO_TZNP3_VPERED       :1;//20
      unsigned int PO_TZNP3_NAZAD        :1;//21
      unsigned int TZNP3                 :1;//22
      unsigned int STAT_BLK_APV          :1;//23
      unsigned int APV1                  :1;//24
      unsigned int APV2                  :1;//25
      unsigned int APV3                  :1;//26
      unsigned int APV4                  :1;//27
      unsigned int APV_WORK              :1;//28
      unsigned int ACHR_CHAPV_VID_DV     :1;//29
      unsigned int BLOCK_ACHR1           :1;//30
      unsigned int BLOCK_ACHR2  :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd4_wrp; 

typedef union U32_cmd5_Unn{ 
   struct {
      unsigned int RAZR_CHAPV           :1; //0
      unsigned int VN_BLOCK_CHAPV       :1; //1
      unsigned int PO_ACHR1             :1; //2
      unsigned int PO_CHAPV1            :1; //3
      unsigned int ACHR_CHAPV1          :1; //4
      unsigned int PO_ACHR2             :1; //5
      unsigned int PO_CHAPV2            :1; //6
      unsigned int ACHR_CHAPV2          :1; //7
      unsigned int PUSK_UROV_VID_DV     :1; //8
      unsigned int PO_UROV              :1; //9
      unsigned int UROV1                :1;//10
      unsigned int UROV2                :1;//11
      unsigned int BLOCK_ZOP            :1;//12
      unsigned int PO_ZOP               :1;//13
      unsigned int ZOP                  :1;//14
      unsigned int BLOCK_UMIN1          :1;//15
      unsigned int START_UMIN1          :1;//16
      unsigned int BLOCK_UMIN2          :1;//17
      unsigned int START_UMIN2          :1;//18
      unsigned int PO_UMIN1             :1;//19
      unsigned int PO_UBLK_UMIN1        :1;//20
      unsigned int PO_IBLK_UMIN1        :1;//21
      unsigned int UMIN1                :1;//22
      unsigned int PO_UMIN2             :1;//23
      unsigned int PO_UBLK_UMIN2        :1;//24
      unsigned int PO_IBLK_UMIN2        :1;//25
      unsigned int UMIN2                :1;//26
      unsigned int BLOCK_UMAX1          :1;//27
      unsigned int PO_UMAX1             :1;//28
      unsigned int UMAX1                :1;//29
      unsigned int BLOCK_UMAX2          :1;//30
      unsigned int PO_UMAX2             :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd5_wrp; 

typedef union U32_cmd6_Unn{ 
   struct {
      unsigned int UMAX2      :1; //0
      unsigned int BLOCK_UP1  :1; //1
      unsigned int PO_UP1     :1; //2
      unsigned int UP1        :1; //3
      unsigned int BLOCK_UP2  :1; //4
      unsigned int PO_UP2  :1; //5
      unsigned int UP2  :1; //6
      unsigned int BLOCK_UP3  :1; //7
      unsigned int PO_UP3  :1; //8
      unsigned int UP3  :1; //9
      unsigned int BLOCK_UP4  :1;//10
      unsigned int PO_UP4  :1;//11
      unsigned int UP4  :1;//12
      unsigned int BLOCK_UP5  :1;//13
      unsigned int PO_UP5  :1;//14
      unsigned int UP5  :1;//15
      unsigned int BLOCK_UP6  :1;//16
      unsigned int PO_UP6  :1;//17
      unsigned int UP6  :1;//18
      unsigned int BLOCK_UP7  :1;//19
      unsigned int PO_UP7  :1;//20
      unsigned int UP7  :1;//21
      unsigned int BLOCK_UP8  :1;//22
      unsigned int PO_UP8  :1;//23
      unsigned int UP8  :1;//24
      unsigned int DF1_IN   :1;//25
      unsigned int DF1_OUT  :1;//26
      unsigned int DF2_IN   :1;//27
      unsigned int DF2_OUT  :1;//28
      unsigned int DF3_IN   :1;//29
      unsigned int DF3_OUT  :1;//30
      unsigned int DF4_IN   :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd6_wrp; 

typedef union U32_cmd7_Unn{ 
   struct {
      unsigned int DF4_OUT      :1; //0
      unsigned int DF5_IN       :1; //1
      unsigned int DF5_OUT      :1; //2
      unsigned int DF6_IN       :1; //3
      unsigned int DF6_OUT      :1; //4
      unsigned int DF7_IN       :1; //5
      unsigned int DF7_OUT      :1; //6
      unsigned int DF8_IN       :1; //7
      unsigned int DF8_OUT      :1; //8
      unsigned int DT1_SET      :1; //9
      unsigned int DT1_RESET    :1;//10
      unsigned int DT1_OUT      :1;//11
      unsigned int DT2_SET      :1;//12
      unsigned int DT2_RESET    :1;//13
      unsigned int DT2_OUT      :1;//14
      unsigned int DT3_SET      :1;//15
      unsigned int DT3_RESET    :1;//16
      unsigned int DT3_OUT      :1;//17
      unsigned int DT4_SET      :1;//18
      unsigned int DT4_RESET    :1;//19
      unsigned int DT4_OUT      :1;//20
      unsigned int D_AND1       :1;//21
      unsigned int D_AND2       :1;//22
      unsigned int D_AND3       :1;//23
      unsigned int D_AND4       :1;//24
      unsigned int D_AND5       :1;//25
      unsigned int D_AND6       :1;//26
      unsigned int D_AND7       :1;//27
      unsigned int D_AND8       :1;//28
      unsigned int D_OR1        :1;//29
      unsigned int D_OR2        :1;//30
      unsigned int D_OR3        :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd7_wrp; 

typedef union U32_cmd8_Unn{ 
   struct {
      unsigned int D_OR4             :1; //0
      unsigned int D_OR5             :1; //1
      unsigned int D_OR6             :1; //2
      unsigned int D_OR7             :1; //3
      unsigned int D_OR8             :1; //4
      unsigned int D_XOR1            :1; //5
      unsigned int D_XOR2            :1; //6
      unsigned int D_XOR3            :1; //7
      unsigned int D_XOR4            :1; //8
      unsigned int D_XOR5            :1; //9
      unsigned int D_XOR6            :1;//10
      unsigned int D_XOR7            :1;//11
      unsigned int D_XOR8            :1;//12
      unsigned int D_NOT1            :1;//13
      unsigned int D_NOT2            :1;//14
      unsigned int D_NOT3            :1;//15
      unsigned int D_NOT4            :1;//16
      unsigned int D_NOT5            :1;//17
      unsigned int D_NOT6            :1;//18
      unsigned int D_NOT7            :1;//19
      unsigned int D_NOT8            :1;//20
      unsigned int D_NOT9            :1;//21
      unsigned int D_NOT10           :1;//22
      unsigned int D_NOT11           :1;//23
      unsigned int D_NOT12           :1;//24
      unsigned int D_NOT13           :1;//25
      unsigned int D_NOT14           :1;//26
      unsigned int D_NOT15           :1;//27
      unsigned int D_NOT16           :1;//28
      unsigned int ERROR_CONF_EL     :1;//29
      unsigned int b30    :1;//30
      unsigned int b31    :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd8_wrp; 

typedef struct tag_cmd_bit_depot{
   U32_cmd1_wrp w1;
   U32_cmd2_wrp w2;
   U32_cmd3_wrp w3;
   U32_cmd4_wrp w4;
   U32_cmd5_wrp w5;
   U32_cmd6_wrp w6;
   U32_cmd7_wrp w7;
   U32_cmd8_wrp w8;
   U32_cmd8_wrp w9;
} CmdFunctionDepot;
*/


#if (                                \
     (MODYFIKACIA_VERSII_PZ == 11) ||\
     (MODYFIKACIA_VERSII_PZ == 33)   \
    ) 

typedef union U32_cmd1_Unn{ 
   struct {
      unsigned int  BLOCK_VKL_VV_0                         :1; //0
      unsigned int  RESET_LEDS_1                           :1; //1
      unsigned int  RESET_RELES_2                          :1; //2
      unsigned int  MISCEVE_DYSTANCIJNE_3                  :1; //3
      unsigned int  STATE_VV_4                             :1; //4
      unsigned int  OTKL_VID_ZOVN_ZAHYSTIV_5               :1; //5
      unsigned int  OTKL_VV_6                              :1; //6
      unsigned int  VKL_VV_7                               :1; //7
      unsigned int  CTRL_OTKL_8                            :1; //8
      unsigned int  CTRL_VKL_9                             :1; //9
      unsigned int  PRYVID_VV_10                           :1;//10
      unsigned int  PEREVYSHCHENNJA_Inom_VYMK_11           :1;//11
      unsigned int  KRYTYCHNYJ_RESURS_VYMYKACHA_12         :1;//12
      unsigned int  VYCHERPANYJ_RESURS_VYMYKACHA_13        :1;//13
      unsigned int  DI_ACTIVE_14                           :1;//14
      unsigned int  FK_ACTIVE_15                           :1;//15
      unsigned int  LAN_ACTIVE_16                          :1;//16
      unsigned int  GOOSE_ACTIVE_17                        :1;//17
      unsigned int  USB_ACTIVE_18                          :1;//18
      unsigned int  RS485_ACTIVE_19                        :1;//19
      unsigned int  DEFECT_20                              :1;//20
      unsigned int  AVAR_DEFECT_21                          :1;//21
      unsigned int  WORK_A_REJESTRATOR_22                   :1;//22
      unsigned int  WORK_D_REJESTRATOR_23                   :1;//23
      unsigned int  VIDKL_VID_ZAKHYSTIV_24                  :1;//24
      unsigned int  WORK_BO_25                             :1;//25
      unsigned int  WORK_BV_26                             :1;//26
      unsigned int  b_1KZ_27                               :1;//27
      unsigned int  b_2KZ_28                               :1;//28
      unsigned int  b_3KZ_29                               :1;//29
      unsigned int  b_1_GRUPA_USTAVOK_30                   :1;//30
      unsigned int  b_2_GRUPA_USTAVOK_31                   :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd1_wrp; 

typedef union U32_cmd2_Unn{ 
   struct {
      unsigned int b_3_GRUPA_USTAVOK_0                   :1; //0
      unsigned int b_4_GRUPA_USTAVOK_1                   :1; //1
      unsigned int INVERS_DV_GRUPA_USTAVOK_2             :1; //2
      unsigned int BLK_GRUP_USTAVOK_VID_ZACHYSTIV_3      :1; //3
      unsigned int RESET_BLOCK_READY_TU_VID_ZAHYSTIV_4   :1; //4
      unsigned int READY_TU_5                            :1; //5
      unsigned int SETTINGS_CHANGED_6                    :1; //6
      unsigned int BLOCK_IN_GOOSE1_7                     :1; //7
      unsigned int BLOCK_IN_GOOSE2_8                     :1; //8
      unsigned int BLOCK_IN_GOOSE3_9                     :1; //9
      unsigned int BLOCK_IN_GOOSE4_10                    :1;//10
      unsigned int BLOCK_IN_GOOSE5_11                    :1;//11
      unsigned int BLOCK_IN_GOOSE6_12                    :1;//12
      unsigned int BLOCK_IN_GOOSE7_13                    :1;//13
      unsigned int BLOCK_IN_GOOSE8_14                    :1;//14
      unsigned int BLOCK_IN_GOOSE9_15                    :1;//15
      unsigned int BLOCK_IN_GOOSE10_16                   :1;//16
      unsigned int BLOCK_IN_GOOSE11_17                   :1;//17
      unsigned int BLOCK_IN_GOOSE12_18                   :1;//18
      unsigned int BLOCK_IN_GOOSE13_19                   :1;//19
      unsigned int BLOCK_IN_GOOSE14_20                   :1;//20
      unsigned int BLOCK_IN_GOOSE15_21                   :1;//21
      unsigned int BLOCK_IN_GOOSE16_22                   :1;//22
      unsigned int BLOCK_IN_MMS1_23                      :1;//23
      unsigned int BLOCK_IN_MMS2_24                      :1;//24
      unsigned int BLOCK_IN_MMS3_25                      :1;//25
      unsigned int BLOCK_IN_MMS4_26                      :1;//26
      unsigned int BLOCK_OUT_LAN1_27                     :1;//27
      unsigned int BLOCK_OUT_LAN2_28                     :1;//28
      unsigned int BLOCK_OUT_LAN3_29                     :1;//29
      unsigned int BLOCK_OUT_LAN4_30                     :1;//30
      unsigned int BLOCK_DZ1_31                          :1;//31    
                             
    } bool_val;
    unsigned long U32V;
} U32_cmd2_wrp; 


typedef union U32_cmd3_Unn{ 
   struct {
      unsigned int PO_DZ1_0           :1; //0
      unsigned int DZ1_1              :1; //1
      unsigned int PO_AMTZ_DZ1_2      :1; //2
      unsigned int AMTZ_DZ1_3         :1; //3
      unsigned int BLOCK_DZ2_4        :1; //4
      unsigned int BLOCK_PR_DZ2_5     :1; //5
      unsigned int OP_PR_DZ2_6        :1; //6
      unsigned int SECTOR_DIR_DZ2_7   :1; //7
      unsigned int SECTOR_INV_DZ2_8   :1; //8
      unsigned int PO_DIR_DZ2_9       :1; //9
      unsigned int PO_INV_DZ2_10      :1;//10
      unsigned int DZ2_11             :1;//11
      unsigned int PO_AMTZ_DZ2_12     :1;//12
      unsigned int AMTZ_DZ2_13        :1;//13
      unsigned int BLOCK_DZ3_14       :1;//14
      unsigned int BLOCK_PR_DZ3_15    :1;//15
      unsigned int OP_PR_DZ3_16       :1;//16
      unsigned int SECTOR_DIR_DZ3_17  :1;//17
      unsigned int SECTOR_INV_DZ3_18  :1;//18
      unsigned int PO_DIR_DZ3_19      :1;//19
      unsigned int PO_INV_DZ3_20      :1;//20
      unsigned int DZ3_21              :1;//21
      unsigned int PO_AMTZ_DZ3_22      :1;//22
      unsigned int AMTZ_DZ3_23         :1;//23
      unsigned int BLOCK_DZ4_24        :1;//24
      unsigned int BLOCK_PR_DZ4_25     :1;//25
      unsigned int OP_PR_DZ4_26        :1;//26
      unsigned int SECTOR_DIR_DZ4_27   :1;//27
      unsigned int SECTOR_INV_DZ4_28   :1;//28
      unsigned int PO_DIR_DZ4_29       :1;//29
      unsigned int PO_INV_DZ4_30       :1;//30
      unsigned int DZ4_31              :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd3_wrp; 

typedef union U32_cmd4_Unn{ 
   struct {
      unsigned int PO_AMTZ_DZ4_0            :1; //0
      unsigned int AMTZ_DZ4_1               :1; //1
      unsigned int EXT_NKN_DZ_2             :1; //2
      unsigned int NKN_DZ_3                 :1; //3
      unsigned int PO_U_DZ_4                :1; //4
      unsigned int PO_I_BLK_DZ_5            :1; //5
      unsigned int b_3F_DZ_DIR_INV_6        :1; //6
      unsigned int SNKN_DZ_7                :1; //7
      unsigned int BLOCK_MTZ1_8             :1; //8
      unsigned int BLOCK_MTZ2_9             :1; //9
      unsigned int BLOCK_USK_MTZ2_10        :1;//10
      unsigned int BLOCK_MTZ3_11            :1;//11
      unsigned int BLOCK_MTZ4_12            :1;//12
      unsigned int SECTOR_VPERED_MTZN1_13   :1;//13
      unsigned int SECTOR_NAZAD_MTZN1_14    :1;//14
      unsigned int PO_MTZ1_15               :1;//15
      unsigned int PO_MTZN1_VPERED_16       :1;//16
      unsigned int PO_MTZN1_NAZAD_17        :1;//17
      unsigned int PO_U_MTZPN1_18           :1;//18
      unsigned int PO_MTZPN1_19             :1;//19
      unsigned int MTZ1_20                  :1;//20
      unsigned int SECTOR_VPERED_MTZN2_21   :1;//21
      unsigned int SECTOR_NAZAD_MTZN2_22    :1;//22
      unsigned int PO_MTZ2_23               :1;//23
      unsigned int PO_MTZN2_VPERED_24       :1;//24
      unsigned int PO_MTZN2_NAZAD_25        :1;//25
      unsigned int PO_U_MTZPN2_26           :1;//26
      unsigned int PO_MTZPN2_27             :1;//27
      unsigned int MTZ2_28                  :1;//28
      unsigned int SECTOR_VPERED_MTZN3_29   :1;//29
      unsigned int SECTOR_NAZAD_MTZN3_30    :1;//30
      unsigned int PO_MTZ3_31               :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd4_wrp; 

typedef union U32_cmd5_Unn{ 
   struct {
      unsigned int PO_MTZN3_VPERED_0      :1; //0
      unsigned int PO_MTZN3_NAZAD_1       :1; //1
      unsigned int PO_U_MTZPN3_2          :1; //2
      unsigned int PO_MTZPN3_3            :1; //3
      unsigned int MTZ3_4                 :1; //4
      unsigned int SECTOR_VPERED_MTZN4_5  :1; //5
      unsigned int SECTOR_NAZAD_MTZN4_6   :1; //6
      unsigned int PO_MTZ4_7              :1; //7
      unsigned int PO_MTZN4_VPERED_8      :1; //8
      unsigned int PO_MTZN4_NAZAD_9       :1; //9
      unsigned int PO_U_MTZPN4_10         :1;//10
      unsigned int PO_MTZPN4_11           :1;//11
      unsigned int MTZ4_12                :1;//12
      unsigned int PO_BLOCK_U_MTZN_13     :1;//13
      unsigned int NCN_MTZ_14             :1;//14
      unsigned int BLOCK_ZNAM_15          :1;//15
      unsigned int PO_ZNAM_16             :1;//16
      unsigned int ZNAM_17                :1;//17
      unsigned int BLOCK_ZDZ_18           :1;//18
      unsigned int PUSK_ZDZ_VID_DV_19     :1;//19
      unsigned int LIGHT_ZDZ_FROM_DV_20   :1;//20
      unsigned int PO_ZDZ_21              :1;//21
      unsigned int ZDZ_22                 :1;//22
      unsigned int BLOCK_NZZ_23           :1;//23
      unsigned int PO_NZZ_24              :1;//24
      unsigned int NZZ_25                 :1;//25
      unsigned int PO_3I0_26              :1;//26
      unsigned int b_3I0_27               :1;//27
      unsigned int PO_3U0_28              :1;//28
      unsigned int b_3U0_29               :1;//29
      unsigned int SECTOR_NZZ_30          :1;//30
      unsigned int BLOCK_TZNP1_31         :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd5_wrp; 

typedef union U32_cmd6_Unn{ 
   struct {
      unsigned int SECTOR_TZNP1_VPERED_0  :1; //0
      unsigned int SECTOR_TZNP1_NAZAD_1   :1; //1
      unsigned int PO_3I0_TZNP1_VPERED_2  :1; //2
      unsigned int PO_3I0_TZNP1_NAZAD_3   :1; //3
      unsigned int PO_3U0_TZNP1_VPERED_4  :1; //4
      unsigned int PO_3U0_TZNP1_NAZAD_5   :1; //5
      unsigned int PO_TZNP1_VPERED_6      :1; //6
      unsigned int PO_TZNP1_NAZAD_7       :1; //7
      unsigned int TZNP1_8                :1; //8
      unsigned int BLOCK_TZNP2_9          :1; //9
      unsigned int SECTOR_TZNP2_VPERED_10 :1;//10
      unsigned int SECTOR_TZNP2_NAZAD_11  :1;//11
      unsigned int PO_3I0_TZNP2_VPERED_12 :1;//12
      unsigned int PO_3I0_TZNP2_NAZAD_13  :1;//13
      unsigned int PO_3U0_TZNP2_VPERED_14 :1;//14
      unsigned int PO_3U0_TZNP2_NAZAD_15  :1;//15
      unsigned int PO_TZNP2_VPERED_16     :1;//16
      unsigned int PO_TZNP2_NAZAD_17      :1;//17
      unsigned int TZNP2_18               :1;//18
      unsigned int BLOCK_TZNP3_19         :1;//19
      unsigned int SECTOR_TZNP3_VPERED_20 :1;//20
      unsigned int SECTOR_TZNP3_NAZAD_21  :1;//21
      unsigned int PO_3I0_TZNP3_VPERED_22 :1;//22
      unsigned int PO_3I0_TZNP3_NAZAD_23  :1;//23
      unsigned int PO_3U0_TZNP3_VPERED_24 :1;//24
      unsigned int PO_3U0_TZNP3_NAZAD_25  :1;//25
      unsigned int PO_TZNP3_VPERED_26     :1;//26
      unsigned int PO_TZNP3_NAZAD_27      :1;//27
      unsigned int TZNP3_28               :1;//28
      unsigned int STAT_BLK_APV_29        :1;//29
      unsigned int APV1_30                :1;//30
      unsigned int APV2_31                :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd6_wrp; 

typedef union U32_cmd7_Unn{ 
   struct {
      unsigned int APV3_0                :1; //0
      unsigned int APV4_1                :1; //1
      unsigned int APV_WORK_2            :1; //2
      unsigned int ACHR_CHAPV_VID_DV_3   :1; //3
      unsigned int BLOCK_ACHR1_4         :1; //4
      unsigned int BLOCK_ACHR2_5         :1; //5
      unsigned int RAZR_CHAPV_6          :1; //6
      unsigned int VN_BLOCK_CHAPV_7      :1; //7
      unsigned int PO_ACHR1_8            :1; //8
      unsigned int PO_CHAPV1_9           :1; //9
      unsigned int ACHR_CHAPV1_10        :1;//10
      unsigned int PO_ACHR2_11           :1;//11
      unsigned int PO_CHAPV2_12          :1;//12
      unsigned int ACHR_CHAPV2_13        :1;//13
      unsigned int BLOCK_UROV_14         :1;//14
      unsigned int PUSK_UROV_VID_DV_15   :1;//15
      unsigned int PO_UROV_16            :1;//16
      unsigned int UROV1_17              :1;//17
      unsigned int UROV2_18              :1;//18
      unsigned int BLOCK_ZOP_19          :1;//19
      unsigned int PO_ZOP_20             :1;//20
      unsigned int ZOP_21                :1;//21
      unsigned int BLOCK_UMIN1_22        :1;//22
      unsigned int START_UMIN1_23        :1;//23
      unsigned int BLOCK_UMIN2_24        :1;//24
      unsigned int START_UMIN2_25        :1;//25
      unsigned int PO_UMIN1_26           :1;//26
      unsigned int PO_UBLK_UMIN1_27      :1;//27
      unsigned int PO_IBLK_UMIN1_28      :1;//28
      unsigned int UMIN1_29              :1;//29
      unsigned int PO_UMIN2_30           :1;//30
      unsigned int PO_UBLK_UMIN2_31      :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd7_wrp; 

typedef union U32_cmd8_Unn{ 
   struct {
      unsigned int PO_IBLK_UMIN2_0   :1; //0
      unsigned int UMIN2_1           :1; //1
      unsigned int BLOCK_UMAX1_2     :1; //2
      unsigned int PO_UMAX1_3        :1; //3
      unsigned int UMAX1_4           :1; //4
      unsigned int BLOCK_UMAX2_5     :1; //5
      unsigned int PO_UMAX2_6        :1; //6
      unsigned int UMAX2_7           :1; //7
      unsigned int BLOCK_UP1_8       :1; //8
      unsigned int PO_UP1_9          :1; //9
      unsigned int UP1_10            :1;//10
      unsigned int BLOCK_UP2_11      :1;//11
      unsigned int PO_UP2_12         :1;//12
      unsigned int UP2_13            :1;//13
      unsigned int BLOCK_UP3_14      :1;//14
      unsigned int PO_UP3_15         :1;//15
      unsigned int UP3_16            :1;//16
      unsigned int BLOCK_UP4_17      :1;//17
      unsigned int PO_UP4_18         :1;//18
      unsigned int UP4_19            :1;//19
      unsigned int BLOCK_UP5_20      :1;//20
      unsigned int PO_UP5_21         :1;//21
      unsigned int UP5_22            :1;//22
      unsigned int BLOCK_UP6_23      :1;//23
      unsigned int PO_UP6_24         :1;//24
      unsigned int UP6_25            :1;//25
      unsigned int BLOCK_UP7_26      :1;//26
      unsigned int PO_UP7_27         :1;//27
      unsigned int UP7_28            :1;//28
      unsigned int BLOCK_UP8_29      :1;//29
      unsigned int PO_UP8_30         :1;//30
      unsigned int UP8_31            :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd8_wrp; 

typedef union U32_cmd9_Unn{ 
   struct {
      unsigned int DF1_IN_0         :1; //0
      unsigned int DF1_R_1          :1; //1
      unsigned int DF1_OUT_2        :1; //2
      unsigned int DF2_IN_3         :1; //3
      unsigned int DF2_R_4          :1; //4
      unsigned int DF2_OUT_5        :1; //5
      unsigned int DF3_IN_6         :1; //6
      unsigned int DF3_R_7          :1; //7
      unsigned int DF3_OUT_8        :1; //8
      unsigned int DF4_IN_9         :1; //9
      unsigned int DF4_R_10         :1;//10
      unsigned int DF4_OUT_11       :1;//11
      unsigned int DF5_IN_12        :1;//12
      unsigned int DF5_R_13         :1;//13
      unsigned int DF5_OUT_14       :1;//14
      unsigned int DF6_IN_15        :1;//15
      unsigned int DF6_R_16         :1;//16
      unsigned int DF6_OUT_17       :1;//17
      unsigned int DF7_IN_18        :1;//18
      unsigned int DF7_R_19         :1;//19
      unsigned int DF7_OUT_20       :1;//20
      unsigned int DF8_IN_21        :1;//21
      unsigned int DF8_R_22         :1;//22
      unsigned int DF8_OUT_23       :1;//23
      unsigned int DT1_SET_24       :1;//24
      unsigned int DT1_RESET_25     :1;//25
      unsigned int DT1_OUT_26       :1;//26
      unsigned int DT2_SET_27       :1;//27
      unsigned int DT2_RESET_28     :1;//28
      unsigned int DT2_OUT_29       :1;//29
      unsigned int DT3_SET_30       :1;//30
      unsigned int DT3_RESE_31      :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd9_wrp; 

typedef union U32_cmd10_Unn{ 
   struct {
      unsigned int  DT3_OUT_0      :1; //0
      unsigned int  DT4_SET_1      :1; //1
      unsigned int  DT4_RESET_2    :1; //2
      unsigned int  DT4_OUT_3      :1; //3
      unsigned int  D_AND1_4       :1; //4
      unsigned int  D_AND2_5       :1; //5
      unsigned int  D_AND3_6       :1; //6
      unsigned int  D_AND4_7       :1; //7
      unsigned int  D_AND5_8       :1; //8
      unsigned int  D_AND6_9       :1; //9
      unsigned int  D_AND7_10      :1;//10
      unsigned int  D_AND8_11      :1;//11
      unsigned int  D_OR1_12       :1;//12
      unsigned int  D_OR2_13       :1;//13
      unsigned int  D_OR3_14       :1;//14
      unsigned int  D_OR4_15       :1;//15
      unsigned int  D_OR5_16       :1;//16
      unsigned int  D_OR6_17       :1;//17
      unsigned int  D_OR7_18       :1;//18
      unsigned int  D_OR8_19       :1;//19
      unsigned int  D_XOR1_20      :1;//20
      unsigned int  D_XOR2_21      :1;//21
      unsigned int  D_XOR3_22      :1;//22
      unsigned int  D_XOR4_23      :1;//23
      unsigned int  D_XOR5_24      :1;//24
      unsigned int  D_XOR6_25      :1;//25
      unsigned int  D_XOR7_26      :1;//26
      unsigned int  D_XOR8_27      :1;//27
      unsigned int  D_NOT1_28      :1;//28
      unsigned int  D_NOT2_29      :1;//29
      unsigned int  D_NOT3_30      :1;//30
      unsigned int  D_NOT4_31      :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd10_wrp; 

typedef union U32_cmd11_Unn{ 
   struct {
      unsigned int D_NOT5_0          :1; //0
      unsigned int D_NOT6_1          :1; //1
      unsigned int D_NOT7_2          :1; //2
      unsigned int D_NOT8_3          :1; //3
      unsigned int D_NOT9_4          :1; //4
      unsigned int D_NOT10_5         :1; //5
      unsigned int D_NOT11_6         :1; //6
      unsigned int D_NOT12_7         :1; //7
      unsigned int D_NOT13_8         :1; //8
      unsigned int D_NOT14_9         :1; //9
      unsigned int D_NOT15_10        :1;//10
      unsigned int D_NOT16_11        :1;//11
      unsigned int LF1_12            :1;//12
      unsigned int LF2_13            :1;//13
      unsigned int LF3_14            :1;//14
      unsigned int LF4_15            :1;//15
      unsigned int LF5_16            :1;//16
      unsigned int LF6_17            :1;//17
      unsigned int LF7_18            :1;//18
      unsigned int LF8_19            :1;//19
      unsigned int LF9_20            :1;//20
      unsigned int LF10_21           :1;//21
      unsigned int LF11_22           :1;//22
      unsigned int LF12_23           :1;//23
      unsigned int LF13_24           :1;//24
      unsigned int LF14_25           :1;//25
      unsigned int LF15_26           :1;//26
      unsigned int LF16_27           :1;//27
      unsigned int ERROR_CONF_EL_28  :1;//28
      unsigned int b29               :1;//29
      unsigned int b30               :1;//30
      unsigned int b31               :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd11_wrp; 

typedef struct tag_cmd_bit_depot{
   U32_cmd1_wrp w1;
   U32_cmd2_wrp w2;
   U32_cmd3_wrp w3;
   U32_cmd4_wrp w4;
   U32_cmd5_wrp w5;
   U32_cmd6_wrp w6;
   U32_cmd7_wrp w7;
   U32_cmd8_wrp w8;
   U32_cmd9_wrp w9;
   U32_cmd10_wrp w10;
   U32_cmd11_wrp w11;
} CmdFunctionDepot;

#elif (                                 \
       (MODYFIKACIA_VERSII_PZ == 13)    \
      )

typedef union U32_cmd1_Unn{ 
   struct {
      unsigned int BLOCK_VKL_VV_0                    :1; //0
      unsigned int RESET_LEDS_1                      :1; //1
      unsigned int RESET_RELES_2                     :1; //2
      unsigned int MISCEVE_DYSTANCIJNE_3             :1; //3
      unsigned int STATE_VV_4                        :1; //4
      unsigned int OTKL_VID_ZOVN_ZAHYSTIV_5          :1; //5
      unsigned int OTKL_VV_6                         :1; //6
      unsigned int VKL_VV_7                          :1; //7
      unsigned int CTRL_OTKL_8                       :1; //8
      unsigned int CTRL_VKL_9                        :1; //9
      unsigned int PRYVID_VV_10                      :1;//10
      unsigned int PEREVYSHCHENNJA_Inom_VYMK_11      :1;//11
      unsigned int KRYTYCHNYJ_RESURS_VYMYKACHA_12    :1;//12
      unsigned int VYCHERPANYJ_RESURS_VYMYKACHA_13   :1;//13
      unsigned int DI_ACTIVE_14                      :1;//14
      unsigned int FK_ACTIVE_15                      :1;//15
      unsigned int LAN_ACTIVE_16                     :1;//16
      unsigned int GOOSE_ACTIVE_17                   :1;//17
      unsigned int USB_ACTIVE_18                     :1;//18
      unsigned int RS485_ACTIVE_19                   :1;//19
      unsigned int DEFECT_20                         :1;//20
      unsigned int AVAR_DEFECT_21                     :1;//21
      unsigned int WORK_A_REJESTRATOR_22              :1;//22
      unsigned int WORK_D_REJESTRATOR_23              :1;//23
      unsigned int VIDKL_VID_ZAKHYSTIV_24             :1;//24
      unsigned int WORK_BO_25                        :1;//25
      unsigned int WORK_BV_26                        :1;//26
      unsigned int b_1KZ_27                          :1;//27
      unsigned int b_2KZ_28                          :1;//28
      unsigned int b_3KZ_29                          :1;//29
      unsigned int b_1_GRUPA_USTAVOK_30              :1;//30
      unsigned int b_2_GRUPA_USTAVOK_31              :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd1_wrp; 

typedef union U32_cmd2_Unn{ 
   struct {
      unsigned int b_3_GRUPA_USTAVOK_0                  :1; //0
      unsigned int b_4_GRUPA_USTAVOK_1                  :1; //1
      unsigned int INVERS_DV_GRUPA_USTAVOK_2            :1; //2
      unsigned int BLK_GRUP_USTAVOK_VID_ZACHYSTIV_3     :1; //3
      unsigned int RESET_BLOCK_READY_TU_VID_ZAHYSTIV_4  :1; //4
      unsigned int READY_TU_5                           :1; //5
      unsigned int SETTINGS_CHANGED_6                   :1; //6
      unsigned int BLOCK_IN_GOOSE1_7                    :1; //7
      unsigned int BLOCK_IN_GOOSE2_8                    :1; //8
      unsigned int BLOCK_IN_GOOSE3_9                    :1; //9
      unsigned int BLOCK_IN_GOOSE4_10                   :1;//10
      unsigned int BLOCK_IN_GOOSE5_11                   :1;//11
      unsigned int BLOCK_IN_GOOSE6_12                   :1;//12
      unsigned int BLOCK_IN_GOOSE7_13                   :1;//13
      unsigned int BLOCK_IN_GOOSE8_14                   :1;//14
      unsigned int BLOCK_IN_GOOSE9_15                   :1;//15
      unsigned int BLOCK_IN_GOOSE10_16                  :1;//16
      unsigned int BLOCK_IN_GOOSE11_17                  :1;//17
      unsigned int BLOCK_IN_GOOSE12_18                  :1;//18
      unsigned int BLOCK_IN_GOOSE13_19                  :1;//19
      unsigned int BLOCK_IN_GOOSE14_20                  :1;//20
      unsigned int BLOCK_IN_GOOSE15_21                  :1;//21
      unsigned int BLOCK_IN_GOOSE16_22                  :1;//22
      unsigned int BLOCK_IN_MMS1_23                     :1;//23
      unsigned int BLOCK_IN_MMS2_24                     :1;//24
      unsigned int BLOCK_IN_MMS3_25                     :1;//25
      unsigned int BLOCK_IN_MMS4_26                     :1;//26
      unsigned int BLOCK_OUT_LAN1_27                    :1;//27
      unsigned int BLOCK_OUT_LAN2_28                    :1;//28
      unsigned int BLOCK_OUT_LAN3_29                    :1;//29
      unsigned int BLOCK_OUT_LAN4_30                    :1;//30
      unsigned int BLOCK_DZ1_31                         :1;//31    
                             
    } bool_val;
    unsigned long U32V;
} U32_cmd2_wrp; 


typedef union U32_cmd3_Unn{ 
   struct {
      unsigned int PO_DZ1_0            :1; //0
      unsigned int DZ1_1               :1; //1
      unsigned int PO_AMTZ_DZ1_2       :1; //2
      unsigned int AMTZ_DZ1_3          :1; //3
      unsigned int BLOCK_DZ2_4         :1; //4
      unsigned int BLOCK_PR_DZ2_5      :1; //5
      unsigned int OP_PR_DZ2_6         :1; //6
      unsigned int SECTOR_DIR_DZ2_7    :1; //7
      unsigned int SECTOR_INV_DZ2_8    :1; //8
      unsigned int PO_DIR_DZ2_9        :1; //9
      unsigned int PO_INV_DZ2_10       :1;//10
      unsigned int DZ2_11              :1;//11
      unsigned int PO_AMTZ_DZ2_12      :1;//12
      unsigned int AMTZ_DZ2_13         :1;//13
      unsigned int BLOCK_DZ3_14        :1;//14
      unsigned int BLOCK_PR_DZ3_15     :1;//15
      unsigned int OP_PR_DZ3_16        :1;//16
      unsigned int SECTOR_DIR_DZ3_17   :1;//17
      unsigned int SECTOR_INV_DZ3_18   :1;//18
      unsigned int PO_DIR_DZ3_19       :1;//19
      unsigned int PO_INV_DZ3_20       :1;//20
      unsigned int DZ3_21               :1;//21
      unsigned int PO_AMTZ_DZ3_22       :1;//22
      unsigned int AMTZ_DZ3_23          :1;//23
      unsigned int BLOCK_DZ4_24         :1;//24
      unsigned int BLOCK_PR_DZ4_25      :1;//25
      unsigned int OP_PR_DZ4_26         :1;//26
      unsigned int SECTOR_DIR_DZ4_27    :1;//27
      unsigned int SECTOR_INV_DZ4_28    :1;//28
      unsigned int PO_DIR_DZ4_29        :1;//29
      unsigned int PO_INV_DZ4_30        :1;//30
      unsigned int DZ4_31               :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd3_wrp; 

typedef union U32_cmd4_Unn{ 
   struct {
      unsigned int PO_AMTZ_DZ4_0            :1; //0
      unsigned int AMTZ_DZ4_1               :1; //1
      unsigned int EXT_NKN_DZ_2             :1; //2
      unsigned int NKN_DZ_3                 :1; //3
      unsigned int PO_U_DZ_4                :1; //4
      unsigned int PO_I_BLK_DZ_5            :1; //5
      unsigned int b_3F_DZ_DIR_INV_6        :1; //6
      unsigned int SNKN_DZ_7                :1; //7
      unsigned int BLOCK_MTZ1_8             :1; //8
      unsigned int BLOCK_MTZ2_9             :1; //9
      unsigned int BLOCK_USK_MTZ2_10        :1;//10
      unsigned int BLOCK_MTZ3_11            :1;//11
      unsigned int BLOCK_MTZ4_12            :1;//12
      unsigned int SECTOR_VPERED_MTZN1_13   :1;//13
      unsigned int SECTOR_NAZAD_MTZN1_14    :1;//14
      unsigned int PO_MTZ1_15               :1;//15
      unsigned int PO_MTZN1_VPERED_16       :1;//16
      unsigned int PO_MTZN1_NAZAD_17        :1;//17
      unsigned int PO_U_MTZPN1_18           :1;//18
      unsigned int PO_MTZPN1_19             :1;//19
      unsigned int MTZ1_20                  :1;//20
      unsigned int SECTOR_VPERED_MTZN2_21   :1;//21
      unsigned int SECTOR_NAZAD_MTZN2_22    :1;//22
      unsigned int PO_MTZ2_23               :1;//23
      unsigned int PO_MTZN2_VPERED_24       :1;//24
      unsigned int PO_MTZN2_NAZAD_25        :1;//25
      unsigned int PO_U_MTZPN2_26           :1;//26
      unsigned int PO_MTZPN2_27             :1;//27
      unsigned int MTZ2_28                  :1;//28
      unsigned int SECTOR_VPERED_MTZN3_29   :1;//29
      unsigned int SECTOR_NAZAD_MTZN3_30    :1;//30
      unsigned int PO_MTZ3_31               :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd4_wrp; 

typedef union U32_cmd5_Unn{ 
   struct {
      unsigned int PO_MTZN3_VPERED_0       :1; //0
      unsigned int PO_MTZN3_NAZAD_1        :1; //1
      unsigned int PO_U_MTZPN3_2           :1; //2
      unsigned int PO_MTZPN3_3             :1; //3
      unsigned int MTZ3_4                  :1; //4
      unsigned int SECTOR_VPERED_MTZN4_5   :1; //5
      unsigned int SECTOR_NAZAD_MTZN4_6    :1; //6
      unsigned int PO_MTZ4,       _7       :1; //7
      unsigned int PO_MTZN4_VPERED_8       :1; //8
      unsigned int PO_MTZN4_NAZAD_9        :1; //9
      unsigned int PO_U_MTZPN4_10          :1;//10
      unsigned int PO_MTZPN4_11            :1;//11
      unsigned int MTZ4_12                 :1;//12
      unsigned int PO_BLOCK_U_MTZN_13      :1;//13
      unsigned int NCN_MTZ_14              :1;//14
      unsigned int BLOCK_ZNAM_15           :1;//15
      unsigned int PO_ZNAM_16              :1;//16
      unsigned int ZNAM_17                 :1;//17
      unsigned int BLOCK_ZDZ_18            :1;//18
      unsigned int PUSK_ZDZ_VID_DV_19      :1;//19
      unsigned int LIGHT_ZDZ_FROM_DV_20    :1;//20
      unsigned int LIGHT_ZDZ_FROM_OVD1_21  :1;//21
      unsigned int LIGHT_ZDZ_FROM_OVD2_22  :1;//22
      unsigned int LIGHT_ZDZ_FROM_OVD3_23  :1;//23
      unsigned int PO_ZDZ_24               :1;//24
      unsigned int ZDZ_25                  :1;//25
      unsigned int BLOCK_NZZ_26            :1;//26
      unsigned int PO_NZZ_27               :1;//27
      unsigned int NZZ_28                  :1;//28
      unsigned int PO_3I0_29               :1;//29
      unsigned int b_3I0_30                :1;//30
      unsigned int PO_3U0_31               :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd5_wrp; 

typedef union U32_cmd6_Unn{ 
   struct {
      unsigned int b_3U0_0                    :1; //0
      unsigned int SECTOR_NZZ_1             :1; //1
      unsigned int BLOCK_TZNP1_2            :1; //2
      unsigned int SECTOR_TZNP1_VPERED_3    :1; //3
      unsigned int SECTOR_TZNP1_NAZAD_4     :1; //4
      unsigned int PO_3I0_TZNP1_VPERED_5    :1; //5
      unsigned int PO_3I0_TZNP1_NAZAD_6     :1; //6
      unsigned int PO_3U0_TZNP1_VPERED_7    :1; //7
      unsigned int PO_3U0_TZNP1_NAZAD_8     :1; //8
      unsigned int PO_TZNP1_VPERED_9        :1; //9
      unsigned int PO_TZNP1_NAZAD_10        :1;//10
      unsigned int TZNP1_11                 :1;//11
      unsigned int BLOCK_TZNP2_12           :1;//12
      unsigned int SECTOR_TZNP2_VPERED_13   :1;//13
      unsigned int SECTOR_TZNP2_NAZAD_14    :1;//14
      unsigned int PO_3I0_TZNP2_VPERED_15   :1;//15
      unsigned int PO_3I0_TZNP2_NAZAD_16    :1;//16
      unsigned int PO_3U0_TZNP2_VPERED_17   :1;//17
      unsigned int PO_3U0_TZNP2_NAZAD_18    :1;//18
      unsigned int PO_TZNP2_VPERED_19       :1;//19
      unsigned int PO_TZNP2_NAZAD_20        :1;//20
      unsigned int TZNP2_21                 :1;//21
      unsigned int BLOCK_TZNP3_22           :1;//22
      unsigned int SECTOR_TZNP3_VPERED_23   :1;//23
      unsigned int SECTOR_TZNP3_NAZAD_24    :1;//24
      unsigned int PO_3I0_TZNP3_VPERED_25   :1;//25
      unsigned int PO_3I0_TZNP3_NAZAD_26    :1;//26
      unsigned int PO_3U0_TZNP3_VPERED_27   :1;//27
      unsigned int PO_3U0_TZNP3_NAZAD_28    :1;//28
      unsigned int PO_TZNP3_VPERED_29       :1;//29
      unsigned int PO_TZNP3_NAZAD_30        :1;//30
      unsigned int TZNP3_31                 :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd6_wrp; 

typedef union U32_cmd7_Unn{ 
   struct {
      unsigned int STAT_BLK_APV_0       :1; //0
      unsigned int APV1_1               :1; //1
      unsigned int APV2_2               :1; //2
      unsigned int APV3_3               :1; //3
      unsigned int APV4_4               :1; //4
      unsigned int APV_WORK_5           :1; //5
      unsigned int ACHR_CHAPV_VID_DV_6  :1; //6
      unsigned int BLOCK_ACHR1_7        :1; //7
      unsigned int BLOCK_ACHR2_8        :1; //8
      unsigned int RAZR_CHAPV_9         :1; //9
      unsigned int VN_BLOCK_CHAPV_10    :1;//10
      unsigned int PO_ACHR1_11          :1;//11
      unsigned int PO_CHAPV1_12         :1;//12
      unsigned int ACHR_CHAPV1_13       :1;//13
      unsigned int PO_ACHR2_14          :1;//14
      unsigned int PO_CHAPV2_15         :1;//15
      unsigned int ACHR_CHAPV2_16       :1;//16
      unsigned int BLOCK_UROV_17        :1;//17
      unsigned int PUSK_UROV_VID_DV_18  :1;//18
      unsigned int PO_UROV_19           :1;//19
      unsigned int UROV1_20             :1;//20
      unsigned int UROV2_21             :1;//21
      unsigned int BLOCK_ZOP_22         :1;//22
      unsigned int PO_ZOP_23            :1;//23
      unsigned int ZOP_24               :1;//24
      unsigned int BLOCK_UMIN1_25       :1;//25
      unsigned int START_UMIN1_26       :1;//26
      unsigned int BLOCK_UMIN2_27       :1;//27
      unsigned int START_UMIN2_28       :1;//28
      unsigned int PO_UMIN1_29          :1;//29
      unsigned int PO_UBLK_UMIN1_30     :1;//30
      unsigned int PO_IBLK_UMIN1_31     :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd7_wrp; 

typedef union U32_cmd8_Unn{ 
   struct {
      unsigned int UMIN1_0              :1; //0
      unsigned int PO_UMIN2_1           :1; //1
      unsigned int PO_UBLK_UMIN2_2      :1; //2
      unsigned int PO_IBLK_UMIN2_3      :1; //3
      unsigned int UMIN2_4              :1; //4
      unsigned int BLOCK_UMAX1_5        :1; //5
      unsigned int PO_UMAX1_6           :1; //6
      unsigned int UMAX1_7              :1; //7
      unsigned int BLOCK_UMAX2_8        :1; //8
      unsigned int PO_UMAX2_9           :1; //9
      unsigned int UMAX2_10             :1;//10
      unsigned int BLOCK_UP1_11         :1;//11
      unsigned int PO_UP1_12            :1;//12
      unsigned int UP1_13               :1;//13
      unsigned int BLOCK_UP2_14         :1;//14
      unsigned int PO_UP2_15            :1;//15
      unsigned int UP2_16               :1;//16
      unsigned int BLOCK_UP3_17         :1;//17
      unsigned int PO_UP3_18            :1;//18
      unsigned int UP3_19               :1;//19
      unsigned int BLOCK_UP4_20         :1;//20
      unsigned int PO_UP4_21            :1;//21
      unsigned int UP4_22               :1;//22
      unsigned int BLOCK_UP5_23         :1;//23
      unsigned int PO_UP5_24            :1;//24
      unsigned int UP5_25               :1;//25
      unsigned int BLOCK_UP6_26         :1;//26
      unsigned int PO_UP6_27            :1;//27
      unsigned int UP6_28               :1;//28
      unsigned int BLOCK_UP7_29         :1;//29
      unsigned int PO_UP7_30            :1;//30
      unsigned int UP7_31               :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd8_wrp; 

typedef union U32_cmd9_Unn{ 
   struct {
      unsigned int BLOCK_UP8_0    :1; //0
      unsigned int PO_UP8_1       :1; //1
      unsigned int UP8_2          :1; //2
      unsigned int DF1_IN_3       :1; //3
      unsigned int DF1_R_4        :1; //4
      unsigned int DF1_OUT_5      :1; //5
      unsigned int DF2_IN_6       :1; //6
      unsigned int DF2_R_7        :1; //7
      unsigned int DF2_OUT_8      :1; //8
      unsigned int DF3_IN_9       :1; //9
      unsigned int DF3_R_10       :1;//10
      unsigned int DF3_OUT_11     :1;//11
      unsigned int DF4_IN_12      :1;//12
      unsigned int DF4_R_13       :1;//13
      unsigned int DF4_OUT_14     :1;//14
      unsigned int DF5_IN_15      :1;//15
      unsigned int DF5_R_16       :1;//16
      unsigned int DF5_OUT_17     :1;//17
      unsigned int DF6_IN_18      :1;//18
      unsigned int DF6_R_19       :1;//19
      unsigned int DF6_OUT_20     :1;//20
      unsigned int DF7_IN_21      :1;//21
      unsigned int DF7_R_22       :1;//22
      unsigned int DF7_OUT_23     :1;//23
      unsigned int DF8_IN_24      :1;//24
      unsigned int DF8_R_25       :1;//25
      unsigned int DF8_OUT_26     :1;//26
      unsigned int DT1_SET_27     :1;//27
      unsigned int DT1_RESET_28   :1;//28
      unsigned int DT1_OUT_29     :1;//29
      unsigned int DT2_SET_30     :1;//30
      unsigned int DT2_RESET_31   :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd9_wrp; 

typedef union U32_cmd10_Unn{ 
   struct {
      unsigned int  DT2_OUT_0   :1; //0
      unsigned int  DT3_SET_1   :1; //1
      unsigned int  DT3_RESET_2 :1; //2
      unsigned int  DT3_OUT_3   :1; //3
      unsigned int  DT4_SET_4   :1; //4
      unsigned int  DT4_RESET_5 :1; //5
      unsigned int  DT4_OUT_6   :1; //6
      unsigned int  D_AND1_7    :1; //7
      unsigned int  D_AND2_8    :1; //8
      unsigned int  D_AND3_9    :1; //9
      unsigned int  D_AND4_10   :1;//10
      unsigned int  D_AND5_11   :1;//11
      unsigned int  D_AND6_12   :1;//12
      unsigned int  D_AND7_13   :1;//13
      unsigned int  D_AND8_14   :1;//14
      unsigned int  D_OR1_15    :1;//15
      unsigned int  D_OR2_16    :1;//16
      unsigned int  D_OR3_17    :1;//17
      unsigned int  D_OR4_18    :1;//18
      unsigned int  D_OR5_19    :1;//19
      unsigned int  D_OR6_20    :1;//20
      unsigned int  D_OR7_21    :1;//21
      unsigned int  D_OR8_22    :1;//22
      unsigned int  D_XOR1_23   :1;//23
      unsigned int  D_XOR2_24   :1;//24
      unsigned int  D_XOR3_25   :1;//25
      unsigned int  D_XOR4_26   :1;//26
      unsigned int  D_XOR5_27   :1;//27
      unsigned int  D_XOR6_28   :1;//28
      unsigned int  D_XOR7_29   :1;//29
      unsigned int  D_XOR8_30   :1;//30
      unsigned int  D_NOT1_31   :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd10_wrp; 

typedef union U32_cmd11_Unn{ 
   struct {
      unsigned int D_NOT2_0  :1; //0
      unsigned int D_NOT3_1  :1; //1
      unsigned int D_NOT4_2  :1; //2
      unsigned int D_NOT5_3  :1; //3
      unsigned int D_NOT6_4  :1; //4
      unsigned int D_NOT7_5  :1; //5
      unsigned int D_NOT8_6  :1; //6
      unsigned int D_NOT9_7  :1; //7
      unsigned int D_NOT10_8  :1; //8
      unsigned int D_NOT11_9  :1; //9
      unsigned int D_NOT12_10  :1;//10
      unsigned int D_NOT13_11  :1;//11
      unsigned int D_NOT14_12  :1;//12
      unsigned int D_NOT15_13  :1;//13
      unsigned int D_NOT16_14  :1;//14
      unsigned int LF1_15  :1;//15
      unsigned int LF2_16  :1;//16
      unsigned int LF3_17  :1;//17
      unsigned int LF4_18  :1;//18
      unsigned int LF5_19  :1;//19
      unsigned int LF6_20  :1;//20
      unsigned int LF7_21  :1;//21
      unsigned int LF8_22  :1;//22
      unsigned int LF9_23  :1;//23
      unsigned int LF10_24  :1;//24
      unsigned int LF11_25  :1;//25
      unsigned int LF12_26  :1;//26
      unsigned int LF13_27  :1;//27
      unsigned int LF14_28  :1;//28
      unsigned int LF15_29  :1;//29
      unsigned int LF16_30  :1;//30
      unsigned int ERROR_CONF_EL_31  :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd11_wrp; 

typedef struct tag_cmd_bit_depot{
   U32_cmd1_wrp w1;
   U32_cmd2_wrp w2;
   U32_cmd3_wrp w3;
   U32_cmd4_wrp w4;
   U32_cmd5_wrp w5;
   U32_cmd6_wrp w6;
   U32_cmd7_wrp w7;
   U32_cmd8_wrp w8;
   U32_cmd9_wrp w9;
   U32_cmd10_wrp w10;
   U32_cmd11_wrp w11;
} CmdFunctionDepot;


#elif (                                 \
       (MODYFIKACIA_VERSII_PZ == 3) ||  \
       (MODYFIKACIA_VERSII_PZ == 4) ||  \
       (MODYFIKACIA_VERSII_PZ == 0)    \
      )

typedef union U32_cmd1_Unn{ 
   struct {
      unsigned int BLOCK_VKL_VV                  :1; //0
      unsigned int RESET_LEDS                    :1; //1
      unsigned int RESET_RELES                   :1; //2
      unsigned int MISCEVE_DYSTANCIJNE           :1; //3
      unsigned int STATE_VV                      :1; //4
      unsigned int OTKL_VID_ZOVN_ZAHYSTIV        :1; //5
      unsigned int OTKL_VV                       :1; //6
      unsigned int VKL_VV                        :1; //7
      unsigned int CTRL_OTKL                     :1; //8
      unsigned int CTRL_VKL                      :1; //9
      unsigned int PRYVID_VV                     :1;//10
      unsigned int PEREVYSHCHENNJA_Inom_VYMK     :1;//11
      unsigned int KRYTYCHNYJ_RESURS_VYMYKACHA   :1;//12
      unsigned int VYCHERPANYJ_RESURS_VYMYKACHA  :1;//13
      unsigned int DI_ACTIVE                     :1;//14
      unsigned int FK_ACTIVE                     :1;//15
      unsigned int USB_ACTIVE                    :1;//16
      unsigned int RS485_ACTIVE                  :1;//17
      unsigned int DEFECT                        :1;//18
      unsigned int AVAR_DEFECT                   :1;//19
      unsigned int WORK_A_REJESTRATOR            :1;//20
      unsigned int WORK_D_REJESTRATOR             :1;//21
      unsigned int VIDKL_VID_ZAKHYSTIV            :1;//22
      unsigned int WORK_BO                        :1;//23
      unsigned int b_WORK_BV                      :1;//24
      unsigned int b_1KZ                         :1;//25
      unsigned int b_2KZ                         :1;//26
      unsigned int b_3KZ                         :1;//27
      unsigned int b_1_GRUPA_USTAVOK             :1;//28
      unsigned int b_2_GRUPA_USTAVOK             :1;//29
      unsigned int b_3_GRUPA_USTAVOK             :1;//30
      unsigned int b_4_GRUPA_USTAVOK             :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd1_wrp; 

typedef union U32_cmd2_Unn{ 
   struct {
      unsigned int INVERS_DV_GRUPA_USTAVOK             :1; //0
      unsigned int BLK_GRUP_USTAVOK_VID_ZACHYSTIV      :1; //1
      unsigned int RESET_BLOCK_READY_TU_VID_ZAHYSTIV   :1; //2
      unsigned int READY_TU                            :1; //3
      unsigned int SETTINGS_CHANGED                    :1; //4
      unsigned int BLOCK_DZ1                           :1; //5
      unsigned int PO_DZ1                              :1; //6
      unsigned int DZ1                                 :1; //7
      unsigned int PO_AMTZ_DZ1                         :1; //8
      unsigned int AMTZ_DZ1                            :1; //9
      unsigned int BLOCK_DZ2                           :1;//10
      unsigned int BLOCK_PR_DZ2                        :1;//11
      unsigned int OP_PR_DZ2                           :1;//12
      unsigned int SECTOR_DIR_DZ2                      :1;//13
      unsigned int SECTOR_INV_DZ2                      :1;//14
      unsigned int PO_DIR_DZ2                          :1;//15
      unsigned int PO_INV_DZ2                          :1;//16
      unsigned int DZ2                                 :1;//17
      unsigned int PO_AMTZ_DZ2                         :1;//18
      unsigned int AMTZ_DZ2                            :1;//19
      unsigned int BLOCK_DZ3                           :1;//20
      unsigned int BLOCK_PR_DZ3                        :1;//21
      unsigned int OP_PR_DZ3                           :1;//22
      unsigned int SECTOR_DIR_DZ3                      :1;//23
      unsigned int SECTOR_INV_DZ3                      :1;//24
      unsigned int PO_DIR_DZ3                          :1;//25
      unsigned int PO_INV_DZ3                          :1;//26
      unsigned int DZ3                                 :1;//27
      unsigned int PO_AMTZ_DZ3                         :1;//28
      unsigned int AMTZ_DZ3                            :1;//29
      unsigned int BLOCK_DZ4                           :1;//30
      unsigned int BLOCK_PR_DZ4                        :1;//31    
                             
    } bool_val;
    unsigned long U32V;
} U32_cmd2_wrp; 


typedef union U32_cmd3_Unn{ 
   struct {
      unsigned int OP_PR_DZ4           :1; //0
      unsigned int SECTOR_DIR_DZ4      :1; //1
      unsigned int SECTOR_INV_DZ4      :1; //2
      unsigned int PO_DIR_DZ4          :1; //3
      unsigned int PO_INV_DZ4          :1; //4
      unsigned int DZ4                 :1; //5
      unsigned int PO_AMTZ_DZ4         :1; //6
      unsigned int AMTZ_DZ4            :1; //7
      unsigned int EXT_NKN_DZ          :1; //8
      unsigned int NKN_DZ              :1; //9
      unsigned int PO_U_DZ             :1;//10
      unsigned int PO_I_BLK_DZ         :1;//11
      unsigned int b_3F_DZ_DIR_INV     :1;//12
      unsigned int SNKN_DZ             :1;//13
      unsigned int BLOCK_MTZ1          :1;//14
      unsigned int BLOCK_MTZ2          :1;//15
      unsigned int BLOCK_USK_MTZ2      :1;//16
      unsigned int BLOCK_MTZ3          :1;//17
      unsigned int BLOCK_MTZ4          :1;//18
      unsigned int SECTOR_VPERED_MTZN1 :1;//19
      unsigned int SECTOR_NAZAD_MTZN1  :1;//20
      unsigned int PO_MTZ1              :1;//21
      unsigned int PO_MTZN1_VPERED      :1;//22
      unsigned int PO_MTZN1_NAZAD       :1;//23
      unsigned int PO_U_MTZPN1          :1;//24
      unsigned int PO_MTZPN1            :1;//25
      unsigned int MTZ1                 :1;//26
      unsigned int SECTOR_VPERED_MTZN2  :1;//27
      unsigned int SECTOR_NAZAD_MTZN2   :1;//28
      unsigned int PO_MTZ2              :1;//29
      unsigned int PO_MTZN2_VPERED      :1;//30
      unsigned int PO_MTZN2_NAZAD       :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd3_wrp; 

typedef union U32_cmd4_Unn{ 
   struct {
      unsigned int PO_U_MTZPN2           :1; //0
      unsigned int PO_MTZPN2             :1; //1
      unsigned int MTZ2                  :1; //2
      unsigned int SECTOR_VPERED_MTZN3   :1; //3
      unsigned int SECTOR_NAZAD_MTZN3    :1; //4
      unsigned int PO_MTZ3               :1; //5
      unsigned int PO_MTZN3_VPERED       :1; //6
      unsigned int PO_MTZN3_NAZAD        :1; //7
      unsigned int PO_U_MTZPN3           :1; //8
      unsigned int PO_MTZPN3             :1; //9
      unsigned int MTZ3                  :1;//10
      unsigned int SECTOR_VPERED_MTZN4   :1;//11
      unsigned int SECTOR_NAZAD_MTZN4    :1;//12
      unsigned int PO_MTZ4               :1;//13
      unsigned int PO_MTZN4_VPERED       :1;//14
      unsigned int PO_MTZN4_NAZAD        :1;//15
      unsigned int PO_U_MTZPN4           :1;//16
      unsigned int PO_MTZPN4             :1;//17
      unsigned int MTZ4                  :1;//18
      unsigned int PO_BLOCK_U_MTZN       :1;//19
      unsigned int NCN_MTZ               :1;//20
      unsigned int BLOCK_ZNAM            :1;//21
      unsigned int PO_ZNAM               :1;//22
      unsigned int ZNAM                  :1;//23
      unsigned int BLOCK_ZDZ             :1;//24
      unsigned int PUSK_ZDZ_VID_DV       :1;//25
      unsigned int LIGHT_ZDZ_FROM_DV     :1;//26
      unsigned int LIGHT_ZDZ_FROM_OVD1   :1;//27
      unsigned int LIGHT_ZDZ_FROM_OVD2   :1;//28
      unsigned int LIGHT_ZDZ_FROM_OVD3   :1;//29
      unsigned int PO_ZDZ                :1;//30
      unsigned int ZDZ                   :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd4_wrp; 

typedef union U32_cmd5_Unn{ 
   struct {
      unsigned int BLOCK_NZZ_0              :1; //0
      unsigned int PO_NZZ_1                 :1; //1
      unsigned int NZZ_2                    :1; //2
      unsigned int PO_3I0_3                 :1; //3
      unsigned int b_3I0_4                  :1; //4
      unsigned int PO_3U0_5                 :1; //5
      unsigned int b_3U0_6                  :1; //6
      unsigned int SECTOR_NZZ_7             :1; //7
      unsigned int BLOCK_TZNP1_8            :1; //8
      unsigned int SECTOR_TZNP1_VPERED_9    :1; //9
      unsigned int SECTOR_TZNP1_NAZAD_10    :1;//10
      unsigned int PO_3I0_TZNP1_VPERED_11   :1;//11
      unsigned int PO_3I0_TZNP1_NAZAD_12    :1;//12
      unsigned int PO_3U0_TZNP1_VPERED_13   :1;//13
      unsigned int PO_3U0_TZNP1_NAZAD_14    :1;//14
      unsigned int PO_TZNP1_VPERED_15       :1;//15
      unsigned int PO_TZNP1_NAZAD_16        :1;//16
      unsigned int TZNP1_17                 :1;//17
      unsigned int BLOCK_TZNP2_18           :1;//18
      unsigned int SECTOR_TZNP2_VPERED_19   :1;//19
      unsigned int SECTOR_TZNP2_NAZAD_20    :1;//20
      unsigned int PO_3I0_TZNP2_VPERED_21   :1;//21
      unsigned int PO_3I0_TZNP2_NAZAD_22    :1;//22
      unsigned int PO_3U0_TZNP2_VPERED_23   :1;//23
      unsigned int PO_3U0_TZNP2_NAZAD_24    :1;//24
      unsigned int PO_TZNP2_VPERED_25       :1;//25
      unsigned int PO_TZNP2_NAZAD_26        :1;//26
      unsigned int TZNP2_27                 :1;//27
      unsigned int BLOCK_TZNP3_28           :1;//28
      unsigned int SECTOR_TZNP3_VPERED_29   :1;//29
      unsigned int SECTOR_TZNP3_NAZAD_30    :1;//30
      unsigned int PO_3I0_TZNP3_VPERED_31   :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd5_wrp; 

typedef union U32_cmd6_Unn{ 
   struct {
      unsigned int PO_3I0_TZNP3_NAZAD_0    :1; //0
      unsigned int PO_3U0_TZNP3_VPERED_1   :1; //1
      unsigned int PO_3U0_TZNP3_NAZAD_2    :1; //2
      unsigned int PO_TZNP3_VPERED_3       :1; //3
      unsigned int PO_TZNP3_NAZAD_4        :1; //4
      unsigned int TZNP3_5                 :1; //5
      unsigned int STAT_BLK_APV_6          :1; //6
      unsigned int APV1_7                  :1; //7
      unsigned int APV2_8                  :1; //8
      unsigned int APV3_9                  :1; //9
      unsigned int APV4_10                 :1;//10
      unsigned int APV_WORK_11             :1;//11
      unsigned int ACHR_CHAPV_VID_DV_12    :1;//12
      unsigned int BLOCK_ACHR1_13          :1;//13
      unsigned int BLOCK_ACHR2_14          :1;//14
      unsigned int RAZR_CHAPV_15           :1;//15
      unsigned int VN_BLOCK_CHAPV_16       :1;//16
      unsigned int PO_ACHR1_17             :1;//17
      unsigned int PO_CHAPV1_18            :1;//18
      unsigned int ACHR_CHAPV1_19          :1;//19
      unsigned int PO_ACHR2_20             :1;//20
      unsigned int PO_CHAPV2_21            :1;//21
      unsigned int ACHR_CHAPV2_22          :1;//22
      unsigned int BLOCK_UROV_23           :1;//23
      unsigned int PUSK_UROV_VID_DV_24     :1;//24
      unsigned int PO_UROV_25              :1;//25
      unsigned int UROV1_26                :1;//26
      unsigned int UROV2_27                :1;//27
      unsigned int BLOCK_ZOP_28            :1;//28
      unsigned int PO_ZOP_29               :1;//29
      unsigned int ZOP_30                  :1;//30
      unsigned int BLOCK_UMIN1_31          :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd6_wrp; 

typedef union U32_cmd7_Unn{ 
   struct {
      unsigned int START_UMIN1_0    :1; //0
      unsigned int BLOCK_UMIN2_1    :1; //1
      unsigned int START_UMIN2_2    :1; //2
      unsigned int PO_UMIN1_3       :1; //3
      unsigned int PO_UBLK_UMIN1_4  :1; //4
      unsigned int PO_IBLK_UMIN1_5  :1; //5
      unsigned int UMIN1_6          :1; //6
      unsigned int PO_UMIN2_7       :1; //7
      unsigned int PO_UBLK_UMIN2_8  :1; //8
      unsigned int PO_IBLK_UMIN2_9  :1; //9
      unsigned int UMIN2_10         :1;//10
      unsigned int BLOCK_UMAX1_11   :1;//11
      unsigned int PO_UMAX1_12      :1;//12
      unsigned int UMAX1_13         :1;//13
      unsigned int BLOCK_UMAX2_14   :1;//14
      unsigned int PO_UMAX2_15      :1;//15
      unsigned int UMAX2_16         :1;//16
      unsigned int BLOCK_UP1_17     :1;//17
      unsigned int PO_UP1_18        :1;//18
      unsigned int UP1_19           :1;//19
      unsigned int BLOCK_UP2_20     :1;//20
      unsigned int PO_UP2_21        :1;//21
      unsigned int UP2_22           :1;//22
      unsigned int BLOCK_UP3_23     :1;//23
      unsigned int PO_UP3_24        :1;//24
      unsigned int UP3_25           :1;//25
      unsigned int BLOCK_UP4_26     :1;//26
      unsigned int PO_UP4_27        :1;//27
      unsigned int UP4_28           :1;//28
      unsigned int BLOCK_UP5_29     :1;//29
      unsigned int PO_UP5_30        :1;//30
      unsigned int UP5_315          :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd7_wrp; 

typedef union U32_cmd8_Unn{ 
   struct {
      unsigned int BLOCK_UP6_0      :1; //0
      unsigned int PO_UP6_1         :1; //1
      unsigned int UP6_2            :1; //2
      unsigned int BLOCK_UP7_3      :1; //3
      unsigned int PO_UP7_4         :1; //4
      unsigned int UP7_5            :1; //5
      unsigned int BLOCK_UP8_6      :1; //6
      unsigned int PO_UP8_7         :1; //7
      unsigned int UP8_8            :1; //8
      unsigned int RANG_DF1_IN_9    :1; //9
      unsigned int RANG_DF1_R_10    :1;//10
      unsigned int RANG_DF1_OUT_11  :1;//11
      unsigned int RANG_DF2_IN_12   :1;//12
      unsigned int RANG_DF2_R_13    :1;//13
      unsigned int RANG_DF2_OUT_14  :1;//14
      unsigned int RANG_DF3_IN_15   :1;//15
      unsigned int RANG_DF3_R_16    :1;//16
      unsigned int RANG_DF3_OUT_17  :1;//17
      unsigned int RANG_DF4_IN_18   :1;//18
      unsigned int RANG_DF4_R_19    :1;//19
      unsigned int RANG_DF4_OUT_20  :1;//20
      unsigned int RANG_DF5_IN_21   :1;//21
      unsigned int RANG_DF5_R_22    :1;//22
      unsigned int RANG_DF5_OUT_23  :1;//23
      unsigned int RANG_DF6_IN_24   :1;//24
      unsigned int RANG_DF6_R_25    :1;//25
      unsigned int RANG_DF6_OUT_26  :1;//26
      unsigned int RANG_DF7_IN_27   :1;//27
      unsigned int RANG_DF7_R_28    :1;//28
      unsigned int RANG_DF7_OUT_29  :1;//29
      unsigned int RANG_DF8_IN_30   :1;//30
      unsigned int RANG_DF8_R_31    :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd8_wrp; 

typedef union U32_cmd9_Unn{ 
   struct {
      unsigned int DF8_OUT_0      :1; //0
      unsigned int DT1_SET_1      :1; //1
      unsigned int DT1_RESET_2    :1; //2
      unsigned int DT1_OUT_3      :1; //3
      unsigned int DT2_SET_4      :1; //4
      unsigned int DT2_RESET_5    :1; //5
      unsigned int DT2_OUT_6      :1; //6
      unsigned int DT3_SET_7      :1; //7
      unsigned int DT3_RESET_8    :1; //8
      unsigned int DT3_OUT_9      :1; //9
      unsigned int DT4_SET_10     :1;//10
      unsigned int DT4_RESET_11   :1;//11
      unsigned int DT4_OUT_12     :1;//12
      unsigned int D_AND1_13      :1;//13
      unsigned int D_AND2_14      :1;//14
      unsigned int D_AND3_15      :1;//15
      unsigned int D_AND4_16      :1;//16
      unsigned int D_AND5_17      :1;//17
      unsigned int D_AND6_18      :1;//18
      unsigned int D_AND7_19      :1;//19
      unsigned int D_AND8_20      :1;//20
      unsigned int D_OR1_21       :1;//21
      unsigned int D_OR2_22       :1;//22
      unsigned int D_OR3_23       :1;//23
      unsigned int D_OR4_24       :1;//24
      unsigned int D_OR5_25       :1;//25
      unsigned int D_OR6_26       :1;//26
      unsigned int D_OR7_27       :1;//27
      unsigned int D_OR8_28       :1;//28
      unsigned int D_XOR1_29      :1;//29
      unsigned int D_XOR2_30      :1;//30
      unsigned int D_XOR3_31      :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd9_wrp; 

typedef union U32_cmd10_Unn{ 
   struct {
      unsigned int D_XOR4_0       :1; //0
      unsigned int D_XOR5_1    :1; //1
      unsigned int D_XOR6_2    :1; //2
      unsigned int D_XOR7_3    :1; //3
      unsigned int D_XOR8_4    :1; //4
      unsigned int D_NOT1_5    :1; //5
      unsigned int D_NOT2_6    :1; //6
      unsigned int D_NOT3_7    :1; //7
      unsigned int D_NOT4_8    :1; //8
      unsigned int D_NOT5_9    :1; //9
      unsigned int D_NOT6_10    :1;//10
      unsigned int D_NOT7_11    :1;//11
      unsigned int D_NOT8_12    :1;//12
      unsigned int D_NOT9_13    :1;//13
      unsigned int D_NOT10_14    :1;//14
      unsigned int D_NOT11_15    :1;//15
      unsigned int D_NOT12_16    :1;//16
      unsigned int D_NOT13_17    :1;//17
      unsigned int D_NOT14_18    :1;//18
      unsigned int D_NOT15_19    :1;//19
      unsigned int D_NOT16_20    :1;//20
      unsigned int LF1_21    :1;//21
      unsigned int LF2_22    :1;//22
      unsigned int LF3_23    :1;//23
      unsigned int LF4_24    :1;//24
      unsigned int LF5_25    :1;//25
      unsigned int LF6_26    :1;//26
      unsigned int LF7_27    :1;//27
      unsigned int LF8_28    :1;//28
      unsigned int LF9_29    :1;//29
      unsigned int LF10_30    :1;//30
      unsigned int LF11_31    :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd10_wrp; 

typedef union U32_cmd11_Unn{ 
   struct {
      unsigned int LF12_0           :1; //0
      unsigned int LF13_1           :1; //1
      unsigned int LF14_2           :1; //2
      unsigned int LF15_3           :1; //3
      unsigned int LF16_4           :1; //4
      unsigned int ERROR_CONF_EL_5  :1; //5
      unsigned int D_XOR2            :1; //6
      unsigned int D_XOR3            :1; //7
      unsigned int D_XOR4            :1; //8
      unsigned int D_XOR5            :1; //9
      unsigned int D_XOR6            :1;//10
      unsigned int D_XOR7            :1;//11
      unsigned int D_XOR8            :1;//12
      unsigned int D_NOT1            :1;//13
      unsigned int D_NOT2            :1;//14
      unsigned int D_NOT3            :1;//15
      unsigned int D_NOT4            :1;//16
      unsigned int D_NOT5            :1;//17
      unsigned int D_NOT6            :1;//18
      unsigned int D_NOT7            :1;//19
      unsigned int D_NOT8            :1;//20
      unsigned int D_NOT9            :1;//21
      unsigned int D_NOT10           :1;//22
      unsigned int D_NOT11           :1;//23
      unsigned int D_NOT12           :1;//24
      unsigned int D_NOT13           :1;//25
      unsigned int D_NOT14           :1;//26
      unsigned int D_NOT15           :1;//27
      unsigned int D_NOT16           :1;//28
      unsigned int ERROR_CONF_EL     :1;//29
      unsigned int b30    :1;//30
      unsigned int b31    :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd11_wrp; 

typedef struct tag_cmd_bit_depot{
   U32_cmd1_wrp w1;
   U32_cmd2_wrp w2;
   U32_cmd3_wrp w3;
   U32_cmd4_wrp w4;
   U32_cmd5_wrp w5;
   U32_cmd6_wrp w6;
   U32_cmd7_wrp w7;
   U32_cmd8_wrp w8;
   U32_cmd9_wrp w9;
   U32_cmd10_wrp w10;
   U32_cmd11_wrp w11;
   
} CmdFunctionDepot;


#elif (                                 \
       (MODYFIKACIA_VERSII_PZ == 1) ||  \
       (MODYFIKACIA_VERSII_PZ == 2) ||  \
       (MODYFIKACIA_VERSII_PZ == 24) ||  \
       (MODYFIKACIA_VERSII_PZ == 23)    \
      )

typedef union U32_cmd1_Unn{ 
   struct {
      unsigned int BLOCK_VKL_VV                  :1; //0
      unsigned int RESET_LEDS                    :1; //1
      unsigned int RESET_RELES                   :1; //2
      unsigned int MISCEVE_DYSTANCIJNE           :1; //3
      unsigned int STATE_VV                      :1; //4
      unsigned int OTKL_VID_ZOVN_ZAHYSTIV        :1; //5
      unsigned int OTKL_VV                       :1; //6
      unsigned int VKL_VV                        :1; //7
      unsigned int CTRL_OTKL                     :1; //8
      unsigned int CTRL_VKL                      :1; //9
      unsigned int PRYVID_VV                     :1;//10
      unsigned int PEREVYSHCHENNJA_Inom_VYMK     :1;//11
      unsigned int KRYTYCHNYJ_RESURS_VYMYKACHA   :1;//12
      unsigned int VYCHERPANYJ_RESURS_VYMYKACHA  :1;//13
      unsigned int DI_ACTIVE                     :1;//14
      unsigned int FK_ACTIVE                     :1;//15
      unsigned int USB_ACTIVE                    :1;//16
      unsigned int RS485_ACTIVE                  :1;//17
      unsigned int DEFECT                        :1;//18
      unsigned int AVAR_DEFECT                   :1;//19
      unsigned int WORK_A_REJESTRATOR            :1;//20
      unsigned int WORK_D_REJESTRATOR             :1;//21
      unsigned int VIDKL_VID_ZAKHYSTIV            :1;//22
      unsigned int WORK_BO                        :1;//23
      unsigned int b_WORK_BV                        :1;//24
      unsigned int b_1KZ                           :1;//25
      unsigned int b_2KZ                           :1;//26
      unsigned int b_3KZ                           :1;//27
      unsigned int b_1_GRUPA_USTAVOK               :1;//28
      unsigned int b_2_GRUPA_USTAVOK               :1;//29
      unsigned int b_3_GRUPA_USTAVOK               :1;//30
      unsigned int b_4_GRUPA_USTAVOK               :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd1_wrp; 

typedef union U32_cmd2_Unn{ 
   struct {
      unsigned int INVERS_DV_GRUPA_USTAVOK             :1; //0
      unsigned int BLK_GRUP_USTAVOK_VID_ZACHYSTIV      :1; //1
      unsigned int RESET_BLOCK_READY_TU_VID_ZAHYSTIV   :1; //2
      unsigned int READY_TU                            :1; //3
      unsigned int SETTINGS_CHANGED                    :1; //4
      unsigned int BLOCK_DZ1                           :1; //5
      unsigned int PO_DZ1                              :1; //6
      unsigned int DZ1                                 :1; //7
      unsigned int PO_AMTZ_DZ1                         :1; //8
      unsigned int AMTZ_DZ1                            :1; //9
      unsigned int BLOCK_DZ2                           :1;//10
      unsigned int BLOCK_PR_DZ2                        :1;//11
      unsigned int OP_PR_DZ2                           :1;//12
      unsigned int SECTOR_DIR_DZ2                      :1;//13
      unsigned int SECTOR_INV_DZ2                      :1;//14
      unsigned int PO_DIR_DZ2                          :1;//15
      unsigned int PO_INV_DZ2                          :1;//16
      unsigned int DZ2                                 :1;//17
      unsigned int PO_AMTZ_DZ2                         :1;//18
      unsigned int AMTZ_DZ2                            :1;//19
      unsigned int BLOCK_DZ3                           :1;//20
      unsigned int BLOCK_PR_DZ3                        :1;//21
      unsigned int OP_PR_DZ3                           :1;//22
      unsigned int SECTOR_DIR_DZ3                      :1;//23
      unsigned int SECTOR_INV_DZ3                      :1;//24
      unsigned int PO_DIR_DZ3                          :1;//25
      unsigned int PO_INV_DZ3                          :1;//26
      unsigned int DZ3                                 :1;//27
      unsigned int PO_AMTZ_DZ3                         :1;//28
      unsigned int AMTZ_DZ3                            :1;//29
      unsigned int BLOCK_DZ4                           :1;//30
      unsigned int BLOCK_PR_DZ4                        :1;//31    
                             
    } bool_val;
    unsigned long U32V;
} U32_cmd2_wrp; 


typedef union U32_cmd3_Unn{ 
   struct {
      unsigned int OP_PR_DZ4             :1; //0
      unsigned int SECTOR_DIR_DZ4        :1; //1
      unsigned int SECTOR_INV_DZ4        :1; //2
      unsigned int PO_DIR_DZ4            :1; //3
      unsigned int PO_INV_DZ4            :1; //4
      unsigned int DZ4                   :1; //5
      unsigned int PO_AMTZ_DZ4           :1; //6
      unsigned int AMTZ_DZ4              :1; //7
      unsigned int EXT_NKN_DZ            :1; //8
      unsigned int NKN_DZ                :1; //9
      unsigned int PO_U_DZ               :1;//10
      unsigned int PO_I_BLK_DZ           :1;//11
      unsigned int b_3F_DZ_DIR_INV       :1;//12
      unsigned int SNKN_DZ               :1;//13
      unsigned int BLOCK_MTZ1            :1;//14
      unsigned int BLOCK_MTZ2            :1;//15
      unsigned int BLOCK_USK_MTZ2        :1;//16
      unsigned int BLOCK_MTZ3            :1;//17
      unsigned int BLOCK_MTZ4            :1;//18
      unsigned int SECTOR_VPERED_MTZN1   :1;//19
      unsigned int SECTOR_NAZAD_MTZN1    :1;//20
      unsigned int PO_MTZ1                :1;//21
      unsigned int PO_MTZN1_VPERED        :1;//22
      unsigned int PO_MTZN1_NAZAD         :1;//23
      unsigned int PO_U_MTZPN1            :1;//24
      unsigned int PO_MTZPN1              :1;//25
      unsigned int MTZ1                   :1;//26
      unsigned int SECTOR_VPERED_MTZN2    :1;//27
      unsigned int SECTOR_NAZAD_MTZN2     :1;//28
      unsigned int PO_MTZ2                :1;//29
      unsigned int PO_MTZN2_VPERED        :1;//30
      unsigned int PO_MTZN2_NAZAD         :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd3_wrp; 

typedef union U32_cmd4_Unn{ 
   struct {
      unsigned int PO_U_MTZPN2           :1; //0
      unsigned int PO_MTZPN2             :1; //1
      unsigned int MTZ2                  :1; //2
      unsigned int SECTOR_VPERED_MTZN3   :1; //3
      unsigned int SECTOR_NAZAD_MTZN3    :1; //4
      unsigned int PO_MTZ3               :1; //5
      unsigned int PO_MTZN3_VPERED       :1; //6
      unsigned int PO_MTZN3_NAZAD        :1; //7
      unsigned int PO_U_MTZPN3           :1; //8
      unsigned int PO_MTZPN3             :1; //9
      unsigned int MTZ3                  :1;//10
      unsigned int SECTOR_VPERED_MTZN4   :1;//11
      unsigned int SECTOR_NAZAD_MTZN4    :1;//12
      unsigned int PO_MTZ4               :1;//13
      unsigned int PO_MTZN4_VPERED       :1;//14
      unsigned int PO_MTZN4_NAZAD        :1;//15
      unsigned int PO_U_MTZPN4           :1;//16
      unsigned int PO_MTZPN4             :1;//17
      unsigned int MTZ4                  :1;//18
      unsigned int PO_BLOCK_U_MTZN       :1;//19
      unsigned int NCN_MTZ               :1;//20
      unsigned int BLOCK_ZNAM            :1;//21
      unsigned int PO_ZNAM               :1;//22
      unsigned int ZNAM                  :1;//23
      unsigned int BLOCK_ZDZ             :1;//24
      unsigned int PUSK_ZDZ_VID_DV       :1;//25
      unsigned int LIGHT_ZDZ_FROM_DV     :1;//26
      unsigned int PO_ZDZ                :1;//27
      unsigned int ZDZ                   :1;//28
      unsigned int BLOCK_NZZ             :1;//29
      unsigned int PO_NZZ                :1;//30
      unsigned int NZZ                   :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd4_wrp; 

typedef union U32_cmd5_Unn{ 
   struct {
      unsigned int PO_3I0                   :1; //0
      unsigned int b_3I0                       :1; //1
      unsigned int PO_3U0                    :1; //2
      unsigned int b_3U0                       :1; //3
      unsigned int SECTOR_NZZ                :1; //4
      unsigned int BLOCK_TZNP1               :1; //5
      unsigned int SECTOR_TZNP1_VPERED       :1; //6
      unsigned int SECTOR_TZNP1_NAZAD        :1; //7
      unsigned int PO_3I0_TZNP1_VPERED       :1; //8
      unsigned int PO_3I0_TZNP1_NAZAD        :1; //9
      unsigned int PO_3U0_TZNP1_VPERED       :1;//10
      unsigned int PO_3U0_TZNP1_NAZAD        :1;//11
      unsigned int PO_TZNP1_VPERED           :1;//12
      unsigned int PO_TZNP1_NAZAD            :1;//13
      unsigned int TZNP1                     :1;//14
      unsigned int BLOCK_TZNP2               :1;//15
      unsigned int SECTOR_TZNP2_VPERED       :1;//16
      unsigned int SECTOR_TZNP2_NAZAD        :1;//17
      unsigned int PO_3I0_TZNP2_VPERED       :1;//18
      unsigned int PO_3I0_TZNP2_NAZAD        :1;//19
      unsigned int PO_3U0_TZNP2_VPERED       :1;//20
      unsigned int PO_3U0_TZNP2_NAZAD        :1;//21
      unsigned int PO_TZNP2_VPERED           :1;//22
      unsigned int PO_TZNP2_NAZAD            :1;//23
      unsigned int TZNP2                     :1;//24
      unsigned int BLOCK_TZNP3               :1;//25
      unsigned int SECTOR_TZNP3_VPERED       :1;//26
      unsigned int SECTOR_TZNP3_NAZAD        :1;//27
      unsigned int PO_3I0_TZNP3_VPERED       :1;//28
      unsigned int PO_3I0_TZNP3_NAZAD        :1;//29
      unsigned int PO_3U0_TZNP3_VPERED       :1;//30
      unsigned int PO_3U0_TZNP3_NAZAD        :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd5_wrp; 

typedef union U32_cmd6_Unn{ 
   struct {
      unsigned int PO_TZNP3_VPERED             :1; //0
      unsigned int PO_TZNP3_NAZAD              :1; //1
      unsigned int TZNP3                       :1; //2
      unsigned int STAT_BLK_APV                :1; //3
      unsigned int APV1                        :1; //4
      unsigned int APV2                        :1; //5
      unsigned int APV3                        :1; //6
      unsigned int APV4                        :1; //7
      unsigned int APV_WORK                    :1; //8
      unsigned int ACHR_CHAPV_VID_DV           :1; //9
      unsigned int BLOCK_ACHR1                 :1;//10
      unsigned int BLOCK_ACHR2                 :1;//11
      unsigned int RAZR_CHAPV                  :1;//12
      unsigned int VN_BLOCK_CHAPV              :1;//13
      unsigned int PO_ACHR1                    :1;//14
      unsigned int PO_CHAPV1                   :1;//15
      unsigned int ACHR_CHAPV1                 :1;//16
      unsigned int PO_ACHR2                    :1;//17
      unsigned int PO_CHAPV2                   :1;//18
      unsigned int ACHR_CHAPV2                 :1;//19
      unsigned int BLOCK_UROV                  :1;//20
      unsigned int PUSK_UROV_VID_DV            :1;//21
      unsigned int PO_UROV                     :1;//22
      unsigned int UROV1                       :1;//23
      unsigned int UROV2                       :1;//24
      unsigned int BLOCK_ZOP                     :1;//25
      unsigned int PO_ZOP                        :1;//26
      unsigned int ZOP                           :1;//27
      unsigned int BLOCK_UMIN1                   :1;//28
      unsigned int START_UMIN1                   :1;//29
      unsigned int BLOCK_UMIN2                   :1;//30
      unsigned int START_UMIN2                   :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd6_wrp; 


typedef union U32_cmd7_Unn{ 
   struct {
      unsigned int PO_UMIN1             :1; //0
      unsigned int PO_UBLK_UMIN1        :1; //1
      unsigned int PO_IBLK_UMIN1        :1; //2
      unsigned int UMIN1                :1; //3
      unsigned int PO_UMIN2             :1; //4
      unsigned int PO_UBLK_UMIN2        :1; //5
      unsigned int PO_IBLK_UMIN2        :1; //6
      unsigned int UMIN2                :1; //7
      unsigned int BLOCK_UMAX1          :1; //8
      unsigned int PO_UMAX1             :1; //9
      unsigned int UMAX1                :1;//10
      unsigned int BLOCK_UMAX2          :1;//11
      unsigned int PO_UMAX2             :1;//12
      unsigned int UMAX2                :1;//13
      unsigned int BLOCK_UP1            :1;//14
      unsigned int PO_UP1               :1;//15
      unsigned int UP1                  :1;//16
      unsigned int BLOCK_UP2            :1;//17
      unsigned int PO_UP2               :1;//18
      unsigned int UP2                  :1;//19
      unsigned int BLOCK_UP3            :1;//20
      unsigned int PO_UP3               :1;//21
      unsigned int UP3                  :1;//22
      unsigned int BLOCK_UP4            :1;//23
      unsigned int PO_UP4               :1;//24
      unsigned int UP4                  :1;//25
      unsigned int BLOCK_UP5            :1;//26
      unsigned int PO_UP5               :1;//27
      unsigned int UP5                  :1;//28
      unsigned int BLOCK_UP6            :1;//29
      unsigned int PO_UP6               :1;//30
      unsigned int UP6                  :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd7_wrp;


typedef union U32_cmd8_Unn{ 
   struct {
      unsigned int BLOCK_UP7       :1; //0
      unsigned int PO_UP7          :1; //1
      unsigned int UP7             :1; //2
      unsigned int BLOCK_UP8       :1; //3
      unsigned int PO_UP8          :1; //4
      unsigned int UP8             :1; //5
      unsigned int DF1_IN          :1; //6
      unsigned int DF1_R           :1; //7
      unsigned int DF1_OUT         :1; //8
      unsigned int DF2_IN          :1; //9
      unsigned int DF2_R           :1;//10
      unsigned int DF2_OUT         :1;//11
      unsigned int DF3_IN          :1;//12
      unsigned int DF3_R           :1;//13
      unsigned int DF3_OUT         :1;//14
      unsigned int DF4_IN          :1;//15
      unsigned int DF4_R           :1;//16
      unsigned int DF4_OUT         :1;//17
      unsigned int DF5_IN          :1;//18
      unsigned int DF5_R           :1;//19
      unsigned int DF5_OUT         :1;//20
      unsigned int DF6_IN          :1;//21
      unsigned int DF6_R           :1;//22
      unsigned int DF6_OUT         :1;//23
      unsigned int DF7_IN          :1;//24
      unsigned int DF7_R           :1;//25
      unsigned int DF7_OUT         :1;//26
      unsigned int DF8_IN          :1;//27
      unsigned int DF8_R           :1;//28
      unsigned int DF8_OUT         :1;//29
      unsigned int DT1_SET         :1;//30
      unsigned int DT1_RESET       :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd8_wrp; 


typedef union U32_cmd9_Unn{ 
   struct {
      unsigned int DT1_OUT       :1; //0
      unsigned int DT2_SET       :1; //1
      unsigned int DT2_RESET     :1; //2
      unsigned int DT2_OUT       :1; //3
      unsigned int DT3_SET       :1; //4
      unsigned int DT3_RESET     :1; //5
      unsigned int DT3_OUT       :1; //6
      unsigned int DT4_SET       :1; //7
      unsigned int DT4_RESET     :1; //8
      unsigned int DT4_OUT       :1; //9
      unsigned int D_AND1        :1;//10
      unsigned int D_AND2        :1;//11
      unsigned int D_AND3        :1;//12
      unsigned int D_AND4        :1;//13
      unsigned int D_AND5        :1;//14
      unsigned int D_AND6        :1;//15
      unsigned int D_AND7        :1;//16
      unsigned int D_AND8        :1;//17
      unsigned int D_OR1         :1;//18
      unsigned int D_OR2         :1;//19
      unsigned int D_OR3         :1;//20
      unsigned int D_OR4         :1;//21
      unsigned int D_OR5         :1;//22
      unsigned int D_OR6         :1;//23
      unsigned int D_OR7         :1;//24
      unsigned int D_OR8         :1;//25
      unsigned int D_XOR1        :1;//26
      unsigned int D_XOR2        :1;//27
      unsigned int D_XOR3        :1;//28
      unsigned int D_XOR4        :1;//29
      unsigned int D_XOR5        :1;//30
      unsigned int D_XOR6        :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd9_wrp; 

 
typedef union U32_cmd10_Unn{ 
   struct {
      unsigned int  D_XOR7      :1; //0
      unsigned int  D_XOR8      :1; //1
      unsigned int  D_NOT1      :1; //2
      unsigned int  D_NOT2      :1; //3
      unsigned int  D_NOT3      :1; //4
      unsigned int  D_NOT4      :1; //5
      unsigned int  D_NOT5      :1; //6
      unsigned int  D_NOT6      :1; //7
      unsigned int  D_NOT7      :1; //8
      unsigned int  D_NOT8      :1; //9
      unsigned int  D_NOT9      :1;//10
      unsigned int  D_NOT10     :1;//11
      unsigned int  D_NOT11     :1;//12
      unsigned int  D_NOT12     :1;//13
      unsigned int  D_NOT13     :1;//14
      unsigned int  D_NOT14     :1;//15
      unsigned int  D_NOT15     :1;//16
      unsigned int  D_NOT16     :1;//17
      unsigned int  LF1         :1;//18
      unsigned int  LF2         :1;//19
      unsigned int  LF3         :1;//20
      unsigned int  LF4         :1;//21
      unsigned int  LF5         :1;//22
      unsigned int  LF6         :1;//23
      unsigned int  LF7         :1;//24
      unsigned int  LF8         :1;//25
      unsigned int  LF9         :1;//26
      unsigned int  LF10        :1;//27
      unsigned int  LF11        :1;//28
      unsigned int  LF12        :1;//29
      unsigned int  LF13        :1;//30
      unsigned int  LF14        :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd10_wrp; 

 
typedef union U32_cmd11_Unn{ 
   struct {
      unsigned int LF15    :1; //0
      unsigned int LF16    :1; //1
      unsigned int ERROR_CONF_EL    :1; //2
      unsigned int b_3    :1; //3
      unsigned int b_4    :1; //4
      unsigned int b_5    :1; //5
      unsigned int b_6    :1; //6
      unsigned int b_7    :1; //7
      unsigned int b_8    :1; //8
      unsigned int b_9    :1; //9
      unsigned int b_10    :1;//10
      unsigned int b_11    :1;//11
      unsigned int b_12    :1;//12
      unsigned int b_13    :1;//13
      unsigned int b_14    :1;//14
      unsigned int b_15    :1;//15
      unsigned int b_16    :1;//16
      unsigned int b_17    :1;//17
      unsigned int b_18    :1;//18
      unsigned int b_19    :1;//19
      unsigned int b_20    :1;//20
      unsigned int b_21    :1;//21
      unsigned int b_22    :1;//22
      unsigned int b_23    :1;//23
      unsigned int b_24    :1;//24
      unsigned int b_25    :1;//25
      unsigned int b_26    :1;//26
      unsigned int b_27    :1;//27
      unsigned int b_28    :1;//28
      unsigned int b_29    :1;//29
      unsigned int b_30    :1;//30
      unsigned int b_31    :1;//31    
  
    } bool_val;
    unsigned long U32V;
} U32_cmd11_wrp; 

 

typedef struct tag_cmd_bit_depot{
   U32_cmd1_wrp w1;
   U32_cmd2_wrp w2;
   U32_cmd3_wrp w3;
   U32_cmd4_wrp w4;
   U32_cmd5_wrp w5;
   U32_cmd6_wrp w6;
   U32_cmd7_wrp w7;
   U32_cmd8_wrp w8;
   U32_cmd9_wrp w9;
   U32_cmd10_wrp w10;
   U32_cmd11_wrp w11;
   
} CmdFunctionDepot;


#else
 #error  "UDEFINED MODIFIKACIA"
#endif







extern CmdFunctionDepot* pDbgViewCmd;
enum STATISTICAL_LOG_RETURN_VALUE_LIST{
//SR - statistical REG or SLOG - statistical LOGGER
  SLOG_OK = 0,                 //OK Value
  SLOG_INVALID_IDX,            //Error Value - Invalid  lIdx PARAMETER
  SLOG_INVALID_L_WNUM,         //Error Value - Invalid  WorkNumber PARAMETER
  SLOG_INVALID_SUM_IDX_PL_WNUM,//Error Value - Invalid  SUM lIdx+WorkNumber PARAMETER
  SLOG_LACK_COMPUTE_RESORCES,  //INFO  Value - NOT ENOUGH PROCESSOR TIME FOR CALCULATION -- 
  SLOG_DATA_BLOCKED_CLEAN_FUNC,//INFO  Value now start clening statistical registrator
                               //
  TOTAL_SR_MESAGE_INFO          //

};

extern unsigned int mnu_array_old[N_BIG], mnu_array_new[N_BIG];
enum ONM_EKRAN_LIST
{
  ONM_EKRAN_EKRAN_SETPOINT_ZZ_GROUP1                  =  EKRAN_SETPOINT_ZZ_GROUP1,  
  ONM_EKRAN_EKRAN_SETPOINT_ZZ_GROUP2                  =  EKRAN_SETPOINT_ZZ_GROUP2,  
  ONM_EKRAN_EKRAN_SETPOINT_ZZ_GROUP3                  =  EKRAN_SETPOINT_ZZ_GROUP3,  
  ONM_EKRAN_EKRAN_SETPOINT_ZZ_GROUP4                  =  EKRAN_SETPOINT_ZZ_GROUP4,  
  ONM_EKRAN_EKRAN_TIMEOUT_ZZ_GROUP1                   =  EKRAN_TIMEOUT_ZZ_GROUP1 ,  
  ONM_EKRAN_EKRAN_TIMEOUT_ZZ_GROUP2                   =  EKRAN_TIMEOUT_ZZ_GROUP2 ,  
  ONM_EKRAN_EKRAN_TIMEOUT_ZZ_GROUP3                   =  EKRAN_TIMEOUT_ZZ_GROUP3 ,  
  ONM_EKRAN_EKRAN_TIMEOUT_ZZ_GROUP4                   =  EKRAN_TIMEOUT_ZZ_GROUP4 ,  
  ONM_EKRAN_EKRAN_CONTROL_ZZ                          =  EKRAN_CONTROL_ZZ        ,  
  ONM_EKRAN_SETPOINT_ZOP_GROUP1                = EKRAN_SETPOINT_ZOP_GROUP1,   
  ONM_EKRAN_SETPOINT_ZOP_GROUP2                = EKRAN_SETPOINT_ZOP_GROUP2,   
  ONM_EKRAN_SETPOINT_ZOP_GROUP3                = EKRAN_SETPOINT_ZOP_GROUP3,   
  ONM_EKRAN_SETPOINT_ZOP_GROUP4                = EKRAN_SETPOINT_ZOP_GROUP4,   
  ONM_EKRAN_TIMEOUT_ZOP_GROUP1                 = EKRAN_TIMEOUT_ZOP_GROUP1 ,   
  ONM_EKRAN_TIMEOUT_ZOP_GROUP2                 = EKRAN_TIMEOUT_ZOP_GROUP2 ,   
  ONM_EKRAN_TIMEOUT_ZOP_GROUP3                 = EKRAN_TIMEOUT_ZOP_GROUP3 ,   
  ONM_EKRAN_TIMEOUT_ZOP_GROUP4                 = EKRAN_TIMEOUT_ZOP_GROUP4 ,   
  ONM_EKRAN_CONTROL_ZOP                        = EKRAN_CONTROL_ZOP        ,   
                                                                    
  ONM_EKRAN_TIMEOUT_ZDZ_GROUP1                 = EKRAN_TIMEOUT_ZDZ_GROUP1,   
  ONM_EKRAN_TIMEOUT_ZDZ_GROUP2                 = EKRAN_TIMEOUT_ZDZ_GROUP2,   
  ONM_EKRAN_TIMEOUT_ZDZ_GROUP3                 = EKRAN_TIMEOUT_ZDZ_GROUP3,   
  ONM_EKRAN_TIMEOUT_ZDZ_GROUP4                 = EKRAN_TIMEOUT_ZDZ_GROUP4,   
  ONM_EKRAN_CONTROL_ZDZ                        = EKRAN_CONTROL_ZDZ       ,   
                                                                    
  ONM_EKRAN_SETPOINT_VMP_FORWARD               = EKRAN_SETPOINT_VMP_FORWARD  ,
  ONM_EKRAN_SETPOINT_VMP_BACKWARD              = EKRAN_SETPOINT_VMP_BACKWARD ,
  ONM_EKRAN_CONTROL_VMP                        = EKRAN_CONTROL_VMP           ,
                                                                    
  ONM_EKRAN_VIDKLUCHENNJA                      = EKRAN_VIDKLUCHENNJA        , 

  ONM_EKRAN_SETPOINT_UROV_GROUP1               = EKRAN_SETPOINT_UROV_GROUP1 , 
  ONM_EKRAN_SETPOINT_UROV_GROUP2               = EKRAN_SETPOINT_UROV_GROUP2 , 
  ONM_EKRAN_SETPOINT_UROV_GROUP3               = EKRAN_SETPOINT_UROV_GROUP3 , 
  ONM_EKRAN_SETPOINT_UROV_GROUP4               = EKRAN_SETPOINT_UROV_GROUP4 , 
  ONM_EKRAN_TIMEOUT_UROV_GROUP1                = EKRAN_TIMEOUT_UROV_GROUP1  , 
  ONM_EKRAN_TIMEOUT_UROV_GROUP2                = EKRAN_TIMEOUT_UROV_GROUP2  , 
  ONM_EKRAN_TIMEOUT_UROV_GROUP3                = EKRAN_TIMEOUT_UROV_GROUP3  , 
  ONM_EKRAN_TIMEOUT_UROV_GROUP4                = EKRAN_TIMEOUT_UROV_GROUP4  , 
  ONM_EKRAN_CONTROL_UROV                      = EKRAN_CONTROL_UROV          ,
  ONM_EKRAN_SETPOINT_UP_GROUP1                 = EKRAN_SETPOINT_UP_GROUP1   ,    
  ONM_EKRAN_SETPOINT_UP_GROUP2                 = EKRAN_SETPOINT_UP_GROUP2   ,    
  ONM_EKRAN_SETPOINT_UP_GROUP3                 = EKRAN_SETPOINT_UP_GROUP3   ,    
  ONM_EKRAN_SETPOINT_UP_GROUP4                 = EKRAN_SETPOINT_UP_GROUP4   ,    
  ONM_EKRAN_TIMEOUT_UP_GROUP1                  = EKRAN_TIMEOUT_UP_GROUP1    ,    
  ONM_EKRAN_TIMEOUT_UP_GROUP2                  = EKRAN_TIMEOUT_UP_GROUP2    ,    
  ONM_EKRAN_TIMEOUT_UP_GROUP3                  = EKRAN_TIMEOUT_UP_GROUP3    ,    
  ONM_EKRAN_TIMEOUT_UP_GROUP4                  = EKRAN_TIMEOUT_UP_GROUP4    ,    
  ONM_EKRAN_CONTROL_UP                         = EKRAN_CONTROL_UP           ,    
                                          
  ONM_EKRAN_SETPOINT_UMIN_GROUP1               = EKRAN_SETPOINT_UMIN_GROUP1 ,
  ONM_EKRAN_SETPOINT_UMIN_GROUP2               = EKRAN_SETPOINT_UMIN_GROUP2 ,
  ONM_EKRAN_SETPOINT_UMIN_GROUP3               = EKRAN_SETPOINT_UMIN_GROUP3 ,
  ONM_EKRAN_SETPOINT_UMIN_GROUP4               = EKRAN_SETPOINT_UMIN_GROUP4 ,
  ONM_EKRAN_TIMEOUT_UMIN_GROUP1                = EKRAN_TIMEOUT_UMIN_GROUP1  ,
  ONM_EKRAN_TIMEOUT_UMIN_GROUP2                = EKRAN_TIMEOUT_UMIN_GROUP2  ,
  ONM_EKRAN_TIMEOUT_UMIN_GROUP3                = EKRAN_TIMEOUT_UMIN_GROUP3  ,
  ONM_EKRAN_TIMEOUT_UMIN_GROUP4                = EKRAN_TIMEOUT_UMIN_GROUP4  ,
  ONM_EKRAN_CONTROL_UMIN                       = EKRAN_CONTROL_UMIN         ,

  ONM_EKRAN_SETPOINT_UMAX_GROUP1               =  EKRAN_SETPOINT_UMAX_GROUP1 ,
  ONM_EKRAN_SETPOINT_UMAX_GROUP2               =  EKRAN_SETPOINT_UMAX_GROUP2 ,
  ONM_EKRAN_SETPOINT_UMAX_GROUP3               =  EKRAN_SETPOINT_UMAX_GROUP3 ,
  ONM_EKRAN_SETPOINT_UMAX_GROUP4               =  EKRAN_SETPOINT_UMAX_GROUP4 ,
  ONM_EKRAN_TIMEOUT_UMAX_GROUP1                =  EKRAN_TIMEOUT_UMAX_GROUP1  ,
  ONM_EKRAN_TIMEOUT_UMAX_GROUP2                =  EKRAN_TIMEOUT_UMAX_GROUP2  ,
  ONM_EKRAN_TIMEOUT_UMAX_GROUP3                =  EKRAN_TIMEOUT_UMAX_GROUP3  ,
  ONM_EKRAN_TIMEOUT_UMAX_GROUP4                =  EKRAN_TIMEOUT_UMAX_GROUP4  ,
  ONM_EKRAN_CONTROL_UMAX                       =  EKRAN_CONTROL_UMAX         ,

  ONM_EKRAN_SETPOINT_TZNP_GROUP1               = EKRAN_SETPOINT_TZNP_GROUP1 ,
  ONM_EKRAN_SETPOINT_TZNP_GROUP2               = EKRAN_SETPOINT_TZNP_GROUP2 ,
  ONM_EKRAN_SETPOINT_TZNP_GROUP3               = EKRAN_SETPOINT_TZNP_GROUP3 ,
  ONM_EKRAN_SETPOINT_TZNP_GROUP4               = EKRAN_SETPOINT_TZNP_GROUP4 ,
  ONM_EKRAN_TIMEOUT_TZNP_GROUP1                = EKRAN_TIMEOUT_TZNP_GROUP1  ,
  ONM_EKRAN_TIMEOUT_TZNP_GROUP2                = EKRAN_TIMEOUT_TZNP_GROUP2  ,
  ONM_EKRAN_TIMEOUT_TZNP_GROUP3                = EKRAN_TIMEOUT_TZNP_GROUP3  ,
  ONM_EKRAN_TIMEOUT_TZNP_GROUP4                = EKRAN_TIMEOUT_TZNP_GROUP4  ,
  ONM_EKRAN_CONTROL_TZNP                       = EKRAN_CONTROL_TZNP         ,

  ONM_EKRAN_TRANSFORMATOR_INFO                 = EKRAN_TRANSFORMATOR_INFO         ,    
  ONM_EKRAN_TRANSFORMATOR_INFO_SETPOINT        = EKRAN_TRANSFORMATOR_INFO_SETPOINT,
  ONM_EKRAN_TRANSFORMATOR_INFO_CONTROL         = EKRAN_TRANSFORMATOR_INFO_CONTROL ,
                                           
  ONM_EKRAN_LIST_TF_FOR_RANGUVANNJA            = EKRAN_LIST_TF_FOR_RANGUVANNJA   , 
  ONM_EKRAN_LIST_SOURCE_TF1                    = EKRAN_LIST_SOURCE_TF1,           
                                           
  ONM_EKRAN_TIME                              =  EKRAN_TIME  ,                    
 
  ONM_EKRAN_SETPOINT_SWITCH                    = EKRAN_SETPOINT_SWITCH     , 
  ONM_EKRAN_TIMEOUT_SWITCH                     = EKRAN_TIMEOUT_SWITCH      , 
  ONM_EKRAN_CONTROL_SWITCH                     = EKRAN_CONTROL_SWITCH      , 
  ONM_EKRAN_CHOOSE_RANG_SWITCH                 = EKRAN_CHOOSE_RANG_SWITCH  , 
  ONM_EKRAN_RANGUVANNJA_OFF_CB                 = EKRAN_RANGUVANNJA_OFF_CB  , 
  ONM_EKRAN_RANGUVANNJA_ON_CB                  = EKRAN_RANGUVANNJA_ON_CB   , 
                                           
  ONM_EKRAN_LIST_INPUTS_OUTPUTS                = EKRAN_LIST_INPUTS_OUTPUTS , 
  ONM_EKRAN_STATE_INPUTS                       = EKRAN_STATE_INPUTS        , 
  ONM_EKRAN_STATE_OUTPUTS                      = EKRAN_STATE_OUTPUTS       , 
                                           
  ONM_EKRAN_RESURS                             = EKRAN_RESURS              , 

  ONM_EKRAN_LIST_REGISTRATORS                      = EKRAN_LIST_REGISTRATORS                     ,
  ONM_EKRAN_LIST_ANALOG_REGISTRATOR_RECORDS        = EKRAN_LIST_ANALOG_REGISTRATOR_RECORDS       , 
  ONM_EKRAN_LIST_DIGITAL_REGISTRATOR_RECORDS       = EKRAN_LIST_DIGITAL_REGISTRATOR_RECORDS      , 

  ONM_EKRAN_LIST_REGISTRATOR_PROGRAM_ERROR_RECORDS = EKRAN_LIST_REGISTRATOR_PROGRAM_ERROR_RECORDS,
  ONM_EKRAN_TITLES_DIGITAL_REGISTRATOR               = EKRAN_TITLES_DIGITAL_REGISTRATOR   ,
  ONM_EKRAN_CHANGES_SIGNALS_DR                       = EKRAN_CHANGES_SIGNALS_DR           ,
//  ONM_EKRAN_TITLE_MAX_VALUES                         = EKRAN_TITLE_MAX_VALUES             ,
//  ONM_EKRAN_MAX_VALUES                               = EKRAN_MAX_VALUES                   ,
  ONM_EKRAN_CHANGES_DIAGNOSTICS_PR_ERR               = EKRAN_CHANGES_DIAGNOSTICS_PR_ERR   ,

//  ONM_EKRAN_LIST_STATE_CMD_REGISTRATOR_RECORDS       = EKRAN_LIST_STATE_CMD_REGISTRATOR_RECORDS ,
//  ONM_EKRAN_TITLES_STATE_CMD_REGISTRATOR             = EKRAN_TITLES_STATE_CMD_REGISTRATOR       ,
//  ONM_EKRAN_DATA_LABEL_STATE_CMD                     = EKRAN_DATA_LABEL_STATE_CMD               ,
//  ONM_EKRAN_STATE_CMD_REG                            = EKRAN_STATE_CMD_REG                      ,

                       
  ONM_EKRAN_POINT_TIME_SETTINGS                      =  EKRAN_POINT_TIME_SETTINGS     ,
  ONM_EKRAN_POINT_TIME_SETPOINT                      =  EKRAN_POINT_TIME_SETPOINT     ,
  ONM_EKRAN_POINT_TIME_RANGUVANNJA                   =  EKRAN_POINT_TIME_RANGUVANNJA  ,
                                                  
                                                  
  ONM_EKRAN_SETPOINT_MTZ_GROUP1                      =  EKRAN_SETPOINT_MTZ_GROUP1   ,
  ONM_EKRAN_SETPOINT_MTZ_GROUP2                      =  EKRAN_SETPOINT_MTZ_GROUP2   ,
  ONM_EKRAN_SETPOINT_MTZ_GROUP3                      =  EKRAN_SETPOINT_MTZ_GROUP3   ,
  ONM_EKRAN_SETPOINT_MTZ_GROUP4                      =  EKRAN_SETPOINT_MTZ_GROUP4   ,
  ONM_EKRAN_TIMEOUT_MTZ_GROUP1                       =  EKRAN_TIMEOUT_MTZ_GROUP1    ,
  ONM_EKRAN_TIMEOUT_MTZ_GROUP2                       =  EKRAN_TIMEOUT_MTZ_GROUP2    ,
  ONM_EKRAN_TIMEOUT_MTZ_GROUP3                       =  EKRAN_TIMEOUT_MTZ_GROUP3    ,
  ONM_EKRAN_TIMEOUT_MTZ_GROUP4                       =  EKRAN_TIMEOUT_MTZ_GROUP4    ,
  ONM_EKRAN_CONTROL_MTZ                              =  EKRAN_CONTROL_MTZ           ,

  ONM_EKRAN_MEASURMENT                               =  EKRAN_MEASURMENT                 ,
  ONM_EKRAN_MEASURMENT_CURRENT                       =  EKRAN_MEASURMENT_CURRENT         ,
  ONM_EKRAN_MEASURMENT_VOLTAGE_TYPE                  =  EKRAN_MEASURMENT_VOLTAGE_TYPE    ,
  ONM_EKRAN_MEASURMENT_VOLTAGE_PHASE                 =  EKRAN_MEASURMENT_VOLTAGE_PHASE   ,
  ONM_EKRAN_MEASURMENT_VOLTAGE_LINE                  =  EKRAN_MEASURMENT_VOLTAGE_LINE    ,
  ONM_EKRAN_MEASURMENT_FREQUENCY                     =  EKRAN_MEASURMENT_FREQUENCY       ,
  ONM_EKRAN_MEASURMENT_ANGLE                         =  EKRAN_MEASURMENT_ANGLE           ,
  ONM_EKRAN_MEASURMENT_POWER                         =  EKRAN_MEASURMENT_POWER           ,
  ONM_EKRAN_MEASURMENT_RESISTANCE                    =  EKRAN_MEASURMENT_RESISTANCE      ,
  ONM_EKRAN_ENERGY                                   =  EKRAN_ENERGY                   , 
                                                  
  ONM_EKRAN_MAIN                                     =  EKRAN_MAIN                 ,     

  ONM_EKRAN_LEVEL_PASSWORD                           = EKRAN_LEVEL_PASSWORD           , //! << = #define EKRAN_LEVEL_PASSWORD          0
  ONM_EKRAN_LEVEL_PASSWORD_HARD                      = EKRAN_LEVEL_PASSWORD_HARD      , //! << = #define EKRAN_LEVEL_PASSWORD_HARD     (EKRAN_LEVEL_PASSWORD + 1)
  ONM_EKRAN_LEVEL_CHOOSE_PASSWORDS                   = EKRAN_LEVEL_CHOOSE_PASSWORDS   , //! << = #define EKRAN_LEVEL_CHOOSE_PASSWORDS  (EKRAN_RANGUVANNJA_BUTTON_6 + 1)
  ONM_EKRAN_LEVEL_SET_NEW_PASSWORD1                  = EKRAN_LEVEL_SET_NEW_PASSWORD1  , //! << = #define EKRAN_LEVEL_SET_NEW_PASSWORD1 (EKRAN_LEVEL_CHOOSE_PASSWORDS + 1)
  ONM_EKRAN_LEVEL_SET_NEW_PASSWORD2                  = EKRAN_LEVEL_SET_NEW_PASSWORD2  , //! << = #define EKRAN_LEVEL_SET_NEW_PASSWORD2 (EKRAN_LEVEL_SET_NEW_PASSWORD1 + 1)

  ONM_EKRAN_LIST_LEDS_FOR_RANGUVANNJA                = EKRAN_LIST_LEDS_FOR_RANGUVANNJA,

  ONM_EKRAN_RANGUVANNJA_LED_1                         = EKRAN_RANGUVANNJA_LED_1      ,
  ONM_EKRAN_RANGUVANNJA_LED_2                         = EKRAN_RANGUVANNJA_LED_2      ,
  ONM_EKRAN_RANGUVANNJA_LED_3                         = EKRAN_RANGUVANNJA_LED_3      ,
  ONM_EKRAN_RANGUVANNJA_LED_4                         = EKRAN_RANGUVANNJA_LED_4      ,
  ONM_EKRAN_RANGUVANNJA_LED_5                         = EKRAN_RANGUVANNJA_LED_5      ,
  ONM_EKRAN_RANGUVANNJA_LED_6                         = EKRAN_RANGUVANNJA_LED_6      ,
  ONM_EKRAN_RANGUVANNJA_LED_7                         = EKRAN_RANGUVANNJA_LED_7      ,
  ONM_EKRAN_RANGUVANNJA_LED_8                         = EKRAN_RANGUVANNJA_LED_8      ,
  ONM_EKRAN_RANGUVANNJA_LED_9                         = EKRAN_RANGUVANNJA_LED_9      ,
  ONM_EKRAN_RANGUVANNJA_LED_10                        = EKRAN_RANGUVANNJA_LED_10     ,
  ONM_EKRAN_RANGUVANNJA_LED_11                        = EKRAN_RANGUVANNJA_LED_11     ,
  ONM_EKRAN_RANGUVANNJA_LED_12                        = EKRAN_RANGUVANNJA_LED_12     ,
  ONM_EKRAN_RANGUVANNJA_LED_13                        = EKRAN_RANGUVANNJA_LED_13     ,
  ONM_EKRAN_RANGUVANNJA_LED_14                        = EKRAN_RANGUVANNJA_LED_14     ,
  ONM_EKRAN_RANGUVANNJA_LED_15                        = EKRAN_RANGUVANNJA_LED_15     ,
  ONM_EKRAN_RANGUVANNJA_LED_16                        = EKRAN_RANGUVANNJA_LED_16     ,
  ONM_EKRAN_RANGUVANNJA_LED_17                        = EKRAN_RANGUVANNJA_LED_17     ,

  ONM_EKRAN_INFO                                    = EKRAN_INFO               ,
  ONM_EKRAN_DATE_TIME_PZ                            = EKRAN_DATE_TIME_PZ               ,
  ONM_EKRAN_GENERAL_PICKUPS_EL                      = EKRAN_GENERAL_PICKUPS_EL ,
  ONM_EKRAN_EXTENDED_LIGIC                          = EKRAN_EXTENDED_LIGIC     ,

  ONM_EKRAN_LIST_DT                             = EKRAN_LIST_DT                      ,           
  ONM_EKRAN_SET_RESET_DT1                       = EKRAN_SET_RESET_DT1                ,
  ONM_EKRAN_SET_RESET_DT2                       = EKRAN_SET_RESET_DT2                ,
  ONM_EKRAN_SET_RESET_DT3                       = EKRAN_SET_RESET_DT3                ,
  ONM_EKRAN_SET_RESET_DT4                       = EKRAN_SET_RESET_DT4                ,
  ONM_EKRAN_SET_DT1                             = EKRAN_SET_DT1                      ,
  ONM_EKRAN_RESET_DT1                           = EKRAN_RESET_DT1                    ,
  ONM_EKRAN_SET_DT2                             = EKRAN_SET_DT2                      ,
  ONM_EKRAN_RESET_DT2                           = EKRAN_RESET_DT2                    ,
  ONM_EKRAN_SET_DT3                             = EKRAN_SET_DT3                      ,
  ONM_EKRAN_RESET_DT3                           = EKRAN_RESET_DT3                    ,
  ONM_EKRAN_SET_DT4                             = EKRAN_SET_DT4                      ,
  ONM_EKRAN_RESET_DT4                           = EKRAN_RESET_DT4                    ,
  ONM_EKRAN_RANGUVANNJA_SET_DT1_PLUS            = EKRAN_RANGUVANNJA_SET_DT1_PLUS     ,
  ONM_EKRAN_RANGUVANNJA_SET_DT1_MINUS           = EKRAN_RANGUVANNJA_SET_DT1_MINUS    ,
  ONM_EKRAN_RANGUVANNJA_RESET_DT1_PLUS          = EKRAN_RANGUVANNJA_RESET_DT1_PLUS   ,
  ONM_EKRAN_RANGUVANNJA_RESET_DT1_MINUS         = EKRAN_RANGUVANNJA_RESET_DT1_MINUS  ,
  ONM_EKRAN_RANGUVANNJA_SET_DT2_PLUS            = EKRAN_RANGUVANNJA_SET_DT2_PLUS     ,
  ONM_EKRAN_RANGUVANNJA_SET_DT2_MINUS           = EKRAN_RANGUVANNJA_SET_DT2_MINUS    ,
  ONM_EKRAN_RANGUVANNJA_RESET_DT2_PLUS          = EKRAN_RANGUVANNJA_RESET_DT2_PLUS   ,
  ONM_EKRAN_RANGUVANNJA_RESET_DT2_MINUS         = EKRAN_RANGUVANNJA_RESET_DT2_MINUS  ,
  ONM_EKRAN_RANGUVANNJA_SET_DT3_PLUS            = EKRAN_RANGUVANNJA_SET_DT3_PLUS     ,
  ONM_EKRAN_RANGUVANNJA_SET_DT3_MINUS           = EKRAN_RANGUVANNJA_SET_DT3_MINUS    ,
  ONM_EKRAN_RANGUVANNJA_RESET_DT3_PLUS          = EKRAN_RANGUVANNJA_RESET_DT3_PLUS   ,
  ONM_EKRAN_RANGUVANNJA_RESET_DT3_MINUS         = EKRAN_RANGUVANNJA_RESET_DT3_MINUS  ,
  ONM_EKRAN_RANGUVANNJA_SET_DT4_PLUS            = EKRAN_RANGUVANNJA_SET_DT4_PLUS     ,
  ONM_EKRAN_RANGUVANNJA_SET_DT4_MINUS           = EKRAN_RANGUVANNJA_SET_DT4_MINUS    ,
  ONM_EKRAN_RANGUVANNJA_RESET_DT4_PLUS          = EKRAN_RANGUVANNJA_RESET_DT4_PLUS   ,
  ONM_EKRAN_RANGUVANNJA_RESET_DT4_MINUS         = EKRAN_RANGUVANNJA_RESET_DT4_MINUS  ,

  ONM_EKRAN_LIST_SETTINGS_FOR_DF              = EKRAN_LIST_SETTINGS_FOR_DF          ,
  ONM_EKRAN_LIST_TYPE_DF                      = EKRAN_LIST_TYPE_DF                  ,
  ONM_EKRAN_LIST_DF_FOR_RANGUVANNJA           = EKRAN_LIST_DF_FOR_RANGUVANNJA       ,
  ONM_EKRAN_LIST_DF_FOR_TIMEOUT_SETTINGS      = EKRAN_LIST_DF_FOR_TIMEOUT_SETTINGS  ,
  ONM_EKRAN_TIMEOUT_DF1                       = EKRAN_TIMEOUT_DF1                   ,
  ONM_EKRAN_TIMEOUT_DF2                       = EKRAN_TIMEOUT_DF2                   ,
  ONM_EKRAN_TIMEOUT_DF3                       = EKRAN_TIMEOUT_DF3                   ,
  ONM_EKRAN_TIMEOUT_DF4                       = EKRAN_TIMEOUT_DF4                   ,
  ONM_EKRAN_TIMEOUT_DF5                       = EKRAN_TIMEOUT_DF5                   ,
  ONM_EKRAN_TIMEOUT_DF6                       = EKRAN_TIMEOUT_DF6                   ,
  ONM_EKRAN_TIMEOUT_DF7                       = EKRAN_TIMEOUT_DF7                   ,
  ONM_EKRAN_TIMEOUT_DF8                       = EKRAN_TIMEOUT_DF8                   ,
  ONM_EKRAN_LIST_TYPE_SOURCE_DF1              = EKRAN_LIST_TYPE_SOURCE_DF1          ,
  ONM_EKRAN_LIST_TYPE_SOURCE_DF2              = EKRAN_LIST_TYPE_SOURCE_DF2          ,
  ONM_EKRAN_LIST_TYPE_SOURCE_DF3              = EKRAN_LIST_TYPE_SOURCE_DF3          ,
  ONM_EKRAN_LIST_TYPE_SOURCE_DF4              = EKRAN_LIST_TYPE_SOURCE_DF4          ,
  ONM_EKRAN_LIST_TYPE_SOURCE_DF5              = EKRAN_LIST_TYPE_SOURCE_DF5          ,
  ONM_EKRAN_LIST_TYPE_SOURCE_DF6              = EKRAN_LIST_TYPE_SOURCE_DF6          ,
  ONM_EKRAN_LIST_TYPE_SOURCE_DF7              = EKRAN_LIST_TYPE_SOURCE_DF7          ,
  ONM_EKRAN_LIST_TYPE_SOURCE_DF8              = EKRAN_LIST_TYPE_SOURCE_DF8          ,
  ONM_EKRAN_RANGUVANNJA_DF1_PLUS              = EKRAN_RANGUVANNJA_DF1_PLUS          ,
  ONM_EKRAN_RANGUVANNJA_DF1_MINUS             = EKRAN_RANGUVANNJA_DF1_MINUS         ,
  ONM_EKRAN_RANGUVANNJA_DF1_BLK               = EKRAN_RANGUVANNJA_DF1_BLK           ,
  ONM_EKRAN_RANGUVANNJA_DF2_PLUS              = EKRAN_RANGUVANNJA_DF2_PLUS          ,
  ONM_EKRAN_RANGUVANNJA_DF2_MINUS             = EKRAN_RANGUVANNJA_DF2_MINUS         ,
  ONM_EKRAN_RANGUVANNJA_DF2_BLK               = EKRAN_RANGUVANNJA_DF2_BLK           ,
  ONM_EKRAN_RANGUVANNJA_DF3_PLUS              = EKRAN_RANGUVANNJA_DF3_PLUS          ,
  ONM_EKRAN_RANGUVANNJA_DF3_MINUS             = EKRAN_RANGUVANNJA_DF3_MINUS         ,
  ONM_EKRAN_RANGUVANNJA_DF3_BLK               = EKRAN_RANGUVANNJA_DF3_BLK           ,
  ONM_EKRAN_RANGUVANNJA_DF4_PLUS              = EKRAN_RANGUVANNJA_DF4_PLUS          ,
  ONM_EKRAN_RANGUVANNJA_DF4_MINUS             = EKRAN_RANGUVANNJA_DF4_MINUS         ,
  ONM_EKRAN_RANGUVANNJA_DF4_BLK               = EKRAN_RANGUVANNJA_DF4_BLK           ,
  ONM_EKRAN_RANGUVANNJA_DF5_PLUS              = EKRAN_RANGUVANNJA_DF5_PLUS          ,
  ONM_EKRAN_RANGUVANNJA_DF5_MINUS             = EKRAN_RANGUVANNJA_DF5_MINUS         ,
  ONM_EKRAN_RANGUVANNJA_DF5_BLK               = EKRAN_RANGUVANNJA_DF5_BLK           ,
  ONM_EKRAN_RANGUVANNJA_DF6_PLUS              = EKRAN_RANGUVANNJA_DF6_PLUS          ,
  ONM_EKRAN_RANGUVANNJA_DF6_MINUS             = EKRAN_RANGUVANNJA_DF6_MINUS         ,
  ONM_EKRAN_RANGUVANNJA_DF6_BLK               = EKRAN_RANGUVANNJA_DF6_BLK           ,
  ONM_EKRAN_RANGUVANNJA_DF7_PLUS              = EKRAN_RANGUVANNJA_DF7_PLUS          ,
  ONM_EKRAN_RANGUVANNJA_DF7_MINUS             = EKRAN_RANGUVANNJA_DF7_MINUS         ,
  ONM_EKRAN_RANGUVANNJA_DF7_BLK               = EKRAN_RANGUVANNJA_DF7_BLK           ,
  ONM_EKRAN_RANGUVANNJA_DF8_PLUS              = EKRAN_RANGUVANNJA_DF8_PLUS          ,
  ONM_EKRAN_RANGUVANNJA_DF8_MINUS             = EKRAN_RANGUVANNJA_DF8_MINUS         ,
  ONM_EKRAN_RANGUVANNJA_DF8_BLK               = EKRAN_RANGUVANNJA_DF8_BLK           ,

  ONM_EKRAN_LIST_D_XOR                       = EKRAN_LIST_D_XOR         ,
  ONM_EKRAN_RANGUVANNJA_D_XOR1               = EKRAN_RANGUVANNJA_D_XOR1 ,
  ONM_EKRAN_RANGUVANNJA_D_XOR2               = EKRAN_RANGUVANNJA_D_XOR2 ,
  ONM_EKRAN_RANGUVANNJA_D_XOR3               = EKRAN_RANGUVANNJA_D_XOR3 ,
  ONM_EKRAN_RANGUVANNJA_D_XOR4               = EKRAN_RANGUVANNJA_D_XOR4 ,
  ONM_EKRAN_RANGUVANNJA_D_XOR5               = EKRAN_RANGUVANNJA_D_XOR5 ,
  ONM_EKRAN_RANGUVANNJA_D_XOR6               = EKRAN_RANGUVANNJA_D_XOR6 ,
  ONM_EKRAN_RANGUVANNJA_D_XOR7               = EKRAN_RANGUVANNJA_D_XOR7 ,
  ONM_EKRAN_RANGUVANNJA_D_XOR8               = EKRAN_RANGUVANNJA_D_XOR8 ,

  ONM_EKRAN_LIST_D_OR                        = EKRAN_LIST_D_OR          ,
  ONM_EKRAN_RANGUVANNJA_D_OR1                = EKRAN_RANGUVANNJA_D_OR1  ,
  ONM_EKRAN_RANGUVANNJA_D_OR2                = EKRAN_RANGUVANNJA_D_OR2  ,
  ONM_EKRAN_RANGUVANNJA_D_OR3                = EKRAN_RANGUVANNJA_D_OR3  ,
  ONM_EKRAN_RANGUVANNJA_D_OR4                = EKRAN_RANGUVANNJA_D_OR4  ,
  ONM_EKRAN_RANGUVANNJA_D_OR5                = EKRAN_RANGUVANNJA_D_OR5  ,
  ONM_EKRAN_RANGUVANNJA_D_OR6                = EKRAN_RANGUVANNJA_D_OR6  ,
  ONM_EKRAN_RANGUVANNJA_D_OR7                = EKRAN_RANGUVANNJA_D_OR7  ,
  ONM_EKRAN_RANGUVANNJA_D_OR8                = EKRAN_RANGUVANNJA_D_OR8  ,
  
  ONM_EKRAN_LIST_D_NOT                       = EKRAN_LIST_D_NOT          ,   
  ONM_EKRAN_RANGUVANNJA_D_NOT1               = EKRAN_RANGUVANNJA_D_NOT1  ,   
  ONM_EKRAN_RANGUVANNJA_D_NOT2               = EKRAN_RANGUVANNJA_D_NOT2  ,   
  ONM_EKRAN_RANGUVANNJA_D_NOT3               = EKRAN_RANGUVANNJA_D_NOT3  ,   
  ONM_EKRAN_RANGUVANNJA_D_NOT4               = EKRAN_RANGUVANNJA_D_NOT4  ,   
  ONM_EKRAN_RANGUVANNJA_D_NOT5               = EKRAN_RANGUVANNJA_D_NOT5  ,   
  ONM_EKRAN_RANGUVANNJA_D_NOT6               = EKRAN_RANGUVANNJA_D_NOT6  ,   
  ONM_EKRAN_RANGUVANNJA_D_NOT7               = EKRAN_RANGUVANNJA_D_NOT7  ,   
  ONM_EKRAN_RANGUVANNJA_D_NOT8               = EKRAN_RANGUVANNJA_D_NOT8  ,   
  ONM_EKRAN_RANGUVANNJA_D_NOT9               = EKRAN_RANGUVANNJA_D_NOT9  ,   
  ONM_EKRAN_RANGUVANNJA_D_NOT10              = EKRAN_RANGUVANNJA_D_NOT10 ,   
  ONM_EKRAN_RANGUVANNJA_D_NOT11              = EKRAN_RANGUVANNJA_D_NOT11 ,   
  ONM_EKRAN_RANGUVANNJA_D_NOT12              = EKRAN_RANGUVANNJA_D_NOT12 ,   
  ONM_EKRAN_RANGUVANNJA_D_NOT13              = EKRAN_RANGUVANNJA_D_NOT13 ,   
  ONM_EKRAN_RANGUVANNJA_D_NOT14              = EKRAN_RANGUVANNJA_D_NOT14 ,   
  ONM_EKRAN_RANGUVANNJA_D_NOT15              = EKRAN_RANGUVANNJA_D_NOT15 ,   
  ONM_EKRAN_RANGUVANNJA_D_NOT16              = EKRAN_RANGUVANNJA_D_NOT16 ,   

  ONM_EKRAN_LIST_D_AND                       = EKRAN_LIST_D_AND          ,
  ONM_EKRAN_RANGUVANNJA_D_AND1               = EKRAN_RANGUVANNJA_D_AND1  ,
  ONM_EKRAN_RANGUVANNJA_D_AND2               = EKRAN_RANGUVANNJA_D_AND2  ,
  ONM_EKRAN_RANGUVANNJA_D_AND3               = EKRAN_RANGUVANNJA_D_AND3  ,
  ONM_EKRAN_RANGUVANNJA_D_AND4               = EKRAN_RANGUVANNJA_D_AND4  ,
  ONM_EKRAN_RANGUVANNJA_D_AND5               = EKRAN_RANGUVANNJA_D_AND5  ,
  ONM_EKRAN_RANGUVANNJA_D_AND6               = EKRAN_RANGUVANNJA_D_AND6  ,
  ONM_EKRAN_RANGUVANNJA_D_AND7               = EKRAN_RANGUVANNJA_D_AND7  ,
  ONM_EKRAN_RANGUVANNJA_D_AND8               = EKRAN_RANGUVANNJA_D_AND8  ,

  ONM_EKRAN_COFIGURATION                     = EKRAN_COFIGURATION ,

  ONM_EKRAN_CHOOSE_SETTINGS_UVV              = EKRAN_CHOOSE_SETTINGS_UVV,

 

  ONM_EKRAN_DOPUSK_DV_UVV                    = EKRAN_DOPUSK_DV_UVV            ,  
  ONM_EKRAN_TYPE_INPUT_UVV                   = EKRAN_TYPE_INPUT_UVV           ,  
  ONM_EKRAN_TYPE_INPUT_SIGNAL_UVV            = EKRAN_TYPE_INPUT_SIGNAL_UVV    ,  
  ONM_EKRAN_TYPE_OUTPUT_UVV                  = EKRAN_TYPE_OUTPUT_UVV          ,  
  ONM_EKRAN_TYPE_LED_UVV                     = EKRAN_TYPE_LED_UVV             ,  
  ONM_EKRAN_TYPE_BUTTON_UVV                  = EKRAN_TYPE_BUTTON_UVV          ,  
      
  ONM_EKRAN_CHOOSE_SETTINGS_SWITCHER               = EKRAN_CHOOSE_SETTINGS_SWITCHER              ,       
  ONM_EKRAN_VIEW_LIST_OF_REGISTRATORS              = EKRAN_VIEW_LIST_OF_REGISTRATORS             ,
//  ONM_EKRAN_VIEW_SETTINGS_OF_DIGITAL_REGISTRATORS  = EKRAN_VIEW_SETTINGS_OF_DIGITAL_REGISTRATORS ,
  ONM_EKRAN_RANGUVANNJA_DIGITAL_REGISTRATOR        = EKRAN_RANGUVANNJA_DIGITAL_REGISTRATOR       ,
//  ONM_EKRAN_TIMEOUT_DIGITAL_REGISTRATOR            = EKRAN_TIMEOUT_DIGITAL_REGISTRATOR           ,
                                            
  ONM_EKRAN_VIEW_SETTINGS_OF_ANALOG_REGISTRATORS   = EKRAN_VIEW_SETTINGS_OF_ANALOG_REGISTRATORS ,
  ONM_EKRAN_RANGUVANNJA_ANALOG_REGISTRATOR         = EKRAN_RANGUVANNJA_ANALOG_REGISTRATOR       ,
  ONM_EKRAN_TIMEOUT_ANALOG_REGISTRATOR             = EKRAN_TIMEOUT_ANALOG_REGISTRATOR           ,
                                            
  ONM_EKRAN_CONTROL_AR                             = EKRAN_CONTROL_AR,

  ONM_EKRAN_CHOOSE_SETTINGS_MTZ                         =  EKRAN_CHOOSE_SETTINGS_MTZ                    ,                   
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP1_MTZ          =  EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP1_MTZ     ,
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP2_MTZ          =  EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP2_MTZ     ,
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP3_MTZ          = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP3_MTZ      ,  
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP4_MTZ          = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP4_MTZ      ,  
  ONM_EKRAN_CHOOSE_SETTINGS_ZDZ                         = EKRAN_CHOOSE_SETTINGS_ZDZ                     ,  
  ONM_EKRAN_CHOOSE_TIMEOUT_GROUP1_ZDZ                   = EKRAN_CHOOSE_TIMEOUT_GROUP1_ZDZ               ,  
  ONM_EKRAN_CHOOSE_TIMEOUT_GROUP2_ZDZ                   = EKRAN_CHOOSE_TIMEOUT_GROUP2_ZDZ               ,  
  ONM_EKRAN_CHOOSE_TIMEOUT_GROUP3_ZDZ                   = EKRAN_CHOOSE_TIMEOUT_GROUP3_ZDZ               ,  
  ONM_EKRAN_CHOOSE_TIMEOUT_GROUP4_ZDZ                   = EKRAN_CHOOSE_TIMEOUT_GROUP4_ZDZ               ,  
  ONM_EKRAN_CHOOSE_SETTINGS_ZZ                          = EKRAN_CHOOSE_SETTINGS_ZZ                      ,  
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP1_ZZ           = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP1_ZZ       ,  
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP2_ZZ           = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP2_ZZ       ,  
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP3_ZZ           = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP3_ZZ       ,  
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP4_ZZ           = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP4_ZZ       ,  
  ONM_EKRAN_CHOOSE_SETTINGS_TZNP                        = EKRAN_CHOOSE_SETTINGS_TZNP                    ,  
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP1_TZNP         = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP1_TZNP     ,  
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP2_TZNP         = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP2_TZNP     ,  
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP3_TZNP         = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP3_TZNP     ,  
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP4_TZNP         = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP4_TZNP     ,  
  ONM_EKRAN_CHOOSE_SETTINGS_APV                         = EKRAN_CHOOSE_SETTINGS_APV                     ,  
  ONM_EKRAN_CHOOSE_TIMEOUT_GROUP1_APV                   = EKRAN_CHOOSE_TIMEOUT_GROUP1_APV               ,  
  ONM_EKRAN_CHOOSE_TIMEOUT_GROUP2_APV                   = EKRAN_CHOOSE_TIMEOUT_GROUP2_APV               ,  
  ONM_EKRAN_CHOOSE_TIMEOUT_GROUP3_APV                   = EKRAN_CHOOSE_TIMEOUT_GROUP3_APV               ,  
  ONM_EKRAN_CHOOSE_TIMEOUT_GROUP4_APV                   = EKRAN_CHOOSE_TIMEOUT_GROUP4_APV               ,  
  ONM_EKRAN_CHOOSE_SETTINGS_ACHR_CHAPV                  = EKRAN_CHOOSE_SETTINGS_ACHR_CHAPV              ,  
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP1_ACHR_CHAPV   = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP1_ACHR_CHAPV, 
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP2_ACHR_CHAPV   = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP2_ACHR_CHAPV, 
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP3_ACHR_CHAPV   = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP3_ACHR_CHAPV, 
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP4_ACHR_CHAPV   = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP4_ACHR_CHAPV, 
  ONM_EKRAN_CHOOSE_SETTINGS_UROV                        = EKRAN_CHOOSE_SETTINGS_UROV                      ,
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP1_UROV         = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP1_UROV       ,
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP2_UROV         = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP2_UROV       ,
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP3_UROV         = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP3_UROV       ,
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP4_UROV         = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP4_UROV       , 
  ONM_EKRAN_CHOOSE_SETTINGS_ZOP                         = EKRAN_CHOOSE_SETTINGS_ZOP                       , 
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP1_ZOP          = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP1_ZOP        , 
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP2_ZOP          = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP2_ZOP        , 
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP3_ZOP          = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP3_ZOP        , 
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP4_ZOP          = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP4_ZOP        , 
  ONM_EKRAN_CHOOSE_SETTINGS_UMIN                        = EKRAN_CHOOSE_SETTINGS_UMIN                      , 
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP1_UMIN         = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP1_UMIN       , 
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP2_UMIN         = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP2_UMIN       , 
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP3_UMIN         = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP3_UMIN       , 
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP4_UMIN         = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP4_UMIN       , 
  ONM_EKRAN_CHOOSE_SETTINGS_UMAX                        = EKRAN_CHOOSE_SETTINGS_UMAX                      , 
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP1_UMAX         = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP1_UMAX       , 
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP2_UMAX         = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP2_UMAX       , 
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP3_UMAX         = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP3_UMAX       , 
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP4_UMAX         = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP4_UMAX       , 
  ONM_EKRAN_CHOOSE_SETTINGS_UP                          = EKRAN_CHOOSE_SETTINGS_UP                        , 
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP1_UP           = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP1_UP         , 
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP2_UP           = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP2_UP         , 
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP3_UP           = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP3_UP         , 
  ONM_EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP4_UP           = EKRAN_CHOOSE_SETPOINT_TIMEOUT_GROUP4_UP         , 
  ONM_EKRAN_CHOOSE_SETTINGS_VMP                         = EKRAN_CHOOSE_SETTINGS_VMP               ,         

  ONM_EKRAN_CHOSE_SETTINGS                            =  EKRAN_CHOSE_SETTINGS          , 
  ONM_EKRAN_VIEW_GRUPA_USTAVOK                        =  EKRAN_VIEW_GRUPA_USTAVOK      , 
  ONM_EKRAN_CHOSE_EXTRA_SETTINGS                      =  EKRAN_CHOSE_EXTRA_SETTINGS    , 

  ONM_EKRAN_CHOSE_DATA_TIME                           =  EKRAN_CHOSE_DATA_TIME    ,
  ONM_EKRAN_TIME_ZONE                                 =  EKRAN_TIME_ZONE          ,
  ONM_EKRAN_DST_RULE                                  =  EKRAN_DST_RULE           ,
#if (((MODYFIKACIA_VERSII_PZ / 10) & 0x1) != 0)
  ONM_EKRAN_SYNCHRO                                 = EKRAN_SYNCHRO ,
#endif

  ONM_EKRAN_CHOSE_COMMUNICATION_PARAMETERS            = EKRAN_CHOSE_COMMUNICATION_PARAMETERS  ,  
  ONM_EKRAN_VIEW_NAME_OF_CELL                         = EKRAN_VIEW_NAME_OF_CELL               ,  
  ONM_EKRAN_CHOSE_SETTING_RS485                       = EKRAN_CHOSE_SETTING_RS485             ,  
  ONM_EKRAN_PHY_LAYER_RS485                           = EKRAN_PHY_LAYER_RS485                 ,  
  ONM_EKRAN_PROTOCOL_RS485                            = EKRAN_PROTOCOL_RS485                  ,  
  ONM_EKRAN_VIEW_SPEED_RS485                          = EKRAN_VIEW_SPEED_RS485                ,  
  ONM_EKRAN_VIEW_PARE_RS485                           = EKRAN_VIEW_PARE_RS485                 ,  
  ONM_EKRAN_VIEW_STOP_BITS_RS485                      = EKRAN_VIEW_STOP_BITS_RS485            ,  
  ONM_EKRAN_VIEW_TIMEOUT_RS485                        = EKRAN_VIEW_TIMEOUT_RS485              ,  
  ONM_EKRAN_PROTOCOLS_RS485                           = EKRAN_PROTOCOLS_RS485                 ,  
  ONM_EKRAN_ADDRESS_RS485                             = EKRAN_ADDRESS_RS485                   ,  
  ONM_EKRAN_CHOSE_SETTING_ETHERNET                    = EKRAN_CHOSE_SETTING_ETHERNET          ,  
  ONM_EKRAN_SETTING_NETWORK_LAYER_ETHERNET            = EKRAN_SETTING_NETWORK_LAYER_ETHERNET  ,  

  ONM_EKRAN_LIST_BUTTONS_FOR_RANGUVANNJA  = EKRAN_LIST_BUTTONS_FOR_RANGUVANNJA, 



  ONM_EKRAN_RANGUVANNJA_BUTTON_1           =   EKRAN_RANGUVANNJA_BUTTON_1,        
  ONM_EKRAN_RANGUVANNJA_BUTTON_2           =   EKRAN_RANGUVANNJA_BUTTON_2,        
  ONM_EKRAN_RANGUVANNJA_BUTTON_3           =   EKRAN_RANGUVANNJA_BUTTON_3,        
  ONM_EKRAN_RANGUVANNJA_BUTTON_4           =   EKRAN_RANGUVANNJA_BUTTON_4,        
  ONM_EKRAN_RANGUVANNJA_BUTTON_5           =   EKRAN_RANGUVANNJA_BUTTON_5,        
  ONM_EKRAN_RANGUVANNJA_BUTTON_6           =   EKRAN_RANGUVANNJA_BUTTON_6,        
                                         
  ONM_EKRAN_TIMEOUT_APV_GROUP1             =   EKRAN_TIMEOUT_APV_GROUP1 ,         
  ONM_EKRAN_TIMEOUT_APV_GROUP2             =   EKRAN_TIMEOUT_APV_GROUP2 ,         
  ONM_EKRAN_TIMEOUT_APV_GROUP3             =   EKRAN_TIMEOUT_APV_GROUP3 ,         
  ONM_EKRAN_TIMEOUT_APV_GROUP4             =   EKRAN_TIMEOUT_APV_GROUP4 ,         
  ONM_EKRAN_CONTROL_APV                    =   EKRAN_CONTROL_APV        ,         
                                         
  ONM_EKRAN_SETPOINT_ACHR_CHAPV_GROUP1     =   EKRAN_SETPOINT_ACHR_CHAPV_GROUP1,  
  ONM_EKRAN_SETPOINT_ACHR_CHAPV_GROUP2     =   EKRAN_SETPOINT_ACHR_CHAPV_GROUP2,  
  ONM_EKRAN_SETPOINT_ACHR_CHAPV_GROUP3     =   EKRAN_SETPOINT_ACHR_CHAPV_GROUP3,  
  ONM_EKRAN_SETPOINT_ACHR_CHAPV_GROUP4     =   EKRAN_SETPOINT_ACHR_CHAPV_GROUP4,  
  ONM_EKRAN_TIMEOUT_ACHR_CHAPV_GROUP1      =   EKRAN_TIMEOUT_ACHR_CHAPV_GROUP1 ,  
  ONM_EKRAN_TIMEOUT_ACHR_CHAPV_GROUP2      =   EKRAN_TIMEOUT_ACHR_CHAPV_GROUP2 ,  
  ONM_EKRAN_TIMEOUT_ACHR_CHAPV_GROUP3      =   EKRAN_TIMEOUT_ACHR_CHAPV_GROUP3 ,  
  ONM_EKRAN_TIMEOUT_ACHR_CHAPV_GROUP4      =   EKRAN_TIMEOUT_ACHR_CHAPV_GROUP4 ,  
  ONM_EKRAN_CONTROL_ACHR_CHAPV             =   EKRAN_CONTROL_ACHR_CHAPV        ,  

















//  ONM_EKRAN_
//  ONM_EKRAN_
//  ONM_EKRAN_
//  ONM_EKRAN_
//  ONM_EKRAN_
//  ONM_EKRAN_
//  ONM_EKRAN_
//  ONM_EKRAN_  
  MAX_AMOUNT_ONM_EKRAN
    
};


/*
RANG_BLOCK_VKL_VV_0                   
RANG_RESET_LEDS_1
RANG_RESET_RELES_2
RANG_MISCEVE_DYSTANCIJNE_3
RANG_STATE_VV_4
RANG_OTKL_VID_ZOVN_ZAHYSTIV_5
RANG_OTKL_VV_6
RANG_VKL_VV_7
RANG_CTRL_OTKL_8
RANG_CTRL_VKL_9
RANG_PRYVID_VV_10
RANG_PEREVYSHCHENNJA_Inom_VYMK_11
RANG_KRYTYCHNYJ_RESURS_VYMYKACHA_12
RANG_VYCHERPANYJ_RESURS_VYMYKACHA_13
RANG_DI_ACTIVE_14
RANG_FK_ACTIVE_15
RANG_LAN_ACTIVE_16
RANG_GOOSE_ACTIVE_17
RANG_USB_ACTIVE_18
RANG_RS485_ACTIVE_19
RANG_DEFECT_20
RANG_AVAR_DEFECT_21
RANG_WORK_A_REJESTRATOR_22
RANG_WORK_D_REJESTRATOR_23
RANG_VIDKL_VID_ZAKHYSTIV_24
RANG_WORK_BO_25
RANG_WORK_BV_26
RANG_1KZ_27
RANG_2KZ_28
RANG_3KZ_29
RANG_1_GRUPA_USTAVOK_30
RANG_2_GRUPA_USTAVOK_31

RANG_3_GRUPA_USTAVOK_0
RANG_4_GRUPA_USTAVOK_1
RANG_INVERS_DV_GRUPA_USTAVOK_2
RANG_BLK_GRUP_USTAVOK_VID_ZACHYSTIV_3
RANG_RESET_BLOCK_READY_TU_VID_ZAHYSTIV_4
RANG_READY_TU_5
RANG_SETTINGS_CHANGED_6
RANG_BLOCK_IN_GOOSE1_7
RANG_BLOCK_IN_GOOSE2_8
RANG_BLOCK_IN_GOOSE3_9
RANG_BLOCK_IN_GOOSE4_10
RANG_BLOCK_IN_GOOSE5_11
RANG_BLOCK_IN_GOOSE6_12
RANG_BLOCK_IN_GOOSE7_13
RANG_BLOCK_IN_GOOSE8_14
RANG_BLOCK_IN_GOOSE9_15
RANG_BLOCK_IN_GOOSE10_16
RANG_BLOCK_IN_GOOSE11_17
RANG_BLOCK_IN_GOOSE12_18
RANG_BLOCK_IN_GOOSE13_19
RANG_BLOCK_IN_GOOSE14_20
RANG_BLOCK_IN_GOOSE15_21
RANG_BLOCK_IN_GOOSE16_22
RANG_BLOCK_IN_MMS1_23
RANG_BLOCK_IN_MMS2_24
RANG_BLOCK_IN_MMS3_25
RANG_BLOCK_IN_MMS4_26
RANG_BLOCK_OUT_LAN1_27
RANG_BLOCK_OUT_LAN2_28
RANG_BLOCK_OUT_LAN3_29
RANG_BLOCK_OUT_LAN4_30
RANG_BLOCK_DZ1_31

RANG_PO_DZ1_0
RANG_DZ1_1
RANG_PO_AMTZ_DZ1_2
RANG_AMTZ_DZ1_3
RANG_BLOCK_DZ2_4
RANG_BLOCK_PR_DZ2_5
RANG_OP_PR_DZ2_6
RANG_SECTOR_DIR_DZ2_7
RANG_SECTOR_INV_DZ2_8
RANG_PO_DIR_DZ2_9
RANG_PO_INV_DZ2_10
RANG_DZ2_11
RANG_PO_AMTZ_DZ2_12
RANG_AMTZ_DZ2_13
RANG_BLOCK_DZ3_14
RANG_BLOCK_PR_DZ3_15
RANG_OP_PR_DZ3_16
RANG_SECTOR_DIR_DZ3_17
RANG_SECTOR_INV_DZ3_18
RANG_PO_DIR_DZ3_19
RANG_PO_INV_DZ3_20
RANG_DZ3_21
RANG_PO_AMTZ_DZ3_22
RANG_AMTZ_DZ3_23
RANG_BLOCK_DZ4_24
RANG_BLOCK_PR_DZ4_25
RANG_OP_PR_DZ4_26
RANG_SECTOR_DIR_DZ4_27
RANG_SECTOR_INV_DZ4_28
RANG_PO_DIR_DZ4_29
RANG_PO_INV_DZ4_30
RANG_DZ4	_31

RANG_PO_AMTZ_DZ4_0
RANG_AMTZ_DZ4_1
RANG_EXT_NKN_DZ_2
RANG_NKN_DZ_3
RANG_PO_U_DZ_4
RANG_PO_I_BLK_DZ_5
RANG_3F_DZ_DIR_INV_6
RANG_SNKN_DZ_7
RANG_BLOCK_MTZ1_8
RANG_BLOCK_MTZ2_9
RANG_BLOCK_USK_MTZ2_10
RANG_BLOCK_MTZ3_11
RANG_BLOCK_MTZ4_12
RANG_SECTOR_VPERED_MTZN1_13
RANG_SECTOR_NAZAD_MTZN1_14
RANG_PO_MTZ1_15
RANG_PO_MTZN1_VPERED_16
RANG_PO_MTZN1_NAZAD_17
RANG_PO_U_MTZPN1_18
RANG_PO_MTZPN1_19
RANG_MTZ1_20
RANG_SECTOR_VPERED_MTZN2_21
RANG_SECTOR_NAZAD_MTZN2_22
RANG_PO_MTZ2_23
RANG_PO_MTZN2_VPERED_24
RANG_PO_MTZN2_NAZAD_25
RANG_PO_U_MTZPN2_26
RANG_PO_MTZPN2_27
RANG_MTZ2_28
RANG_SECTOR_VPERED_MTZN3_29
RANG_SECTOR_NAZAD_MTZN3_30
RANG_PO_MTZ3	_31

RANG_PO_MTZN3_VPERED_0
RANG_PO_MTZN3_NAZAD_1
RANG_PO_U_MTZPN3_2
RANG_PO_MTZPN3_3
RANG_MTZ3_4
RANG_SECTOR_VPERED_MTZN4_5
RANG_SECTOR_NAZAD_MTZN4_6
RANG_PO_MTZ4_7
RANG_PO_MTZN4_VPERED_8
RANG_PO_MTZN4_NAZAD_9
RANG_PO_U_MTZPN4_10
RANG_PO_MTZPN4_11
RANG_MTZ4_12
RANG_PO_BLOCK_U_MTZN_13
RANG_NCN_MTZ_14
RANG_BLOCK_ZNAM_15
RANG_PO_ZNAM_16
RANG_ZNAM_17
RANG_BLOCK_ZDZ_18
RANG_PUSK_ZDZ_VID_DV_19
RANG_LIGHT_ZDZ_FROM_DV_20
RANG_PO_ZDZ_21
RANG_ZDZ_22
RANG_BLOCK_NZZ_23
RANG_PO_NZZ_24
RANG_NZZ_25
RANG_PO_3I0_26
RANG_3I0_27
RANG_PO_3U0_28
RANG_3U0_29
RANG_SECTOR_NZZ_30
RANG_BLOCK_TZNP1_31

RANG_SECTOR_TZNP1_VPERED_0
RANG_SECTOR_TZNP1_NAZAD_1
RANG_PO_3I0_TZNP1_VPERED_2
RANG_PO_3I0_TZNP1_NAZAD_3
RANG_PO_3U0_TZNP1_VPERED_4
RANG_PO_3U0_TZNP1_NAZAD_5
RANG_PO_TZNP1_VPERED_6
RANG_PO_TZNP1_NAZAD_7
RANG_TZNP1_8
RANG_BLOCK_TZNP2_9
RANG_SECTOR_TZNP2_VPERED_10
RANG_SECTOR_TZNP2_NAZAD_11
RANG_PO_3I0_TZNP2_VPERED_12
RANG_PO_3I0_TZNP2_NAZAD_13
RANG_PO_3U0_TZNP2_VPERED_14
RANG_PO_3U0_TZNP2_NAZAD_15
RANG_PO_TZNP2_VPERED_16
RANG_PO_TZNP2_NAZAD_17
RANG_TZNP2_18
RANG_BLOCK_TZNP3_19
RANG_SECTOR_TZNP3_VPERED_20
RANG_SECTOR_TZNP3_NAZAD_21
RANG_PO_3I0_TZNP3_VPERED_22
RANG_PO_3I0_TZNP3_NAZAD_23
RANG_PO_3U0_TZNP3_VPERED_24
RANG_PO_3U0_TZNP3_NAZAD_25
RANG_PO_TZNP3_VPERED_26
RANG_PO_TZNP3_NAZAD_27
RANG_TZNP3_28
RANG_STAT_BLK_APV_29
RANG_APV1_30
RANG_APV2_31


RANG_APV3_0
RANG_APV4_1
RANG_APV_WORK_2
RANG_ACHR_CHAPV_VID_DV_3
RANG_BLOCK_ACHR1_4
RANG_BLOCK_ACHR2_5
RANG_RAZR_CHAPV_6
RANG_VN_BLOCK_CHAPV_7
RANG_PO_ACHR1_8
RANG_PO_CHAPV1_9
RANG_ACHR_CHAPV1_10
RANG_PO_ACHR2_11
RANG_PO_CHAPV2_12
RANG_ACHR_CHAPV2_13
RANG_BLOCK_UROV_14
RANG_PUSK_UROV_VID_DV_15
RANG_PO_UROV_16
RANG_UROV1_17
RANG_UROV2_18
RANG_BLOCK_ZOP_19
RANG_PO_ZOP_20
RANG_ZOP_21
RANG_BLOCK_UMIN1_22
RANG_START_UMIN1_23
RANG_BLOCK_UMIN2_24
RANG_START_UMIN2_25
RANG_PO_UMIN1_26
RANG_PO_UBLK_UMIN1_27
RANG_PO_IBLK_UMIN1_28
RANG_UMIN1_29
RANG_PO_UMIN2_30
RANG_PO_UBLK_UMIN2_31

RANG_PO_IBLK_UMIN2_0
RANG_UMIN2_1
RANG_BLOCK_UMAX1_2
RANG_PO_UMAX1_3
RANG_UMAX1_4
RANG_BLOCK_UMAX2_5
RANG_PO_UMAX2_6
RANG_UMAX2_7
RANG_BLOCK_UP1_8
RANG_PO_UP1_9
RANG_UP1_10
RANG_BLOCK_UP2_11
RANG_PO_UP2_12
RANG_UP2_13
RANG_BLOCK_UP3_14
RANG_PO_UP3_15
RANG_UP3_16
RANG_BLOCK_UP4_17
RANG_PO_UP4_18
RANG_UP4_19
RANG_BLOCK_UP5_20
RANG_PO_UP5_21
RANG_UP5_22
RANG_BLOCK_UP6_23
RANG_PO_UP6_24
RANG_UP6_25
RANG_BLOCK_UP7_26
RANG_PO_UP7_27
RANG_UP7_28
RANG_BLOCK_UP8_29
RANG_PO_UP8_30
RANG_UP8_31


RANG_DF1_IN_0
RANG_DF1_R_1
RANG_DF1_OUT_2
RANG_DF2_IN_3
RANG_DF2_R_4
RANG_DF2_OUT_5
RANG_DF3_IN_6
RANG_DF3_R_7
RANG_DF3_OUT_8
RANG_DF4_IN_9
RANG_DF4_R_10
RANG_DF4_OUT_11
RANG_DF5_IN_12
RANG_DF5_R_13
RANG_DF5_OUT_14
RANG_DF6_IN_15
RANG_DF6_R_16
RANG_DF6_OUT_17
RANG_DF7_IN_18
RANG_DF7_R_19
RANG_DF7_OUT_20
RANG_DF8_IN_21
RANG_DF8_R_22
RANG_DF8_OUT_23
RANG_DT1_SET_24
RANG_DT1_RESET_25
RANG_DT1_OUT_26
RANG_DT2_SET_27
RANG_DT2_RESET_28
RANG_DT2_OUT_29
RANG_DT3_SET_30
RANG_DT3_RESE_31

RANG_DT3_OUT_0
RANG_DT4_SET_1
RANG_DT4_RESET_2
RANG_DT4_OUT_3
RANG_D_AND1_4
RANG_D_AND2_5
RANG_D_AND3_6
RANG_D_AND4_7
RANG_D_AND5_8
RANG_D_AND6_9
RANG_D_AND7_10
RANG_D_AND8_11
RANG_D_OR1_12
RANG_D_OR2_13
RANG_D_OR3_14
RANG_D_OR4_15
RANG_D_OR5_16
RANG_D_OR6_17
RANG_D_OR7_18
RANG_D_OR8_19
RANG_D_XOR1_20
RANG_D_XOR2_21
RANG_D_XOR3_22
RANG_D_XOR4_23
RANG_D_XOR5_24
RANG_D_XOR6_25
RANG_D_XOR7_26
RANG_D_XOR8_27
RANG_D_NOT1_28
RANG_D_NOT2_29
RANG_D_NOT3_30
RANG_D_NOT4_31

RANG_D_NOT5_0
RANG_D_NOT6_1
RANG_D_NOT7_2
RANG_D_NOT8_3
RANG_D_NOT9_4
RANG_D_NOT10_5
RANG_D_NOT11_6
RANG_D_NOT12_7
RANG_D_NOT13_8
RANG_D_NOT14_9
RANG_D_NOT15_10
RANG_D_NOT16_11
RANG_LF1_12
RANG_LF2_13
RANG_LF3_14
RANG_LF4_15
RANG_LF5_16
RANG_LF6_17
RANG_LF7_18
RANG_LF8_19
RANG_LF9_20
RANG_LF10_21
RANG_LF11_22
RANG_LF12_23
RANG_LF13_24
RANG_LF14_25
RANG_LF15_26
RANG_LF16_27
RANG_ERROR_CONF_EL_28


RANG_PO_MTZN3_VPERED_0
RANG_PO_MTZN3_NAZAD_1
RANG_PO_U_MTZPN3_2
RANG_PO_MTZPN3_3
RANG_MTZ3_4
RANG_SECTOR_VPERED_MTZN4_5
RANG_SECTOR_NAZAD_MTZN4_6
RANG_PO_MTZ4,       _7
RANG_PO_MTZN4_VPERED_8
RANG_PO_MTZN4_NAZAD_9
RANG_PO_U_MTZPN4_10
RANG_PO_MTZPN4_11
RANG_MTZ4_12
RANG_PO_BLOCK_U_MTZN_13
RANG_NCN_MTZ_14
RANG_BLOCK_ZNAM _15
RANG_PO_ZNAM_16
RANG_ZNAM_17
RANG_BLOCK_ZDZ_18
RANG_PUSK_ZDZ_VID_DV_19
RANG_LIGHT_ZDZ_FROM_DV_20
RANG_LIGHT_ZDZ_FROM_OVD1_21
RANG_LIGHT_ZDZ_FROM_OVD2_22
RANG_LIGHT_ZDZ_FROM_OVD3_23
RANG_PO_ZDZ_24
RANG_ZDZ_25
RANG_BLOCK_NZZ _26
RANG_PO_NZZ_27
RANG_NZZ_28
RANG_PO_3I0_29
RANG_3I0_30
RANG_PO_3U0_31

RANG_3U0_0
RANG_SECTOR_NZZ_1
RANG_BLOCK_TZNP1_2
RANG_SECTOR_TZNP1_VPERED_3
RANG_SECTOR_TZNP1_NAZAD_4
RANG_PO_3I0_TZNP1_VPERED_5
RANG_PO_3I0_TZNP1_NAZAD_6
RANG_PO_3U0_TZNP1_VPERED_7
RANG_PO_3U0_TZNP1_NAZAD_8
RANG_PO_TZNP1_VPERED_9
RANG_PO_TZNP1_NAZAD_10
RANG_TZNP1_11
RANG_BLOCK_TZNP2_12
RANG_SECTOR_TZNP2_VPERED_13
RANG_SECTOR_TZNP2_NAZAD_14
RANG_PO_3I0_TZNP2_VPERED_15
RANG_PO_3I0_TZNP2_NAZAD_16
RANG_PO_3U0_TZNP2_VPERED_17
RANG_PO_3U0_TZNP2_NAZAD_18
RANG_PO_TZNP2_VPERED_19
RANG_PO_TZNP2_NAZAD_20
RANG_TZNP2_21
RANG_BLOCK_TZNP3_22
RANG_SECTOR_TZNP3_VPERED_23
RANG_SECTOR_TZNP3_NAZAD_24
RANG_PO_3I0_TZNP3_VPERED_25
RANG_PO_3I0_TZNP3_NAZAD_26
RANG_PO_3U0_TZNP3_VPERED_27
RANG_PO_3U0_TZNP3_NAZAD_28
RANG_PO_TZNP3_VPERED_29
RANG_PO_TZNP3_NAZAD_30
RANG_TZNP3_31


RANG_STAT_BLK_APV_0
RANG_APV1_1
RANG_APV2_2
RANG_APV3_3
RANG_APV4_4
RANG_APV_WORK_5
RANG_ACHR_CHAPV_VID_DV_6
RANG_BLOCK_ACHR1_7
RANG_BLOCK_ACHR2_8
RANG_RAZR_CHAPV_9
RANG_VN_BLOCK_CHAPV_10
RANG_PO_ACHR1_11
RANG_PO_CHAPV1_12
RANG_ACHR_CHAPV1_13
RANG_PO_ACHR2_14
RANG_PO_CHAPV2_15
RANG_ACHR_CHAPV2_16
RANG_BLOCK_UROV_17
RANG_PUSK_UROV_VID_DV_18
RANG_PO_UROV_19
RANG_UROV1_20
RANG_UROV2_21
RANG_BLOCK_ZOP_22
RANG_PO_ZOP_23
RANG_ZOP_24
RANG_BLOCK_UMIN1_25
RANG_START_UMIN1_26
RANG_BLOCK_UMIN2_27
RANG_START_UMIN2_28
RANG_PO_UMIN1_29
RANG_PO_UBLK_UMIN1_30
RANG_PO_IBLK_UMIN1_31


UMIN1_0
PO_UMIN2_1
PO_UBLK_UMIN2_2
PO_IBLK_UMIN2_3
UMIN2_4
BLOCK_UMAX1_5
PO_UMAX1_6
UMAX1_7
BLOCK_UMAX2_8
PO_UMAX2_9
UMAX2_10
BLOCK_UP1_11
PO_UP1_12
UP1_13
BLOCK_UP2_14
PO_UP2_15
UP2_16
BLOCK_UP3_17
PO_UP3_18
UP3_19
BLOCK_UP4_20
PO_UP4_21
UP4_22
BLOCK_UP5_23
PO_UP5_24
UP5_25
BLOCK_UP6_26
PO_UP6_27
UP6_28
BLOCK_UP7_29
PO_UP7_30
UP7_31  

BLOCK_UP8_0
PO_UP8_1
UP8_2
DF1_IN_3
DF1_R_4
DF1_OUT_5
DF2_IN_6
DF2_R_7
DF2_OUT_8
DF3_IN_9
DF3_R_10
DF3_OUT_11
DF4_IN_12
DF4_R_13
DF4_OUT_14
DF5_IN_15
DF5_R_16
DF5_OUT_17
DF6_IN_18
DF6_R_19
DF6_OUT_20
DF7_IN_21
DF7_R_22
DF7_OUT_23
DF8_IN_24
DF8_R_25
DF8_OUT_26
DT1_SET_27
DT1_RESET_28
DT1_OUT_29
DT2_SET_30
DT2_RESET_31


DT2_OUT_0
DT3_SET_1
DT3_RESET_2
DT3_OUT_3
DT4_SET_4
DT4_RESET_5
DT4_OUT_6
D_AND1_7
D_AND2_8
D_AND3_9
D_AND4_10
D_AND5_11
D_AND6_12
D_AND7_13
D_AND8_14
D_OR1_15
D_OR2_16
D_OR3_17
D_OR4_18
D_OR5_19
D_OR6_20
D_OR7_21
D_OR8_22
D_XOR1_23
D_XOR2_24
D_XOR3_25
D_XOR4_26
D_XOR5_27
D_XOR6_28
D_XOR7_29
D_XOR8_30
D_NOT1_31

RANG_D_NOT2_0
RANG_D_NOT3_1
RANG_D_NOT4_2
RANG_D_NOT5_3
RANG_D_NOT6_4
RANG_D_NOT7_5
RANG_D_NOT8_6
RANG_D_NOT9_7
RANG_D_NOT10_8
RANG_D_NOT11_9
RANG_D_NOT12_10
RANG_D_NOT13_11
RANG_D_NOT14_12
RANG_D_NOT15_13
RANG_D_NOT16_14
RANG_LF1_15
RANG_LF2_16
RANG_LF3_17
RANG_LF4_18
RANG_LF5_19
RANG_LF6_20
RANG_LF7_21
RANG_LF8_22
RANG_LF9_23
RANG_LF10_24
RANG_LF11_25
RANG_LF12_26
RANG_LF13_27
RANG_LF14_28
RANG_LF15_29
RANG_LF16_30
RANG_ERROR_CONF_EL_31
















*/



#endif
