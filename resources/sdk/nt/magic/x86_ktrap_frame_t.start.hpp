#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.DbgEbp", dbg_ebp, 0x0, 0x20, true, 0xf9d196f767f4bf33)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.DbgEip", dbg_eip, 0x20, 0x20, true, 0x4a37c728a35abf66)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.DbgArgMark", dbg_arg_mark, 0x40, 0x20, true, 0x1fe7503ceb444aaa)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.DbgArgPointer", dbg_arg_pointer, 0x60, 0x20, true, 0x62f05138331ec98b)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.TempSegCs", temp_seg_cs, 0x80, 0x20, true, 0x15e5c9c2acfae437)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.TempEsp", temp_esp, 0xa0, 0x20, true, 0x35e74725e70daf14)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.Dr0", dr0, 0xc0, 0x20, true, 0x87d6402fce2a54bd)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.Dr1", dr1, 0xe0, 0x20, true, 0xa3bb28356a09d3d6)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.Dr2", dr2, 0x100, 0x20, true, 0x93e2d6a8f644668a)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.Dr3", dr3, 0x120, 0x20, true, 0x241d282d3757e6d5)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.Dr6", dr6, 0x140, 0x20, true, 0x5cebfa32d9efab7c)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.Dr7", dr7, 0x160, 0x20, true, 0x185cf373cd9e044e)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.SegGs", seg_gs, 0x180, 0x20, true, 0x10c14d68d78754e8)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.SegEs", seg_es, 0x1a0, 0x20, true, 0x4822c47e13127d33)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.SegDs", seg_ds, 0x1c0, 0x20, true, 0x9100734842213cf8)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.Edx", edx, 0x1e0, 0x20, true, 0xc01aeddb90fdc687)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.Ecx", ecx, 0x200, 0x20, true, 0xd59a46735e747c04)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.Eax", eax, 0x220, 0x20, true, 0x4be81ba8895f55)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_X86_KTRAP_FRAME.PreviousPreviousMode", previous_previous_mode, 0x240, 0x8, true, 0x452e838cefd05e53)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_X86_KTRAP_FRAME.EntropyQueueDpc", entropy_queue_dpc, 0x248, 0x8, true, 0x15d6afb91e1597ed)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.ExceptionList", exception_list, 0x260, 0x20, true, 0x8ec45ebd755da404)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.SegFs", seg_fs, 0x280, 0x20, true, 0xb8e69ff58736d48c)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.Edi", edi, 0x2a0, 0x20, true, 0xa5b6e6d90ee5f04b)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.Esi", esi, 0x2c0, 0x20, true, 0x4e6cff250bce5c52)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.Ebx", ebx, 0x2e0, 0x20, true, 0x3f6bd6d72f5421a9)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.Ebp", ebp, 0x300, 0x20, true, 0xaaa40b4c141464fa)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.ErrCode", err_code, 0x320, 0x20, true, 0xb9e93cea98f7477a)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.Eip", eip, 0x340, 0x20, true, 0x7add9a126ba5079f)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.SegCs", seg_cs, 0x360, 0x20, true, 0x2506f3f9da6b3157)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.EFlags", e_flags, 0x380, 0x20, true, 0xe009257144e9cf61)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.HardwareEsp", hardware_esp, 0x3a0, 0x20, true, 0x77249f1a30f9a90c)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.HardwareSegSs", hardware_seg_ss, 0x3c0, 0x20, true, 0x75940bb30519f6b0)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.V86Es", v86_es, 0x3e0, 0x20, true, 0xf54bf2320d395278)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.V86Ds", v86_ds, 0x400, 0x20, true, 0xedef1534a27c8dba)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.V86Fs", v86_fs, 0x420, 0x20, true, 0xb86e668e505da4f2)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME.V86Gs", v86_gs, 0x440, 0x20, true, 0x266ea0b2008fc3f6)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#endif