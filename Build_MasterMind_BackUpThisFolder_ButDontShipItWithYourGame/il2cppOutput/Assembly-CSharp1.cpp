#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.AROcclusionFrameEventArgs>
struct Action_1_tFE8396A8376FE78B5494249C8A294967E81C927C;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<UnityEngine.XR.ARSubsystems.Supported>
struct Func_1_t778056BE8A070F696DB064AC7FBD1F996A928ED2;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo>
struct List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor>
struct List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor>
struct List_1_tDE8C3B426AF72FF013BD4E2E4C4660F30F1371DB;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor>
struct List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor>
struct List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>
struct List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor>
struct List_1_tCD3E505D75F3A61FA85FC4FBBAE146ACC1A844AA;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem>
struct List_1_t411E4ADEB151FAA7346742CBC666CC242E4DACCB;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor>
struct List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor>
struct List_1_t4EB1B73C8DDBD534099637F220FA7D8AFC3D2DE4;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem,UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t1892B8E9DF20D5A95CB7E5B2AAA38CF6DD9711CF;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor[]
struct XRAnchorSubsystemDescriptorU5BU5D_t622C4B4F37D8BD43713D648D3300BF4299237567;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor[]
struct XRCameraSubsystemDescriptorU5BU5D_t7E0751E0A6B869B0FBFD38721E70F445860FB1A0;
// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor[]
struct XRDepthSubsystemDescriptorU5BU5D_tBEECD0431062ACB184614C7A5C3C8C3EF2654D53;
// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor[]
struct XREnvironmentProbeSubsystemDescriptorU5BU5D_tF7DDBC8B95DFC145DD0A23CD3CF7E1DBA5997AFE;
// UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor[]
struct XRFaceSubsystemDescriptorU5BU5D_t3059E01874D7CDF8AB9F6786535DCEEA40595929;
// UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor[]
struct XRHumanBodySubsystemDescriptorU5BU5D_t2F2B722999A2DEAB3BFE1F938F9D400084635736;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor[]
struct XRImageTrackingSubsystemDescriptorU5BU5D_t362219FD7367A2F7DCFFF2F16582232F8A432CD8;
// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor[]
struct XRObjectTrackingSubsystemDescriptorU5BU5D_t861EBF21D80781EFBE549FECF676DB2C07134C7B;
// UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor[]
struct XROcclusionSubsystemDescriptorU5BU5D_tAA7EA84F2D117C78A1610CE1F3DF438C412777C2;
// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor[]
struct XRParticipantSubsystemDescriptorU5BU5D_t5DE837A961F4145B781CA6FD32205AD4A553AAA6;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor[]
struct XRPlaneSubsystemDescriptorU5BU5D_t4BBEF639E821D462DF742BD33C6E8004B4A66785;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor[]
struct XRRaycastSubsystemDescriptorU5BU5D_t775E51EED5B1118C201510E73919FB2EF1C9707F;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor[]
struct XRSessionSubsystemDescriptorU5BU5D_tC31A2840B7CA880C5C8629D9FD8827ADBD348905;
// UnityEngine.XR.ARFoundation.AROcclusionManager
struct AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.XR.ARFoundation.Samples.BackButton
struct BackButton_t682CB59ECA98A9126A528B1986C2B0F25F7A2646;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures
struct CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939;
// UnityEngine.XR.ARFoundation.Samples.CheckRuntimeDepth
struct CheckRuntimeDepth_t3B629F150F05DADAD585156F049FBE3421D4490A;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.XR.ARFoundation.Samples.Tooltip
struct Tooltip_t84E76F9372B8B31FFFCAD1ACF0362438CAAF6967;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor
struct XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847;
// UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor
struct XRFaceSubsystemDescriptor_t44596C9878EB76583452C5F5BF6FA78FA9EB171F;
// UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor
struct XRHumanBodySubsystemDescriptor_tA7A72196EAFCDB936BC0C73634B1553E94D8EC3B;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.ARSubsystems.XROcclusionSubsystem
struct XROcclusionSubsystem_tAA1BB69ACF188D778FBC8EF5E7B427C6EB2F0C3C;
// UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor
struct XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor
struct XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4EB1B73C8DDBD534099637F220FA7D8AFC3D2DE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCD3E505D75F3A61FA85FC4FBBAE146ACC1A844AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDE8C3B426AF72FF013BD4E2E4C4660F30F1371DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m369B6D262C35CF3F139A10CF383BACDB9DF84159_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3DB61899D7FBB2281D324157AF07A0339F1307D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7CC67B16F72585A664675D34AA020B93E4F4045E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB35124AA2FC787771DCC660594EA001A0797409A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF43AC8F3B0CE053F5089E0123269CDEA7899C5B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m05766C966E3C460B9CA199E42C6FB372E9C67E41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2E4CF4ADC14C8D1BCAC816FFECE23245A85BD193_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6F44014C3A26B090C7785EA565B608E6F3AD128B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m75E480BD3F1C43B93C728A928326525D1961F13A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBEFA526C081F0C86F13A50D46142098D7385798A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m35F60EA6C9173B7839D721974693C9C601FD3914_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4BE6AE62EE0784C1A80177F41CD98F7798A92963_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7C049649C842A08198C3CB4055D9011E814ED6AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC02294849145E2B63EBCA61C57D09C2D45511397_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCA58A87394221878BE8ABB337DEE283B1AA0D923_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m10249D9BFCB944FFEFC25CD908FC6DF7D98F7DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6834C0FF9B7755D475F3BE96B82B6FA032AAB505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m741D05FA091DCFE8B7F6AEE1454D40589CE18009_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC6B1B7EA0850C9D91A41B661AE02ED3620B06BD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEFC1706A6A8C9D0A5AB613FA261D0421CAC96397_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0041FCD66EA4A14EE9726BD4394D16E3B774F24D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0F0F399A867DD49156E70176EE1C7B03008B0C91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m557951E514A8AC64A23A7BB73E5AB7311864AFC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m58A0EBFF5B75A5957CC94BDB2FD97220147648B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m751F8C0A254EAAB9A57DC06058D6478D339241E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7C7331D79296471E23B70E31A3A1FBB67430722D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA29AB6D75EDEFFD0FAC6ADAB81EF88FD662394FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAEBD838FB34773F42260D6F5EB976FDE590579ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB384A94B775793199D6172CD1A2B3139DD608F17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCEB5D9ECEA5630CE9235CEF5D7619090A6F81F90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD37DFF84CD1CA96858B12F84D0CF63E5B720F055_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDABF63F4EEB1F694E44489872E8254FCF762AE27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF6FE314A80CA5A3B1B60562EE153D1676D658D76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1084297599D738264810DF28A355B0E1DAFB9D5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m594612ECE18B286D1A50F20CE683CB932BA08689_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6A74C1CEFDCA30C41B35F15FDE2F60FEBFA0379C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6FBB94278B8E0C25D70082CD29908680C2F18947_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m90EE029ECA48BF389C6C835B8AC9927E3D12A754_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m99B0EF160EBB7A08AC421E6DB4249A113672F5C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9D640171A29156A0E4A0C90231581EC090760468_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9EEB47EFB9925826D1B727DDA11E63DD65EA9982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA44F1ED8A79AEE96EAB4404FA2C506D824A8FAD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD5EB8477D6C85DCC813539412C938E8A04A7BC05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF32C7EC5BD247E48779718527DBB16042BC388C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_3_get_descriptor_mFCC2B929205B70121157536075F522DF0476AAB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystemDescriptors_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_mAF4A988B1348B0D6F190D2BC71D0E49817EB5CD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystemDescriptors_TisXRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847_m766580FC5E1A1763868F998199983F1E0C583DB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystemDescriptors_TisXRDepthSubsystemDescriptor_tA961ACA2A67359F10E59D48257490E3ACEEFD5C0_m7F47A70579FE9E62594332AC398D09665F01AAFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystemDescriptors_TisXREnvironmentProbeSubsystemDescriptor_t19B9462452B99289DB335591C096C5CC970296C4_m035ECA777209F93887F42E964A2AC6D46604EFFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystemDescriptors_TisXRFaceSubsystemDescriptor_t44596C9878EB76583452C5F5BF6FA78FA9EB171F_m3AB713932845389BA75027CEF1B9DCA00ABF45F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystemDescriptors_TisXRHumanBodySubsystemDescriptor_tA7A72196EAFCDB936BC0C73634B1553E94D8EC3B_mCE46F738E7019DEE11C9510751AF39D8C77713E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystemDescriptors_TisXRImageTrackingSubsystemDescriptor_t6D3883C9B0005F09FE2ECE410BF3A8E64A4A5CBE_m3182E1DC9C4F742B45F2936517F34867DC2850A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystemDescriptors_TisXRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_m1945DA5EC98FE287F67E15F90CF71919A7263CDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystemDescriptors_TisXROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F_mF712C678036D7B4C2DBDBDA5A79A7EED604A7C88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystemDescriptors_TisXRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_m630BDF2523BF79C6A651143AE1B0AC602D5A96CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystemDescriptors_TisXRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300_m9C9C8F40B805C8ED7797E62AAB2DD5D53BFA9D7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystemDescriptors_TisXRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311_m0A5A3ED8C998E0C0E0EC51618B3BE7B13F117DE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystemDescriptors_TisXRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076_m36B3802981CFB59295804CC1742DE99D1BFCBC57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m081FBFB83316621ED3D69C9D27376B59CB646519_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRAnchorSubsystemDescriptorU5BU5D_t622C4B4F37D8BD43713D648D3300BF4299237567* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRAnchorSubsystemDescriptorU5BU5D_t622C4B4F37D8BD43713D648D3300BF4299237567* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRCameraSubsystemDescriptorU5BU5D_t7E0751E0A6B869B0FBFD38721E70F445860FB1A0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRCameraSubsystemDescriptorU5BU5D_t7E0751E0A6B869B0FBFD38721E70F445860FB1A0* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor>
struct List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRDepthSubsystemDescriptorU5BU5D_tBEECD0431062ACB184614C7A5C3C8C3EF2654D53* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRDepthSubsystemDescriptorU5BU5D_tBEECD0431062ACB184614C7A5C3C8C3EF2654D53* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor>
struct List_1_tDE8C3B426AF72FF013BD4E2E4C4660F30F1371DB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XREnvironmentProbeSubsystemDescriptorU5BU5D_tF7DDBC8B95DFC145DD0A23CD3CF7E1DBA5997AFE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDE8C3B426AF72FF013BD4E2E4C4660F30F1371DB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XREnvironmentProbeSubsystemDescriptorU5BU5D_tF7DDBC8B95DFC145DD0A23CD3CF7E1DBA5997AFE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor>
struct List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRFaceSubsystemDescriptorU5BU5D_t3059E01874D7CDF8AB9F6786535DCEEA40595929* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRFaceSubsystemDescriptorU5BU5D_t3059E01874D7CDF8AB9F6786535DCEEA40595929* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor>
struct List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRHumanBodySubsystemDescriptorU5BU5D_t2F2B722999A2DEAB3BFE1F938F9D400084635736* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRHumanBodySubsystemDescriptorU5BU5D_t2F2B722999A2DEAB3BFE1F938F9D400084635736* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>
struct List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRImageTrackingSubsystemDescriptorU5BU5D_t362219FD7367A2F7DCFFF2F16582232F8A432CD8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRImageTrackingSubsystemDescriptorU5BU5D_t362219FD7367A2F7DCFFF2F16582232F8A432CD8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor>
struct List_1_tCD3E505D75F3A61FA85FC4FBBAE146ACC1A844AA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRObjectTrackingSubsystemDescriptorU5BU5D_t861EBF21D80781EFBE549FECF676DB2C07134C7B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCD3E505D75F3A61FA85FC4FBBAE146ACC1A844AA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRObjectTrackingSubsystemDescriptorU5BU5D_t861EBF21D80781EFBE549FECF676DB2C07134C7B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor>
struct List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XROcclusionSubsystemDescriptorU5BU5D_tAA7EA84F2D117C78A1610CE1F3DF438C412777C2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XROcclusionSubsystemDescriptorU5BU5D_tAA7EA84F2D117C78A1610CE1F3DF438C412777C2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor>
struct List_1_t4EB1B73C8DDBD534099637F220FA7D8AFC3D2DE4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRParticipantSubsystemDescriptorU5BU5D_t5DE837A961F4145B781CA6FD32205AD4A553AAA6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4EB1B73C8DDBD534099637F220FA7D8AFC3D2DE4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRParticipantSubsystemDescriptorU5BU5D_t5DE837A961F4145B781CA6FD32205AD4A553AAA6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRPlaneSubsystemDescriptorU5BU5D_t4BBEF639E821D462DF742BD33C6E8004B4A66785* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRPlaneSubsystemDescriptorU5BU5D_t4BBEF639E821D462DF742BD33C6E8004B4A66785* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRRaycastSubsystemDescriptorU5BU5D_t775E51EED5B1118C201510E73919FB2EF1C9707F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRRaycastSubsystemDescriptorU5BU5D_t775E51EED5B1118C201510E73919FB2EF1C9707F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRSessionSubsystemDescriptorU5BU5D_tC31A2840B7CA880C5C8629D9FD8827ADBD348905* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRSessionSubsystemDescriptorU5BU5D_tC31A2840B7CA880C5C8629D9FD8827ADBD348905* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct Enumerator_tDD7560C140068F3E8D425296DCECD44CE0F59685 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor>
struct Enumerator_tD1B4F6EEEE309D2BFB45178DCAA3E0482743B9D7 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	XRFaceSubsystemDescriptor_t44596C9878EB76583452C5F5BF6FA78FA9EB171F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor>
struct Enumerator_t889AB5AF38A498D727DBFE55A756175529FC86CE 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	XRHumanBodySubsystemDescriptor_tA7A72196EAFCDB936BC0C73634B1553E94D8EC3B* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor>
struct Enumerator_t80259A7B1B58A3C6024D502D3630F04E04B33675 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct Enumerator_t68B4B1418CD0BC5485A8EC4AC2A711276AC6EC07 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* ____current_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t8951028366741F713741FC706603F0BFA781E71D  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tA2D3176F17E64D29B8F21825BC2039C15333DF55  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tEA4C15000F8C8F0779340D5A5C16AE45A56A2D22  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem,UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t79EDF938C4BE84AF066C781C2FCA09FE74BFF8FE  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t0BFBF5E56D4A1F904B4AE98ECBB376520816FB32  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3  : public RuntimeObject
{
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor
struct XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847  : public SubsystemDescriptorWithProvider_2_t8951028366741F713741FC706603F0BFA781E71D
{
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsAverageBrightness>k__BackingField
	bool ___U3CsupportsAverageBrightnessU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsAverageColorTemperature>k__BackingField
	bool ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsColorCorrection>k__BackingField
	bool ___U3CsupportsColorCorrectionU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsDisplayMatrix>k__BackingField
	bool ___U3CsupportsDisplayMatrixU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsProjectionMatrix>k__BackingField
	bool ___U3CsupportsProjectionMatrixU3Ek__BackingField_7;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsTimestamp>k__BackingField
	bool ___U3CsupportsTimestampU3Ek__BackingField_8;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsCameraConfigurations>k__BackingField
	bool ___U3CsupportsCameraConfigurationsU3Ek__BackingField_9;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsCameraImage>k__BackingField
	bool ___U3CsupportsCameraImageU3Ek__BackingField_10;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsAverageIntensityInLumens>k__BackingField
	bool ___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_11;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsFocusModes>k__BackingField
	bool ___U3CsupportsFocusModesU3Ek__BackingField_12;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsFaceTrackingAmbientIntensityLightEstimation>k__BackingField
	bool ___U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsFaceTrackingHDRLightEstimation>k__BackingField
	bool ___U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsWorldTrackingAmbientIntensityLightEstimation>k__BackingField
	bool ___U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsWorldTrackingHDRLightEstimation>k__BackingField
	bool ___U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::<supportsCameraGrain>k__BackingField
	bool ___U3CsupportsCameraGrainU3Ek__BackingField_17;
};

// UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor
struct XRFaceSubsystemDescriptor_t44596C9878EB76583452C5F5BF6FA78FA9EB171F  : public SubsystemDescriptorWithProvider_2_tA2D3176F17E64D29B8F21825BC2039C15333DF55
{
	// System.Boolean UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor::<supportsFacePose>k__BackingField
	bool ___U3CsupportsFacePoseU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor::<supportsFaceMeshVerticesAndIndices>k__BackingField
	bool ___U3CsupportsFaceMeshVerticesAndIndicesU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor::<supportsFaceMeshUVs>k__BackingField
	bool ___U3CsupportsFaceMeshUVsU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor::<supportsFaceMeshNormals>k__BackingField
	bool ___U3CsupportsFaceMeshNormalsU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor::<supportsEyeTracking>k__BackingField
	bool ___U3CsupportsEyeTrackingU3Ek__BackingField_7;
};

// UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor
struct XRHumanBodySubsystemDescriptor_tA7A72196EAFCDB936BC0C73634B1553E94D8EC3B  : public SubsystemDescriptorWithProvider_2_tEA4C15000F8C8F0779340D5A5C16AE45A56A2D22
{
	// System.Boolean UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor::<supportsHumanBody2D>k__BackingField
	bool ___U3CsupportsHumanBody2DU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor::<supportsHumanBody3D>k__BackingField
	bool ___U3CsupportsHumanBody3DU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor::<supportsHumanBody3DScaleEstimation>k__BackingField
	bool ___U3CsupportsHumanBody3DScaleEstimationU3Ek__BackingField_5;
};

// UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor
struct XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F  : public SubsystemDescriptorWithProvider_2_t79EDF938C4BE84AF066C781C2FCA09FE74BFF8FE
{
	// System.Func`1<System.Boolean> UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::m_QueryForSupportsEnvironmentDepthImage
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_QueryForSupportsEnvironmentDepthImage_3;
	// System.Func`1<UnityEngine.XR.ARSubsystems.Supported> UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::m_EnvironmentDepthImageSupportedDelegate
	Func_1_t778056BE8A070F696DB064AC7FBD1F996A928ED2* ___m_EnvironmentDepthImageSupportedDelegate_4;
	// System.Func`1<System.Boolean> UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::m_QueryForSupportsEnvironmentDepthConfidenceImage
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_QueryForSupportsEnvironmentDepthConfidenceImage_5;
	// System.Func`1<UnityEngine.XR.ARSubsystems.Supported> UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::m_EnvironmentDepthConfidenceImageSupportedDelegate
	Func_1_t778056BE8A070F696DB064AC7FBD1F996A928ED2* ___m_EnvironmentDepthConfidenceImageSupportedDelegate_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::m_SupportsHumanSegmentationStencilImage
	bool ___m_SupportsHumanSegmentationStencilImage_7;
	// System.Func`1<UnityEngine.XR.ARSubsystems.Supported> UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::m_HumanSegmentationStencilImageSupportedDelegate
	Func_1_t778056BE8A070F696DB064AC7FBD1F996A928ED2* ___m_HumanSegmentationStencilImageSupportedDelegate_8;
	// System.Boolean UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::m_SupportsHumanSegmentationDepthImage
	bool ___m_SupportsHumanSegmentationDepthImage_9;
	// System.Func`1<UnityEngine.XR.ARSubsystems.Supported> UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::m_HumanSegmentationDepthImageSupportedDelegate
	Func_1_t778056BE8A070F696DB064AC7FBD1F996A928ED2* ___m_HumanSegmentationDepthImageSupportedDelegate_10;
	// System.Func`1<UnityEngine.XR.ARSubsystems.Supported> UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::m_EnvironmentDepthTemporalSmoothingSupportedDelegate
	Func_1_t778056BE8A070F696DB064AC7FBD1F996A928ED2* ___m_EnvironmentDepthTemporalSmoothingSupportedDelegate_11;
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor
struct XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300  : public SubsystemDescriptorWithProvider_2_t0BFBF5E56D4A1F904B4AE98ECBB376520816FB32
{
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsHorizontalPlaneDetection>k__BackingField
	bool ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsVerticalPlaneDetection>k__BackingField
	bool ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsArbitraryPlaneDetection>k__BackingField
	bool ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsBoundaryVertices>k__BackingField
	bool ___U3CsupportsBoundaryVerticesU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsClassification>k__BackingField
	bool ___U3CsupportsClassificationU3Ek__BackingField_7;
};

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;
};

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct IntegratedSubsystem_1_t3AB3A9BAB10A4D1420E63EEA50D40FEE65F41C03  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};

// UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 
{
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_pinvoke
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_com
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2  : public IntegratedSubsystem_1_t3AB3A9BAB10A4D1420E63EEA50D40FEE65F41C03
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem,UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t1892B8E9DF20D5A95CB7E5B2AAA38CF6DD9711CF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XROcclusionSubsystem_tAA1BB69ACF188D778FBC8EF5E7B427C6EB2F0C3C* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t1892B8E9DF20D5A95CB7E5B2AAA38CF6DD9711CF_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t411E4ADEB151FAA7346742CBC666CC242E4DACCB* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.Samples.BackButton
struct BackButton_t682CB59ECA98A9126A528B1986C2B0F25F7A2646  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.Samples.BackButton::m_BackButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_BackButton_4;
};

// UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures
struct CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_SimpleAR
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_SimpleAR_4;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_ImageTracking
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_ImageTracking_5;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_Anchors
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_Anchors_6;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_ARWorldMap
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_ARWorldMap_7;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_ARKitGeoAnchors
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_ARKitGeoAnchors_8;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_CpuImages
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_CpuImages_9;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_EnvironmentProbes
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_EnvironmentProbes_10;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_ARCollaborationData
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_ARCollaborationData_11;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_ARKitCoachingOverlay
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_ARKitCoachingOverlay_12;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_Scale
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_Scale_13;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_ObjectTracking
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_ObjectTracking_14;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_PlaneOcclusion
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_PlaneOcclusion_15;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_PointCloud
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_PointCloud_16;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_FaceTracking
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_FaceTracking_17;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_FaceBlendShapes
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_FaceBlendShapes_18;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_FaceRegions
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_FaceRegions_19;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_BodyTracking
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_BodyTracking_20;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_LightEstimation
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_LightEstimation_21;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_BasicLightEstimation
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_BasicLightEstimation_22;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_HDRLightEstimation
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_HDRLightEstimation_23;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_PlaneDetection
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_PlaneDetection_24;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_PlaneClassification
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_PlaneClassification_25;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_Meshing
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_Meshing_26;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_Interaction
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_Interaction_27;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_FixationPoint
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_FixationPoint_28;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_EyePoses
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_EyePoses_29;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_EyeLasers
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_EyeLasers_30;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_CheckSupport
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_CheckSupport_31;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_Depth
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_Depth_32;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_ConfigChooser
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_ConfigChooser_33;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_InputSystem
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_InputSystem_34;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_CameraGrain
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_CameraGrain_35;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::m_ThermalStateButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_ThermalStateButton_36;
};

// UnityEngine.XR.ARFoundation.Samples.CheckRuntimeDepth
struct CheckRuntimeDepth_t3B629F150F05DADAD585156F049FBE3421D4490A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.AROcclusionManager UnityEngine.XR.ARFoundation.Samples.CheckRuntimeDepth::m_OcclusionManager
	AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* ___m_OcclusionManager_4;
	// UnityEngine.UI.Text UnityEngine.XR.ARFoundation.Samples.CheckRuntimeDepth::m_DepthAvailabilityInfo
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_DepthAvailabilityInfo_5;
};

// UnityEngine.XR.ARFoundation.Samples.Tooltip
struct Tooltip_t84E76F9372B8B31FFFCAD1ACF0362438CAAF6967  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.Samples.Tooltip::m_Tooltip
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Tooltip_4;
	// System.Boolean UnityEngine.XR.ARFoundation.Samples.Tooltip::m_EnteredButton
	bool ___m_EnteredButton_5;
	// UnityEngine.Vector3 UnityEngine.XR.ARFoundation.Samples.Tooltip::m_ToolTipOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ToolTipOffset_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.AROcclusionManager
struct AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D  : public SubsystemLifecycleManager_3_t1892B8E9DF20D5A95CB7E5B2AAA38CF6DD9711CF
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo> UnityEngine.XR.ARFoundation.AROcclusionManager::m_TextureInfos
	List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF* ___m_TextureInfos_7;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.AROcclusionManager::m_Textures
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___m_Textures_8;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.AROcclusionManager::m_TexturePropertyIds
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_TexturePropertyIds_9;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.AROcclusionManager::m_HumanStencilTextureInfo
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___m_HumanStencilTextureInfo_10;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.AROcclusionManager::m_HumanDepthTextureInfo
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___m_HumanDepthTextureInfo_11;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.AROcclusionManager::m_EnvironmentDepthTextureInfo
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___m_EnvironmentDepthTextureInfo_12;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.AROcclusionManager::m_EnvironmentDepthConfidenceTextureInfo
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___m_EnvironmentDepthConfidenceTextureInfo_13;
	// System.Action`1<UnityEngine.XR.ARFoundation.AROcclusionFrameEventArgs> UnityEngine.XR.ARFoundation.AROcclusionManager::frameReceived
	Action_1_tFE8396A8376FE78B5494249C8A294967E81C927C* ___frameReceived_14;
	// UnityEngine.XR.ARSubsystems.HumanSegmentationStencilMode UnityEngine.XR.ARFoundation.AROcclusionManager::m_HumanSegmentationStencilMode
	int32_t ___m_HumanSegmentationStencilMode_15;
	// UnityEngine.XR.ARSubsystems.HumanSegmentationDepthMode UnityEngine.XR.ARFoundation.AROcclusionManager::m_HumanSegmentationDepthMode
	int32_t ___m_HumanSegmentationDepthMode_16;
	// UnityEngine.XR.ARSubsystems.EnvironmentDepthMode UnityEngine.XR.ARFoundation.AROcclusionManager::m_EnvironmentDepthMode
	int32_t ___m_EnvironmentDepthMode_17;
	// System.Boolean UnityEngine.XR.ARFoundation.AROcclusionManager::m_EnvironmentDepthTemporalSmoothing
	bool ___m_EnvironmentDepthTemporalSmoothing_18;
	// UnityEngine.XR.ARSubsystems.OcclusionPreferenceMode UnityEngine.XR.ARFoundation.AROcclusionManager::m_OcclusionPreferenceMode
	int32_t ___m_OcclusionPreferenceMode_19;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mB367027799C2BBCC2F1DDCD7F40EFEE84C74F9A1_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// TSubsystemDescriptor UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>::get_descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SubsystemLifecycleManager_3_get_descriptor_m55ACAFBB8D8273993E410BEFD978F09ABCF7CDA7_gshared (SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Application::CanStreamedLevelBeLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_CanStreamedLevelBeLoaded_mA1BAA60593E8679BAFA6A16595166774AE172ADC (String_t* ___levelName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.Samples.BackButton::BackButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackButton_BackButtonPressed_mC43E126C072699D816A4DBDFAEB98B9B70F30A6B (BackButton_t682CB59ECA98A9126A528B1986C2B0F25F7A2646* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4 (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.LoaderUtility::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoaderUtility_Deinitialize_mE0BD3EA32E3B74451C4359613B0420352AAB989D (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m0041FCD66EA4A14EE9726BD4394D16E3B774F24D (List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetSubsystemDescriptors_TisXRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300_m9C9C8F40B805C8ED7797E62AAB2DD5D53BFA9D7F (List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0* ___descriptors0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0*, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mB367027799C2BBCC2F1DDCD7F40EFEE84C74F9A1_gshared)(___descriptors0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>::.ctor()
