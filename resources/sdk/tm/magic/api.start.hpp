#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TmShutdownSystem$ntoskrnl.exe", 0x0, 0x0, false, 0xe710703df794609f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TmCancelPropagationRequest$ntoskrnl.exe", 0x3cc560, 0x0, true, 0x58f1067ed3f56476)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::kenlistment_t*, int64_t*)>*), "$TmCommitComplete$ntoskrnl.exe", 0x3cc580, 0x0, true, 0xd72646530d63da78)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::kenlistment_t*, int64_t*)>*), "$TmCommitEnlistment$ntoskrnl.exe", 0x3cc5a0, 0x0, true, 0x2fa06529ecde9998)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::ktransaction_t*, uint8_t)>*), "$TmCommitTransaction$ntoskrnl.exe", 0x3cc5c0, 0x0, true, 0xcf29540ce7de49d1)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TmContainerExt$ntoskrnl.exe", 0xc04710, 0x0, true, 0x25636545ec1c9fa1)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(void**, char, uint32_t, struct nt::object_attributes_t*, struct nt::kresourcemanager_t*, struct nt::ktransaction_t*, uint32_t, uint32_t, void*)>*), "$TmCreateEnlistment$ntoskrnl.exe", 0x3cc5e0, 0x0, true, 0x8055f8166e6aa161)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TmCurrentTransaction$ntoskrnl.exe", 0x3cc600, 0x0, true, 0x62c776adb0c8525b)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::kenlistment_t*, uint8_t*)>*), "$TmDereferenceEnlistmentKey$ntoskrnl.exe", 0x3cc620, 0x0, true, 0x34d90284c6361948)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::kresourcemanager_t*, sdk::function<int32_t(struct nt::kenlistment_t*, void*, void*, uint32_t, int64_t*, uint32_t, void*)>*, void*)>*), "$TmEnableCallbacks$ntoskrnl.exe", 0x3cc640, 0x0, true, 0x82c00bebfd79b085)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TmEndPropagationRequest$ntoskrnl.exe", 0x3cc660, 0x0, true, 0x255b7c5cb302ae10)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TmEnlistmentObjectType$ntoskrnl.exe", 0xcfbc18, 0x0, true, 0x409c59b2ac20ab59)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TmFreezeTransactions$ntoskrnl.exe", 0x3cc680, 0x0, true, 0x1dca61937190e39a)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct nt::ktransaction_t*, struct nt::guid_t*)>*), "$TmGetTransactionId$ntoskrnl.exe", 0x3cc6a0, 0x0, true, 0x3ba7f121267727fc)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TmInitSystem$ntoskrnl.exe", 0x3cc0e0, 0x0, true, 0xe3b7b1cef8d3f3a1)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TmInitSystemPhase2$ntoskrnl.exe", 0x3cc0c0, 0x0, true, 0x47ccc8841032fa22)
#define _n6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::ktm_t*, const nt::unicode_view*, struct nt::guid_t*, uint32_t)>*), "$TmInitializeTransactionManager$ntoskrnl.exe", 0x3cc6c0, 0x0, true, 0x7c075fd3afa8a76f)
#define _n7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TmIsKTMCommitCoordinator$ntoskrnl.exe", 0x3cc6e0, 0x0, true, 0xc433dfcb36242a28)
#define _n8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::ktransaction_t*)>*), "$TmIsTransactionActive$ntoskrnl.exe", 0x3cc700, 0x0, true, 0x72b5902713bf2618)
#define _n9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TmLogExt$ntoskrnl.exe", 0xc01988, 0x0, true, 0x2600e3a1cb3da556)
#define _o0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::kenlistment_t*, int64_t*)>*), "$TmPrePrepareComplete$ntoskrnl.exe", 0x3cc720, 0x0, true, 0x3ff8c3dc3945e5e9)
#define _o1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::kenlistment_t*, int64_t*)>*), "$TmPrePrepareEnlistment$ntoskrnl.exe", 0x3cc740, 0x0, true, 0xa05738f616b44568)
#define _o2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::kenlistment_t*, int64_t*)>*), "$TmPrepareComplete$ntoskrnl.exe", 0x3cc760, 0x0, true, 0x57658002c7a8eef4)
#define _o3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::kenlistment_t*, int64_t*)>*), "$TmPrepareEnlistment$ntoskrnl.exe", 0x3cc780, 0x0, true, 0xe78bfb4660b08f39)
#define _o4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::kresourcemanager_t*, uint32_t, uint32_t, void*)>*), "$TmPropagationComplete$ntoskrnl.exe", 0x3cc7a0, 0x0, true, 0x8840247049e1cf4c)
#define _o5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::kresourcemanager_t*, uint32_t, int32_t)>*), "$TmPropagationFailed$ntoskrnl.exe", 0x3cc7c0, 0x0, true, 0x117ff57a8d64ab65)
#define _o6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::kenlistment_t*, int64_t*)>*), "$TmReadOnlyEnlistment$ntoskrnl.exe", 0x3cc7e0, 0x0, true, 0x40b595066b2c5c2e)
#define _o7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::kenlistment_t*, void*)>*), "$TmRecoverEnlistment$ntoskrnl.exe", 0x3cc800, 0x0, true, 0x7b64030047af6d6f)
#define _o8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::kresourcemanager_t*)>*), "$TmRecoverResourceManager$ntoskrnl.exe", 0x3cc820, 0x0, true, 0xbf0b157a4cef7b87)
#define _o9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::ktm_t*, int64_t*)>*), "$TmRecoverTransactionManager$ntoskrnl.exe", 0x3cc840, 0x0, true, 0xb9000b83d307bafc)
#define _p0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::kenlistment_t*, void**)>*), "$TmReferenceEnlistmentKey$ntoskrnl.exe", 0x3cc860, 0x0, true, 0x2918b70b36f2d390)
#define _p1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(nt::unicode_view*, struct nt::guid_t*)>*), "$TmRenameTransactionManager$ntoskrnl.exe", 0x3cc880, 0x0, true, 0xd70f20ae63849599)
#define _p2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::kenlistment_t*, int64_t*)>*), "$TmRequestOutcomeEnlistment$ntoskrnl.exe", 0x3cc8a0, 0x0, true, 0xb4b332579eb85b23)
#define _p3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TmResourceManagerObjectType$ntoskrnl.exe", 0xcfbaf0, 0x0, true, 0xffad2fe99dfbbb53)
#define _p4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::kenlistment_t*, int64_t*)>*), "$TmRollbackComplete$ntoskrnl.exe", 0x3cc8c0, 0x0, true, 0x852864801aea889c)
#define _p5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::kenlistment_t*, int64_t*)>*), "$TmRollbackEnlistment$ntoskrnl.exe", 0x3cc8e0, 0x0, true, 0x65566da6755b1673)
#define _p6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::ktransaction_t*, uint8_t)>*), "$TmRollbackTransaction$ntoskrnl.exe", 0x3cc900, 0x0, true, 0xcf3d5eb29d8f5693)
#define _p7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TmSetCurrentTransaction$ntoskrnl.exe", 0x3cc920, 0x0, true, 0x12447fc38a40e602)
#define _p8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct nt::kenlistment_t*, int64_t*)>*), "$TmSinglePhaseReject$ntoskrnl.exe", 0x3cc940, 0x0, true, 0xc35ac252146b5d34)
#define _p9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TmThawTransactions$ntoskrnl.exe", 0x3cc960, 0x0, true, 0xdaafe3d754da44d5)
#define _q0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TmTransactionManagerObjectType$ntoskrnl.exe", 0xcfbae8, 0x0, true, 0x67f00642b3d53f6a)
#define _q1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TmTransactionObjectType$ntoskrnl.exe", 0xcfb780, 0x0, true, 0x8f725753c5d759d5)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#define _n0(...) __VA_ARGS__
#define _n1(...) __VA_ARGS__
#define _n2(...) __VA_ARGS__
#define _n3(...) __VA_ARGS__
#define _n4(...) __VA_ARGS__
#define _n5(...) __VA_ARGS__
#define _n6(...) __VA_ARGS__
#define _n7(...) __VA_ARGS__
#define _n8(...) __VA_ARGS__
#define _n9(...) __VA_ARGS__
#define _o0(...) __VA_ARGS__
#define _o1(...) __VA_ARGS__
#define _o2(...) __VA_ARGS__
#define _o3(...) __VA_ARGS__
#define _o4(...) __VA_ARGS__
#define _o5(...) __VA_ARGS__
#define _o6(...) __VA_ARGS__
#define _o7(...) __VA_ARGS__
#define _o8(...) __VA_ARGS__
#define _o9(...) __VA_ARGS__
#define _p0(...) __VA_ARGS__
#define _p1(...) __VA_ARGS__
#define _p2(...) __VA_ARGS__
#define _p3(...) __VA_ARGS__
#define _p4(...) __VA_ARGS__
#define _p5(...) __VA_ARGS__
#define _p6(...) __VA_ARGS__
#define _p7(...) __VA_ARGS__
#define _p8(...) __VA_ARGS__
#define _p9(...) __VA_ARGS__
#define _q0(...) __VA_ARGS__
#define _q1(...) __VA_ARGS__
#endif