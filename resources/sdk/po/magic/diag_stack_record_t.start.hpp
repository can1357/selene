#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_DIAG_STACK_RECORD.StackDepth", stack_depth, 0x0, 0x20, true, 0xb655f6ca83520cb0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 1>), "_PO_DIAG_STACK_RECORD.Stack", stack, 0x40, 0x40, true, 0xb4e397ca4572a07c)
#else
#define _m00
#define _m01
#endif