inline void List_1__ctor_mDABF63F4EEB1F694E44489872E8254FCF762AE27 (List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetSubsystemDescriptors_TisXRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311_m0A5A3ED8C998E0C0E0EC51618B3BE7B13F117DE1 (List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F* ___descriptors0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F*, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mB367027799C2BBCC2F1DDCD7F40EFEE84C74F9A1_gshared)(___descriptors0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m7C7331D79296471E23B70E31A3A1FBB67430722D (List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetSubsystemDescriptors_TisXRFaceSubsystemDescriptor_t44596C9878EB76583452C5F5BF6FA78FA9EB171F_m3AB713932845389BA75027CEF1B9DCA00ABF45F3 (List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6* ___descriptors0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6*, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mB367027799C2BBCC2F1DDCD7F40EFEE84C74F9A1_gshared)(___descriptors0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m557951E514A8AC64A23A7BB73E5AB7311864AFC7 (List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetSubsystemDescriptors_TisXRImageTrackingSubsystemDescriptor_t6D3883C9B0005F09FE2ECE410BF3A8E64A4A5CBE_m3182E1DC9C4F742B45F2936517F34867DC2850A1 (List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED* ___descriptors0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED*, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mB367027799C2BBCC2F1DDCD7F40EFEE84C74F9A1_gshared)(___descriptors0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor>::.ctor()
inline void List_1__ctor_mD37DFF84CD1CA96858B12F84D0CF63E5B720F055 (List_1_tDE8C3B426AF72FF013BD4E2E4C4660F30F1371DB* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDE8C3B426AF72FF013BD4E2E4C4660F30F1371DB*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetSubsystemDescriptors_TisXREnvironmentProbeSubsystemDescriptor_t19B9462452B99289DB335591C096C5CC970296C4_m035ECA777209F93887F42E964A2AC6D46604EFFF (List_1_tDE8C3B426AF72FF013BD4E2E4C4660F30F1371DB* ___descriptors0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDE8C3B426AF72FF013BD4E2E4C4660F30F1371DB*, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mB367027799C2BBCC2F1DDCD7F40EFEE84C74F9A1_gshared)(___descriptors0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>::.ctor()
inline void List_1__ctor_mB384A94B775793199D6172CD1A2B3139DD608F17 (List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetSubsystemDescriptors_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_mAF4A988B1348B0D6F190D2BC71D0E49817EB5CD6 (List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* ___descriptors0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE*, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mB367027799C2BBCC2F1DDCD7F40EFEE84C74F9A1_gshared)(___descriptors0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor>::.ctor()
inline void List_1__ctor_mAEBD838FB34773F42260D6F5EB976FDE590579ED (List_1_tCD3E505D75F3A61FA85FC4FBBAE146ACC1A844AA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCD3E505D75F3A61FA85FC4FBBAE146ACC1A844AA*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetSubsystemDescriptors_TisXRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_m1945DA5EC98FE287F67E15F90CF71919A7263CDE (List_1_tCD3E505D75F3A61FA85FC4FBBAE146ACC1A844AA* ___descriptors0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCD3E505D75F3A61FA85FC4FBBAE146ACC1A844AA*, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mB367027799C2BBCC2F1DDCD7F40EFEE84C74F9A1_gshared)(___descriptors0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor>::.ctor()
inline void List_1__ctor_mA29AB6D75EDEFFD0FAC6ADAB81EF88FD662394FB (List_1_t4EB1B73C8DDBD534099637F220FA7D8AFC3D2DE4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4EB1B73C8DDBD534099637F220FA7D8AFC3D2DE4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetSubsystemDescriptors_TisXRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_m630BDF2523BF79C6A651143AE1B0AC602D5A96CA (List_1_t4EB1B73C8DDBD534099637F220FA7D8AFC3D2DE4* ___descriptors0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4EB1B73C8DDBD534099637F220FA7D8AFC3D2DE4*, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mB367027799C2BBCC2F1DDCD7F40EFEE84C74F9A1_gshared)(___descriptors0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m58A0EBFF5B75A5957CC94BDB2FD97220147648B5 (List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetSubsystemDescriptors_TisXRDepthSubsystemDescriptor_tA961ACA2A67359F10E59D48257490E3ACEEFD5C0_m7F47A70579FE9E62594332AC398D09665F01AAFB (List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C* ___descriptors0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C*, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mB367027799C2BBCC2F1DDCD7F40EFEE84C74F9A1_gshared)(___descriptors0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m0F0F399A867DD49156E70176EE1C7B03008B0C91 (List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetSubsystemDescriptors_TisXROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F_mF712C678036D7B4C2DBDBDA5A79A7EED604A7C88 (List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2* ___descriptors0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2*, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mB367027799C2BBCC2F1DDCD7F40EFEE84C74F9A1_gshared)(___descriptors0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>::.ctor()
inline void List_1__ctor_mCEB5D9ECEA5630CE9235CEF5D7619090A6F81F90 (List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetSubsystemDescriptors_TisXRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847_m766580FC5E1A1763868F998199983F1E0C583DB0 (List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* ___descriptors0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC*, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mB367027799C2BBCC2F1DDCD7F40EFEE84C74F9A1_gshared)(___descriptors0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m751F8C0A254EAAB9A57DC06058D6478D339241E7 (List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetSubsystemDescriptors_TisXRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076_m36B3802981CFB59295804CC1742DE99D1BFCBC57 (List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* ___descriptors0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34*, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mB367027799C2BBCC2F1DDCD7F40EFEE84C74F9A1_gshared)(___descriptors0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor>::.ctor()
inline void List_1__ctor_mF6FE314A80CA5A3B1B60562EE153D1676D658D76 (List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetSubsystemDescriptors_TisXRHumanBodySubsystemDescriptor_tA7A72196EAFCDB936BC0C73634B1553E94D8EC3B_mCE46F738E7019DEE11C9510751AF39D8C77713E9 (List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512* ___descriptors0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512*, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mB367027799C2BBCC2F1DDCD7F40EFEE84C74F9A1_gshared)(___descriptors0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>::get_Count()
inline int32_t List_1_get_Count_m6FBB94278B8E0C25D70082CD29908680C2F18947_inline (List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>::get_Count()
inline int32_t List_1_get_Count_m594612ECE18B286D1A50F20CE683CB932BA08689_inline (List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor>::get_Count()
inline int32_t List_1_get_Count_m90EE029ECA48BF389C6C835B8AC9927E3D12A754_inline (List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor>::GetEnumerator()
inline Enumerator_tD1B4F6EEEE309D2BFB45178DCAA3E0482743B9D7 List_1_GetEnumerator_m6834C0FF9B7755D475F3BE96B82B6FA032AAB505 (List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD1B4F6EEEE309D2BFB45178DCAA3E0482743B9D7 (*) (List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor>::Dispose()
inline void Enumerator_Dispose_m369B6D262C35CF3F139A10CF383BACDB9DF84159 (Enumerator_tD1B4F6EEEE309D2BFB45178DCAA3E0482743B9D7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD1B4F6EEEE309D2BFB45178DCAA3E0482743B9D7*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor>::get_Current()
inline XRFaceSubsystemDescriptor_t44596C9878EB76583452C5F5BF6FA78FA9EB171F* Enumerator_get_Current_mC02294849145E2B63EBCA61C57D09C2D45511397_inline (Enumerator_tD1B4F6EEEE309D2BFB45178DCAA3E0482743B9D7* __this, const RuntimeMethod* method)
{
	return ((  XRFaceSubsystemDescriptor_t44596C9878EB76583452C5F5BF6FA78FA9EB171F* (*) (Enumerator_tD1B4F6EEEE309D2BFB45178DCAA3E0482743B9D7*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor::get_supportsEyeTracking()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRFaceSubsystemDescriptor_get_supportsEyeTracking_mF482F5E345E3A9435DA290AC6DD1D28470602039_inline (XRFaceSubsystemDescriptor_t44596C9878EB76583452C5F5BF6FA78FA9EB171F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor>::MoveNext()
inline bool Enumerator_MoveNext_m2E4CF4ADC14C8D1BCAC816FFECE23245A85BD193 (Enumerator_tD1B4F6EEEE309D2BFB45178DCAA3E0482743B9D7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD1B4F6EEEE309D2BFB45178DCAA3E0482743B9D7*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor>::get_Count()
inline int32_t List_1_get_Count_mF32C7EC5BD247E48779718527DBB16042BC388C7_inline (List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor>::GetEnumerator()
inline Enumerator_t80259A7B1B58A3C6024D502D3630F04E04B33675 List_1_GetEnumerator_m10249D9BFCB944FFEFC25CD908FC6DF7D98F7DD8 (List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t80259A7B1B58A3C6024D502D3630F04E04B33675 (*) (List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor>::Dispose()
inline void Enumerator_Dispose_m3DB61899D7FBB2281D324157AF07A0339F1307D6 (Enumerator_t80259A7B1B58A3C6024D502D3630F04E04B33675* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t80259A7B1B58A3C6024D502D3630F04E04B33675*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor>::get_Current()
inline XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* Enumerator_get_Current_m35F60EA6C9173B7839D721974693C9C601FD3914_inline (Enumerator_t80259A7B1B58A3C6024D502D3630F04E04B33675* __this, const RuntimeMethod* method)
{
	return ((  XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* (*) (Enumerator_t80259A7B1B58A3C6024D502D3630F04E04B33675*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor>::MoveNext()
inline bool Enumerator_MoveNext_m6F44014C3A26B090C7785EA565B608E6F3AD128B (Enumerator_t80259A7B1B58A3C6024D502D3630F04E04B33675* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t80259A7B1B58A3C6024D502D3630F04E04B33675*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor>::get_Count()
inline int32_t List_1_get_Count_m9EEB47EFB9925826D1B727DDA11E63DD65EA9982_inline (List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor>::GetEnumerator()
inline Enumerator_t889AB5AF38A498D727DBFE55A756175529FC86CE List_1_GetEnumerator_mC6B1B7EA0850C9D91A41B661AE02ED3620B06BD0 (List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t889AB5AF38A498D727DBFE55A756175529FC86CE (*) (List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor>::Dispose()
inline void Enumerator_Dispose_m7CC67B16F72585A664675D34AA020B93E4F4045E (Enumerator_t889AB5AF38A498D727DBFE55A756175529FC86CE* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t889AB5AF38A498D727DBFE55A756175529FC86CE*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor>::get_Current()
inline XRHumanBodySubsystemDescriptor_tA7A72196EAFCDB936BC0C73634B1553E94D8EC3B* Enumerator_get_Current_m7C049649C842A08198C3CB4055D9011E814ED6AE_inline (Enumerator_t889AB5AF38A498D727DBFE55A756175529FC86CE* __this, const RuntimeMethod* method)
{
	return ((  XRHumanBodySubsystemDescriptor_tA7A72196EAFCDB936BC0C73634B1553E94D8EC3B* (*) (Enumerator_t889AB5AF38A498D727DBFE55A756175529FC86CE*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor::get_supportsHumanBody2D()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRHumanBodySubsystemDescriptor_get_supportsHumanBody2D_m7FD5572388D3E9EF931691F0267B3779B219F9DE_inline (XRHumanBodySubsystemDescriptor_tA7A72196EAFCDB936BC0C73634B1553E94D8EC3B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor::get_supportsHumanBody3D()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRHumanBodySubsystemDescriptor_get_supportsHumanBody3D_mD98F673993E12554F127E2FEF129C75146282BCB_inline (XRHumanBodySubsystemDescriptor_tA7A72196EAFCDB936BC0C73634B1553E94D8EC3B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor>::MoveNext()
inline bool Enumerator_MoveNext_m05766C966E3C460B9CA199E42C6FB372E9C67E41 (Enumerator_t889AB5AF38A498D727DBFE55A756175529FC86CE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t889AB5AF38A498D727DBFE55A756175529FC86CE*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>::get_Count()
inline int32_t List_1_get_Count_m6A74C1CEFDCA30C41B35F15FDE2F60FEBFA0379C_inline (List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>::GetEnumerator()
inline Enumerator_tDD7560C140068F3E8D425296DCECD44CE0F59685 List_1_GetEnumerator_m741D05FA091DCFE8B7F6AEE1454D40589CE18009 (List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDD7560C140068F3E8D425296DCECD44CE0F59685 (*) (List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>::Dispose()
inline void Enumerator_Dispose_mF43AC8F3B0CE053F5089E0123269CDEA7899C5B0 (Enumerator_tDD7560C140068F3E8D425296DCECD44CE0F59685* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDD7560C140068F3E8D425296DCECD44CE0F59685*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>::get_Current()
inline XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* Enumerator_get_Current_mCA58A87394221878BE8ABB337DEE283B1AA0D923_inline (Enumerator_tDD7560C140068F3E8D425296DCECD44CE0F59685* __this, const RuntimeMethod* method)
{
	return ((  XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* (*) (Enumerator_tDD7560C140068F3E8D425296DCECD44CE0F59685*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::get_supportsAverageBrightness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemDescriptor_get_supportsAverageBrightness_m394F0A5371B43E4A53DF4AAF18EC2CB3A3BA30E4_inline (XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::get_supportsAverageIntensityInLumens()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemDescriptor_get_supportsAverageIntensityInLumens_m15A6095FCF7EE2C44DA00C8A7EAA0FB185F6148C_inline (XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::get_supportsAverageColorTemperature()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemDescriptor_get_supportsAverageColorTemperature_m45A35D2620A0744755E9073E1E8CC96EDF8992F6_inline (XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::get_supportsColorCorrection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemDescriptor_get_supportsColorCorrection_m380D4EFA54BD40435F3EC0D4811C17600F60FA3B_inline (XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::get_supportsCameraConfigurations()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemDescriptor_get_supportsCameraConfigurations_mDA577F21C255F11827B6226688C41D1DDE20A753_inline (XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::get_supportsCameraImage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemDescriptor_get_supportsCameraImage_m4C81161C7C5D5873D7673681206B1B8B0D158F50_inline (XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::get_supportsFaceTrackingHDRLightEstimation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemDescriptor_get_supportsFaceTrackingHDRLightEstimation_mA892EB29FFD62B3C49E5EA4834CF5C27DE39824F_inline (XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::get_supportsWorldTrackingHDRLightEstimation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemDescriptor_get_supportsWorldTrackingHDRLightEstimation_mF08EE18BA151F1D274A100ECD32045427C76EB83_inline (XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor::get_supportsCameraGrain()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemDescriptor_get_supportsCameraGrain_mA7563A6FB9661F093C972DBF54BC9A3F372624F7_inline (XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>::MoveNext()
inline bool Enumerator_MoveNext_m75E480BD3F1C43B93C728A928326525D1961F13A (Enumerator_tDD7560C140068F3E8D425296DCECD44CE0F59685* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDD7560C140068F3E8D425296DCECD44CE0F59685*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>::get_Count()
inline int32_t List_1_get_Count_mA44F1ED8A79AEE96EAB4404FA2C506D824A8FAD4_inline (List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor>::get_Count()
inline int32_t List_1_get_Count_mD5EB8477D6C85DCC813539412C938E8A04A7BC05_inline (List_1_tDE8C3B426AF72FF013BD4E2E4C4660F30F1371DB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDE8C3B426AF72FF013BD4E2E4C4660F30F1371DB*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>::GetEnumerator()
inline Enumerator_t68B4B1418CD0BC5485A8EC4AC2A711276AC6EC07 List_1_GetEnumerator_mEFC1706A6A8C9D0A5AB613FA261D0421CAC96397 (List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t68B4B1418CD0BC5485A8EC4AC2A711276AC6EC07 (*) (List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>::Dispose()
inline void Enumerator_Dispose_mB35124AA2FC787771DCC660594EA001A0797409A (Enumerator_t68B4B1418CD0BC5485A8EC4AC2A711276AC6EC07* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t68B4B1418CD0BC5485A8EC4AC2A711276AC6EC07*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>::get_Current()
inline XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* Enumerator_get_Current_m4BE6AE62EE0784C1A80177F41CD98F7798A92963_inline (Enumerator_t68B4B1418CD0BC5485A8EC4AC2A711276AC6EC07* __this, const RuntimeMethod* method)
{
	return ((  XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* (*) (Enumerator_t68B4B1418CD0BC5485A8EC4AC2A711276AC6EC07*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::get_supportsClassification()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRPlaneSubsystemDescriptor_get_supportsClassification_m634BD5268FC0BB4BCE42396067B1C03E48D4F03F_inline (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>::MoveNext()
inline bool Enumerator_MoveNext_mBEFA526C081F0C86F13A50D46142098D7385798A (Enumerator_t68B4B1418CD0BC5485A8EC4AC2A711276AC6EC07* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t68B4B1418CD0BC5485A8EC4AC2A711276AC6EC07*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>::get_Count()
inline int32_t List_1_get_Count_m9D640171A29156A0E4A0C90231581EC090760468_inline (List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor>::get_Count()
inline int32_t List_1_get_Count_m1084297599D738264810DF28A355B0E1DAFB9D5A_inline (List_1_tCD3E505D75F3A61FA85FC4FBBAE146ACC1A844AA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCD3E505D75F3A61FA85FC4FBBAE146ACC1A844AA*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor>::get_Count()
inline int32_t List_1_get_Count_m99B0EF160EBB7A08AC421E6DB4249A113672F5C7_inline (List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.ARFoundation.LoaderUtility::GetActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* LoaderUtility_GetActiveLoader_m388DA860185DE0C4307D7A46AAAC529055CCB2F1 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// TSubsystemDescriptor UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem,UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider>::get_descriptor()
inline XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* SubsystemLifecycleManager_3_get_descriptor_mFCC2B929205B70121157536075F522DF0476AAB9 (SubsystemLifecycleManager_3_t1892B8E9DF20D5A95CB7E5B2AAA38CF6DD9711CF* __this, const RuntimeMethod* method)
{
	return ((  XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* (*) (SubsystemLifecycleManager_3_t1892B8E9DF20D5A95CB7E5B2AAA38CF6DD9711CF*, const RuntimeMethod*))SubsystemLifecycleManager_3_get_descriptor_m55ACAFBB8D8273993E410BEFD978F09ABCF7CDA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::get_supportsHumanSegmentationStencilImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XROcclusionSubsystemDescriptor_get_supportsHumanSegmentationStencilImage_mE5760E70F08587F5CD918184E394C675DADB106B (XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::get_supportsHumanSegmentationDepthImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XROcclusionSubsystemDescriptor_get_supportsHumanSegmentationDepthImage_m912EC7337D203DDFA386290C81F1DFEEF9166B11 (XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::get_supportsEnvironmentDepthImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XROcclusionSubsystemDescriptor_get_supportsEnvironmentDepthImage_m28E39D10619376C8447AFE6782E7790278E4B6F5 (XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.UI.Selectable::get_interactable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.Samples.BackButton::get_backButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* BackButton_get_backButton_mA868BBCC5050CBDBC9D5BE03D6F93BB44689C0ED (BackButton_t682CB59ECA98A9126A528B1986C2B0F25F7A2646* __this, const RuntimeMethod* method) 
{
	{
		// get => m_BackButton;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_BackButton_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.BackButton::set_backButton(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackButton_set_backButton_m864715B5BBDC19F225F2853BD9073D90A78FD8D8 (BackButton_t682CB59ECA98A9126A528B1986C2B0F25F7A2646* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_BackButton = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_BackButton_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BackButton_4), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.BackButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackButton_Start_m03DA700DAE06ACA2906F4B2ED6D1D6C99CA7BAF9 (BackButton_t682CB59ECA98A9126A528B1986C2B0F25F7A2646* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.CanStreamedLevelBeLoaded("Menu"))
		bool L_0;
		L_0 = Application_CanStreamedLevelBeLoaded_mA1BAA60593E8679BAFA6A16595166774AE172ADC(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// m_BackButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___m_BackButton_4;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.BackButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackButton_Update_mE69E59A2F7BFBCFB422304A016A29E4B67BB0481 (BackButton_t682CB59ECA98A9126A528B1986C2B0F25F7A2646* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// BackButtonPressed();
		BackButton_BackButtonPressed_mC43E126C072699D816A4DBDFAEB98B9B70F30A6B(__this, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.BackButton::BackButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackButton_BackButtonPressed_mC43E126C072699D816A4DBDFAEB98B9B70F30A6B (BackButton_t682CB59ECA98A9126A528B1986C2B0F25F7A2646* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.CanStreamedLevelBeLoaded("Menu"))
		bool L_0;
		L_0 = Application_CanStreamedLevelBeLoaded_mA1BAA60593E8679BAFA6A16595166774AE172ADC(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// SceneManager.LoadScene("Menu", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, 0, NULL);
		// LoaderUtility.Deinitialize();
		bool L_1;
		L_1 = LoaderUtility_Deinitialize_mE0BD3EA32E3B74451C4359613B0420352AAB989D(NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.BackButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackButton__ctor_m946D052D7BEAC65F2684D95DD2C02BFAE3E8FFAA (BackButton_t682CB59ECA98A9126A528B1986C2B0F25F7A2646* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_simpleAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_simpleAR_m36BE444287F448E8219EB0F8605EB980E90406D4 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SimpleAR;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_SimpleAR_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_simpleAR(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_simpleAR_mDAC0FFD5F475B85EF930596EA8520323FFD6FD7C (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_SimpleAR = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_SimpleAR_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SimpleAR_4), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_imageTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_imageTracking_m044006E52329A5C2DA02E6DF2536C4EC89F84FDB (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ImageTracking;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_ImageTracking_5;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_imageTracking(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_imageTracking_m828F814C0F36DB9E51BE1B545E4A58969C7E8262 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ImageTracking = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_ImageTracking_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ImageTracking_5), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_anchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_anchors_m52948CB4EE1D3C8D57C7AC60705D1EC9DD8E0422 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Anchors;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_Anchors_6;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_anchors(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_anchors_mFC17347DF80ACCC4BCF363DFD6615F77E46FD6CD (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Anchors = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_Anchors_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Anchors_6), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_ARWorldMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_ARWorldMap_m9FB4312209B2F9E7ED86B22C0044997D310FFE21 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ARWorldMap;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_ARWorldMap_7;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_ARWorldMap(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_ARWorldMap_m13BFA81DFB5FBB76D36822804686D5A817B48293 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ARWorldMap = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_ARWorldMap_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ARWorldMap_7), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_ARKitGeoAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_ARKitGeoAnchors_mC0C7D4E88E886B04C91B946A559796F74247871D (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ARKitGeoAnchors;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_ARKitGeoAnchors_8;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_ARKitGeoAnchors(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_ARKitGeoAnchors_mDCFE5A3FE8FD62C4AE0FF9C12E52E44FD7C91CC7 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ARKitGeoAnchors = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_ARKitGeoAnchors_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ARKitGeoAnchors_8), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_cpuImages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_cpuImages_mF031CA0DD49BF4C6AEBB7104FF95F4B4A098D6D0 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_CpuImages;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_CpuImages_9;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_cpuImages(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_cpuImages_mBCD0CDCD4882DEE2F9D045CE9565575A7A720354 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_CpuImages = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_CpuImages_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CpuImages_9), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_environmentProbes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_environmentProbes_m840254676595B4833E32BD642D32667F4307DA6A (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_EnvironmentProbes;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_EnvironmentProbes_10;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_environmentProbes(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_environmentProbes_mC9CEA02E45BD393DC02647CF63B93F923CA020C7 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_EnvironmentProbes = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_EnvironmentProbes_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EnvironmentProbes_10), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_ARCollaborationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_ARCollaborationData_m06DC2FE5D78319FF62FF76A64623929DDEBE5882 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ARCollaborationData;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_ARCollaborationData_11;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_ARCollaborationData(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_ARCollaborationData_m5FB42C9742F1ACEFC8555E279D36D9EFD1B69F23 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ARCollaborationData = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_ARCollaborationData_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ARCollaborationData_11), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_ARKitCoachingOverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_ARKitCoachingOverlay_m30E7E2AB3E90E84049D9759647437C7D2533C74A (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ARKitCoachingOverlay;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_ARKitCoachingOverlay_12;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_ARKitCoachingOverlay(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_ARKitCoachingOverlay_mD9BBBD286ECDCE6201A6988A6AA2462B173831F5 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ARKitCoachingOverlay = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_ARKitCoachingOverlay_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ARKitCoachingOverlay_12), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_scale_m579C4BB9127FEB858E74B5C1444C55C436439D99 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Scale;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_Scale_13;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_scale(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_scale_m2A182FCC3B5827CE93EBDF030C2152C9A8A0C35F (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Scale = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_Scale_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Scale_13), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_objectTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_objectTracking_m92733B80D3D4A27E9DFB9E9EF914AD146745BEA1 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ObjectTracking;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_ObjectTracking_14;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_objectTracking(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_objectTracking_m65E5FF0D90A4E26D110F3022429D664026C64087 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ObjectTracking = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_ObjectTracking_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectTracking_14), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_planeOcclusion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_planeOcclusion_m797B9C897EEF62E84C37B486BCE51E42A63F8AF2 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PlaneOcclusion;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_PlaneOcclusion_15;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_planeOcclusion(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_planeOcclusion_m4393F997310FCCC606CD88FFFC059372C27F7BC8 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PlaneOcclusion = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_PlaneOcclusion_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneOcclusion_15), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_pointCloud()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_pointCloud_m7C6622474BB184DB29EF3D7D6EAE3F2B6D4B1A93 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PointCloud;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_PointCloud_16;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_pointCloud(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_pointCloud_m999BF1F8B7C4FE12158EDEADED4F399B4E3350DB (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PointCloud = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_PointCloud_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PointCloud_16), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_faceTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_faceTracking_m84AA96A9A250421ADB78258F91D9E2EC92CF3740 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_FaceTracking;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_FaceTracking_17;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_faceTracking(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_faceTracking_m54A8D51D1DC12F0DF3CE5250FEBA5E79BB095620 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_FaceTracking = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_FaceTracking_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FaceTracking_17), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_faceBlendShapes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_faceBlendShapes_mA4BD4BB63B4301B4FBFE66CAFBC002BC943C48C3 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_FaceBlendShapes;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_FaceBlendShapes_18;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_faceBlendShapes(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_faceBlendShapes_m3EA2994721F1A277B36668EE5DF0040C30C04AFF (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_FaceBlendShapes = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_FaceBlendShapes_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FaceBlendShapes_18), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_faceRegions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_faceRegions_m23A2690FAFD0D941A859FF85DB0AED1A41BD1B27 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_FaceRegions;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_FaceRegions_19;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_faceRegions(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_faceRegions_m47E0877FFFA1F74276AD6D7FBB384BD6FE1D613A (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_FaceRegions = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_FaceRegions_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FaceRegions_19), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_bodyTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_bodyTracking_m25BCB4B45EB1C249BBB2B076CF07A7AB62E364F1 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_BodyTracking;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_BodyTracking_20;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_bodyTracking(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_bodyTracking_m79A3B3D40D377EB9198A354A1D94D6F477C10638 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_BodyTracking = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_BodyTracking_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BodyTracking_20), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_lightEstimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_lightEstimation_m09F497CD1D7B1941687705989C5A1F40BF69F024 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LightEstimation;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_LightEstimation_21;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_lightEstimation(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_lightEstimation_m340F2B8A91326491841832853436F5F724B991B3 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_LightEstimation = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_LightEstimation_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LightEstimation_21), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_basicLightEstimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_basicLightEstimation_mAE70CB0610B38B7624DB8CCF69EE6116B183513E (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_BasicLightEstimation;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_BasicLightEstimation_22;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_basicLightEstimation(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_basicLightEstimation_m7F8A57B20FB2850E260C220415DBFD202BB838F3 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_BasicLightEstimation = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_BasicLightEstimation_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BasicLightEstimation_22), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_HDRLightEstimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_HDRLightEstimation_m4B589D23B2FEF2E8941D57A1AC61FCF3D96F7112 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HDRLightEstimation;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_HDRLightEstimation_23;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_HDRLightEstimation(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_HDRLightEstimation_mFFCF809D384F103F10C96A2034FC4F612AA4273B (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_HDRLightEstimation = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_HDRLightEstimation_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HDRLightEstimation_23), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_planeDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_planeDetection_mE0765D9EBB5F479EDA71600D7839F2DBF2B35A15 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PlaneDetection;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_PlaneDetection_24;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_planeDetection(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_planeDetection_m42A7E7E4847FC41AE673FC73A54DB4C180C0427A (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PlaneDetection = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_PlaneDetection_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneDetection_24), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_planeClassification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_planeClassification_m6C58732CFD5113C79A7DCFA1A274DA34F0D9B7AE (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PlaneClassification;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_PlaneClassification_25;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_planeClassification(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_planeClassification_mA9D1B37072739E5034B9AEEA3231A073642CBD51 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PlaneClassification = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_PlaneClassification_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneClassification_25), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_meshing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_meshing_mF04977CD167DABA293F0D089C5F61A53C5D4407B (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Meshing;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_Meshing_26;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_meshing(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_meshing_m50144C91A73CA7DD50D031FC54A5BC040F8FA113 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Meshing = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_Meshing_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Meshing_26), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_interaction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_interaction_mD1D58BA312E69FF1337535259C13174BE0E2BF16 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Interaction;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_Interaction_27;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_interaction(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_interaction_mD37F3607D92BC30A9F4016FBAAA101205C62FDCD (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Interaction = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_Interaction_27 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Interaction_27), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_fixationPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_fixationPoint_m96F9A11CF7BFD36EF2AAA0C128BCBCDA78095635 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_FixationPoint;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_FixationPoint_28;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_fixationPoint(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_fixationPoint_m3E9D13D0B120754C7B11688EC5FC50A033772D5E (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_FixationPoint = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_FixationPoint_28 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FixationPoint_28), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_eyePoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_eyePoses_mC242B44F3C02F686AEE439539F1128AC683C2057 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_EyePoses;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_EyePoses_29;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_eyePoses(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_eyePoses_m49ACCDA089A92B3E58B07311F446F6D5866FC71C (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_EyePoses = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_EyePoses_29 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EyePoses_29), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_eyeLasers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_eyeLasers_m21C469C4E87B542544634C0A36AE788AD2835E0D (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_EyeLasers;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_EyeLasers_30;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_eyeLasers(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_eyeLasers_m579CC43E4392EE17F43FC19C4F137199068FF5E3 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_EyeLasers = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_EyeLasers_30 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EyeLasers_30), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_checkSupport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_checkSupport_m3AEAB85DC8E94353201373E8675087614A9619BC (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_CheckSupport;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_CheckSupport_31;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_checkSupport(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_checkSupport_m49800FABB1D28AE17D8EDC409D9E2773C68336F0 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_CheckSupport = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_CheckSupport_31 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CheckSupport_31), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_depth_m329568656FE80C737321D8201B9A8660A3DCA0B8 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Depth;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_Depth_32;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_depth(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_depth_mFA06C3B9B66AC4D87B12331F9F79D411260EB563 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Depth = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_Depth_32 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Depth_32), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_configChooser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_configChooser_m78AA94ED62ACA56041EA4E46CBE879C2EBEE7564 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ConfigChooser;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_ConfigChooser_33;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_configChooser(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_configChooser_m7E7857F99F54FB38B3C4662850CE5639DFE844C7 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ConfigChooser = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_ConfigChooser_33 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ConfigChooser_33), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_inputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_inputSystem_m750FEE33C9F6BEBE11D5ECB9243042ED478DFD38 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_InputSystem;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_InputSystem_34;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_inputSystem(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_inputSystem_m55F2116B9D508F86902D0D0B787CAB048CCA415D (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_InputSystem = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_InputSystem_34 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InputSystem_34), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_cameraGrain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_cameraGrain_m16EC077E15AE2A18999DA28A56AC6478B8013A70 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_CameraGrain;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_CameraGrain_35;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_cameraGrain(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_cameraGrain_m68822C37534D005DA6CA0CAF58D7AB4221CB6253 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_CameraGrain = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_CameraGrain_35 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CameraGrain_35), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::get_thermalStateButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* CheckAvailableFeatures_get_thermalStateButton_m5B5775762294F966152356BA712288E164F922AA (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ThermalStateButton;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_ThermalStateButton_36;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::set_thermalStateButton(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_set_thermalStateButton_m77681C15809A27850E7B64FA6CB2C9A086EB231A (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ThermalStateButton = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_ThermalStateButton_36 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ThermalStateButton_36), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures_Start_mB1E007F694DFE9CFD5A4E6385ACE7FFFA3C52BAF (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m369B6D262C35CF3F139A10CF383BACDB9DF84159_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3DB61899D7FBB2281D324157AF07A0339F1307D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7CC67B16F72585A664675D34AA020B93E4F4045E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB35124AA2FC787771DCC660594EA001A0797409A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF43AC8F3B0CE053F5089E0123269CDEA7899C5B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m05766C966E3C460B9CA199E42C6FB372E9C67E41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2E4CF4ADC14C8D1BCAC816FFECE23245A85BD193_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6F44014C3A26B090C7785EA565B608E6F3AD128B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m75E480BD3F1C43B93C728A928326525D1961F13A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBEFA526C081F0C86F13A50D46142098D7385798A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m35F60EA6C9173B7839D721974693C9C601FD3914_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4BE6AE62EE0784C1A80177F41CD98F7798A92963_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7C049649C842A08198C3CB4055D9011E814ED6AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC02294849145E2B63EBCA61C57D09C2D45511397_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCA58A87394221878BE8ABB337DEE283B1AA0D923_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m10249D9BFCB944FFEFC25CD908FC6DF7D98F7DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6834C0FF9B7755D475F3BE96B82B6FA032AAB505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m741D05FA091DCFE8B7F6AEE1454D40589CE18009_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC6B1B7EA0850C9D91A41B661AE02ED3620B06BD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEFC1706A6A8C9D0A5AB613FA261D0421CAC96397_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0041FCD66EA4A14EE9726BD4394D16E3B774F24D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0F399A867DD49156E70176EE1C7B03008B0C91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m557951E514A8AC64A23A7BB73E5AB7311864AFC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m58A0EBFF5B75A5957CC94BDB2FD97220147648B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m751F8C0A254EAAB9A57DC06058D6478D339241E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7C7331D79296471E23B70E31A3A1FBB67430722D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA29AB6D75EDEFFD0FAC6ADAB81EF88FD662394FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAEBD838FB34773F42260D6F5EB976FDE590579ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB384A94B775793199D6172CD1A2B3139DD608F17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCEB5D9ECEA5630CE9235CEF5D7619090A6F81F90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD37DFF84CD1CA96858B12F84D0CF63E5B720F055_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDABF63F4EEB1F694E44489872E8254FCF762AE27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF6FE314A80CA5A3B1B60562EE153D1676D658D76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1084297599D738264810DF28A355B0E1DAFB9D5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m594612ECE18B286D1A50F20CE683CB932BA08689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6A74C1CEFDCA30C41B35F15FDE2F60FEBFA0379C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6FBB94278B8E0C25D70082CD29908680C2F18947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m90EE029ECA48BF389C6C835B8AC9927E3D12A754_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m99B0EF160EBB7A08AC421E6DB4249A113672F5C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9D640171A29156A0E4A0C90231581EC090760468_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9EEB47EFB9925826D1B727DDA11E63DD65EA9982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA44F1ED8A79AEE96EAB4404FA2C506D824A8FAD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD5EB8477D6C85DCC813539412C938E8A04A7BC05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF32C7EC5BD247E48779718527DBB16042BC388C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4EB1B73C8DDBD534099637F220FA7D8AFC3D2DE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCD3E505D75F3A61FA85FC4FBBAE146ACC1A844AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDE8C3B426AF72FF013BD4E2E4C4660F30F1371DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetSubsystemDescriptors_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_mAF4A988B1348B0D6F190D2BC71D0E49817EB5CD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetSubsystemDescriptors_TisXRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847_m766580FC5E1A1763868F998199983F1E0C583DB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetSubsystemDescriptors_TisXRDepthSubsystemDescriptor_tA961ACA2A67359F10E59D48257490E3ACEEFD5C0_m7F47A70579FE9E62594332AC398D09665F01AAFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetSubsystemDescriptors_TisXREnvironmentProbeSubsystemDescriptor_t19B9462452B99289DB335591C096C5CC970296C4_m035ECA777209F93887F42E964A2AC6D46604EFFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetSubsystemDescriptors_TisXRFaceSubsystemDescriptor_t44596C9878EB76583452C5F5BF6FA78FA9EB171F_m3AB713932845389BA75027CEF1B9DCA00ABF45F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetSubsystemDescriptors_TisXRHumanBodySubsystemDescriptor_tA7A72196EAFCDB936BC0C73634B1553E94D8EC3B_mCE46F738E7019DEE11C9510751AF39D8C77713E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetSubsystemDescriptors_TisXRImageTrackingSubsystemDescriptor_t6D3883C9B0005F09FE2ECE410BF3A8E64A4A5CBE_m3182E1DC9C4F742B45F2936517F34867DC2850A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetSubsystemDescriptors_TisXRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_m1945DA5EC98FE287F67E15F90CF71919A7263CDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetSubsystemDescriptors_TisXROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F_mF712C678036D7B4C2DBDBDA5A79A7EED604A7C88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetSubsystemDescriptors_TisXRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_m630BDF2523BF79C6A651143AE1B0AC602D5A96CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetSubsystemDescriptors_TisXRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300_m9C9C8F40B805C8ED7797E62AAB2DD5D53BFA9D7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetSubsystemDescriptors_TisXRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311_m0A5A3ED8C998E0C0E0EC51618B3BE7B13F117DE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetSubsystemDescriptors_TisXRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076_m36B3802981CFB59295804CC1742DE99D1BFCBC57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetLoadedSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m081FBFB83316621ED3D69C9D27376B59CB646519_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0* V_0 = NULL;
	List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F* V_1 = NULL;
	List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6* V_2 = NULL;
	List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED* V_3 = NULL;
	List_1_tDE8C3B426AF72FF013BD4E2E4C4660F30F1371DB* V_4 = NULL;
	List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* V_5 = NULL;
	List_1_tCD3E505D75F3A61FA85FC4FBBAE146ACC1A844AA* V_6 = NULL;
	List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C* V_7 = NULL;
	List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2* V_8 = NULL;
	List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* V_9 = NULL;
	List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512* V_10 = NULL;
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* V_11 = NULL;
	Enumerator_tD1B4F6EEEE309D2BFB45178DCAA3E0482743B9D7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Enumerator_t80259A7B1B58A3C6024D502D3630F04E04B33675 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Enumerator_t889AB5AF38A498D727DBFE55A756175529FC86CE V_14;
	memset((&V_14), 0, sizeof(V_14));
	XRHumanBodySubsystemDescriptor_tA7A72196EAFCDB936BC0C73634B1553E94D8EC3B* V_15 = NULL;
	Enumerator_tDD7560C140068F3E8D425296DCECD44CE0F59685 V_16;
	memset((&V_16), 0, sizeof(V_16));
	XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* V_17 = NULL;
	Enumerator_t68B4B1418CD0BC5485A8EC4AC2A711276AC6EC07 V_18;
	memset((&V_18), 0, sizeof(V_18));
	{
		// var planeDescriptors = new List<XRPlaneSubsystemDescriptor>();
		List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0* L_0 = (List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0*)il2cpp_codegen_object_new(List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m0041FCD66EA4A14EE9726BD4394D16E3B774F24D(L_0, List_1__ctor_m0041FCD66EA4A14EE9726BD4394D16E3B774F24D_RuntimeMethod_var);
		V_0 = L_0;
		// SubsystemManager.GetSubsystemDescriptors(planeDescriptors);
		List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		SubsystemManager_GetSubsystemDescriptors_TisXRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300_m9C9C8F40B805C8ED7797E62AAB2DD5D53BFA9D7F(L_1, SubsystemManager_GetSubsystemDescriptors_TisXRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300_m9C9C8F40B805C8ED7797E62AAB2DD5D53BFA9D7F_RuntimeMethod_var);
		// var rayCastDescriptors = new List<XRRaycastSubsystemDescriptor>();
		List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F* L_2 = (List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F*)il2cpp_codegen_object_new(List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mDABF63F4EEB1F694E44489872E8254FCF762AE27(L_2, List_1__ctor_mDABF63F4EEB1F694E44489872E8254FCF762AE27_RuntimeMethod_var);
		V_1 = L_2;
		// SubsystemManager.GetSubsystemDescriptors(rayCastDescriptors);
		List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F* L_3 = V_1;
		SubsystemManager_GetSubsystemDescriptors_TisXRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311_m0A5A3ED8C998E0C0E0EC51618B3BE7B13F117DE1(L_3, SubsystemManager_GetSubsystemDescriptors_TisXRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311_m0A5A3ED8C998E0C0E0EC51618B3BE7B13F117DE1_RuntimeMethod_var);
		// var faceDescriptors = new List<XRFaceSubsystemDescriptor>();
		List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6* L_4 = (List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6*)il2cpp_codegen_object_new(List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m7C7331D79296471E23B70E31A3A1FBB67430722D(L_4, List_1__ctor_m7C7331D79296471E23B70E31A3A1FBB67430722D_RuntimeMethod_var);
		V_2 = L_4;
		// SubsystemManager.GetSubsystemDescriptors(faceDescriptors);
		List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6* L_5 = V_2;
		SubsystemManager_GetSubsystemDescriptors_TisXRFaceSubsystemDescriptor_t44596C9878EB76583452C5F5BF6FA78FA9EB171F_m3AB713932845389BA75027CEF1B9DCA00ABF45F3(L_5, SubsystemManager_GetSubsystemDescriptors_TisXRFaceSubsystemDescriptor_t44596C9878EB76583452C5F5BF6FA78FA9EB171F_m3AB713932845389BA75027CEF1B9DCA00ABF45F3_RuntimeMethod_var);
		// var imageDescriptors = new List<XRImageTrackingSubsystemDescriptor>();
		List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED* L_6 = (List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED*)il2cpp_codegen_object_new(List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m557951E514A8AC64A23A7BB73E5AB7311864AFC7(L_6, List_1__ctor_m557951E514A8AC64A23A7BB73E5AB7311864AFC7_RuntimeMethod_var);
		V_3 = L_6;
		// SubsystemManager.GetSubsystemDescriptors(imageDescriptors);
		List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED* L_7 = V_3;
		SubsystemManager_GetSubsystemDescriptors_TisXRImageTrackingSubsystemDescriptor_t6D3883C9B0005F09FE2ECE410BF3A8E64A4A5CBE_m3182E1DC9C4F742B45F2936517F34867DC2850A1(L_7, SubsystemManager_GetSubsystemDescriptors_TisXRImageTrackingSubsystemDescriptor_t6D3883C9B0005F09FE2ECE410BF3A8E64A4A5CBE_m3182E1DC9C4F742B45F2936517F34867DC2850A1_RuntimeMethod_var);
		// var envDescriptors = new List<XREnvironmentProbeSubsystemDescriptor>();
		List_1_tDE8C3B426AF72FF013BD4E2E4C4660F30F1371DB* L_8 = (List_1_tDE8C3B426AF72FF013BD4E2E4C4660F30F1371DB*)il2cpp_codegen_object_new(List_1_tDE8C3B426AF72FF013BD4E2E4C4660F30F1371DB_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_mD37DFF84CD1CA96858B12F84D0CF63E5B720F055(L_8, List_1__ctor_mD37DFF84CD1CA96858B12F84D0CF63E5B720F055_RuntimeMethod_var);
		V_4 = L_8;
		// SubsystemManager.GetSubsystemDescriptors(envDescriptors);
		List_1_tDE8C3B426AF72FF013BD4E2E4C4660F30F1371DB* L_9 = V_4;
		SubsystemManager_GetSubsystemDescriptors_TisXREnvironmentProbeSubsystemDescriptor_t19B9462452B99289DB335591C096C5CC970296C4_m035ECA777209F93887F42E964A2AC6D46604EFFF(L_9, SubsystemManager_GetSubsystemDescriptors_TisXREnvironmentProbeSubsystemDescriptor_t19B9462452B99289DB335591C096C5CC970296C4_m035ECA777209F93887F42E964A2AC6D46604EFFF_RuntimeMethod_var);
		// var anchorDescriptors = new List<XRAnchorSubsystemDescriptor>();
		List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* L_10 = (List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE*)il2cpp_codegen_object_new(List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		List_1__ctor_mB384A94B775793199D6172CD1A2B3139DD608F17(L_10, List_1__ctor_mB384A94B775793199D6172CD1A2B3139DD608F17_RuntimeMethod_var);
		V_5 = L_10;
		// SubsystemManager.GetSubsystemDescriptors(anchorDescriptors);
		List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* L_11 = V_5;
		SubsystemManager_GetSubsystemDescriptors_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_mAF4A988B1348B0D6F190D2BC71D0E49817EB5CD6(L_11, SubsystemManager_GetSubsystemDescriptors_TisXRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_mAF4A988B1348B0D6F190D2BC71D0E49817EB5CD6_RuntimeMethod_var);
		// var objectDescriptors = new List<XRObjectTrackingSubsystemDescriptor>();
		List_1_tCD3E505D75F3A61FA85FC4FBBAE146ACC1A844AA* L_12 = (List_1_tCD3E505D75F3A61FA85FC4FBBAE146ACC1A844AA*)il2cpp_codegen_object_new(List_1_tCD3E505D75F3A61FA85FC4FBBAE146ACC1A844AA_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		List_1__ctor_mAEBD838FB34773F42260D6F5EB976FDE590579ED(L_12, List_1__ctor_mAEBD838FB34773F42260D6F5EB976FDE590579ED_RuntimeMethod_var);
		V_6 = L_12;
		// SubsystemManager.GetSubsystemDescriptors(objectDescriptors);
		List_1_tCD3E505D75F3A61FA85FC4FBBAE146ACC1A844AA* L_13 = V_6;
		SubsystemManager_GetSubsystemDescriptors_TisXRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_m1945DA5EC98FE287F67E15F90CF71919A7263CDE(L_13, SubsystemManager_GetSubsystemDescriptors_TisXRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_m1945DA5EC98FE287F67E15F90CF71919A7263CDE_RuntimeMethod_var);
		// var participantDescriptors = new List<XRParticipantSubsystemDescriptor>();
		List_1_t4EB1B73C8DDBD534099637F220FA7D8AFC3D2DE4* L_14 = (List_1_t4EB1B73C8DDBD534099637F220FA7D8AFC3D2DE4*)il2cpp_codegen_object_new(List_1_t4EB1B73C8DDBD534099637F220FA7D8AFC3D2DE4_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		List_1__ctor_mA29AB6D75EDEFFD0FAC6ADAB81EF88FD662394FB(L_14, List_1__ctor_mA29AB6D75EDEFFD0FAC6ADAB81EF88FD662394FB_RuntimeMethod_var);
		// SubsystemManager.GetSubsystemDescriptors(participantDescriptors);
		SubsystemManager_GetSubsystemDescriptors_TisXRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_m630BDF2523BF79C6A651143AE1B0AC602D5A96CA(L_14, SubsystemManager_GetSubsystemDescriptors_TisXRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_m630BDF2523BF79C6A651143AE1B0AC602D5A96CA_RuntimeMethod_var);
		// var depthDescriptors = new List<XRDepthSubsystemDescriptor>();
		List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C* L_15 = (List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C*)il2cpp_codegen_object_new(List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		List_1__ctor_m58A0EBFF5B75A5957CC94BDB2FD97220147648B5(L_15, List_1__ctor_m58A0EBFF5B75A5957CC94BDB2FD97220147648B5_RuntimeMethod_var);
		V_7 = L_15;
		// SubsystemManager.GetSubsystemDescriptors(depthDescriptors);
		List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C* L_16 = V_7;
		SubsystemManager_GetSubsystemDescriptors_TisXRDepthSubsystemDescriptor_tA961ACA2A67359F10E59D48257490E3ACEEFD5C0_m7F47A70579FE9E62594332AC398D09665F01AAFB(L_16, SubsystemManager_GetSubsystemDescriptors_TisXRDepthSubsystemDescriptor_tA961ACA2A67359F10E59D48257490E3ACEEFD5C0_m7F47A70579FE9E62594332AC398D09665F01AAFB_RuntimeMethod_var);
		// var occlusionDescriptors = new List<XROcclusionSubsystemDescriptor>();
		List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2* L_17 = (List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2*)il2cpp_codegen_object_new(List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		List_1__ctor_m0F0F399A867DD49156E70176EE1C7B03008B0C91(L_17, List_1__ctor_m0F0F399A867DD49156E70176EE1C7B03008B0C91_RuntimeMethod_var);
		V_8 = L_17;
		// SubsystemManager.GetSubsystemDescriptors(occlusionDescriptors);
		List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2* L_18 = V_8;
		SubsystemManager_GetSubsystemDescriptors_TisXROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F_mF712C678036D7B4C2DBDBDA5A79A7EED604A7C88(L_18, SubsystemManager_GetSubsystemDescriptors_TisXROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F_mF712C678036D7B4C2DBDBDA5A79A7EED604A7C88_RuntimeMethod_var);
		// var cameraDescriptors = new List<XRCameraSubsystemDescriptor>();
		List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* L_19 = (List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC*)il2cpp_codegen_object_new(List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		List_1__ctor_mCEB5D9ECEA5630CE9235CEF5D7619090A6F81F90(L_19, List_1__ctor_mCEB5D9ECEA5630CE9235CEF5D7619090A6F81F90_RuntimeMethod_var);
		V_9 = L_19;
		// SubsystemManager.GetSubsystemDescriptors(cameraDescriptors);
		List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* L_20 = V_9;
		SubsystemManager_GetSubsystemDescriptors_TisXRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847_m766580FC5E1A1763868F998199983F1E0C583DB0(L_20, SubsystemManager_GetSubsystemDescriptors_TisXRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847_m766580FC5E1A1763868F998199983F1E0C583DB0_RuntimeMethod_var);
		// var sessionDescriptors = new List<XRSessionSubsystemDescriptor>();
		List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* L_21 = (List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34*)il2cpp_codegen_object_new(List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		List_1__ctor_m751F8C0A254EAAB9A57DC06058D6478D339241E7(L_21, List_1__ctor_m751F8C0A254EAAB9A57DC06058D6478D339241E7_RuntimeMethod_var);
		// SubsystemManager.GetSubsystemDescriptors(sessionDescriptors);
		SubsystemManager_GetSubsystemDescriptors_TisXRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076_m36B3802981CFB59295804CC1742DE99D1BFCBC57(L_21, SubsystemManager_GetSubsystemDescriptors_TisXRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076_m36B3802981CFB59295804CC1742DE99D1BFCBC57_RuntimeMethod_var);
		// var bodyTrackingDescriptors = new List<XRHumanBodySubsystemDescriptor>();
		List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512* L_22 = (List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512*)il2cpp_codegen_object_new(List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		List_1__ctor_mF6FE314A80CA5A3B1B60562EE153D1676D658D76(L_22, List_1__ctor_mF6FE314A80CA5A3B1B60562EE153D1676D658D76_RuntimeMethod_var);
		V_10 = L_22;
		// SubsystemManager.GetSubsystemDescriptors(bodyTrackingDescriptors);
		List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512* L_23 = V_10;
		SubsystemManager_GetSubsystemDescriptors_TisXRHumanBodySubsystemDescriptor_tA7A72196EAFCDB936BC0C73634B1553E94D8EC3B_mCE46F738E7019DEE11C9510751AF39D8C77713E9(L_23, SubsystemManager_GetSubsystemDescriptors_TisXRHumanBodySubsystemDescriptor_tA7A72196EAFCDB936BC0C73634B1553E94D8EC3B_mCE46F738E7019DEE11C9510751AF39D8C77713E9_RuntimeMethod_var);
		// if(planeDescriptors.Count > 0 && rayCastDescriptors.Count > 0)
		List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_m6FBB94278B8E0C25D70082CD29908680C2F18947_inline(L_24, List_1_get_Count_m6FBB94278B8E0C25D70082CD29908680C2F18947_RuntimeMethod_var);
		if ((((int32_t)L_25) <= ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m594612ECE18B286D1A50F20CE683CB932BA08689_inline(L_26, List_1_get_Count_m594612ECE18B286D1A50F20CE683CB932BA08689_RuntimeMethod_var);
		if ((((int32_t)L_27) <= ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		// m_SimpleAR.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_28 = __this->___m_SimpleAR_4;
		NullCheck(L_28);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_28, (bool)1, NULL);
		// m_Scale.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_29 = __this->___m_Scale_13;
		NullCheck(L_29);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_29, (bool)1, NULL);
		// m_Interaction.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_30 = __this->___m_Interaction_27;
		NullCheck(L_30);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_30, (bool)1, NULL);
		// m_CheckSupport.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_31 = __this->___m_CheckSupport_31;
		NullCheck(L_31);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_31, (bool)1, NULL);
		// m_ConfigChooser.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_32 = __this->___m_ConfigChooser_33;
		NullCheck(L_32);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_32, (bool)1, NULL);
		// m_InputSystem.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_33 = __this->___m_InputSystem_34;
		NullCheck(L_33);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_33, (bool)1, NULL);
	}

IL_0100:
	{
		// if(faceDescriptors.Count > 0)
		List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6* L_34 = V_2;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_m90EE029ECA48BF389C6C835B8AC9927E3D12A754_inline(L_34, List_1_get_Count_m90EE029ECA48BF389C6C835B8AC9927E3D12A754_RuntimeMethod_var);
		if ((((int32_t)L_35) <= ((int32_t)0)))
		{
			goto IL_0178;
		}
	}
	{
		// m_FaceTracking.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_36 = __this->___m_FaceTracking_17;
		NullCheck(L_36);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_36, (bool)1, NULL);
		// m_FaceRegions.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_37 = __this->___m_FaceRegions_19;
		NullCheck(L_37);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_37, (bool)1, NULL);
		// foreach(var faceDescriptor in faceDescriptors)
		List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6* L_38 = V_2;
		NullCheck(L_38);
		Enumerator_tD1B4F6EEEE309D2BFB45178DCAA3E0482743B9D7 L_39;
		L_39 = List_1_GetEnumerator_m6834C0FF9B7755D475F3BE96B82B6FA032AAB505(L_38, List_1_GetEnumerator_m6834C0FF9B7755D475F3BE96B82B6FA032AAB505_RuntimeMethod_var);
		V_12 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_016a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m369B6D262C35CF3F139A10CF383BACDB9DF84159((&V_12), Enumerator_Dispose_m369B6D262C35CF3F139A10CF383BACDB9DF84159_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_015f_1;
			}

IL_012b_1:
			{
				// foreach(var faceDescriptor in faceDescriptors)
				XRFaceSubsystemDescriptor_t44596C9878EB76583452C5F5BF6FA78FA9EB171F* L_40;
				L_40 = Enumerator_get_Current_mC02294849145E2B63EBCA61C57D09C2D45511397_inline((&V_12), Enumerator_get_Current_mC02294849145E2B63EBCA61C57D09C2D45511397_RuntimeMethod_var);
				// if(faceDescriptor.supportsEyeTracking)
				NullCheck(L_40);
				bool L_41;
				L_41 = XRFaceSubsystemDescriptor_get_supportsEyeTracking_mF482F5E345E3A9435DA290AC6DD1D28470602039_inline(L_40, NULL);
				if (!L_41)
				{
					goto IL_015f_1;
				}
			}
			{
				// m_EyePoses.interactable = true;
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_42 = __this->___m_EyePoses_29;
				NullCheck(L_42);
				Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_42, (bool)1, NULL);
				// m_FixationPoint.interactable = true;
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_43 = __this->___m_FixationPoint_28;
				NullCheck(L_43);
				Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_43, (bool)1, NULL);
				// m_EyeLasers.interactable = true;
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_44 = __this->___m_EyeLasers_30;
				NullCheck(L_44);
				Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_44, (bool)1, NULL);
				// break;
				goto IL_0178;
			}

IL_015f_1:
			{
				// foreach(var faceDescriptor in faceDescriptors)
				bool L_45;
				L_45 = Enumerator_MoveNext_m2E4CF4ADC14C8D1BCAC816FFECE23245A85BD193((&V_12), Enumerator_MoveNext_m2E4CF4ADC14C8D1BCAC816FFECE23245A85BD193_RuntimeMethod_var);
				if (L_45)
				{
					goto IL_012b_1;
				}
			}
			{
				goto IL_0178;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0178:
	{
		// if(occlusionDescriptors.Count > 0)
		List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = List_1_get_Count_mF32C7EC5BD247E48779718527DBB16042BC388C7_inline(L_46, List_1_get_Count_mF32C7EC5BD247E48779718527DBB16042BC388C7_RuntimeMethod_var);
		if ((((int32_t)L_47) <= ((int32_t)0)))
		{
			goto IL_01ba;
		}
	}
	{
		// foreach(var occlusionDescriptor in occlusionDescriptors)
		List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2* L_48 = V_8;
		NullCheck(L_48);
		Enumerator_t80259A7B1B58A3C6024D502D3630F04E04B33675 L_49;
		L_49 = List_1_GetEnumerator_m10249D9BFCB944FFEFC25CD908FC6DF7D98F7DD8(L_48, List_1_GetEnumerator_m10249D9BFCB944FFEFC25CD908FC6DF7D98F7DD8_RuntimeMethod_var);
		V_13 = L_49;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01ac:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3DB61899D7FBB2281D324157AF07A0339F1307D6((&V_13), Enumerator_Dispose_m3DB61899D7FBB2281D324157AF07A0339F1307D6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01a1_1;
			}

IL_018d_1:
			{
				// foreach(var occlusionDescriptor in occlusionDescriptors)
				XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* L_50;
				L_50 = Enumerator_get_Current_m35F60EA6C9173B7839D721974693C9C601FD3914_inline((&V_13), Enumerator_get_Current_m35F60EA6C9173B7839D721974693C9C601FD3914_RuntimeMethod_var);
				// m_Depth.interactable = true;
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_51 = __this->___m_Depth_32;
				NullCheck(L_51);
				Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_51, (bool)1, NULL);
			}

IL_01a1_1:
			{
				// foreach(var occlusionDescriptor in occlusionDescriptors)
				bool L_52;
				L_52 = Enumerator_MoveNext_m6F44014C3A26B090C7785EA565B608E6F3AD128B((&V_13), Enumerator_MoveNext_m6F44014C3A26B090C7785EA565B608E6F3AD128B_RuntimeMethod_var);
				if (L_52)
				{
					goto IL_018d_1;
				}
			}
			{
				goto IL_01ba;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01ba:
	{
		// if(bodyTrackingDescriptors.Count > 0)
		List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512* L_53 = V_10;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = List_1_get_Count_m9EEB47EFB9925826D1B727DDA11E63DD65EA9982_inline(L_53, List_1_get_Count_m9EEB47EFB9925826D1B727DDA11E63DD65EA9982_RuntimeMethod_var);
		if ((((int32_t)L_54) <= ((int32_t)0)))
		{
			goto IL_020f;
		}
	}
	{
		// foreach(var bodyTrackingDescriptor in bodyTrackingDescriptors)
		List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512* L_55 = V_10;
		NullCheck(L_55);
		Enumerator_t889AB5AF38A498D727DBFE55A756175529FC86CE L_56;
		L_56 = List_1_GetEnumerator_mC6B1B7EA0850C9D91A41B661AE02ED3620B06BD0(L_55, List_1_GetEnumerator_mC6B1B7EA0850C9D91A41B661AE02ED3620B06BD0_RuntimeMethod_var);
		V_14 = L_56;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0201:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7CC67B16F72585A664675D34AA020B93E4F4045E((&V_14), Enumerator_Dispose_m7CC67B16F72585A664675D34AA020B93E4F4045E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01f6_1;
			}

IL_01cf_1:
			{
				// foreach(var bodyTrackingDescriptor in bodyTrackingDescriptors)
				XRHumanBodySubsystemDescriptor_tA7A72196EAFCDB936BC0C73634B1553E94D8EC3B* L_57;
				L_57 = Enumerator_get_Current_m7C049649C842A08198C3CB4055D9011E814ED6AE_inline((&V_14), Enumerator_get_Current_m7C049649C842A08198C3CB4055D9011E814ED6AE_RuntimeMethod_var);
				V_15 = L_57;
				// if(bodyTrackingDescriptor.supportsHumanBody2D || bodyTrackingDescriptor.supportsHumanBody3D)
				XRHumanBodySubsystemDescriptor_tA7A72196EAFCDB936BC0C73634B1553E94D8EC3B* L_58 = V_15;
				NullCheck(L_58);
				bool L_59;
				L_59 = XRHumanBodySubsystemDescriptor_get_supportsHumanBody2D_m7FD5572388D3E9EF931691F0267B3779B219F9DE_inline(L_58, NULL);
				if (L_59)
				{
					goto IL_01ea_1;
				}
			}
			{
				XRHumanBodySubsystemDescriptor_tA7A72196EAFCDB936BC0C73634B1553E94D8EC3B* L_60 = V_15;
				NullCheck(L_60);
				bool L_61;
				L_61 = XRHumanBodySubsystemDescriptor_get_supportsHumanBody3D_mD98F673993E12554F127E2FEF129C75146282BCB_inline(L_60, NULL);
				if (!L_61)
				{
					goto IL_01f6_1;
				}
			}

IL_01ea_1:
			{
				// m_BodyTracking.interactable = true;
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_62 = __this->___m_BodyTracking_20;
				NullCheck(L_62);
				Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_62, (bool)1, NULL);
			}

IL_01f6_1:
			{
				// foreach(var bodyTrackingDescriptor in bodyTrackingDescriptors)
				bool L_63;
				L_63 = Enumerator_MoveNext_m05766C966E3C460B9CA199E42C6FB372E9C67E41((&V_14), Enumerator_MoveNext_m05766C966E3C460B9CA199E42C6FB372E9C67E41_RuntimeMethod_var);
				if (L_63)
				{
					goto IL_01cf_1;
				}
			}
			{
				goto IL_020f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_020f:
	{
		// if(cameraDescriptors.Count > 0)
		List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* L_64 = V_9;
		NullCheck(L_64);
		int32_t L_65;
		L_65 = List_1_get_Count_m6A74C1CEFDCA30C41B35F15FDE2F60FEBFA0379C_inline(L_64, List_1_get_Count_m6A74C1CEFDCA30C41B35F15FDE2F60FEBFA0379C_RuntimeMethod_var);
		if ((((int32_t)L_65) <= ((int32_t)0)))
		{
			goto IL_02ca;
		}
	}
	{
		// m_LightEstimation.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_66 = __this->___m_LightEstimation_21;
		NullCheck(L_66);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_66, (bool)1, NULL);
		// foreach(var cameraDescriptor in cameraDescriptors)
		List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* L_67 = V_9;
		NullCheck(L_67);
		Enumerator_tDD7560C140068F3E8D425296DCECD44CE0F59685 L_68;
		L_68 = List_1_GetEnumerator_m741D05FA091DCFE8B7F6AEE1454D40589CE18009(L_67, List_1_GetEnumerator_m741D05FA091DCFE8B7F6AEE1454D40589CE18009_RuntimeMethod_var);
		V_16 = L_68;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02bc:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF43AC8F3B0CE053F5089E0123269CDEA7899C5B0((&V_16), Enumerator_Dispose_mF43AC8F3B0CE053F5089E0123269CDEA7899C5B0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_02ae_1;
			}

IL_0233_1:
			{
				// foreach(var cameraDescriptor in cameraDescriptors)
				XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* L_69;
				L_69 = Enumerator_get_Current_mCA58A87394221878BE8ABB337DEE283B1AA0D923_inline((&V_16), Enumerator_get_Current_mCA58A87394221878BE8ABB337DEE283B1AA0D923_RuntimeMethod_var);
				V_17 = L_69;
				// if ((cameraDescriptor.supportsAverageBrightness || cameraDescriptor.supportsAverageIntensityInLumens) &&
				//     (cameraDescriptor.supportsAverageColorTemperature || cameraDescriptor.supportsColorCorrection) && cameraDescriptor.supportsCameraConfigurations &&
				//     cameraDescriptor.supportsCameraImage)
				XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* L_70 = V_17;
				NullCheck(L_70);
				bool L_71;
				L_71 = XRCameraSubsystemDescriptor_get_supportsAverageBrightness_m394F0A5371B43E4A53DF4AAF18EC2CB3A3BA30E4_inline(L_70, NULL);
				if (L_71)
				{
					goto IL_024e_1;
				}
			}
			{
				XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* L_72 = V_17;
				NullCheck(L_72);
				bool L_73;
				L_73 = XRCameraSubsystemDescriptor_get_supportsAverageIntensityInLumens_m15A6095FCF7EE2C44DA00C8A7EAA0FB185F6148C_inline(L_72, NULL);
				if (!L_73)
				{
					goto IL_027e_1;
				}
			}

IL_024e_1:
			{
				XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* L_74 = V_17;
				NullCheck(L_74);
				bool L_75;
				L_75 = XRCameraSubsystemDescriptor_get_supportsAverageColorTemperature_m45A35D2620A0744755E9073E1E8CC96EDF8992F6_inline(L_74, NULL);
				if (L_75)
				{
					goto IL_0260_1;
				}
			}
			{
				XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* L_76 = V_17;
				NullCheck(L_76);
				bool L_77;
				L_77 = XRCameraSubsystemDescriptor_get_supportsColorCorrection_m380D4EFA54BD40435F3EC0D4811C17600F60FA3B_inline(L_76, NULL);
				if (!L_77)
				{
					goto IL_027e_1;
				}
			}

IL_0260_1:
			{
				XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* L_78 = V_17;
				NullCheck(L_78);
				bool L_79;
				L_79 = XRCameraSubsystemDescriptor_get_supportsCameraConfigurations_mDA577F21C255F11827B6226688C41D1DDE20A753_inline(L_78, NULL);
				if (!L_79)
				{
					goto IL_027e_1;
				}
			}
			{
				XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* L_80 = V_17;
				NullCheck(L_80);
				bool L_81;
				L_81 = XRCameraSubsystemDescriptor_get_supportsCameraImage_m4C81161C7C5D5873D7673681206B1B8B0D158F50_inline(L_80, NULL);
				if (!L_81)
				{
					goto IL_027e_1;
				}
			}
			{
				// m_BasicLightEstimation.interactable = true;
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_82 = __this->___m_BasicLightEstimation_22;
				NullCheck(L_82);
				Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_82, (bool)1, NULL);
			}

IL_027e_1:
			{
				// if (cameraDescriptor.supportsFaceTrackingHDRLightEstimation || cameraDescriptor.supportsWorldTrackingHDRLightEstimation)
				XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* L_83 = V_17;
				NullCheck(L_83);
				bool L_84;
				L_84 = XRCameraSubsystemDescriptor_get_supportsFaceTrackingHDRLightEstimation_mA892EB29FFD62B3C49E5EA4834CF5C27DE39824F_inline(L_83, NULL);
				if (L_84)
				{
					goto IL_0290_1;
				}
			}
			{
				XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* L_85 = V_17;
				NullCheck(L_85);
				bool L_86;
				L_86 = XRCameraSubsystemDescriptor_get_supportsWorldTrackingHDRLightEstimation_mF08EE18BA151F1D274A100ECD32045427C76EB83_inline(L_85, NULL);
				if (!L_86)
				{
					goto IL_029c_1;
				}
			}

IL_0290_1:
			{
				// m_HDRLightEstimation.interactable = true;
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_87 = __this->___m_HDRLightEstimation_23;
				NullCheck(L_87);
				Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_87, (bool)1, NULL);
			}

IL_029c_1:
			{
				// m_CameraGrain.interactable = cameraDescriptor.supportsCameraGrain;
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_88 = __this->___m_CameraGrain_35;
				XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* L_89 = V_17;
				NullCheck(L_89);
				bool L_90;
				L_90 = XRCameraSubsystemDescriptor_get_supportsCameraGrain_mA7563A6FB9661F093C972DBF54BC9A3F372624F7_inline(L_89, NULL);
				NullCheck(L_88);
				Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_88, L_90, NULL);
			}

IL_02ae_1:
			{
				// foreach(var cameraDescriptor in cameraDescriptors)
				bool L_91;
				L_91 = Enumerator_MoveNext_m75E480BD3F1C43B93C728A928326525D1961F13A((&V_16), Enumerator_MoveNext_m75E480BD3F1C43B93C728A928326525D1961F13A_RuntimeMethod_var);
				if (L_91)
				{
					goto IL_0233_1;
				}
			}
			{
				goto IL_02ca;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02ca:
	{
		// if(imageDescriptors.Count > 0)
		List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED* L_92 = V_3;
		NullCheck(L_92);
		int32_t L_93;
		L_93 = List_1_get_Count_mA44F1ED8A79AEE96EAB4404FA2C506D824A8FAD4_inline(L_92, List_1_get_Count_mA44F1ED8A79AEE96EAB4404FA2C506D824A8FAD4_RuntimeMethod_var);
		if ((((int32_t)L_93) <= ((int32_t)0)))
		{
			goto IL_02df;
		}
	}
	{
		// m_ImageTracking.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_94 = __this->___m_ImageTracking_5;
		NullCheck(L_94);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_94, (bool)1, NULL);
	}

IL_02df:
	{
		// if(envDescriptors.Count > 0)
		List_1_tDE8C3B426AF72FF013BD4E2E4C4660F30F1371DB* L_95 = V_4;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = List_1_get_Count_mD5EB8477D6C85DCC813539412C938E8A04A7BC05_inline(L_95, List_1_get_Count_mD5EB8477D6C85DCC813539412C938E8A04A7BC05_RuntimeMethod_var);
		if ((((int32_t)L_96) <= ((int32_t)0)))
		{
			goto IL_02f5;
		}
	}
	{
		// m_EnvironmentProbes.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_97 = __this->___m_EnvironmentProbes_10;
		NullCheck(L_97);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_97, (bool)1, NULL);
	}

IL_02f5:
	{
		// if(planeDescriptors.Count > 0)
		List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0* L_98 = V_0;
		NullCheck(L_98);
		int32_t L_99;
		L_99 = List_1_get_Count_m6FBB94278B8E0C25D70082CD29908680C2F18947_inline(L_98, List_1_get_Count_m6FBB94278B8E0C25D70082CD29908680C2F18947_RuntimeMethod_var);
		if ((((int32_t)L_99) <= ((int32_t)0)))
		{
			goto IL_0349;
		}
	}
	{
		// m_PlaneDetection.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_100 = __this->___m_PlaneDetection_24;
		NullCheck(L_100);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_100, (bool)1, NULL);
		// foreach(var planeDescriptor in planeDescriptors)
		List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0* L_101 = V_0;
		NullCheck(L_101);
		Enumerator_t68B4B1418CD0BC5485A8EC4AC2A711276AC6EC07 L_102;
		L_102 = List_1_GetEnumerator_mEFC1706A6A8C9D0A5AB613FA261D0421CAC96397(L_101, List_1_GetEnumerator_mEFC1706A6A8C9D0A5AB613FA261D0421CAC96397_RuntimeMethod_var);
		V_18 = L_102;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_033b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB35124AA2FC787771DCC660594EA001A0797409A((&V_18), Enumerator_Dispose_mB35124AA2FC787771DCC660594EA001A0797409A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0330_1;
			}

IL_0314_1:
			{
				// foreach(var planeDescriptor in planeDescriptors)
				XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* L_103;
				L_103 = Enumerator_get_Current_m4BE6AE62EE0784C1A80177F41CD98F7798A92963_inline((&V_18), Enumerator_get_Current_m4BE6AE62EE0784C1A80177F41CD98F7798A92963_RuntimeMethod_var);
				// if(planeDescriptor.supportsClassification)
				NullCheck(L_103);
				bool L_104;
				L_104 = XRPlaneSubsystemDescriptor_get_supportsClassification_m634BD5268FC0BB4BCE42396067B1C03E48D4F03F_inline(L_103, NULL);
				if (!L_104)
				{
					goto IL_0330_1;
				}
			}
			{
				// m_PlaneClassification.interactable = true;
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_105 = __this->___m_PlaneClassification_25;
				NullCheck(L_105);
				Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_105, (bool)1, NULL);
				// break;
				goto IL_0349;
			}

IL_0330_1:
			{
				// foreach(var planeDescriptor in planeDescriptors)
				bool L_106;
				L_106 = Enumerator_MoveNext_mBEFA526C081F0C86F13A50D46142098D7385798A((&V_18), Enumerator_MoveNext_mBEFA526C081F0C86F13A50D46142098D7385798A_RuntimeMethod_var);
				if (L_106)
				{
					goto IL_0314_1;
				}
			}
			{
				goto IL_0349;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0349:
	{
		// if(anchorDescriptors.Count > 0)
		List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* L_107 = V_5;
		NullCheck(L_107);
		int32_t L_108;
		L_108 = List_1_get_Count_m9D640171A29156A0E4A0C90231581EC090760468_inline(L_107, List_1_get_Count_m9D640171A29156A0E4A0C90231581EC090760468_RuntimeMethod_var);
		if ((((int32_t)L_108) <= ((int32_t)0)))
		{
			goto IL_035f;
		}
	}
	{
		// m_Anchors.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_109 = __this->___m_Anchors_6;
		NullCheck(L_109);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_109, (bool)1, NULL);
	}

IL_035f:
	{
		// if(objectDescriptors.Count > 0)
		List_1_tCD3E505D75F3A61FA85FC4FBBAE146ACC1A844AA* L_110 = V_6;
		NullCheck(L_110);
		int32_t L_111;
		L_111 = List_1_get_Count_m1084297599D738264810DF28A355B0E1DAFB9D5A_inline(L_110, List_1_get_Count_m1084297599D738264810DF28A355B0E1DAFB9D5A_RuntimeMethod_var);
		if ((((int32_t)L_111) <= ((int32_t)0)))
		{
			goto IL_0375;
		}
	}
	{
		// m_ObjectTracking.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_112 = __this->___m_ObjectTracking_14;
		NullCheck(L_112);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_112, (bool)1, NULL);
	}

IL_0375:
	{
		// if(cameraDescriptors.Count > 0)
		List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* L_113 = V_9;
		NullCheck(L_113);
		int32_t L_114;
		L_114 = List_1_get_Count_m6A74C1CEFDCA30C41B35F15FDE2F60FEBFA0379C_inline(L_113, List_1_get_Count_m6A74C1CEFDCA30C41B35F15FDE2F60FEBFA0379C_RuntimeMethod_var);
		if ((((int32_t)L_114) <= ((int32_t)0)))
		{
			goto IL_03bf;
		}
	}
	{
		// foreach(var cameraDescriptor in cameraDescriptors)
		List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* L_115 = V_9;
		NullCheck(L_115);
		Enumerator_tDD7560C140068F3E8D425296DCECD44CE0F59685 L_116;
		L_116 = List_1_GetEnumerator_m741D05FA091DCFE8B7F6AEE1454D40589CE18009(L_115, List_1_GetEnumerator_m741D05FA091DCFE8B7F6AEE1454D40589CE18009_RuntimeMethod_var);
		V_16 = L_116;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03b1:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF43AC8F3B0CE053F5089E0123269CDEA7899C5B0((&V_16), Enumerator_Dispose_mF43AC8F3B0CE053F5089E0123269CDEA7899C5B0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_03a6_1;
			}

IL_038a_1:
			{
				// foreach(var cameraDescriptor in cameraDescriptors)
				XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* L_117;
				L_117 = Enumerator_get_Current_mCA58A87394221878BE8ABB337DEE283B1AA0D923_inline((&V_16), Enumerator_get_Current_mCA58A87394221878BE8ABB337DEE283B1AA0D923_RuntimeMethod_var);
				// if(cameraDescriptor.supportsCameraImage)
				NullCheck(L_117);
				bool L_118;
				L_118 = XRCameraSubsystemDescriptor_get_supportsCameraImage_m4C81161C7C5D5873D7673681206B1B8B0D158F50_inline(L_117, NULL);
				if (!L_118)
				{
					goto IL_03a6_1;
				}
			}
			{
				// m_CpuImages.interactable = true;
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_119 = __this->___m_CpuImages_9;
				NullCheck(L_119);
				Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_119, (bool)1, NULL);
				// break;
				goto IL_03bf;
			}

IL_03a6_1:
			{
				// foreach(var cameraDescriptor in cameraDescriptors)
				bool L_120;
				L_120 = Enumerator_MoveNext_m75E480BD3F1C43B93C728A928326525D1961F13A((&V_16), Enumerator_MoveNext_m75E480BD3F1C43B93C728A928326525D1961F13A_RuntimeMethod_var);
				if (L_120)
				{
					goto IL_038a_1;
				}
			}
			{
				goto IL_03bf;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03bf:
	{
		// if(depthDescriptors.Count > 0)
		List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C* L_121 = V_7;
		NullCheck(L_121);
		int32_t L_122;
		L_122 = List_1_get_Count_m99B0EF160EBB7A08AC421E6DB4249A113672F5C7_inline(L_121, List_1_get_Count_m99B0EF160EBB7A08AC421E6DB4249A113672F5C7_RuntimeMethod_var);
		if ((((int32_t)L_122) <= ((int32_t)0)))
		{
			goto IL_03d5;
		}
	}
	{
		// m_PointCloud.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_123 = __this->___m_PointCloud_16;
		NullCheck(L_123);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_123, (bool)1, NULL);
	}

IL_03d5:
	{
		// if(planeDescriptors.Count > 0)
		List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0* L_124 = V_0;
		NullCheck(L_124);
		int32_t L_125;
		L_125 = List_1_get_Count_m6FBB94278B8E0C25D70082CD29908680C2F18947_inline(L_124, List_1_get_Count_m6FBB94278B8E0C25D70082CD29908680C2F18947_RuntimeMethod_var);
		if ((((int32_t)L_125) <= ((int32_t)0)))
		{
			goto IL_03ea;
		}
	}
	{
		// m_PlaneOcclusion.interactable  = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_126 = __this->___m_PlaneOcclusion_15;
		NullCheck(L_126);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_126, (bool)1, NULL);
	}

IL_03ea:
	{
		// var activeLoader = LoaderUtility.GetActiveLoader();
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_127;
		L_127 = LoaderUtility_GetActiveLoader_m388DA860185DE0C4307D7A46AAAC529055CCB2F1(NULL);
		V_11 = L_127;
		// if(activeLoader && activeLoader.GetLoadedSubsystem<XRMeshSubsystem>() != null)
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_128 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_129;
		L_129 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_128, NULL);
		if (!L_129)
		{
			goto IL_040f;
		}
	}
	{
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_130 = V_11;
		NullCheck(L_130);
		XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_131;
		L_131 = GenericVirtualFuncInvoker0< XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* >::Invoke(XRLoader_GetLoadedSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m081FBFB83316621ED3D69C9D27376B59CB646519_RuntimeMethod_var, L_130);
		if (!L_131)
		{
			goto IL_040f;
		}
	}
	{
		// m_Meshing.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_132 = __this->___m_Meshing_26;
		NullCheck(L_132);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_132, (bool)1, NULL);
	}

IL_040f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckAvailableFeatures::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAvailableFeatures__ctor_mC86521B329B2B0929F8F22B25D589ED1AFA9B062 (CheckAvailableFeatures_t9902A1D0F5AD0834176D8755962B09396E588939* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARFoundation.AROcclusionManager UnityEngine.XR.ARFoundation.Samples.CheckRuntimeDepth::get_occlusionManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* CheckRuntimeDepth_get_occlusionManager_m574EDA0FC317859F3C6CABB10873D1DBCE68C174 (CheckRuntimeDepth_t3B629F150F05DADAD585156F049FBE3421D4490A* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OcclusionManager; }
		AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* L_0 = __this->___m_OcclusionManager_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckRuntimeDepth::set_occlusionManager(UnityEngine.XR.ARFoundation.AROcclusionManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckRuntimeDepth_set_occlusionManager_m58CB4318E2CEFE756E0B079DAFCBB45CFFA11919 (CheckRuntimeDepth_t3B629F150F05DADAD585156F049FBE3421D4490A* __this, AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_OcclusionManager = value; }
		AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* L_0 = ___value0;
		__this->___m_OcclusionManager_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OcclusionManager_4), (void*)L_0);
		// set { m_OcclusionManager = value; }
		return;
	}
}
// UnityEngine.UI.Text UnityEngine.XR.ARFoundation.Samples.CheckRuntimeDepth::get_depthAvailabilityInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* CheckRuntimeDepth_get_depthAvailabilityInfo_mF0B2BC83C9461A5BDCF4CA549F4184A0EAA7CB56 (CheckRuntimeDepth_t3B629F150F05DADAD585156F049FBE3421D4490A* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_DepthAvailabilityInfo; }
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_DepthAvailabilityInfo_5;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckRuntimeDepth::set_depthAvailabilityInfo(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckRuntimeDepth_set_depthAvailabilityInfo_mA6C800C0B94130EA4067FF641BAA63CAAEF06C74 (CheckRuntimeDepth_t3B629F150F05DADAD585156F049FBE3421D4490A* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_DepthAvailabilityInfo = value; }
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = ___value0;
		__this->___m_DepthAvailabilityInfo_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DepthAvailabilityInfo_5), (void*)L_0);
		// set { m_DepthAvailabilityInfo = value; }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckRuntimeDepth::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckRuntimeDepth_Update_mD620FAC0D3576F0AEFC98B900E29A3E1A6C72783 (CheckRuntimeDepth_t3B629F150F05DADAD585156F049FBE3421D4490A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_descriptor_mFCC2B929205B70121157536075F522DF0476AAB9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_1 = NULL;
	XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B11_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B4_0 = NULL;
	XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* G_B6_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B6_1 = NULL;
	XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* G_B5_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B7_1 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B8_0 = NULL;
	XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* G_B10_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B10_1 = NULL;
	XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* G_B9_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B9_1 = NULL;
	int32_t G_B12_0 = 0;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B12_1 = NULL;
	{
		// m_DepthAvailabilityInfo.enabled = ((m_OcclusionManager.descriptor?.supportsHumanSegmentationStencilImage == false)
		//                                    && (m_OcclusionManager.descriptor?.supportsHumanSegmentationDepthImage == false)
		//                                    && (m_OcclusionManager.descriptor?.supportsEnvironmentDepthImage == false));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_DepthAvailabilityInfo_5;
		AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* L_1 = __this->___m_OcclusionManager_4;
		NullCheck(L_1);
		XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* L_2;
		L_2 = SubsystemLifecycleManager_3_get_descriptor_mFCC2B929205B70121157536075F522DF0476AAB9(L_1, SubsystemLifecycleManager_3_get_descriptor_mFCC2B929205B70121157536075F522DF0476AAB9_RuntimeMethod_var);
		XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_0;
			goto IL_0018;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_1;
		goto IL_0020;
	}

IL_0018:
	{
		NullCheck(G_B2_0);
		bool L_4;
		L_4 = XROcclusionSubsystemDescriptor_get_supportsHumanSegmentationStencilImage_mE5760E70F08587F5CD918184E394C675DADB106B(G_B2_0, NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		G_B3_1 = G_B2_1;
	}

IL_0020:
	{
		G_B4_0 = G_B3_1;
		if (!G_B3_0)
		{
			G_B11_0 = G_B3_1;
			goto IL_005a;
		}
	}
	{
		AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* L_5 = __this->___m_OcclusionManager_4;
		NullCheck(L_5);
		XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* L_6;
		L_6 = SubsystemLifecycleManager_3_get_descriptor_mFCC2B929205B70121157536075F522DF0476AAB9(L_5, SubsystemLifecycleManager_3_get_descriptor_mFCC2B929205B70121157536075F522DF0476AAB9_RuntimeMethod_var);
		XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* L_7 = L_6;
		G_B5_0 = L_7;
		G_B5_1 = G_B4_0;
		if (L_7)
		{
			G_B6_0 = L_7;
			G_B6_1 = G_B4_0;
			goto IL_0034;
		}
	}
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_1;
		goto IL_003c;
	}

IL_0034:
	{
		NullCheck(G_B6_0);
		bool L_8;
		L_8 = XROcclusionSubsystemDescriptor_get_supportsHumanSegmentationDepthImage_m912EC7337D203DDFA386290C81F1DFEEF9166B11(G_B6_0, NULL);
		G_B7_0 = ((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		G_B7_1 = G_B6_1;
	}

IL_003c:
	{
		G_B8_0 = G_B7_1;
		if (!G_B7_0)
		{
			G_B11_0 = G_B7_1;
			goto IL_005a;
		}
	}
	{
		AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* L_9 = __this->___m_OcclusionManager_4;
		NullCheck(L_9);
		XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* L_10;
		L_10 = SubsystemLifecycleManager_3_get_descriptor_mFCC2B929205B70121157536075F522DF0476AAB9(L_9, SubsystemLifecycleManager_3_get_descriptor_mFCC2B929205B70121157536075F522DF0476AAB9_RuntimeMethod_var);
		XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* L_11 = L_10;
		G_B9_0 = L_11;
		G_B9_1 = G_B8_0;
		if (L_11)
		{
			G_B10_0 = L_11;
			G_B10_1 = G_B8_0;
			goto IL_0050;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B9_1;
		goto IL_005b;
	}

IL_0050:
	{
		NullCheck(G_B10_0);
		bool L_12;
		L_12 = XROcclusionSubsystemDescriptor_get_supportsEnvironmentDepthImage_m28E39D10619376C8447AFE6782E7790278E4B6F5(G_B10_0, NULL);
		G_B12_0 = ((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		G_B12_1 = G_B10_1;
		goto IL_005b;
	}

IL_005a:
	{
		G_B12_0 = 0;
		G_B12_1 = G_B11_0;
	}

IL_005b:
	{
		NullCheck(G_B12_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(G_B12_1, (bool)G_B12_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CheckRuntimeDepth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckRuntimeDepth__ctor_m8493C4C6ED54830591C8368CD8EC586F0095106A (CheckRuntimeDepth_t3B629F150F05DADAD585156F049FBE3421D4490A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.Samples.Tooltip::get_toolTip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Tooltip_get_toolTip_mD7841637B1AD4378E1EC33C82DB369C3FFAE7E07 (Tooltip_t84E76F9372B8B31FFFCAD1ACF0362438CAAF6967* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Tooltip; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_Tooltip_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.Tooltip::set_toolTip(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tooltip_set_toolTip_m8F7552546BD627A615F6B850D1141D280F52ACAF (Tooltip_t84E76F9372B8B31FFFCAD1ACF0362438CAAF6967* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_Tooltip = value; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_Tooltip_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tooltip_4), (void*)L_0);
		// set { m_Tooltip = value; }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.Tooltip::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tooltip_Start_mA6AB92E6425BC14314252BBA6C7A98232934628B (Tooltip_t84E76F9372B8B31FFFCAD1ACF0362438CAAF6967* __this, const RuntimeMethod* method) 
{
	{
		// m_ToolTipOffset = new Vector3(-50,100,0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (-50.0f), (100.0f), (0.0f), /*hidden argument*/NULL);
		__this->___m_ToolTipOffset_6 = L_0;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.Tooltip::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tooltip_Update_mDB319636125D188ED707EF4D88C38C083F4D34B9 (Tooltip_t84E76F9372B8B31FFFCAD1ACF0362438CAAF6967* __this, const RuntimeMethod* method) 
{
	{
		// if(m_EnteredButton)
		bool L_0 = __this->___m_EnteredButton_5;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// m_Tooltip.transform.position = Input.mousePosition + m_ToolTipOffset;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___m_Tooltip_4;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___m_ToolTipOffset_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_3, L_4, NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_5, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.Tooltip::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tooltip_OnPointerEnter_mCD2D1825D6874DCABE2CEDB8354ABDC5AE90E8DA (Tooltip_t84E76F9372B8B31FFFCAD1ACF0362438CAAF6967* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_EnteredButton = true;
		__this->___m_EnteredButton_5 = (bool)1;
		// if(!gameObject.GetComponent<Button>().interactable)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1;
		L_1 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_0, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_2;
		L_2 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		// m_Tooltip.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___m_Tooltip_4;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.Tooltip::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tooltip_OnPointerExit_mB657DA887A1D9CCF549ECC4CCA1A0EACB24DD155 (Tooltip_t84E76F9372B8B31FFFCAD1ACF0362438CAAF6967* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// m_EnteredButton = false;
		__this->___m_EnteredButton_5 = (bool)0;
		// m_Tooltip.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_Tooltip_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.Tooltip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tooltip__ctor_m982E3B2C2374BF433256BECDA293323936393E85 (Tooltip_t84E76F9372B8B31FFFCAD1ACF0362438CAAF6967* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRFaceSubsystemDescriptor_get_supportsEyeTracking_mF482F5E345E3A9435DA290AC6DD1D28470602039_inline (XRFaceSubsystemDescriptor_t44596C9878EB76583452C5F5BF6FA78FA9EB171F* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsEyeTracking { get; }
		bool L_0 = __this->___U3CsupportsEyeTrackingU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRHumanBodySubsystemDescriptor_get_supportsHumanBody2D_m7FD5572388D3E9EF931691F0267B3779B219F9DE_inline (XRHumanBodySubsystemDescriptor_tA7A72196EAFCDB936BC0C73634B1553E94D8EC3B* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsHumanBody2D { get; private set; }
		bool L_0 = __this->___U3CsupportsHumanBody2DU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRHumanBodySubsystemDescriptor_get_supportsHumanBody3D_mD98F673993E12554F127E2FEF129C75146282BCB_inline (XRHumanBodySubsystemDescriptor_tA7A72196EAFCDB936BC0C73634B1553E94D8EC3B* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsHumanBody3D { get; private set; }
		bool L_0 = __this->___U3CsupportsHumanBody3DU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemDescriptor_get_supportsAverageBrightness_m394F0A5371B43E4A53DF4AAF18EC2CB3A3BA30E4_inline (XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsAverageBrightness { get; private set; }
		bool L_0 = __this->___U3CsupportsAverageBrightnessU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemDescriptor_get_supportsAverageIntensityInLumens_m15A6095FCF7EE2C44DA00C8A7EAA0FB185F6148C_inline (XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsAverageIntensityInLumens { get; private set; }
		bool L_0 = __this->___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemDescriptor_get_supportsAverageColorTemperature_m45A35D2620A0744755E9073E1E8CC96EDF8992F6_inline (XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsAverageColorTemperature { get; private set; }
		bool L_0 = __this->___U3CsupportsAverageColorTemperatureU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemDescriptor_get_supportsColorCorrection_m380D4EFA54BD40435F3EC0D4811C17600F60FA3B_inline (XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsColorCorrection { get; private set; }
		bool L_0 = __this->___U3CsupportsColorCorrectionU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemDescriptor_get_supportsCameraConfigurations_mDA577F21C255F11827B6226688C41D1DDE20A753_inline (XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsCameraConfigurations { get; private set; }
		bool L_0 = __this->___U3CsupportsCameraConfigurationsU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemDescriptor_get_supportsCameraImage_m4C81161C7C5D5873D7673681206B1B8B0D158F50_inline (XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsCameraImage { get; private set; }
		bool L_0 = __this->___U3CsupportsCameraImageU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemDescriptor_get_supportsFaceTrackingHDRLightEstimation_mA892EB29FFD62B3C49E5EA4834CF5C27DE39824F_inline (XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsFaceTrackingHDRLightEstimation { get; private set; }
		bool L_0 = __this->___U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemDescriptor_get_supportsWorldTrackingHDRLightEstimation_mF08EE18BA151F1D274A100ECD32045427C76EB83_inline (XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsWorldTrackingHDRLightEstimation { get; private set; }
		bool L_0 = __this->___U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRCameraSubsystemDescriptor_get_supportsCameraGrain_mA7563A6FB9661F093C972DBF54BC9A3F372624F7_inline (XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsCameraGrain { get; private set; }
		bool L_0 = __this->___U3CsupportsCameraGrainU3Ek__BackingField_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRPlaneSubsystemDescriptor_get_supportsClassification_m634BD5268FC0BB4BCE42396067B1C03E48D4F03F_inline (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsClassification { get; private set; }
		bool L_0 = __this->___U3CsupportsClassificationU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Interactable; }
		bool L_0 = __this->___m_Interactable_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
