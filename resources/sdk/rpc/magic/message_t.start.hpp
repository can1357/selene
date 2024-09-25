#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_MESSAGE.Handle", handle, 0x0, 0x40, true, 0x1b214037c636adea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_MESSAGE.DataRepresentation", data_representation, 0x40, 0x20, true, 0xc319ca680683c652)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_MESSAGE.Buffer", buffer, 0x80, 0x40, true, 0xa5d94ed5e15bd349)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_MESSAGE.BufferLength", buffer_length, 0xc0, 0x20, true, 0x1b762b2f33330385)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_MESSAGE.ProcNum", proc_num, 0xe0, 0x20, true, 0x6da6092445a0e71f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::syntax_identifier_t*), "_RPC_MESSAGE.TransferSyntax", transfer_syntax, 0x100, 0x40, true, 0xc6da43637f2e355d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_MESSAGE.RpcInterfaceInformation", rpc_interface_information, 0x140, 0x40, true, 0x161821dad7c8ba32)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_MESSAGE.ReservedForRuntime", reserved_for_runtime, 0x180, 0x40, true, 0xd4d0649f87b7afdb)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_MESSAGE.ManagerEpv", manager_epv, 0x1c0, 0x40, true, 0xf8072c1b40b37a40)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_MESSAGE.ImportContext", import_context, 0x200, 0x40, true, 0x834350b87528cb81)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_MESSAGE.RpcFlags", rpc_flags, 0x240, 0x20, true, 0xf6d246e0df21afb7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif