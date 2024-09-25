#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.DbgEbp", dbg_ebp, 0x0, 0x20, true, 0xb4c42dad156fcf)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.DbgEip", dbg_eip, 0x20, 0x20, true, 0x25adc6a09c2b7e0b)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.DbgArgMark", dbg_arg_mark, 0x40, 0x20, true, 0x20523884361b60c8)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_X86_KTRAP_FRAME_BLUE.TempSegCs", temp_seg_cs, 0x60, 0x10, true, 0x48dcb3d6804be0be)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_X86_KTRAP_FRAME_BLUE.Logging", logging, 0x70, 0x8, true, 0x399de9038784d6ae)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_X86_KTRAP_FRAME_BLUE.FrameType", frame_type, 0x78, 0x8, true, 0x3735f558b9c5da9b)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.TempEsp", temp_esp, 0x80, 0x20, true, 0x5d0e783b8cfec430)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.Dr0", dr0, 0xa0, 0x20, true, 0x5fc4f57ab5a58b04)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.Dr1", dr1, 0xc0, 0x20, true, 0xf0bfd56bb3b67e19)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.Dr2", dr2, 0xe0, 0x20, true, 0xe6c53b25077032d4)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.Dr3", dr3, 0x100, 0x20, true, 0x3ad5204eb1f10d5f)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.Dr6", dr6, 0x120, 0x20, true, 0x259a963ec7692af7)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.Dr7", dr7, 0x140, 0x20, true, 0x9231c095bec0494)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.SegGs", seg_gs, 0x160, 0x20, true, 0x48677065f251bdfa)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.SegEs", seg_es, 0x180, 0x20, true, 0xfbd3198cf5a6afa4)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.SegDs", seg_ds, 0x1a0, 0x20, true, 0x1ddc07e07c095de1)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.Edx", edx, 0x1c0, 0x20, true, 0x53ee066088da164)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.Ecx", ecx, 0x1e0, 0x20, true, 0x36d087d2782e9e06)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.Eax", eax, 0x200, 0x20, true, 0x338c005af0bbe08e)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_X86_KTRAP_FRAME_BLUE.PreviousPreviousMode", previous_previous_mode, 0x220, 0x8, true, 0x7ebc86597e35e424)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_X86_KTRAP_FRAME_BLUE.EntropyQueueDpc", entropy_queue_dpc, 0x228, 0x8, true, 0xc7e9a8597b0af4b7)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.MxCsr", mx_csr, 0x240, 0x20, true, 0x4117d4114f2975a)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.ExceptionList", exception_list, 0x260, 0x20, true, 0x5278d14806b3b298)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.SegFs", seg_fs, 0x280, 0x20, true, 0xcb6cdbe0b072fac1)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.Edi", edi, 0x2a0, 0x20, true, 0x7e58301e2f3582b1)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.Esi", esi, 0x2c0, 0x20, true, 0x90b9fd90143b5871)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.Ebx", ebx, 0x2e0, 0x20, true, 0xb0a0ba5a9939d233)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.Ebp", ebp, 0x300, 0x20, true, 0xda490868f8c5f647)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.ErrCode", err_code, 0x320, 0x20, true, 0xc6c090f0998300cf)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.Eip", eip, 0x340, 0x20, true, 0x3ac5d194476a713)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.SegCs", seg_cs, 0x360, 0x20, true, 0x6dfa3dd5a1f84fd5)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.EFlags", e_flags, 0x380, 0x20, true, 0x6f382c2d2429a7c5)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.HardwareEsp", hardware_esp, 0x3a0, 0x20, true, 0x4979c7d6e7b9de2a)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.HardwareSegSs", hardware_seg_ss, 0x3c0, 0x20, true, 0x619b659d8892545)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.V86Es", v86_es, 0x3e0, 0x20, true, 0x3a239f593f93c455)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.V86Ds", v86_ds, 0x400, 0x20, true, 0xaa46579112cf8180)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.V86Fs", v86_fs, 0x420, 0x20, true, 0x30b5068624056336)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_X86_KTRAP_FRAME_BLUE.V86Gs", v86_gs, 0x440, 0x20, true, 0x7320288caef26ecf)
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
#define _m036
#define _m037
#endif