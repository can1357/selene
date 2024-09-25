#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "StreamDataReaderWriter.m_destinationContext", m_destination_context, 0x200, 0x20, true, 0x55e8e9a7725d23a7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "StreamDataReaderWriter.m_marshalFlags", m_marshal_flags, 0x220, 0x20, true, 0x4b38d0ab7436d457)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const bool), "StreamDataReaderWriter.m_canMarshal", m_can_marshal, 0x240, 0x8, true, 0x5c393d18d1192ed3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "StreamDataReaderWriter.m_pvDestinationContext", m_pv_destination_context, 0x280, 0x40, true, 0x80904924b57ab364)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif