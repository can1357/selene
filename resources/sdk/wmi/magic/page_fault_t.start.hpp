#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_PAGE_FAULT.VirtualAddress", virtual_address, 0x0, 0x40, true, 0xbf0da2b6ecb71360)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_PAGE_FAULT.ProgramCounter", program_counter, 0x40, 0x40, true, 0xacf66b77b47b060)
#else
#define _m00
#define _m01
#endif