
#include "log_info.h"

#include "header_dnp3.h"
#include "LinkParserMrzs.h"
#include <string.h>
/*
void  LinkParserTest_in_LinkParserTest(LinkParserTest *pLinkParserTest, boolean aImmediate)// = false)
{
  UNUSED(aImmediate);
//// : log(), sink(), parser(log.logger) {}
  MockFrameSink_in_MockFrameSink(&(pLinkParserTest->sink));
  LinkLayerParser_in_LinkLayerParser(&(pLinkParserTest->parser));//const Logger& logger);
}

void WriteData_in_LinkParserTestOver1(LinkParserTest *pLinkParserTest, RSeq_for_Uint16_t* input)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"{WriteData_in_LinkParserTestOver1_1"<<'\n';
#endif
//WSeq_for_Uint16_t WriteBuff_in_LinkLayerParser(LinkLayerParser *pLinkLayerParser);
////        auto buff = parser.WriteBuff();
  WSeq_for_Uint16_t buff = WriteBuff_in_LinkLayerParser(&(pLinkParserTest->parser));
////        assert(input.length() <= buff.length());
//    RSeq_for_Uint16_t copy_from_in_WSeq_for_Uint16_t(WSeq_for_Uint16_t *pWSeq_for_Uint16_t, RSeq_for_Uint16_t *src);
////        buff.copy_from(input);
  copy_from_in_WSeq_for_Uint16_t(&buff, input);
//    void OnRead_in_LinkLayerParser(LinkLayerParser *pLinkLayerParser, uint16_t numBytes, IFrameSink* sink);
////        parser.OnRead(input.length(), sink);

  OnRead_in_LinkLayerParser(&(pLinkParserTest->parser),
                            length_in_HasLength_for_Uint16_t(&(input->hHasLength)), &(pLinkParserTest->sink.iILinkSession.iIFrameSink));
#ifdef  LOG_INFO
  std::cout<<"}WriteData_in_LinkParserTestOver1__"<<'\n';
#endif
}
*/
void WriteData_in_LinkParserMrzsOver2(LinkLayerParser *pLinkLayerParser, MrzsFrameSink* mMrzsFrameSink, uint8_t *hex, uint16_t size_hex)////const std::string& hex)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"{WriteData_in_LinkParserMrzsOver2_1"<<'\n';
#endif
////        HexSequence hs(hex);
////        auto buff = parser.WriteBuff();
  WSeq_for_Uint16_t buff = WriteBuff_in_LinkLayerParser(pLinkLayerParser);
////        assert(hs.Size() <= buff.length());
////        memcpy(buff, hs, hs.Size());
  memcpy(buff.buffer_, hex, size_hex);
////        parser.OnRead(hs.Size(), sink);
  OnRead_in_LinkLayerParser(pLinkLayerParser,
                            size_hex, &(mMrzsFrameSink->iILinkSession.iIFrameSink));
#ifdef  LOG_INFO
  std::cout<<"}WriteData_in_LinkParserMrzsOver2__"<<'\n';
#endif
}
/*
void WriteData_in_LinkParserTestOver3(LinkParserTest *pLinkParserTest, uint8_t* input, uint16_t sz)//std::string& hex)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"{WriteData_in_LinkParserTestOver3_1"<<'\n';
#endif
////        HexSequence hs(hex);

//  HexSequence hs;
//  HexSequence_in_HexSequence(&hs, hex);

////        auto buff = parser.WriteBuff();

  WSeq_for_Uint16_t buff = WriteBuff_in_LinkLayerParser(&(pLinkParserTest->parser));

////        assert(hs.Size() <= buff.length());
////        memcpy(buff, hs, hs.Size());
//  memcpy(buff.buffer_, hex, size_hex);
//  RSeq_for_Uint16_t temp = ToRSeq_in_CopyableBuffer(&(hs.bByteStr.cCopyableBuffer));
//  uint16_t sz = Size_in_CopyableBuffer(&(hs.bByteStr.cCopyableBuffer));

//  memcpy(buff.buffer_, &(hs.bByteStr.cCopyableBuffer), sz);
  memcpy(buff.buffer_, input, sz);


////        parser.OnRead(hs.Size(), sink);
  OnRead_in_LinkLayerParser(&(pLinkParserTest->parser),
                            sz, &(pLinkParserTest->sink.iILinkSession.iIFrameSink));
#ifdef  LOG_INFO
  std::cout<<"}WriteData_in_LinkParserTestOver3__"<<'\n';
#endif
}
*/
/*
void WriteData_in_LinkParserTestOver1(LinkParserTest *pLinkParserTest, RSeq_for_Uint16_t* input)
{
//WSeq_for_Uint16_t WriteBuff_in_LinkLayerParser(LinkLayerParser *pLinkLayerParser);
////        auto buff = parser.WriteBuff();
  WSeq_for_Uint16_t buff = WriteBuff_in_LinkLayerParser(&(pLinkParserTest->parser));
////        assert(input.length() <= buff.length());
//    RSeq_for_Uint16_t copy_from_in_WSeq_for_Uint16_t(WSeq_for_Uint16_t *pWSeq_for_Uint16_t, RSeq_for_Uint16_t *src);
////        buff.copy_from(input);
  copy_from_in_WSeq_for_Uint16_t(&buff, input);
//    void OnRead_in_LinkLayerParser(LinkLayerParser *pLinkLayerParser, uint16_t numBytes, IFrameSink* sink);
////        parser.OnRead(input.length(), sink);

  OnRead_in_LinkLayerParser(&(pLinkParserTest->parser),
                            length_in_HasLength_for_Uint16_t(&(input->hHasLength)), &(pLinkParserTest->sink.iILinkSession.iIFrameSink));
}
*/
