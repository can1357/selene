#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CancelPendingUpdates@CFlipResourceState$dxgkrnl.sys", 0x1b250, 0x0, true, 0xe89405ce6e04f54c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CommitPendingUpdates@CFlipResourceState$dxgkrnl.sys", 0x69b10, 0x0, true, 0x36d0a9493ac41e77)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CFlipResourceState@@MEAA@XZ$dxgkrnl.sys", 0x694dc, 0x0, true, 0x465342470ed07dea)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Remarshal@CFlipResourceState$dxgkrnl.sys", 0x6aa00, 0x0, true, 0x8f097deb6fc935b9)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Remove@CFlipResourceState$dxgkrnl.sys", 0x6aa70, 0x0, true, 0x2b84f65ac354e632)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif