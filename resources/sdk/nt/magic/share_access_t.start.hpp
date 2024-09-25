#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARE_ACCESS.OpenCount", open_count, 0x0, 0x20, true, 0xb289d50803c927ba)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARE_ACCESS.Readers", readers, 0x20, 0x20, true, 0x8b68abb1befeb677)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARE_ACCESS.Writers", writers, 0x40, 0x20, true, 0x17617a221aa710dd)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARE_ACCESS.Deleters", deleters, 0x60, 0x20, true, 0xb8b1aea9ff9afcf6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARE_ACCESS.SharedRead", shared_read, 0x80, 0x20, true, 0xce1685184107abb2)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARE_ACCESS.SharedWrite", shared_write, 0xa0, 0x20, true, 0xebb6d76971ac8a53)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARE_ACCESS.SharedDelete", shared_delete, 0xc0, 0x20, true, 0x5f4ba5df9921e233)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif