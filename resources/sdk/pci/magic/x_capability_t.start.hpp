#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::capabilities_header_t), "PCI_X_CAPABILITY.Header", header, 0x0, 0x10, true, 0x81ab627627a2bde8)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PCI_X_CAPABILITY.Command.bits.DataParityErrorRecoveryEnable", data_parity_error_recovery_enable, 0x0, 0x1, true, 0xf92e2435a899826c, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PCI_X_CAPABILITY.Command.bits.EnableRelaxedOrdering", enable_relaxed_ordering, 0x1, 0x1, true, 0x876018f4309a9bf6, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "PCI_X_CAPABILITY.Command.bits.MaxMemoryReadByteCount", max_memory_read_byte_count, 0x2, 0x2, true, 0x4742943440fb6495, 2, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "PCI_X_CAPABILITY.Command.bits.MaxOutstandingSplitTransactions", max_outstanding_split_transactions, 0x4, 0x3, true, 0x22aae8e512c389dd, 3, uint16_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_bits_t), "PCI_X_CAPABILITY.Command.bits", bits, 0x0, 0x10, true, 0xebd56f4ff4d75b95)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "PCI_X_CAPABILITY.Command.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x23cb45fcd59dd96)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_command_t), "PCI_X_CAPABILITY.Command", command, 0x10, 0x10, true, 0x8e5f342766d491c7)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "PCI_X_CAPABILITY.Status.bits.FunctionNumber", function_number, 0x0, 0x3, true, 0x1ef14ee42a9c55c, 3, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "PCI_X_CAPABILITY.Status.bits.DeviceNumber", device_number, 0x3, 0x5, true, 0xfdbc352f2305e09d, 5, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "PCI_X_CAPABILITY.Status.bits.BusNumber", bus_number, 0x8, 0x8, true, 0xe35e695a8859d0ab, 8, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PCI_X_CAPABILITY.Status.bits.Device64Bit", device64_bit, 0x10, 0x1, true, 0x30f190c004bfe099, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PCI_X_CAPABILITY.Status.bits.Capable133MHz", capable133m_hz, 0x11, 0x1, true, 0x60b814bb2671c25, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PCI_X_CAPABILITY.Status.bits.SplitCompletionDiscarded", split_completion_discarded, 0x12, 0x1, true, 0x1b442adb755f70d7, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PCI_X_CAPABILITY.Status.bits.UnexpectedSplitCompletion", unexpected_split_completion, 0x13, 0x1, true, 0xb7d01f897650f5d9, 1, uint32_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PCI_X_CAPABILITY.Status.bits.DeviceComplexity", device_complexity, 0x14, 0x1, true, 0xc242fc8cf908bc1f, 1, uint32_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "PCI_X_CAPABILITY.Status.bits.DesignedMaxMemoryReadByteCount", designed_max_memory_read_byte_count, 0x15, 0x2, true, 0x367278ff10e99423, 2, uint32_t)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "PCI_X_CAPABILITY.Status.bits.DesignedMaxOutstandingSplitTransactions", designed_max_outstanding_split_transactions, 0x17, 0x3, true, 0xecf981dafc66303f, 3, uint32_t)
#define _m18 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "PCI_X_CAPABILITY.Status.bits.DesignedMaxCumulativeReadSize", designed_max_cumulative_read_size, 0x1a, 0x3, true, 0xab7cacb61431a0c2, 3, uint32_t)
#define _m19 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PCI_X_CAPABILITY.Status.bits.ReceivedSplitCompletionErrorMessage", received_split_completion_error_message, 0x1d, 0x1, true, 0x36ae1b2681620815, 1, uint32_t)
#define _m20 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PCI_X_CAPABILITY.Status.bits.CapablePCIX266", capable_pcix266, 0x1e, 0x1, true, 0xa21b933c135d2d00, 1, uint32_t)
#define _m21 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PCI_X_CAPABILITY.Status.bits.CapablePCIX533", capable_pcix533, 0x1f, 0x1, true, 0x59baa8bfc17fd2cb, 1, uint32_t)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_bits_t), "PCI_X_CAPABILITY.Status.bits", bits, 0x0, 0x20, true, 0xe61373f07c9e66ce)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PCI_X_CAPABILITY.Status.AsULONG", as_ulong, 0x0, 0x20, true, 0x116c1af7a4b59833)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_status_t), "PCI_X_CAPABILITY.Status", status, 0x20, 0x20, true, 0x88d7fcc11b3f646f)
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
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#endif