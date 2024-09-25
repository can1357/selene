#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::memory_frame_information_t), "_MMPFN_IDENTITY.e1", e1, 0x0, 0x40, true, 0x5c30d836751936ab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::fileoffset_information_t), "_MMPFN_IDENTITY.e2", e2, 0x0, 0x40, true, 0x96817f5cfffe46f6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::pagedir_information_t), "_MMPFN_IDENTITY.e3", e3, 0x0, 0x40, true, 0x92b5deb656064504)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::unique_process_information_t), "_MMPFN_IDENTITY.e4", e4, 0x0, 0x40, true, 0x4798b7eb64085168)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMPFN_IDENTITY.PageFrameIndex", page_frame_index, 0x40, 0x40, true, 0xc074e0b6bbcbe2f7)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPFN_IDENTITY.u2.Image", image, 0x0, 0x1, true, 0x3b8bc120a8638d20, 1, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPFN_IDENTITY.u2.Mismatch", mismatch, 0x1, 0x1, true, 0xddbaa98655bc7dfd, 1, uint64_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPFN_IDENTITY.u2.CombinedPage", combined_page, 0x0, 0x1, true, 0x5cd96ce5853e60a9, 1, uint64_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMPFN_IDENTITY.u2.FileObject", file_object, 0x0, 0x40, true, 0xba28bbb551f0937c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMPFN_IDENTITY.u2.UniqueFileObjectKey", unique_file_object_key, 0x0, 0x40, true, 0x9c8bc9d551f00909)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMPFN_IDENTITY.u2.ProtoPteAddress", proto_pte_address, 0x0, 0x40, true, 0x7c2778ea1b973e02)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMPFN_IDENTITY.u2.VirtualAddress", virtual_address, 0x0, 0x40, true, 0x135f212b3ff0ba8)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_u2_t), "_MMPFN_IDENTITY.u2", u2, 0x80, 0x40, true, 0x4b90bf32750498b)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPFN_IDENTITY.Image", image, 0x0, 0x0, false, 0x83500d3415e0a26f, 1, uint64_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPFN_IDENTITY.Mismatch", mismatch, 0x0, 0x0, false, 0x5c7c34ec4e76804d, 1, uint64_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPFN_IDENTITY.CombinedPage", combined_page, 0x0, 0x0, false, 0x7a6de259c1e08528, 1, uint64_t)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMPFN_IDENTITY.FileObject", file_object, 0x0, 0x0, false, 0xc0310b8c4f6f77be)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMPFN_IDENTITY.UniqueFileObjectKey", unique_file_object_key, 0x0, 0x0, false, 0x94df482ec430b965)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMPFN_IDENTITY.ProtoPteAddress", proto_pte_address, 0x0, 0x0, false, 0x537a57c9133154c9)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMPFN_IDENTITY.VirtualAddress", virtual_address, 0x0, 0x0, false, 0xad204f56fbc20a0f)
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
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#endif