

#ifndef OPENDNP3_UNITTESTS_LINK_PARSER_MRZS_H
#define OPENDNP3_UNITTESTS_LINK_PARSER_MRZS_H

////#include "utils/BufferHelpers.h"

////#include <opendnp3/logging/LogLevels.h>

////#include "dnp3mocks/MockFrameSink.h"
////#include "dnp3mocks/MockLogHandler.h"

////#include <link/LinkLayerParser.h>

////#include <cassert>
////#include <cstring>

#include "MrzsFrameSink.h"
#include "LinkLayerParser.h"
/*
////class LinkParserTest
typedef struct
{
////public:
////    LinkParserTest(bool aImmediate = false) : log(), sink(), parser(log.logger) {}

////    void WriteData(const ser4cpp::rseq_t& input)
////    {
////        auto buff = parser.WriteBuff();
////        assert(input.length() <= buff.length());
////        buff.copy_from(input);
////        parser.OnRead(input.length(), sink);
////    }

////    void WriteData(const std::string& hex)
////    {
////        HexSequence hs(hex);
////        auto buff = parser.WriteBuff();
////        assert(hs.Size() <= buff.length());
////        memcpy(buff, hs, hs.Size());
////        parser.OnRead(hs.Size(), sink);
////    }

////    MockLogHandler log;
//  MockFrameSink sink;
  LinkLayerParser parser;
} LinkParserTest;
*/
//void LinkParserTest_in_LinkParserTest(LinkParserTest *pLinkParserTest, boolean aImmediate);// = false)
//void WriteData_in_LinkParserTestOver1(LinkParserTest *pLinkParserTest, RSeq_for_Uint16_t* input);
void WriteData_in_LinkParserMrzsOver2(LinkLayerParser *, MrzsFrameSink*, uint8_t *hex, uint16_t size_hex);////const std::string& hex)
//void WriteData_in_LinkParserTestOver3(LinkParserTest *pLinkParserTest, std::string& hex);
//void WriteData_in_LinkParserTestOver3(LinkParserTest *pLinkParserTest, uint8_t* input, uint16_t sz);

#endif
