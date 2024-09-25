#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::suuid_hash_node_t), "SOIDRegistration.Node", node, 0x0, 0x0, true, 0xccdebffdd8258feb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "SOIDRegistration.cRefs", c_refs, 0x100, 0x10, true, 0x76399b73c9f54625)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "SOIDRegistration.flags", flags, 0x110, 0x10, true, 0xb93cd112e51b80e5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "SOIDRegistration.mid", mid, 0x140, 0x40, true, 0x9e07559d04715ed1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "SOIDRegistration.oxid", oxid, 0x180, 0x40, true, 0xfaaf5ec0f9dccdce)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::soid_registration_t*), "SOIDRegistration.pPrevList", p_prev_list, 0x1c0, 0x40, true, 0xf21ec711e809ac2d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::soid_registration_t*), "SOIDRegistration.pNextList", p_next_list, 0x200, 0x40, true, 0xa05eaf7afe3f0512)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ref_cache_t*), "SOIDRegistration.pRefCache", p_ref_cache, 0x240, 0x40, true, 0xf10047417a374a27)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "SOIDRegistration.isFastRundown", is_fast_rundown, 0x280, 0x8, true, 0x8a28984f9269489b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "SOIDRegistration.isRundownObjectOfInterest", is_rundown_object_of_interest, 0x288, 0x8, true, 0xfcc657961b1ccd0)
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
#endif