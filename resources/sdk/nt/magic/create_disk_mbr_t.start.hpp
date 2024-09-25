#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CREATE_DISK_MBR.Signature", signature, 0x0, 0x20, true, 0x6bf36f33fb7c20e3)
#else
#define _m00
#endif