#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Type", type, 0x0, 0x8, true, 0xf836d4702d8b2dfe)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Length", length, 0x8, 0x8, true, 0x712413c329b742c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::notification_flags_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Flags", flags, 0x10, 0x10, true, 0xb0ae22010639b89d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Polled.PollInterval", poll_interval, 0x0, 0x20, true, 0xb9a273104627af77)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_polled_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Polled", polled, 0x20, 0x20, true, 0x97303d9aac52d9f6)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Interrupt.PollInterval", poll_interval, 0x0, 0x20, true, 0x9760475630e4e25d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Interrupt.Vector", vector, 0x20, 0x20, true, 0x54d7bfd38c7f37b8)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Interrupt.SwitchToPollingThreshold", switch_to_polling_threshold, 0x40, 0x20, true, 0x7eaf5f9a4180c5fc)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Interrupt.SwitchToPollingWindow", switch_to_polling_window, 0x60, 0x20, true, 0x4353a85cdb6e9e70)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Interrupt.ErrorThreshold", error_threshold, 0x80, 0x20, true, 0xe3e64f9257a4d29d)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Interrupt.ErrorThresholdWindow", error_threshold_window, 0xa0, 0x20, true, 0x2e12a8a3d9a70691)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_interrupt_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Interrupt", interrupt, 0x20, 0xc0, true, 0xcbd7085a029203d7)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.LocalInterrupt.PollInterval", poll_interval, 0x0, 0x20, true, 0xed028a24fc4b3034)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.LocalInterrupt.Vector", vector, 0x20, 0x20, true, 0x8344424bf1d5d5f8)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.LocalInterrupt.SwitchToPollingThreshold", switch_to_polling_threshold, 0x40, 0x20, true, 0x90f3e40394abc17e)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.LocalInterrupt.SwitchToPollingWindow", switch_to_polling_window, 0x60, 0x20, true, 0x889e331273d78880)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.LocalInterrupt.ErrorThreshold", error_threshold, 0x80, 0x20, true, 0xb9097994598ead2f)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.LocalInterrupt.ErrorThresholdWindow", error_threshold_window, 0xa0, 0x20, true, 0x13b5b17cd0e798b)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u10_local_interrupt_t), "_WHEA_NOTIFICATION_DESCRIPTOR.LocalInterrupt", local_interrupt, 0x20, 0xc0, true, 0x21a85a89049e89c3)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Sci.PollInterval", poll_interval, 0x0, 0x20, true, 0xd4785dee5248daf5)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Sci.Vector", vector, 0x20, 0x20, true, 0xcf25e1df575a9aef)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Sci.SwitchToPollingThreshold", switch_to_polling_threshold, 0x40, 0x20, true, 0xa83577ab77aaf9db)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Sci.SwitchToPollingWindow", switch_to_polling_window, 0x60, 0x20, true, 0x9d0385bc85fe178)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Sci.ErrorThreshold", error_threshold, 0x80, 0x20, true, 0x1e4bfaace2e7654f)
#define _m24 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Sci.ErrorThresholdWindow", error_threshold_window, 0xa0, 0x20, true, 0xc9cee312e481ca0d)
#define _m25 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u11_sci_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Sci", sci, 0x20, 0xc0, true, 0x5349d736a5679b7b)
#define _m26 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Nmi.PollInterval", poll_interval, 0x0, 0x20, true, 0x7cad0a1ef9b41251)
#define _m27 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Nmi.Vector", vector, 0x20, 0x20, true, 0x36d60e1731b1c4be)
#define _m28 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Nmi.SwitchToPollingThreshold", switch_to_polling_threshold, 0x40, 0x20, true, 0xbf301256413e4271)
#define _m29 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Nmi.SwitchToPollingWindow", switch_to_polling_window, 0x60, 0x20, true, 0x206edc52deadea37)
#define _m30 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Nmi.ErrorThreshold", error_threshold, 0x80, 0x20, true, 0x3b8f60a338882c01)
#define _m31 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Nmi.ErrorThresholdWindow", error_threshold_window, 0xa0, 0x20, true, 0x899270f3058f28b)
#define _m32 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u12_nmi_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Nmi", nmi, 0x20, 0xc0, true, 0x44c0b876f2c4329d)
#define _m33 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Sea.PollInterval", poll_interval, 0x0, 0x20, true, 0x25a595d0bee4f26d)
#define _m34 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Sea.Vector", vector, 0x20, 0x20, true, 0xb0d72748bf322b24)
#define _m35 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Sea.SwitchToPollingThreshold", switch_to_polling_threshold, 0x40, 0x20, true, 0x66cf7198e7328e88)
#define _m36 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Sea.SwitchToPollingWindow", switch_to_polling_window, 0x60, 0x20, true, 0xf3d4dcb0a24859a5)
#define _m37 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Sea.ErrorThreshold", error_threshold, 0x80, 0x20, true, 0x5db3c1dbfffd0253)
#define _m38 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Sea.ErrorThresholdWindow", error_threshold_window, 0xa0, 0x20, true, 0x6acd51d4ab3a656d)
#define _m39 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u13_sea_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Sea", sea, 0x20, 0xc0, true, 0x496908034a87450a)
#define _m40 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Sei.PollInterval", poll_interval, 0x0, 0x20, true, 0x58bbddd9d5a8da9e)
#define _m41 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Sei.Vector", vector, 0x20, 0x20, true, 0x75a799611ae1a82c)
#define _m42 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Sei.SwitchToPollingThreshold", switch_to_polling_threshold, 0x40, 0x20, true, 0xd45784377b1c1840)
#define _m43 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Sei.SwitchToPollingWindow", switch_to_polling_window, 0x60, 0x20, true, 0x85a4d784b4a29a44)
#define _m44 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Sei.ErrorThreshold", error_threshold, 0x80, 0x20, true, 0x5caa0b85a132e245)
#define _m45 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Sei.ErrorThresholdWindow", error_threshold_window, 0xa0, 0x20, true, 0x7c6d17f3882a906)
#define _m46 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u14_sei_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Sei", sei, 0x20, 0xc0, true, 0xd93085ca09aca3ef)
#define _m47 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Gsiv.PollInterval", poll_interval, 0x0, 0x20, true, 0xfdcb45c5bb06776a)
#define _m48 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Gsiv.Vector", vector, 0x20, 0x20, true, 0xa14f5b71a2e639bb)
#define _m49 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Gsiv.SwitchToPollingThreshold", switch_to_polling_threshold, 0x40, 0x20, true, 0x510dd8df500f7dce)
#define _m50 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Gsiv.SwitchToPollingWindow", switch_to_polling_window, 0x60, 0x20, true, 0x265e8d311350a988)
#define _m51 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Gsiv.ErrorThreshold", error_threshold, 0x80, 0x20, true, 0x6e4451b6236b31fd)
#define _m52 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Gsiv.ErrorThresholdWindow", error_threshold_window, 0xa0, 0x20, true, 0xd98e864216236524)
#define _m53 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u15_gsiv_t), "_WHEA_NOTIFICATION_DESCRIPTOR.Gsiv", gsiv, 0x20, 0xc0, true, 0xe06c1019c7e1c683)
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
#define _m52
#define _m53
#endif