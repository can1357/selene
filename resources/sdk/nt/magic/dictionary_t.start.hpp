#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DICTIONARY.Signature", signature, 0x0, 0x40, true, 0x52140c6d7075e32c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::dictionary_header_t*), "_DICTIONARY.List", list, 0x40, 0x40, true, 0x415b78c54de13e41)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DICTIONARY.SpinLock", spin_lock, 0x80, 0x40, true, 0x28b2e0e458197b57)
#else
#define _m00
#define _m01
#define _m02
#endif