#include "log_info.h"

#include "header_dnp3.h"
#include "ControlState.h"

void ControlState_in_ControlStateOver1(ControlState *pControlState)
{
  SequenceNum_for_uint8_Modulus16_in_SequenceNum_for_uint8_Modulus16Over1(&(pControlState->expectedSeq));
  pControlState->selected = false;
  pControlState->digest = 0;
  pControlState->length = 0;
}

CommandStatus_uint8_t ValidateSelection_in_ControlState(ControlState *pControlState,
    AppSeqNum* seq,
    Timestamp* now,
    TimeDuration* timeout,
    RSeq_for_Uint16_t* objects)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{ValidateSelection_in_ControlState1"<<'\n';
  inspect_RSeq(objects);
  inspect_Timestamp(now);
  inspect_TimeDuration(timeout);
#endif
  if (pControlState->selected && Equals_in_SequenceNum_for_uint8_Modulus16(&(pControlState->expectedSeq), seq->seq))//// expectedSeq.Equals(seq))
  {
#ifdef  LOG_INFO
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*ValidateSelection_in_ControlState2"<<'\n';
#endif
//boolean  operatorLTEQ_in_Timestamp(Timestamp* pTimestamp, Timestamp* other)
////            if (selectTime <= now)
    if(operatorLTEQ_in_Timestamp(&(pControlState->selectTime), now))
    {
//TimeDuration operatorMINUS_in_Timestamp(Timestamp* pTimestamp, Timestamp* timestamp)
////                auto elapsed = now - selectTime;
      TimeDuration elapsed = operatorMINUS_in_Timestamp(now, &(pControlState->selectTime));
#ifdef  LOG_INFO
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*ValidateSelection_in_ControlState3"<<'\n';
  inspect_Timestamp(&(pControlState->selectTime));
  inspect_TimeDuration(&elapsed);
#endif
//boolean operatorLT_in_TimeDuration(TimeDuration *pTimeDuration, TimeDuration* other)
////                if (elapsed < timeout)
      if(operatorLT_in_TimeDuration(&elapsed, timeout))
      {
#ifdef  LOG_INFO
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*ValidateSelection_in_ControlState4"<<'\n';
#endif
//    uint32_t length_in_HasLength_for_Uint32_t(HasLength_for_Uint32_t *pHasLength);
// uint16_t CalcCrc_in_CRC_staticOver2(RSeq_for_Uint16_t* view);
////                    if (length == objects.length() && digest == CRC::CalcCrc(objects))
        if ((pControlState->length == length_in_HasLength_for_Uint16_t(&(objects->hHasLength))) &&
            (pControlState->digest == CalcCrc_in_CRC_staticOver2(objects)))
        {
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<getString_stack_info();
  std::cout<<"}ValidateSelection_in_ControlState1_"<<'\n';
  decrement_stack_info();
#endif
          return CommandStatus_SUCCESS;
        }
        else
        {
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<getString_stack_info();
  std::cout<<"}ValidateSelection_in_ControlState2_"<<'\n';
  decrement_stack_info();
#endif
          return CommandStatus_NO_SELECT;
        }
      }
      else
      {
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<getString_stack_info();
  std::cout<<"}ValidateSelection_in_ControlState3_"<<'\n';
  decrement_stack_info();
#endif
        return CommandStatus_TIMEOUT;
      }
    }
    else
    {
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<getString_stack_info();
  std::cout<<"}ValidateSelection_in_ControlState4_"<<'\n';
  decrement_stack_info();
#endif
      return CommandStatus_TIMEOUT;
    }
  }
  else
  {
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<getString_stack_info();
  std::cout<<"}ValidateSelection_in_ControlState5_"<<'\n';
  decrement_stack_info();
#endif
    return CommandStatus_NO_SELECT;
  }
}

void Select_in_ControlState(ControlState *pControlState,  AppSeqNum* currentSeqN, Timestamp* now, RSeq_for_Uint16_t* objects)
{
  pControlState->selected = true;
  pControlState->selectTime = *now;
//SequenceNum_for_uint8_Modulus16 Next_in_SequenceNum_for_uint8_Modulus16Over1(SequenceNum_for_uint8_Modulus16 *pSequenceNum_for_uint8_Modulus16);
////        expectedSeq = currentSeqN.Next();
  pControlState->expectedSeq = Next_in_SequenceNum_for_uint8_Modulus16Over1(currentSeqN);
////        digest = CRC::CalcCrc(objects);
  pControlState->digest = CalcCrc_in_CRC_staticOver2(objects);
////        length = objects.length();
  pControlState->length = length_in_HasLength_for_Uint16_t(&(objects->hHasLength));
}

void Unselect_in_ControlState(ControlState *pControlState)
{
  pControlState->selected = false;
}
