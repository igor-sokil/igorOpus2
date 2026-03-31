#ifndef OPENDNP3_EVENTWRITERS_H
#define OPENDNP3_EVENTWRITERS_H

#include "IEventWriteHandler.h"
#include "DNP3Serializer.h"
#include "HeaderWriter_for_OctetString.h"
#include "OctetStringSerializer.h"
#include "PrefixedWriteIterator_for_OctetString.h"

////class OctetStringEventWriter : public IEventWriter<OctetString>
typedef struct
{
  IEventWriter_for_OctetString iIEventWriter_for_OctetString;
  OctetStringSerializer serializer;
////    PrefixedWriteIterator<ser4cpp::UInt16, OctetString> iterator;
  PrefixedWriteIterator_for_UInt16_OctetString iterator;

////public:
////    OctetStringEventWriter(HeaderWriter& writer, uint8_t size)
////        : serializer(true, size),
////          iterator(
////              writer.IterateOverCountWithPrefix<ser4cpp::UInt16>(QualifierCode::UINT16_CNT_UINT16_INDEX, serializer))
////    {
////    }

////    bool Write(const OctetString& meas, uint16_t index) override
////    {
////        if (meas.Size() != this->serializer.get_size())
////            return false;

////        return iterator.Write(meas, index);
////    }
} OctetStringEventWriter;

uint16_t Write_for_OctetString_in_EventWriters_static(uint8_t firstSize, HeaderWriter* writer, IEventCollection_for_OctetString* items);
void  OctetStringEventWriter_in_OctetStringEventWriter(OctetStringEventWriter *pOctetStringEventWriter, HeaderWriter* writer, uint8_t size);
boolean Write_in_OctetStringEventWriter_for_OctetString_override(void *pIEventWriter_for_OctetString, OctetString* meas, uint16_t index);

#endif
