#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_CSQ.Type", type, 0x0, 0x20, true, 0x72c96a7644ad8291)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct io::csq_t*, struct nt::irp_t*)>*), "_IO_CSQ.CsqInsertIrp", csq_insert_irp, 0x40, 0x40, true, 0x98c259bc0d514f1d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct io::csq_t*, struct nt::irp_t*)>*), "_IO_CSQ.CsqRemoveIrp", csq_remove_irp, 0x80, 0x40, true, 0x414e3280d9ea2cbb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pio_csq_peek_next_irp_t ), "_IO_CSQ.CsqPeekNextIrp", csq_peek_next_irp, 0xc0, 0x40, true, 0xa0caf1d4c67a192)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pio_csq_acquire_lock_t ), "_IO_CSQ.CsqAcquireLock", csq_acquire_lock, 0x100, 0x40, true, 0x380fdb20e52d2d7c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct io::csq_t*, uint8_t)>*), "_IO_CSQ.CsqReleaseLock", csq_release_lock, 0x140, 0x40, true, 0xa0ae46e739b3d79d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct io::csq_t*, struct nt::irp_t*)>*), "_IO_CSQ.CsqCompleteCanceledIrp", csq_complete_canceled_irp, 0x180, 0x40, true, 0x21950f0e861598e9)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_CSQ.ReservePointer", reserve_pointer, 0x1c0, 0x40, true, 0xadbe9ef1ec67b252)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif