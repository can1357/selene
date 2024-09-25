#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::capabilities_header_t), "_PCIX_BRIDGE_CAPABILITY.Header", header, 0x0, 0x10, true, 0x8e0dc7a4dbcaefb3)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.SecondaryStatus.Bus64Bit", bus64_bit, 0x0, 0x1, true, 0x20e6aab688ba0fde, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.SecondaryStatus.Bus133MHzCapable", bus133m_hz_capable, 0x1, 0x1, true, 0x574e58033f55cc33, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.SecondaryStatus.SplitCompletionDiscarded", split_completion_discarded, 0x2, 0x1, true, 0x33e373e0efe6c12d, 1, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.SecondaryStatus.UnexpectedSplitCompletion", unexpected_split_completion, 0x3, 0x1, true, 0xed5541eae6213f37, 1, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.SecondaryStatus.SplitCompletionOverrun", split_completion_overrun, 0x4, 0x1, true, 0x3726b45cddf5183e, 1, uint16_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.SecondaryStatus.SplitRequestDelayed", split_request_delayed, 0x5, 0x1, true, 0x852c17e0167e99d9, 1, uint16_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCIX_BRIDGE_CAPABILITY.SecondaryStatus.BusModeFrequency", bus_mode_frequency, 0x6, 0x4, true, 0xf9be45c82d864abf, 4, uint16_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCIX_BRIDGE_CAPABILITY.SecondaryStatus.Rsvd", rsvd, 0xa, 0x2, true, 0x7dd963db875da6ff, 2, uint16_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCIX_BRIDGE_CAPABILITY.SecondaryStatus.Version", version, 0xc, 0x2, true, 0xc77efe4f7d0f161d, 2, uint16_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.SecondaryStatus.Bus266MHzCapable", bus266m_hz_capable, 0xe, 0x1, true, 0x532aa8aa61966cc9, 1, uint16_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.SecondaryStatus.Bus533MHzCapable", bus533m_hz_capable, 0xf, 0x1, true, 0xdb2bb6107fb8ed98, 1, uint16_t)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCIX_BRIDGE_CAPABILITY.SecondaryStatus.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x69f531fb7190137b)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_secondary_status_t), "_PCIX_BRIDGE_CAPABILITY.SecondaryStatus", secondary_status, 0x10, 0x10, true, 0xb692a44aa4432c90)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCIX_BRIDGE_CAPABILITY.BridgeStatus.FunctionNumber", function_number, 0x0, 0x3, true, 0x3c6888ddfab51f1d, 3, uint32_t)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCIX_BRIDGE_CAPABILITY.BridgeStatus.DeviceNumber", device_number, 0x3, 0x5, true, 0xa853421143d2dc, 5, uint32_t)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCIX_BRIDGE_CAPABILITY.BridgeStatus.BusNumber", bus_number, 0x8, 0x8, true, 0xb5644d88fd88817d, 8, uint32_t)
#define _m17 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.BridgeStatus.Device64Bit", device64_bit, 0x10, 0x1, true, 0x9f10de83f307daa1, 1, uint32_t)
#define _m18 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.BridgeStatus.Device133MHzCapable", device133m_hz_capable, 0x11, 0x1, true, 0x7670ef58a45bf295, 1, uint32_t)
#define _m19 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.BridgeStatus.SplitCompletionDiscarded", split_completion_discarded, 0x12, 0x1, true, 0x9788bb1c5175a155, 1, uint32_t)
#define _m20 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.BridgeStatus.UnexpectedSplitCompletion", unexpected_split_completion, 0x13, 0x1, true, 0x5abbdde57e883be2, 1, uint32_t)
#define _m21 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.BridgeStatus.SplitCompletionOverrun", split_completion_overrun, 0x14, 0x1, true, 0xfb32ce8a26ebb662, 1, uint32_t)
#define _m22 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.BridgeStatus.SplitRequestDelayed", split_request_delayed, 0x15, 0x1, true, 0x569cc4ea74bf9e40, 1, uint32_t)
#define _m23 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_PCIX_BRIDGE_CAPABILITY.BridgeStatus.Rsvd", rsvd, 0x16, 0x7, true, 0xb385b0c4b674abd6, 7, uint32_t)
#define _m24 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.BridgeStatus.DIMCapable", dim_capable, 0x1d, 0x1, true, 0xa9f6cb127cb4d38b, 1, uint32_t)
#define _m25 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.BridgeStatus.Device266MHzCapable", device266m_hz_capable, 0x1e, 0x1, true, 0xc7e87ab9a7bba338, 1, uint32_t)
#define _m26 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.BridgeStatus.Device533MHzCapable", device533m_hz_capable, 0x1f, 0x1, true, 0x7b7a94abeaae088a, 1, uint32_t)
#define _m27 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCIX_BRIDGE_CAPABILITY.BridgeStatus.AsULONG", as_ulong, 0x0, 0x20, true, 0x1e1ee2be5d7da312)
#define _m28 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_bridge_status_t), "_PCIX_BRIDGE_CAPABILITY.BridgeStatus", bridge_status, 0x20, 0x20, true, 0x79ca82f533ac9d6f)
#define _m29 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCIX_BRIDGE_CAPABILITY.UpstreamSplitTransactionCapacity", upstream_split_transaction_capacity, 0x40, 0x10, true, 0x705a30b1e3c39d26)
#define _m30 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCIX_BRIDGE_CAPABILITY.UpstreamSplitTransactionLimit", upstream_split_transaction_limit, 0x50, 0x10, true, 0x4fecb3b3c379f9b8)
#define _m31 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCIX_BRIDGE_CAPABILITY.DownstreamSplitTransactionCapacity", downstream_split_transaction_capacity, 0x60, 0x10, true, 0x59893f40a68746f0)
#define _m32 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCIX_BRIDGE_CAPABILITY.DownstreamSplitTransactionLimit", downstream_split_transaction_limit, 0x70, 0x10, true, 0xfc4e67e983deba5d)
#define _m33 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.EccControlStatus.SelectSecondaryRegisters", select_secondary_registers, 0x0, 0x1, true, 0xad88a32a3fef3dd8, 1, uint32_t)
#define _m34 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.EccControlStatus.ErrorPresentInOtherBank", error_present_in_other_bank, 0x1, 0x1, true, 0x8fea72e8fe7883ca, 1, uint32_t)
#define _m35 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.EccControlStatus.AdditionalCorrectableError", additional_correctable_error, 0x2, 0x1, true, 0x196001745caaa481, 1, uint32_t)
#define _m36 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.EccControlStatus.AdditionalUncorrectableError", additional_uncorrectable_error, 0x3, 0x1, true, 0x75affe73615432e0, 1, uint32_t)
#define _m37 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCIX_BRIDGE_CAPABILITY.EccControlStatus.ErrorPhase", error_phase, 0x4, 0x3, true, 0x253f88567210ea9b, 3, uint32_t)
#define _m38 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.EccControlStatus.ErrorCorrected", error_corrected, 0x7, 0x1, true, 0xfc5935f9a9c93a54, 1, uint32_t)
#define _m39 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCIX_BRIDGE_CAPABILITY.EccControlStatus.Syndrome", syndrome, 0x8, 0x8, true, 0xffe13678b4a35b93, 8, uint32_t)
#define _m40 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCIX_BRIDGE_CAPABILITY.EccControlStatus.ErrorFirstCommand", error_first_command, 0x10, 0x4, true, 0xe057ec2f11ff672a, 4, uint32_t)
#define _m41 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCIX_BRIDGE_CAPABILITY.EccControlStatus.ErrorSecondCommand", error_second_command, 0x14, 0x4, true, 0xfb278ebc225bea5a, 4, uint32_t)
#define _m42 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCIX_BRIDGE_CAPABILITY.EccControlStatus.ErrorUpperAttributes", error_upper_attributes, 0x18, 0x4, true, 0x2b5447ec37a6a4ca, 4, uint32_t)
#define _m43 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.EccControlStatus.ControlUpdateEnable", control_update_enable, 0x1c, 0x1, true, 0x351dd980001a7ab8, 1, uint32_t)
#define _m44 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.EccControlStatus.Rsvd", rsvd, 0x1d, 0x1, true, 0x1dcdc5e5dffe65ad, 1, uint32_t)
#define _m45 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.EccControlStatus.DisableSingleBitCorrection", disable_single_bit_correction, 0x1e, 0x1, true, 0xbf2e3de4c3d76872, 1, uint32_t)
#define _m46 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCIX_BRIDGE_CAPABILITY.EccControlStatus.EccMode", ecc_mode, 0x1f, 0x1, true, 0xd77aaed7dba65507, 1, uint32_t)
#define _m47 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCIX_BRIDGE_CAPABILITY.EccControlStatus.AsULONG", as_ulong, 0x0, 0x20, true, 0xa1773d84d97dd858)
#define _m48 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u10_ecc_control_status_t), "_PCIX_BRIDGE_CAPABILITY.EccControlStatus", ecc_control_status, 0x80, 0x20, true, 0x6bf65cf5bbd1b501)
#define _m49 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCIX_BRIDGE_CAPABILITY.EccFirstAddress", ecc_first_address, 0xa0, 0x20, true, 0xf73997d518b7e1f1)
#define _m50 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCIX_BRIDGE_CAPABILITY.EccSecondAddress", ecc_second_address, 0xc0, 0x20, true, 0x2376cf45495a4eab)
#define _m51 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCIX_BRIDGE_CAPABILITY.EccAttribute", ecc_attribute, 0xe0, 0x20, true, 0x26e3a5c2fd44755e)
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
#define _m25
#define _m26
#define _m27
#define _m28
#define _m29
#define _m30
#define _m31
#define _m32
#define _m33
#define _m34
#define _m35
#define _m36
#define _m37
#define _m38
#define _m39
#define _m40
#define _m41
#define _m42
#define _m43
#define _m44
#define _m45
#define _m46
#define _m47
#define _m48
#define _m49
#define _m50
#define _m51
#endif