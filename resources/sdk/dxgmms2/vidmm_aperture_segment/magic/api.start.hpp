#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BeginTemporaryResourceAccess@VIDMM_APERTURE_SEGMENT$dxgmms2.sys", 0xc40a0, 0x0, true, 0x20951b5709e9f8d1)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EndTemporaryResourceAccess@VIDMM_APERTURE_SEGMENT$dxgmms2.sys", 0xc4190, 0x0, true, 0xf1aa13df3f5b079d)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MapPagesIntoAperture@VIDMM_APERTURE_SEGMENT$dxgmms2.sys", 0xc4b10, 0x0, true, 0x33b81ebe37a4b77d)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnmapPagesFromAperture@VIDMM_APERTURE_SEGMENT$dxgmms2.sys", 0xc5600, 0x0, true, 0xe0f7323840d83709)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT$dxgmms2.sys", 0xc5890, 0x0, true, 0x49753437be367650)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CheckForApertureGuardPageCorruption@VIDMM_APERTURE_SEGMENT$dxgmms2.sys", 0x28134, 0x0, true, 0xea2d5d4f09792a23)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CommitResource@VIDMM_APERTURE_SEGMENT$dxgmms2.sys", 0x93e90, 0x0, true, 0x2522736185e55bee)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1VIDMM_APERTURE_SEGMENT@@UEAA@XZ$dxgmms2.sys", 0xc4050, 0x0, true, 0x785b5c1fe1386840)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EvictResource@VIDMM_APERTURE_SEGMENT$dxgmms2.sys", 0xc4210, 0x0, true, 0xc86f43848e92f665)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FreeGuardPages@VIDMM_APERTURE_SEGMENT$dxgmms2.sys", 0xc46f0, 0x0, true, 0x38df01ad588c42ff)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Init@VIDMM_APERTURE_SEGMENT$dxgmms2.sys", 0x8d590, 0x0, true, 0x192f24b5c0c6857e)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeGuardPages@VIDMM_APERTURE_SEGMENT$dxgmms2.sys", 0x8d65c, 0x0, true, 0xa4e713d36518464e)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockAllocationRange@VIDMM_APERTURE_SEGMENT$dxgmms2.sys", 0xc4770, 0x0, true, 0x53c918152c1d2ae9)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MapApertureRange@VIDMM_APERTURE_SEGMENT$dxgmms2.sys", 0x941c0, 0x0, true, 0x2a0be9d2b73e27d5)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MapPagingBuffer@VIDMM_APERTURE_SEGMENT$dxgmms2.sys", 0xc4c00, 0x0, true, 0xa59263311f24522c)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MapTemporaryResource@VIDMM_APERTURE_SEGMENT$dxgmms2.sys", 0xc4cc8, 0x0, true, 0x753393c1bebfc536)
#define _n6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT$dxgmms2.sys", 0xc4e60, 0x0, true, 0xa9cb4c4a6dab3c48)
#define _n7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT$dxgmms2.sys", 0xc4fe0, 0x0, true, 0x3bb82f98999433ab)
#define _n8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RestoreFromPurge@VIDMM_APERTURE_SEGMENT$dxgmms2.sys", 0xc5170, 0x0, true, 0xb5784da46ce2e6f4)
#define _n9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnlockAllocationRange@VIDMM_APERTURE_SEGMENT$dxgmms2.sys", 0xc52e0, 0x0, true, 0xc96ab7f94e92105c)
#define _o0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnmapApertureRange@VIDMM_APERTURE_SEGMENT$dxgmms2.sys", 0xc54f0, 0x0, true, 0xccd78c0edb087151)
#define _o1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnmapPagingBuffer@VIDMM_APERTURE_SEGMENT$dxgmms2.sys", 0xc5670, 0x0, true, 0xf12c6d35880935e)
#define _o2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnmapTemporaryResource@VIDMM_APERTURE_SEGMENT$dxgmms2.sys", 0xc5710, 0x0, true, 0xc4cc64d9ed8d113d)
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
#endif