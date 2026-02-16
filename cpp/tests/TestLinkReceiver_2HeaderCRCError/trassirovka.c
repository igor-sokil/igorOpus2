********SUITE('2HeaderCRCError')********
***SIMPLE_LOG_BLOCK(logger, flags::WARN, 'CRC failure in header')***
REQUIRE(t.sink.m_num_frames == 0)
t.sink.m_num_frames=  0
REQUIRE(t.parser.Statistics().numHeaderCrcError == 1)
t.parser.Statistics().numHeaderCrcError=  1
