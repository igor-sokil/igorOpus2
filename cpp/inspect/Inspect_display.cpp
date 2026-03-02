#include <iostream>
#include <string>
#include "log_info.h"

#include "header_dnp3.h"

static int16_t stack_info = -1;//рівень стеку для info

int16_t get_stack_info(void);
int16_t get_stack_info(void)
{
  return stack_info;
}

void increment_stack_info(void)
{
  stack_info ++;
}

void decrement_stack_info(void)
{
  stack_info --;
  if(stack_info < 0) stack_info = 0;
}

std::string getString_stack_info(void)
{
  std::string name("    ");       
  std::string res("");       
  for(int i=0; i<stack_info; i++) res = res + name;
  return res;
}

void inspect_LinkHeaderFields(LinkHeaderFields *b)
{
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"**inspect_LinkHeaderFields**"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*LinkFunction_uint8_t func= "<<(uint16_t)b->func<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*boolean isFromMaster= "<<(uint16_t)b->isFromMaster<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*boolean fcb= "<<(uint16_t)b->fcb<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*boolean fcvdfc= "<<(uint16_t)b->fcvdfc<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*Addresses addresses.source= "<<(uint16_t)b->addresses.source<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*Addresses addresses.destination= "<<(uint16_t)b->addresses.destination<<'\n';
}

void inspect_ClassField(ClassField *b)
{
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"**inspect_ClassField**"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*uint8_t bitfield= "<<(uint16_t)b->bitfield<<'\n';
}

void inspect_IINField(IINField *b)
{
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"**inspect_IINField**"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*uint8_t LSB= "<<(uint16_t)b->LSB<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*uint8_t MSB= "<<(uint16_t)b->MSB<<'\n';
}

void inspect_IINValue(IINValue *b)
{
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"**inspect_IINValue**"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*boolean value= "<<(uint16_t)b->value<<'\n';
}

void inspect_DNPTime(DNPTime *b)
{
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"**inspect_DNPTime**"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*uint64_t value= "<<(uint32_t)b->value<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*TimestampQuality_uint8_t quality= "<<(uint32_t)b->quality<<'\n';
}

void inspect_Analog(Analog *b)
{
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"**inspect_Analog**"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*boolean value= "<<(uint16_t)b->tTypedMeasurement_for_Double64.value<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*Flags flags.value= "<<(uint16_t)b->tTypedMeasurement_for_Double64.mMeasurement.flags.value<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*DNPTime timeDNPTime.value= "<<(uint32_t)b->tTypedMeasurement_for_Double64.mMeasurement.timeDNPTime_in_Measurement.value<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*DNPTime timeDNPTime.quality= "<<(uint32_t)b->tTypedMeasurement_for_Double64.mMeasurement.timeDNPTime_in_Measurement.quality<<'\n';
}
void inspect_Binary(Binary *b)
{
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"**inspect_Binary**"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*boolean value= "<<(uint16_t)b->tTypedMeasurement_for_Boolean.value<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*Flags flags.value= "<<(uint16_t)b->tTypedMeasurement_for_Boolean.mMeasurement.flags.value<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*DNPTime timeDNPTime.value= "<<(uint32_t)b->tTypedMeasurement_for_Boolean.mMeasurement.timeDNPTime_in_Measurement.value<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*DNPTime timeDNPTime.quality= "<<(uint32_t)b->tTypedMeasurement_for_Boolean.mMeasurement.timeDNPTime_in_Measurement.quality<<'\n';
}
/*
void inspect_Indexed_for_Binary(Indexed_for_Binary *b)
{
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"**inspect_Indexed_for_Binary**"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*uint16_t index= "<<(uint16_t)b->index<<'\n';
  inspect_Binary(&(b->value));
}
*/
void inspect_Counter(Counter *b)
{
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"**inspect_Counter**"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*boolean value= "<<(uint16_t)b->tTypedMeasurement_for_Uint32.value<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*Flags flags.value= "<<(uint16_t)b->tTypedMeasurement_for_Uint32.mMeasurement.flags.value<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*DNPTime timeDNPTime.value= "<<(uint32_t)b->tTypedMeasurement_for_Uint32.mMeasurement.timeDNPTime_in_Measurement.value<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*DNPTime timeDNPTime.quality= "<<(uint32_t)b->tTypedMeasurement_for_Uint32.mMeasurement.timeDNPTime_in_Measurement.quality<<'\n';
}
void inspect_FrozenCounter(FrozenCounter *b)
{
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"**inspect_FrozenCounter**"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*boolean value= "<<(uint16_t)b->tTypedMeasurement_for_Uint32.value<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*Flags flags.value= "<<(uint16_t)b->tTypedMeasurement_for_Uint32.mMeasurement.flags.value<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*DNPTime timeDNPTime.value= "<<(uint32_t)b->tTypedMeasurement_for_Uint32.mMeasurement.timeDNPTime_in_Measurement.value<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*DNPTime timeDNPTime.quality= "<<(uint32_t)b->tTypedMeasurement_for_Uint32.mMeasurement.timeDNPTime_in_Measurement.quality<<'\n';
}

void inspect_RSeq(RSeq_for_Uint16_t *buffer)
{
 if(!buffer) return;
  std::cout<<"+"<<getString_stack_info();
  std::cout<<"**inspect_RSeq**"<<'\n';
  std::cout<<"+"<<getString_stack_info();
  std::cout<<"@*buffer->buffer_[i]= "<<(uint32_t)&(buffer->buffer_[0])<<"<-";
  for(int i=0; i<length_in_HasLength_for_Uint16_t(&(buffer->hHasLength)); i++)
 {
  std::cout<<" "<<std::hex<<(uint16_t)buffer->buffer_[i]<<std::dec;
 }//for
 std::cout<<'\n';
}

void inspect_Message(Message *b)
{
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"**inspect_Message**"<<'\n';
  inspect_Addresses(&(b->addresses));
  inspect_RSeq(&(b->payload));
}

void inspect_Addresses(Addresses *b)
{
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"**inspect_Addresses**"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*uint16_t source= "<<(uint16_t)b->source<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*uint16_t destination= "<<(uint16_t)b->destination<<'\n';
}

void inspect_APDUHeader(APDUHeader *b)
{
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"**inspect_APDUHeader**"<<'\n';
  inspect_AppControlField(&(b->control));
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*FunctionCode_uint8_t function= "<<(uint16_t)b->function<<'\n';
}

void inspect_AppControlField(AppControlField *b)
{
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"**inspect_AppControlField**"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*boolean FIR= "<<(uint16_t)b->FIR<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*boolean FIN= "<<(uint16_t)b->FIN<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*boolean CON= "<<(uint16_t)b->CON<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*boolean UNS= "<<(uint16_t)b->UNS<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*uint8_t SEQ= "<<(uint16_t)b->SEQ<<'\n';
}

void inspect_ParsedRequest(ParsedRequest *b)
{
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"**inspect_ParsedRequest**"<<'\n';
  inspect_Addresses(&(b->addresses));
  inspect_APDUHeader(&(b->header));
  inspect_RSeq(&(b->objects));
}

void inspect_Range(Range *b)
{
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"**inspect_Range**"<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*uint16_t start= "<<(uint16_t)b->start<<'\n';
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"@*uint16_t stop= "<<(uint16_t)b->stop<<'\n';
}


