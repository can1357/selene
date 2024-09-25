#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ROOT_ERROR_STATUS.CorrectableErrorReceived", correctable_error_received, 0x0, 0x1, true, 0x64a7c333a4c9e75, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ROOT_ERROR_STATUS.MultipleCorrectableErrorsReceived", multiple_correctable_errors_received, 0x1, 0x1, true, 0xb1a774e51fb22e8b, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ROOT_ERROR_STATUS.UncorrectableErrorReceived", uncorrectable_error_received, 0x2, 0x1, true, 0x64932a3284ff1786, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ROOT_ERROR_STATUS.MultipleUncorrectableErrorsReceived", multiple_uncorrectable_errors_received, 0x3, 0x1, true, 0xd776273982c05eab, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ROOT_ERROR_STATUS.FirstUncorrectableFatal", first_uncorrectable_fatal, 0x4, 0x1, true, 0xd78fa83a19e7ab9f, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ROOT_ERROR_STATUS.NonFatalErrorMessagesReceived", non_fatal_error_messages_received, 0x5, 0x1, true, 0x2a64fadcb1710d25, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ROOT_ERROR_STATUS.FatalErrorMessagesReceived", fatal_error_messages_received, 0x6, 0x1, true, 0xb7191d9b0ceeaf41, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_EXPRESS_ROOT_ERROR_STATUS.AdvancedErrorInterruptMessageNumber", advanced_error_interrupt_message_number, 0x1b, 0x5, true, 0x722c65f6b00d2bf3, 5, uint32_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_ROOT_ERROR_STATUS.AsULONG", as_ulong, 0x0, 0x20, true, 0x115b50057e32a976)
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
#endif