#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const bool), "WinrtAsyncProxyCall._inproc", inproc, 0x300, 0x8, true, 0x65365d5689161ed9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::which_transfer_syntax_t), "WinrtAsyncProxyCall._whichTransferSyntax", which_transfer_syntax, 0x320, 0x20, true, 0x5a977b24c29b900c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "WinrtAsyncProxyCall._successfullySentRequest", successfully_sent_request, 0x3c0, 0x8, true, 0xd7a10a549a2babcb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WinrtAsyncProxyCall._serverStubDataLength", server_stub_data_length, 0x480, 0x20, true, 0x7b4d3e6733895247)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "WinrtAsyncProxyCall._serverOperationObjectIsAgile", server_operation_object_is_agile, 0x540, 0x8, true, 0x24ea43d805f49472)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "WinrtAsyncProxyCall._facadeSequenceNumber", facade_sequence_number, 0x560, 0x20, true, 0xa17aecf9228ed2d8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif