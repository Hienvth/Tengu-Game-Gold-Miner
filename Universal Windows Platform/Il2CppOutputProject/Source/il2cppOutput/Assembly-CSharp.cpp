#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// BombScript
struct BombScript_t1D3E47268FDBB34F3ABA23E91FA72B30C842405F;
// BookStoneScript
struct BookStoneScript_tE84C49F94464E3F54BFFA45B1C83E4FB7381924A;
// BoomScript
struct BoomScript_tB417CD47BD905BD27ABF9123BE724A9A0876E656;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// ButtonTouchScript
struct ButtonTouchScript_tE9F34CD0FF590DD2D73C241734664C99DB5B3C1B;
// CGameManager
struct CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// ChuotScript
struct ChuotScript_tE1CBBDBD3DA910BA8146FBCADC092DA7078AF5F8;
// ClockScript
struct ClockScript_t8583D23AC14B917692BC34069799881AE86E9D0E;
// CloverScript
struct CloverScript_t39B8076C4C4103D961144A23CDFC5F2E11B633DD;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// DayCauScript
struct DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DiamondScript
struct DiamondScript_tA705755084679C900443B9E79A16B6FA16756150;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// FireObject
struct FireObject_t087811D4DEB966C1AE112DC143B132300AB6F620;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GamePlayScript
struct GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE;
// GiftScript
struct GiftScript_t2AD2012AD53BE26AC1D88583F33A80414A68DC60;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967;
// LuoiCauScript
struct LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D;
// MainMenuController
struct MainMenuController_tB517623519398FBEBC46ED54C54C990158720384;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NextLevelController
struct NextLevelController_tB46CD096AFA1DAE33C9FDE07E971E3060A10CF11;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// OnStateChangeHandler
struct OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E;
// OngGiaScript
struct OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// PopupPanelScript
struct PopupPanelScript_t5D3B719303C80F5988015D711361387D5CD04A0C;
// PowerScript
struct PowerScript_t7DCB9760ECD1E057FABE9C641C6920A08308D344;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// ShopController
struct ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964;
// ShopItemSButtonScript
struct ShopItemSButtonScript_t0EF612061D3DC46882D6CE404D0D21062DA61604;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// TNTScript
struct TNTScript_tA03B0156AEA07E653A9364074F5F83C7556CA722;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// TextScoreScript
struct TextScoreScript_t83E71EF2C771F0C0936963F7F7B4E940F27FA9E5;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// ThuyenScript
struct ThuyenScript_t454C091DB63BCCCBCA234189566AB5B0DF52652E;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB;
// VangScript
struct VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// GamePlayScript/<Do>d__66
struct U3CDoU3Ed__66_t780AA168EB458EDCA78F8ABF70715154D4D5535F;
// GamePlayScript/<ScoreZoomOut>d__69
struct U3CScoreZoomOutU3Ed__69_tCFC04555FC9576F724D6EEBC5614C866CF5B3E5D;
// LuoiCauScript/<TimeUpSpeed>d__21
struct U3CTimeUpSpeedU3Ed__21_t6822F484BFDF87E8C83F66A1650ECDFF800A234C;
// MainMenuController/<DoubleClickExit>d__17
struct U3CDoubleClickExitU3Ed__17_t43E75ED32E51D335B5E5EDAF488B58E8D3DAD1EE;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// OngGiaScript/<StopAngry>d__15
struct U3CStopAngryU3Ed__15_tC7DC4704812E3FB9B9BC0C8CE431D1E418CF79F8;
// OngGiaScript/<StopAttack>d__11
struct U3CStopAttackU3Ed__11_tF747141683F19CAF709581EF8636DAA77D5B26A5;
// OngGiaScript/<StopDeopBomb>d__9
struct U3CStopDeopBombU3Ed__9_t2E4B1011602289F5F7C4F90DDD3FA53360BEE826;
// OngGiaScript/<StopHappy>d__13
struct U3CStopHappyU3Ed__13_t361268E476733EBBAF65A69699F0D46AF5111CF7;
// VangScript/<RunEffect>d__8
struct U3CRunEffectU3Ed__8_tAD4129AD5FA4A9642D6970825422CBD58859C51B;
// VangScript/<StopEffect>d__9
struct U3CStopEffectU3Ed__9_tCE8C03F0B4712BB8CE9D2C4E717B50C674B65C55;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextScoreScript_t83E71EF2C771F0C0936963F7F7B4E940F27FA9E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDoU3Ed__66_t780AA168EB458EDCA78F8ABF70715154D4D5535F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDoubleClickExitU3Ed__17_t43E75ED32E51D335B5E5EDAF488B58E8D3DAD1EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRunEffectU3Ed__8_tAD4129AD5FA4A9642D6970825422CBD58859C51B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CScoreZoomOutU3Ed__69_tCFC04555FC9576F724D6EEBC5614C866CF5B3E5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStopAngryU3Ed__15_tC7DC4704812E3FB9B9BC0C8CE431D1E418CF79F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStopAttackU3Ed__11_tF747141683F19CAF709581EF8636DAA77D5B26A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStopDeopBombU3Ed__9_t2E4B1011602289F5F7C4F90DDD3FA53360BEE826_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStopEffectU3Ed__9_tCE8C03F0B4712BB8CE9D2C4E717B50C674B65C55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStopHappyU3Ed__13_t361268E476733EBBAF65A69699F0D46AF5111CF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTimeUpSpeedU3Ed__21_t6822F484BFDF87E8C83F66A1650ECDFF800A234C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719;
IL2CPP_EXTERN_C String_t* _stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604;
IL2CPP_EXTERN_C String_t* _stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC;
IL2CPP_EXTERN_C String_t* _stringLiteral0EA4FBC49BDBBF4E11198EDA96F7B7ACF7F2A85F;
IL2CPP_EXTERN_C String_t* _stringLiteral125D0A8A96A1A1BBF3FBA9D810500136CAFAC94E;
IL2CPP_EXTERN_C String_t* _stringLiteral147C07FF2563EDE2A2FF40F3ECEC50F1FE96D671;
IL2CPP_EXTERN_C String_t* _stringLiteral18E6316ADA637DB2A17BD50EEDBE17672A060DED;
IL2CPP_EXTERN_C String_t* _stringLiteral1A23AA468FF756DFCDEB9586D68E0364288ADED8;
IL2CPP_EXTERN_C String_t* _stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8;
IL2CPP_EXTERN_C String_t* _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9;
IL2CPP_EXTERN_C String_t* _stringLiteral3C92149A9B035A718607796CF5610BA129B52AA4;
IL2CPP_EXTERN_C String_t* _stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207;
IL2CPP_EXTERN_C String_t* _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192;
IL2CPP_EXTERN_C String_t* _stringLiteral452171630649949878FA10E645128E1E28D26C5C;
IL2CPP_EXTERN_C String_t* _stringLiteral491808D7EEB006360E8FF7C51AA2757B43D35E12;
IL2CPP_EXTERN_C String_t* _stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896;
IL2CPP_EXTERN_C String_t* _stringLiteral4ABC2BD3D62C498CCEF3CEF6B391EC720A5FEC3E;
IL2CPP_EXTERN_C String_t* _stringLiteral4C459A33B11E3AB83E34CD4E146B521BA8ED64F5;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4DDBD79525333BACF62E3D8159878CA4D371BA7F;
IL2CPP_EXTERN_C String_t* _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91;
IL2CPP_EXTERN_C String_t* _stringLiteral55C55F06F540638BB0C811FD4FFC86C7127043FE;
IL2CPP_EXTERN_C String_t* _stringLiteral5FAA93D0A1F1929ADF3FB6A0806931463C880F65;
IL2CPP_EXTERN_C String_t* _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C;
IL2CPP_EXTERN_C String_t* _stringLiteral6853B00927EB8BAE6FD25AE411383457D8EC0D05;
IL2CPP_EXTERN_C String_t* _stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C;
IL2CPP_EXTERN_C String_t* _stringLiteral7B65BEB206497163B21E95EBF13EEB3F9BD39C80;
IL2CPP_EXTERN_C String_t* _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D;
IL2CPP_EXTERN_C String_t* _stringLiteral7FE49F3BEB56785574137C52FD9023D38DE8B35C;
IL2CPP_EXTERN_C String_t* _stringLiteral803BD8341EDEE47FB612B8B9BF65BADFA3F1E1B2;
IL2CPP_EXTERN_C String_t* _stringLiteral82F11F27C6914EF909CFE52A0002EB75FEB9EDF1;
IL2CPP_EXTERN_C String_t* _stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0;
IL2CPP_EXTERN_C String_t* _stringLiteral926184E059998AC6B0C37D1AA3CB36A3EDA46A2B;
IL2CPP_EXTERN_C String_t* _stringLiteral937CF4AA29E8BA035C35BA0901DC5699940902D9;
IL2CPP_EXTERN_C String_t* _stringLiteral939776A9D3774DE8EFB26EC22EA7ACA701791E02;
IL2CPP_EXTERN_C String_t* _stringLiteral95E4B00E4CCB9013CF0E6A1A81909CBA669AD082;
IL2CPP_EXTERN_C String_t* _stringLiteral996B2FCAFD02EE4839D677CDCA3A170A00FA56FF;
IL2CPP_EXTERN_C String_t* _stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E;
IL2CPP_EXTERN_C String_t* _stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF;
IL2CPP_EXTERN_C String_t* _stringLiteralA4A7908AA21C1C066940D339E8CE6E157180EDBE;
IL2CPP_EXTERN_C String_t* _stringLiteralA74AA77852D505FA9B916F6C64BC0B0E44A1550B;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B58FB86EB28E20130C1AE96B9DC7F4D1E134C7;
IL2CPP_EXTERN_C String_t* _stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44;
IL2CPP_EXTERN_C String_t* _stringLiteralB16B4B524C163162FF5B125579A2E4D7114B9ABD;
IL2CPP_EXTERN_C String_t* _stringLiteralB1B2E9606510F59B550CF96B80E0C9653E267DAB;
IL2CPP_EXTERN_C String_t* _stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B;
IL2CPP_EXTERN_C String_t* _stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58;
IL2CPP_EXTERN_C String_t* _stringLiteralBACE4D07BB0A29D0173C9957B995A6344F25D564;
IL2CPP_EXTERN_C String_t* _stringLiteralBD4E79D5BF1664C1E246E08132AFC9D0DA294C60;
IL2CPP_EXTERN_C String_t* _stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5;
IL2CPP_EXTERN_C String_t* _stringLiteralD0F8DE350853B431995428CD2DCC9DAEF547030C;
IL2CPP_EXTERN_C String_t* _stringLiteralD19D16FC49582C6579331D429D68F3622A1592D6;
IL2CPP_EXTERN_C String_t* _stringLiteralD4ED4E6C12DDEFDB02BF0E4AFBD61A184207265D;
IL2CPP_EXTERN_C String_t* _stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB;
IL2CPP_EXTERN_C String_t* _stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11;
IL2CPP_EXTERN_C String_t* _stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223;
IL2CPP_EXTERN_C String_t* _stringLiteralF950E2165E3670EE0518B31FA6CE6B4DE05EAE9F;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GamePlayScript_U3CFailU3Eb__58_0_mF5769F31B2E24533EDD86E281D1BF069BF5C5733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GamePlayScript_U3CPauseGameU3Eb__55_0_m0CC3237051EF6967E19649FF4089E4FA0839849B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainMenuController_showToast_mDD64D3132484D3AF312B0C53E2AFF50C06AB9EA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ShopItemSButtonScript_OnPointerUp_m82BB33C128431BDCBE2C1977CBE065D25BF0D5B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoU3Ed__66_System_Collections_IEnumerator_Reset_m944246B3891064E942F665885360235757BD074E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoubleClickExitU3Ed__17_System_Collections_IEnumerator_Reset_m64D9B7353F29EB32D07679A7F5E8CF442687CE9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRunEffectU3Ed__8_System_Collections_IEnumerator_Reset_mB61DF5F62D7AA60C8A1D0A0C3CE5EAAEDB60FCAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CScoreZoomOutU3Ed__69_System_Collections_IEnumerator_Reset_m4350A28773B5B2AAEC368D5FED616DF8E1B7482B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStopAngryU3Ed__15_System_Collections_IEnumerator_Reset_m9134CEBA89B48DA8DBF763905ED838A77F2B4D61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStopAttackU3Ed__11_System_Collections_IEnumerator_Reset_mF904056B58D7179D46EDC0B07BFABFDF2DB603A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStopDeopBombU3Ed__9_System_Collections_IEnumerator_Reset_m77CDB3507FFB438AC5A0B35771FF262946D8D733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStopEffectU3Ed__9_System_Collections_IEnumerator_Reset_mCFFB7D99A0B4480A7DDC59A2AD9A8C8962C4871E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStopHappyU3Ed__13_System_Collections_IEnumerator_Reset_mBBDB2C00D88219EF291DCCEEEA0E4B6E77A96AC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTimeUpSpeedU3Ed__21_System_Collections_IEnumerator_Reset_m51CEE60074B01CEB1302FA6A9109EBC9CD88542D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// GamePlayScript/<Do>d__66
struct U3CDoU3Ed__66_t780AA168EB458EDCA78F8ABF70715154D4D5535F  : public RuntimeObject
{
public:
	// System.Int32 GamePlayScript/<Do>d__66::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GamePlayScript/<Do>d__66::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GamePlayScript GamePlayScript/<Do>d__66::<>4__this
	GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * ___U3CU3E4__this_2;
	// System.Boolean GamePlayScript/<Do>d__66::<add>5__2
	bool ___U3CaddU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDoU3Ed__66_t780AA168EB458EDCA78F8ABF70715154D4D5535F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDoU3Ed__66_t780AA168EB458EDCA78F8ABF70715154D4D5535F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDoU3Ed__66_t780AA168EB458EDCA78F8ABF70715154D4D5535F, ___U3CU3E4__this_2)); }
	inline GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CaddU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CDoU3Ed__66_t780AA168EB458EDCA78F8ABF70715154D4D5535F, ___U3CaddU3E5__2_3)); }
	inline bool get_U3CaddU3E5__2_3() const { return ___U3CaddU3E5__2_3; }
	inline bool* get_address_of_U3CaddU3E5__2_3() { return &___U3CaddU3E5__2_3; }
	inline void set_U3CaddU3E5__2_3(bool value)
	{
		___U3CaddU3E5__2_3 = value;
	}
};


// GamePlayScript/<ScoreZoomOut>d__69
struct U3CScoreZoomOutU3Ed__69_tCFC04555FC9576F724D6EEBC5614C866CF5B3E5D  : public RuntimeObject
{
public:
	// System.Int32 GamePlayScript/<ScoreZoomOut>d__69::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GamePlayScript/<ScoreZoomOut>d__69::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GamePlayScript GamePlayScript/<ScoreZoomOut>d__69::<>4__this
	GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CScoreZoomOutU3Ed__69_tCFC04555FC9576F724D6EEBC5614C866CF5B3E5D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CScoreZoomOutU3Ed__69_tCFC04555FC9576F724D6EEBC5614C866CF5B3E5D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CScoreZoomOutU3Ed__69_tCFC04555FC9576F724D6EEBC5614C866CF5B3E5D, ___U3CU3E4__this_2)); }
	inline GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// LuoiCauScript/<TimeUpSpeed>d__21
struct U3CTimeUpSpeedU3Ed__21_t6822F484BFDF87E8C83F66A1650ECDFF800A234C  : public RuntimeObject
{
public:
	// System.Int32 LuoiCauScript/<TimeUpSpeed>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LuoiCauScript/<TimeUpSpeed>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// LuoiCauScript LuoiCauScript/<TimeUpSpeed>d__21::<>4__this
	LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTimeUpSpeedU3Ed__21_t6822F484BFDF87E8C83F66A1650ECDFF800A234C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTimeUpSpeedU3Ed__21_t6822F484BFDF87E8C83F66A1650ECDFF800A234C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTimeUpSpeedU3Ed__21_t6822F484BFDF87E8C83F66A1650ECDFF800A234C, ___U3CU3E4__this_2)); }
	inline LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// MainMenuController/<DoubleClickExit>d__17
struct U3CDoubleClickExitU3Ed__17_t43E75ED32E51D335B5E5EDAF488B58E8D3DAD1EE  : public RuntimeObject
{
public:
	// System.Int32 MainMenuController/<DoubleClickExit>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MainMenuController/<DoubleClickExit>d__17::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MainMenuController MainMenuController/<DoubleClickExit>d__17::<>4__this
	MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDoubleClickExitU3Ed__17_t43E75ED32E51D335B5E5EDAF488B58E8D3DAD1EE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDoubleClickExitU3Ed__17_t43E75ED32E51D335B5E5EDAF488B58E8D3DAD1EE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDoubleClickExitU3Ed__17_t43E75ED32E51D335B5E5EDAF488B58E8D3DAD1EE, ___U3CU3E4__this_2)); }
	inline MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// OngGiaScript/<StopAngry>d__15
struct U3CStopAngryU3Ed__15_tC7DC4704812E3FB9B9BC0C8CE431D1E418CF79F8  : public RuntimeObject
{
public:
	// System.Int32 OngGiaScript/<StopAngry>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OngGiaScript/<StopAngry>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// OngGiaScript OngGiaScript/<StopAngry>d__15::<>4__this
	OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopAngryU3Ed__15_tC7DC4704812E3FB9B9BC0C8CE431D1E418CF79F8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStopAngryU3Ed__15_tC7DC4704812E3FB9B9BC0C8CE431D1E418CF79F8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStopAngryU3Ed__15_tC7DC4704812E3FB9B9BC0C8CE431D1E418CF79F8, ___U3CU3E4__this_2)); }
	inline OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// OngGiaScript/<StopAttack>d__11
struct U3CStopAttackU3Ed__11_tF747141683F19CAF709581EF8636DAA77D5B26A5  : public RuntimeObject
{
public:
	// System.Int32 OngGiaScript/<StopAttack>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OngGiaScript/<StopAttack>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// OngGiaScript OngGiaScript/<StopAttack>d__11::<>4__this
	OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopAttackU3Ed__11_tF747141683F19CAF709581EF8636DAA77D5B26A5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStopAttackU3Ed__11_tF747141683F19CAF709581EF8636DAA77D5B26A5, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStopAttackU3Ed__11_tF747141683F19CAF709581EF8636DAA77D5B26A5, ___U3CU3E4__this_2)); }
	inline OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// OngGiaScript/<StopDeopBomb>d__9
struct U3CStopDeopBombU3Ed__9_t2E4B1011602289F5F7C4F90DDD3FA53360BEE826  : public RuntimeObject
{
public:
	// System.Int32 OngGiaScript/<StopDeopBomb>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OngGiaScript/<StopDeopBomb>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// OngGiaScript OngGiaScript/<StopDeopBomb>d__9::<>4__this
	OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopDeopBombU3Ed__9_t2E4B1011602289F5F7C4F90DDD3FA53360BEE826, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStopDeopBombU3Ed__9_t2E4B1011602289F5F7C4F90DDD3FA53360BEE826, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStopDeopBombU3Ed__9_t2E4B1011602289F5F7C4F90DDD3FA53360BEE826, ___U3CU3E4__this_2)); }
	inline OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// OngGiaScript/<StopHappy>d__13
struct U3CStopHappyU3Ed__13_t361268E476733EBBAF65A69699F0D46AF5111CF7  : public RuntimeObject
{
public:
	// System.Int32 OngGiaScript/<StopHappy>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OngGiaScript/<StopHappy>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// OngGiaScript OngGiaScript/<StopHappy>d__13::<>4__this
	OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopHappyU3Ed__13_t361268E476733EBBAF65A69699F0D46AF5111CF7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStopHappyU3Ed__13_t361268E476733EBBAF65A69699F0D46AF5111CF7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStopHappyU3Ed__13_t361268E476733EBBAF65A69699F0D46AF5111CF7, ___U3CU3E4__this_2)); }
	inline OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// VangScript/<RunEffect>d__8
struct U3CRunEffectU3Ed__8_tAD4129AD5FA4A9642D6970825422CBD58859C51B  : public RuntimeObject
{
public:
	// System.Int32 VangScript/<RunEffect>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VangScript/<RunEffect>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// VangScript VangScript/<RunEffect>d__8::<>4__this
	VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRunEffectU3Ed__8_tAD4129AD5FA4A9642D6970825422CBD58859C51B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRunEffectU3Ed__8_tAD4129AD5FA4A9642D6970825422CBD58859C51B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRunEffectU3Ed__8_tAD4129AD5FA4A9642D6970825422CBD58859C51B, ___U3CU3E4__this_2)); }
	inline VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// VangScript/<StopEffect>d__9
struct U3CStopEffectU3Ed__9_tCE8C03F0B4712BB8CE9D2C4E717B50C674B65C55  : public RuntimeObject
{
public:
	// System.Int32 VangScript/<StopEffect>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VangScript/<StopEffect>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// VangScript VangScript/<StopEffect>d__9::<>4__this
	VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopEffectU3Ed__9_tCE8C03F0B4712BB8CE9D2C4E717B50C674B65C55, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStopEffectU3Ed__9_tCE8C03F0B4712BB8CE9D2C4E717B50C674B65C55, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStopEffectU3Ed__9_tCE8C03F0B4712BB8CE9D2C4E717B50C674B65C55, ___U3CU3E4__this_2)); }
	inline VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// EnumFishAction
struct EnumFishAction_t38BF1DD06B93EA40C27A716398F69750A03BE9E0 
{
public:
	// System.Int32 EnumFishAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EnumFishAction_t38BF1DD06B93EA40C27A716398F69750A03BE9E0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// EnumStateGame
struct EnumStateGame_t469BEB2EEEB468CF139856FFDD6EE62532F1FFD8 
{
public:
	// System.Int32 EnumStateGame::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EnumStateGame_t469BEB2EEEB468CF139856FFDD6EE62532F1FFD8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
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
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TypeAction
struct TypeAction_t1B46E8A7008C3A65D4C9BE8D8F07178CF733A7AB 
{
public:
	// System.Int32 TypeAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeAction_t1B46E8A7008C3A65D4C9BE8D8F07178CF733A7AB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// OnStateChangeHandler
struct OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// BombScript
struct BombScript_t1D3E47268FDBB34F3ABA23E91FA72B30C842405F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject BombScript::buttonBuy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___buttonBuy_4;
	// UnityEngine.GameObject BombScript::buttonNBuy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___buttonNBuy_5;
	// UnityEngine.UI.Text BombScript::textPrice
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textPrice_6;
	// System.Int32 BombScript::bomb
	int32_t ___bomb_7;
	// System.Int32 BombScript::price
	int32_t ___price_8;

public:
	inline static int32_t get_offset_of_buttonBuy_4() { return static_cast<int32_t>(offsetof(BombScript_t1D3E47268FDBB34F3ABA23E91FA72B30C842405F, ___buttonBuy_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_buttonBuy_4() const { return ___buttonBuy_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_buttonBuy_4() { return &___buttonBuy_4; }
	inline void set_buttonBuy_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___buttonBuy_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonBuy_4), (void*)value);
	}

	inline static int32_t get_offset_of_buttonNBuy_5() { return static_cast<int32_t>(offsetof(BombScript_t1D3E47268FDBB34F3ABA23E91FA72B30C842405F, ___buttonNBuy_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_buttonNBuy_5() const { return ___buttonNBuy_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_buttonNBuy_5() { return &___buttonNBuy_5; }
	inline void set_buttonNBuy_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___buttonNBuy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonNBuy_5), (void*)value);
	}

	inline static int32_t get_offset_of_textPrice_6() { return static_cast<int32_t>(offsetof(BombScript_t1D3E47268FDBB34F3ABA23E91FA72B30C842405F, ___textPrice_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textPrice_6() const { return ___textPrice_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textPrice_6() { return &___textPrice_6; }
	inline void set_textPrice_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textPrice_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textPrice_6), (void*)value);
	}

	inline static int32_t get_offset_of_bomb_7() { return static_cast<int32_t>(offsetof(BombScript_t1D3E47268FDBB34F3ABA23E91FA72B30C842405F, ___bomb_7)); }
	inline int32_t get_bomb_7() const { return ___bomb_7; }
	inline int32_t* get_address_of_bomb_7() { return &___bomb_7; }
	inline void set_bomb_7(int32_t value)
	{
		___bomb_7 = value;
	}

	inline static int32_t get_offset_of_price_8() { return static_cast<int32_t>(offsetof(BombScript_t1D3E47268FDBB34F3ABA23E91FA72B30C842405F, ___price_8)); }
	inline int32_t get_price_8() const { return ___price_8; }
	inline int32_t* get_address_of_price_8() { return &___price_8; }
	inline void set_price_8(int32_t value)
	{
		___price_8 = value;
	}
};


// BookStoneScript
struct BookStoneScript_tE84C49F94464E3F54BFFA45B1C83E4FB7381924A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject BookStoneScript::buttonBuy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___buttonBuy_4;
	// UnityEngine.GameObject BookStoneScript::buttonNBuy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___buttonNBuy_5;
	// UnityEngine.UI.Text BookStoneScript::textPrice
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textPrice_6;
	// System.Int32 BookStoneScript::price
	int32_t ___price_7;

public:
	inline static int32_t get_offset_of_buttonBuy_4() { return static_cast<int32_t>(offsetof(BookStoneScript_tE84C49F94464E3F54BFFA45B1C83E4FB7381924A, ___buttonBuy_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_buttonBuy_4() const { return ___buttonBuy_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_buttonBuy_4() { return &___buttonBuy_4; }
	inline void set_buttonBuy_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___buttonBuy_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonBuy_4), (void*)value);
	}

	inline static int32_t get_offset_of_buttonNBuy_5() { return static_cast<int32_t>(offsetof(BookStoneScript_tE84C49F94464E3F54BFFA45B1C83E4FB7381924A, ___buttonNBuy_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_buttonNBuy_5() const { return ___buttonNBuy_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_buttonNBuy_5() { return &___buttonNBuy_5; }
	inline void set_buttonNBuy_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___buttonNBuy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonNBuy_5), (void*)value);
	}

	inline static int32_t get_offset_of_textPrice_6() { return static_cast<int32_t>(offsetof(BookStoneScript_tE84C49F94464E3F54BFFA45B1C83E4FB7381924A, ___textPrice_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textPrice_6() const { return ___textPrice_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textPrice_6() { return &___textPrice_6; }
	inline void set_textPrice_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textPrice_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textPrice_6), (void*)value);
	}

	inline static int32_t get_offset_of_price_7() { return static_cast<int32_t>(offsetof(BookStoneScript_tE84C49F94464E3F54BFFA45B1C83E4FB7381924A, ___price_7)); }
	inline int32_t get_price_7() const { return ___price_7; }
	inline int32_t* get_address_of_price_7() { return &___price_7; }
	inline void set_price_7(int32_t value)
	{
		___price_7 = value;
	}
};


// BoomScript
struct BoomScript_tB417CD47BD905BD27ABF9123BE724A9A0876E656  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 BoomScript::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_4;
	// UnityEngine.Vector3 BoomScript::scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_5;
	// System.Int32 BoomScript::bomb
	int32_t ___bomb_6;

public:
	inline static int32_t get_offset_of_position_4() { return static_cast<int32_t>(offsetof(BoomScript_tB417CD47BD905BD27ABF9123BE724A9A0876E656, ___position_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_4() const { return ___position_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_4() { return &___position_4; }
	inline void set_position_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_4 = value;
	}

	inline static int32_t get_offset_of_scale_5() { return static_cast<int32_t>(offsetof(BoomScript_tB417CD47BD905BD27ABF9123BE724A9A0876E656, ___scale_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_scale_5() const { return ___scale_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_scale_5() { return &___scale_5; }
	inline void set_scale_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___scale_5 = value;
	}

	inline static int32_t get_offset_of_bomb_6() { return static_cast<int32_t>(offsetof(BoomScript_tB417CD47BD905BD27ABF9123BE724A9A0876E656, ___bomb_6)); }
	inline int32_t get_bomb_6() const { return ___bomb_6; }
	inline int32_t* get_address_of_bomb_6() { return &___bomb_6; }
	inline void set_bomb_6(int32_t value)
	{
		___bomb_6 = value;
	}
};


// ButtonTouchScript
struct ButtonTouchScript_tE9F34CD0FF590DD2D73C241734664C99DB5B3C1B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// CGameManager
struct CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 CGameManager::music
	int32_t ___music_5;
	// System.Int32 CGameManager::sound
	int32_t ___sound_6;
	// System.Single CGameManager::maxX
	float ___maxX_9;
	// System.Single CGameManager::minX
	float ___minX_10;
	// System.Single CGameManager::maxY
	float ___maxY_11;
	// System.Single CGameManager::minY
	float ___minY_12;
	// System.String CGameManager::keyLevelNow
	String_t* ___keyLevelNow_13;
	// System.String CGameManager::keyLevelMax
	String_t* ___keyLevelMax_14;
	// System.String CGameManager::keyNumberLevel
	String_t* ___keyNumberLevel_15;
	// OnStateChangeHandler CGameManager::OnStateChange
	OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * ___OnStateChange_16;
	// EnumStateGame CGameManager::<gameState>k__BackingField
	int32_t ___U3CgameStateU3Ek__BackingField_17;
	// System.Int32 CGameManager::<score>k__BackingField
	int32_t ___U3CscoreU3Ek__BackingField_18;
	// System.Int32 CGameManager::<level>k__BackingField
	int32_t ___U3ClevelU3Ek__BackingField_19;
	// System.Int32 CGameManager::<maxScore>k__BackingField
	int32_t ___U3CmaxScoreU3Ek__BackingField_20;
	// System.Int32 CGameManager::<timePlay>k__BackingField
	int32_t ___U3CtimePlayU3Ek__BackingField_21;
	// System.Int32 CGameManager::<typeLuoiCau>k__BackingField
	int32_t ___U3CtypeLuoiCauU3Ek__BackingField_22;
	// System.Int32 CGameManager::levelCurrent
	int32_t ___levelCurrent_23;
	// System.Boolean CGameManager::power
	bool ___power_24;
	// System.Boolean CGameManager::bookStone
	bool ___bookStone_25;
	// System.Boolean CGameManager::clover
	bool ___clover_26;
	// System.Boolean CGameManager::diamond
	bool ___diamond_27;
	// System.Boolean CGameManager::clock
	bool ___clock_28;
	// System.Boolean CGameManager::powerCurrent
	bool ___powerCurrent_29;

public:
	inline static int32_t get_offset_of_music_5() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___music_5)); }
	inline int32_t get_music_5() const { return ___music_5; }
	inline int32_t* get_address_of_music_5() { return &___music_5; }
	inline void set_music_5(int32_t value)
	{
		___music_5 = value;
	}

	inline static int32_t get_offset_of_sound_6() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___sound_6)); }
	inline int32_t get_sound_6() const { return ___sound_6; }
	inline int32_t* get_address_of_sound_6() { return &___sound_6; }
	inline void set_sound_6(int32_t value)
	{
		___sound_6 = value;
	}

	inline static int32_t get_offset_of_maxX_9() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___maxX_9)); }
	inline float get_maxX_9() const { return ___maxX_9; }
	inline float* get_address_of_maxX_9() { return &___maxX_9; }
	inline void set_maxX_9(float value)
	{
		___maxX_9 = value;
	}

	inline static int32_t get_offset_of_minX_10() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___minX_10)); }
	inline float get_minX_10() const { return ___minX_10; }
	inline float* get_address_of_minX_10() { return &___minX_10; }
	inline void set_minX_10(float value)
	{
		___minX_10 = value;
	}

	inline static int32_t get_offset_of_maxY_11() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___maxY_11)); }
	inline float get_maxY_11() const { return ___maxY_11; }
	inline float* get_address_of_maxY_11() { return &___maxY_11; }
	inline void set_maxY_11(float value)
	{
		___maxY_11 = value;
	}

	inline static int32_t get_offset_of_minY_12() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___minY_12)); }
	inline float get_minY_12() const { return ___minY_12; }
	inline float* get_address_of_minY_12() { return &___minY_12; }
	inline void set_minY_12(float value)
	{
		___minY_12 = value;
	}

	inline static int32_t get_offset_of_keyLevelNow_13() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___keyLevelNow_13)); }
	inline String_t* get_keyLevelNow_13() const { return ___keyLevelNow_13; }
	inline String_t** get_address_of_keyLevelNow_13() { return &___keyLevelNow_13; }
	inline void set_keyLevelNow_13(String_t* value)
	{
		___keyLevelNow_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyLevelNow_13), (void*)value);
	}

	inline static int32_t get_offset_of_keyLevelMax_14() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___keyLevelMax_14)); }
	inline String_t* get_keyLevelMax_14() const { return ___keyLevelMax_14; }
	inline String_t** get_address_of_keyLevelMax_14() { return &___keyLevelMax_14; }
	inline void set_keyLevelMax_14(String_t* value)
	{
		___keyLevelMax_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyLevelMax_14), (void*)value);
	}

	inline static int32_t get_offset_of_keyNumberLevel_15() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___keyNumberLevel_15)); }
	inline String_t* get_keyNumberLevel_15() const { return ___keyNumberLevel_15; }
	inline String_t** get_address_of_keyNumberLevel_15() { return &___keyNumberLevel_15; }
	inline void set_keyNumberLevel_15(String_t* value)
	{
		___keyNumberLevel_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyNumberLevel_15), (void*)value);
	}

	inline static int32_t get_offset_of_OnStateChange_16() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___OnStateChange_16)); }
	inline OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * get_OnStateChange_16() const { return ___OnStateChange_16; }
	inline OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E ** get_address_of_OnStateChange_16() { return &___OnStateChange_16; }
	inline void set_OnStateChange_16(OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * value)
	{
		___OnStateChange_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStateChange_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgameStateU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___U3CgameStateU3Ek__BackingField_17)); }
	inline int32_t get_U3CgameStateU3Ek__BackingField_17() const { return ___U3CgameStateU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CgameStateU3Ek__BackingField_17() { return &___U3CgameStateU3Ek__BackingField_17; }
	inline void set_U3CgameStateU3Ek__BackingField_17(int32_t value)
	{
		___U3CgameStateU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CscoreU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___U3CscoreU3Ek__BackingField_18)); }
	inline int32_t get_U3CscoreU3Ek__BackingField_18() const { return ___U3CscoreU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CscoreU3Ek__BackingField_18() { return &___U3CscoreU3Ek__BackingField_18; }
	inline void set_U3CscoreU3Ek__BackingField_18(int32_t value)
	{
		___U3CscoreU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3ClevelU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___U3ClevelU3Ek__BackingField_19)); }
	inline int32_t get_U3ClevelU3Ek__BackingField_19() const { return ___U3ClevelU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3ClevelU3Ek__BackingField_19() { return &___U3ClevelU3Ek__BackingField_19; }
	inline void set_U3ClevelU3Ek__BackingField_19(int32_t value)
	{
		___U3ClevelU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CmaxScoreU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___U3CmaxScoreU3Ek__BackingField_20)); }
	inline int32_t get_U3CmaxScoreU3Ek__BackingField_20() const { return ___U3CmaxScoreU3Ek__BackingField_20; }
	inline int32_t* get_address_of_U3CmaxScoreU3Ek__BackingField_20() { return &___U3CmaxScoreU3Ek__BackingField_20; }
	inline void set_U3CmaxScoreU3Ek__BackingField_20(int32_t value)
	{
		___U3CmaxScoreU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CtimePlayU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___U3CtimePlayU3Ek__BackingField_21)); }
	inline int32_t get_U3CtimePlayU3Ek__BackingField_21() const { return ___U3CtimePlayU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CtimePlayU3Ek__BackingField_21() { return &___U3CtimePlayU3Ek__BackingField_21; }
	inline void set_U3CtimePlayU3Ek__BackingField_21(int32_t value)
	{
		___U3CtimePlayU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CtypeLuoiCauU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___U3CtypeLuoiCauU3Ek__BackingField_22)); }
	inline int32_t get_U3CtypeLuoiCauU3Ek__BackingField_22() const { return ___U3CtypeLuoiCauU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CtypeLuoiCauU3Ek__BackingField_22() { return &___U3CtypeLuoiCauU3Ek__BackingField_22; }
	inline void set_U3CtypeLuoiCauU3Ek__BackingField_22(int32_t value)
	{
		___U3CtypeLuoiCauU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_levelCurrent_23() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___levelCurrent_23)); }
	inline int32_t get_levelCurrent_23() const { return ___levelCurrent_23; }
	inline int32_t* get_address_of_levelCurrent_23() { return &___levelCurrent_23; }
	inline void set_levelCurrent_23(int32_t value)
	{
		___levelCurrent_23 = value;
	}

	inline static int32_t get_offset_of_power_24() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___power_24)); }
	inline bool get_power_24() const { return ___power_24; }
	inline bool* get_address_of_power_24() { return &___power_24; }
	inline void set_power_24(bool value)
	{
		___power_24 = value;
	}

	inline static int32_t get_offset_of_bookStone_25() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___bookStone_25)); }
	inline bool get_bookStone_25() const { return ___bookStone_25; }
	inline bool* get_address_of_bookStone_25() { return &___bookStone_25; }
	inline void set_bookStone_25(bool value)
	{
		___bookStone_25 = value;
	}

	inline static int32_t get_offset_of_clover_26() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___clover_26)); }
	inline bool get_clover_26() const { return ___clover_26; }
	inline bool* get_address_of_clover_26() { return &___clover_26; }
	inline void set_clover_26(bool value)
	{
		___clover_26 = value;
	}

	inline static int32_t get_offset_of_diamond_27() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___diamond_27)); }
	inline bool get_diamond_27() const { return ___diamond_27; }
	inline bool* get_address_of_diamond_27() { return &___diamond_27; }
	inline void set_diamond_27(bool value)
	{
		___diamond_27 = value;
	}

	inline static int32_t get_offset_of_clock_28() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___clock_28)); }
	inline bool get_clock_28() const { return ___clock_28; }
	inline bool* get_address_of_clock_28() { return &___clock_28; }
	inline void set_clock_28(bool value)
	{
		___clock_28 = value;
	}

	inline static int32_t get_offset_of_powerCurrent_29() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204, ___powerCurrent_29)); }
	inline bool get_powerCurrent_29() const { return ___powerCurrent_29; }
	inline bool* get_address_of_powerCurrent_29() { return &___powerCurrent_29; }
	inline void set_powerCurrent_29(bool value)
	{
		___powerCurrent_29 = value;
	}
};

struct CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields
{
public:
	// CGameManager CGameManager::instance
	CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields, ___instance_4)); }
	inline CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * get_instance_4() const { return ___instance_4; }
	inline CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// ChuotScript
struct ChuotScript_tE1CBBDBD3DA910BA8146FBCADC092DA7078AF5F8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ChuotScript::speedRun
	float ___speedRun_4;
	// System.Int32 ChuotScript::quayDau
	int32_t ___quayDau_5;
	// System.Int32 ChuotScript::quayLai
	int32_t ___quayLai_6;
	// System.Boolean ChuotScript::isMoveFollow
	bool ___isMoveFollow_7;
	// System.Single ChuotScript::maxY
	float ___maxY_8;
	// System.Int32 ChuotScript::score
	int32_t ___score_9;
	// System.Single ChuotScript::speed
	float ___speed_10;

public:
	inline static int32_t get_offset_of_speedRun_4() { return static_cast<int32_t>(offsetof(ChuotScript_tE1CBBDBD3DA910BA8146FBCADC092DA7078AF5F8, ___speedRun_4)); }
	inline float get_speedRun_4() const { return ___speedRun_4; }
	inline float* get_address_of_speedRun_4() { return &___speedRun_4; }
	inline void set_speedRun_4(float value)
	{
		___speedRun_4 = value;
	}

	inline static int32_t get_offset_of_quayDau_5() { return static_cast<int32_t>(offsetof(ChuotScript_tE1CBBDBD3DA910BA8146FBCADC092DA7078AF5F8, ___quayDau_5)); }
	inline int32_t get_quayDau_5() const { return ___quayDau_5; }
	inline int32_t* get_address_of_quayDau_5() { return &___quayDau_5; }
	inline void set_quayDau_5(int32_t value)
	{
		___quayDau_5 = value;
	}

	inline static int32_t get_offset_of_quayLai_6() { return static_cast<int32_t>(offsetof(ChuotScript_tE1CBBDBD3DA910BA8146FBCADC092DA7078AF5F8, ___quayLai_6)); }
	inline int32_t get_quayLai_6() const { return ___quayLai_6; }
	inline int32_t* get_address_of_quayLai_6() { return &___quayLai_6; }
	inline void set_quayLai_6(int32_t value)
	{
		___quayLai_6 = value;
	}

	inline static int32_t get_offset_of_isMoveFollow_7() { return static_cast<int32_t>(offsetof(ChuotScript_tE1CBBDBD3DA910BA8146FBCADC092DA7078AF5F8, ___isMoveFollow_7)); }
	inline bool get_isMoveFollow_7() const { return ___isMoveFollow_7; }
	inline bool* get_address_of_isMoveFollow_7() { return &___isMoveFollow_7; }
	inline void set_isMoveFollow_7(bool value)
	{
		___isMoveFollow_7 = value;
	}

	inline static int32_t get_offset_of_maxY_8() { return static_cast<int32_t>(offsetof(ChuotScript_tE1CBBDBD3DA910BA8146FBCADC092DA7078AF5F8, ___maxY_8)); }
	inline float get_maxY_8() const { return ___maxY_8; }
	inline float* get_address_of_maxY_8() { return &___maxY_8; }
	inline void set_maxY_8(float value)
	{
		___maxY_8 = value;
	}

	inline static int32_t get_offset_of_score_9() { return static_cast<int32_t>(offsetof(ChuotScript_tE1CBBDBD3DA910BA8146FBCADC092DA7078AF5F8, ___score_9)); }
	inline int32_t get_score_9() const { return ___score_9; }
	inline int32_t* get_address_of_score_9() { return &___score_9; }
	inline void set_score_9(int32_t value)
	{
		___score_9 = value;
	}

	inline static int32_t get_offset_of_speed_10() { return static_cast<int32_t>(offsetof(ChuotScript_tE1CBBDBD3DA910BA8146FBCADC092DA7078AF5F8, ___speed_10)); }
	inline float get_speed_10() const { return ___speed_10; }
	inline float* get_address_of_speed_10() { return &___speed_10; }
	inline void set_speed_10(float value)
	{
		___speed_10 = value;
	}
};


// ClockScript
struct ClockScript_t8583D23AC14B917692BC34069799881AE86E9D0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text ClockScript::textPrice
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textPrice_4;
	// UnityEngine.GameObject ClockScript::buttonBuy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___buttonBuy_5;
	// UnityEngine.GameObject ClockScript::buttonNBuy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___buttonNBuy_6;
	// System.Int32 ClockScript::price
	int32_t ___price_7;

public:
	inline static int32_t get_offset_of_textPrice_4() { return static_cast<int32_t>(offsetof(ClockScript_t8583D23AC14B917692BC34069799881AE86E9D0E, ___textPrice_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textPrice_4() const { return ___textPrice_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textPrice_4() { return &___textPrice_4; }
	inline void set_textPrice_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textPrice_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textPrice_4), (void*)value);
	}

	inline static int32_t get_offset_of_buttonBuy_5() { return static_cast<int32_t>(offsetof(ClockScript_t8583D23AC14B917692BC34069799881AE86E9D0E, ___buttonBuy_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_buttonBuy_5() const { return ___buttonBuy_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_buttonBuy_5() { return &___buttonBuy_5; }
	inline void set_buttonBuy_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___buttonBuy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonBuy_5), (void*)value);
	}

	inline static int32_t get_offset_of_buttonNBuy_6() { return static_cast<int32_t>(offsetof(ClockScript_t8583D23AC14B917692BC34069799881AE86E9D0E, ___buttonNBuy_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_buttonNBuy_6() const { return ___buttonNBuy_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_buttonNBuy_6() { return &___buttonNBuy_6; }
	inline void set_buttonNBuy_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___buttonNBuy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonNBuy_6), (void*)value);
	}

	inline static int32_t get_offset_of_price_7() { return static_cast<int32_t>(offsetof(ClockScript_t8583D23AC14B917692BC34069799881AE86E9D0E, ___price_7)); }
	inline int32_t get_price_7() const { return ___price_7; }
	inline int32_t* get_address_of_price_7() { return &___price_7; }
	inline void set_price_7(int32_t value)
	{
		___price_7 = value;
	}
};


// CloverScript
struct CloverScript_t39B8076C4C4103D961144A23CDFC5F2E11B633DD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject CloverScript::buttonBuy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___buttonBuy_4;
	// UnityEngine.GameObject CloverScript::buttonNBuy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___buttonNBuy_5;
	// UnityEngine.UI.Text CloverScript::textPrice
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textPrice_6;
	// System.Int32 CloverScript::price
	int32_t ___price_7;

public:
	inline static int32_t get_offset_of_buttonBuy_4() { return static_cast<int32_t>(offsetof(CloverScript_t39B8076C4C4103D961144A23CDFC5F2E11B633DD, ___buttonBuy_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_buttonBuy_4() const { return ___buttonBuy_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_buttonBuy_4() { return &___buttonBuy_4; }
	inline void set_buttonBuy_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___buttonBuy_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonBuy_4), (void*)value);
	}

	inline static int32_t get_offset_of_buttonNBuy_5() { return static_cast<int32_t>(offsetof(CloverScript_t39B8076C4C4103D961144A23CDFC5F2E11B633DD, ___buttonNBuy_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_buttonNBuy_5() const { return ___buttonNBuy_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_buttonNBuy_5() { return &___buttonNBuy_5; }
	inline void set_buttonNBuy_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___buttonNBuy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonNBuy_5), (void*)value);
	}

	inline static int32_t get_offset_of_textPrice_6() { return static_cast<int32_t>(offsetof(CloverScript_t39B8076C4C4103D961144A23CDFC5F2E11B633DD, ___textPrice_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textPrice_6() const { return ___textPrice_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textPrice_6() { return &___textPrice_6; }
	inline void set_textPrice_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textPrice_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textPrice_6), (void*)value);
	}

	inline static int32_t get_offset_of_price_7() { return static_cast<int32_t>(offsetof(CloverScript_t39B8076C4C4103D961144A23CDFC5F2E11B633DD, ___price_7)); }
	inline int32_t get_price_7() const { return ___price_7; }
	inline int32_t* get_address_of_price_7() { return &___price_7; }
	inline void set_price_7(int32_t value)
	{
		___price_7 = value;
	}
};


// DayCauScript
struct DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform DayCauScript::luoiCau
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___luoiCau_5;
	// UnityEngine.Vector3 DayCauScript::angles
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___angles_6;
	// System.Single DayCauScript::speed
	float ___speed_7;
	// System.Single DayCauScript::angleMax
	float ___angleMax_8;
	// TypeAction DayCauScript::typeAction
	int32_t ___typeAction_9;
	// UnityEngine.Vector3 DayCauScript::initAngles
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initAngles_10;
	// System.Single DayCauScript::rotationDay
	float ___rotationDay_11;

public:
	inline static int32_t get_offset_of_luoiCau_5() { return static_cast<int32_t>(offsetof(DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF, ___luoiCau_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_luoiCau_5() const { return ___luoiCau_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_luoiCau_5() { return &___luoiCau_5; }
	inline void set_luoiCau_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___luoiCau_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___luoiCau_5), (void*)value);
	}

	inline static int32_t get_offset_of_angles_6() { return static_cast<int32_t>(offsetof(DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF, ___angles_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_angles_6() const { return ___angles_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_angles_6() { return &___angles_6; }
	inline void set_angles_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___angles_6 = value;
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_angleMax_8() { return static_cast<int32_t>(offsetof(DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF, ___angleMax_8)); }
	inline float get_angleMax_8() const { return ___angleMax_8; }
	inline float* get_address_of_angleMax_8() { return &___angleMax_8; }
	inline void set_angleMax_8(float value)
	{
		___angleMax_8 = value;
	}

	inline static int32_t get_offset_of_typeAction_9() { return static_cast<int32_t>(offsetof(DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF, ___typeAction_9)); }
	inline int32_t get_typeAction_9() const { return ___typeAction_9; }
	inline int32_t* get_address_of_typeAction_9() { return &___typeAction_9; }
	inline void set_typeAction_9(int32_t value)
	{
		___typeAction_9 = value;
	}

	inline static int32_t get_offset_of_initAngles_10() { return static_cast<int32_t>(offsetof(DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF, ___initAngles_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initAngles_10() const { return ___initAngles_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initAngles_10() { return &___initAngles_10; }
	inline void set_initAngles_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initAngles_10 = value;
	}

	inline static int32_t get_offset_of_rotationDay_11() { return static_cast<int32_t>(offsetof(DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF, ___rotationDay_11)); }
	inline float get_rotationDay_11() const { return ___rotationDay_11; }
	inline float* get_address_of_rotationDay_11() { return &___rotationDay_11; }
	inline void set_rotationDay_11(float value)
	{
		___rotationDay_11 = value;
	}
};

struct DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_StaticFields
{
public:
	// DayCauScript DayCauScript::instance
	DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_StaticFields, ___instance_4)); }
	inline DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * get_instance_4() const { return ___instance_4; }
	inline DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// DiamondScript
struct DiamondScript_tA705755084679C900443B9E79A16B6FA16756150  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject DiamondScript::buttonBuy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___buttonBuy_4;
	// UnityEngine.GameObject DiamondScript::buttonNBuy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___buttonNBuy_5;
	// UnityEngine.UI.Text DiamondScript::textPrice
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textPrice_6;
	// System.Int32 DiamondScript::price
	int32_t ___price_7;

public:
	inline static int32_t get_offset_of_buttonBuy_4() { return static_cast<int32_t>(offsetof(DiamondScript_tA705755084679C900443B9E79A16B6FA16756150, ___buttonBuy_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_buttonBuy_4() const { return ___buttonBuy_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_buttonBuy_4() { return &___buttonBuy_4; }
	inline void set_buttonBuy_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___buttonBuy_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonBuy_4), (void*)value);
	}

	inline static int32_t get_offset_of_buttonNBuy_5() { return static_cast<int32_t>(offsetof(DiamondScript_tA705755084679C900443B9E79A16B6FA16756150, ___buttonNBuy_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_buttonNBuy_5() const { return ___buttonNBuy_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_buttonNBuy_5() { return &___buttonNBuy_5; }
	inline void set_buttonNBuy_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___buttonNBuy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonNBuy_5), (void*)value);
	}

	inline static int32_t get_offset_of_textPrice_6() { return static_cast<int32_t>(offsetof(DiamondScript_tA705755084679C900443B9E79A16B6FA16756150, ___textPrice_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textPrice_6() const { return ___textPrice_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textPrice_6() { return &___textPrice_6; }
	inline void set_textPrice_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textPrice_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textPrice_6), (void*)value);
	}

	inline static int32_t get_offset_of_price_7() { return static_cast<int32_t>(offsetof(DiamondScript_tA705755084679C900443B9E79A16B6FA16756150, ___price_7)); }
	inline int32_t get_price_7() const { return ___price_7; }
	inline int32_t* get_address_of_price_7() { return &___price_7; }
	inline void set_price_7(int32_t value)
	{
		___price_7 = value;
	}
};


// FireObject
struct FireObject_t087811D4DEB966C1AE112DC143B132300AB6F620  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// GamePlayScript
struct GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text GamePlayScript::timeText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___timeText_5;
	// UnityEngine.UI.Text GamePlayScript::levelText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___levelText_6;
	// UnityEngine.UI.Text GamePlayScript::targetText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___targetText_7;
	// UnityEngine.UI.Text GamePlayScript::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_8;
	// UnityEngine.UI.Text GamePlayScript::boomText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___boomText_9;
	// UnityEngine.UI.Text GamePlayScript::scoreVictoryText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreVictoryText_10;
	// UnityEngine.UI.Text GamePlayScript::scoreFailText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreFailText_11;
	// System.Int32 GamePlayScript::score
	int32_t ___score_12;
	// System.Int32 GamePlayScript::scoreTarget
	int32_t ___scoreTarget_13;
	// System.Int32 GamePlayScript::time
	int32_t ___time_14;
	// System.Single GamePlayScript::countDown
	float ___countDown_15;
	// UnityEngine.GameObject GamePlayScript::panelMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panelMenu_16;
	// UnityEngine.GameObject GamePlayScript::panelVictory
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panelVictory_17;
	// UnityEngine.GameObject GamePlayScript::panelFail
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panelFail_18;
	// UnityEngine.GameObject GamePlayScript::soundOnButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___soundOnButton_19;
	// UnityEngine.GameObject GamePlayScript::soundMuteButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___soundMuteButton_20;
	// UnityEngine.GameObject GamePlayScript::musicOnButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___musicOnButton_21;
	// UnityEngine.GameObject GamePlayScript::musicMuteButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___musicMuteButton_22;
	// UnityEngine.Animator GamePlayScript::animPanelMenu
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animPanelMenu_23;
	// UnityEngine.Animator GamePlayScript::animPanelDark
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animPanelDark_24;
	// UnityEngine.Animator GamePlayScript::animPanelPlay
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animPanelPlay_25;
	// UnityEngine.UI.Button GamePlayScript::restartGame
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___restartGame_26;
	// UnityEngine.UI.Button GamePlayScript::restartFailPanel
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___restartFailPanel_27;
	// System.Int32 GamePlayScript::level
	int32_t ___level_28;
	// System.Boolean GamePlayScript::endgame
	bool ___endgame_29;
	// UnityEngine.GameObject GamePlayScript::scoreTextFly
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___scoreTextFly_30;
	// UnityEngine.GameObject GamePlayScript::boomFly
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___boomFly_31;
	// UnityEngine.GameObject GamePlayScript::boomObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___boomObject_32;
	// UnityEngine.GameObject GamePlayScript::buttonNextLevel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___buttonNextLevel_33;
	// UnityEngine.Transform GamePlayScript::canvas
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___canvas_34;
	// System.Int32 GamePlayScript::numberBoom
	int32_t ___numberBoom_35;
	// System.String GamePlayScript::itemSeclected
	String_t* ___itemSeclected_36;
	// UnityEngine.GameObject GamePlayScript::itemDestroy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___itemDestroy_37;
	// UnityEngine.GameObject GamePlayScript::fireObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___fireObject_38;
	// System.Boolean GamePlayScript::nextLevel
	bool ___nextLevel_39;
	// UnityEngine.AudioSource GamePlayScript::audioMusic
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioMusic_40;
	// UnityEngine.AudioSource GamePlayScript::audioSound
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSound_41;
	// UnityEngine.AudioClip GamePlayScript::pressButton
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___pressButton_42;
	// UnityEngine.AudioClip GamePlayScript::explosive
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___explosive_43;
	// UnityEngine.AudioClip GamePlayScript::lowValue
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___lowValue_44;
	// UnityEngine.AudioClip GamePlayScript::normalValue
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___normalValue_45;
	// UnityEngine.AudioClip GamePlayScript::highValue
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___highValue_46;
	// UnityEngine.AudioClip GamePlayScript::last10S
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___last10S_47;
	// UnityEngine.AudioClip GamePlayScript::pull
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___pull_48;
	// UnityEngine.AudioClip GamePlayScript::lose
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___lose_49;
	// UnityEngine.AudioClip GamePlayScript::win
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___win_50;
	// System.Boolean GamePlayScript::victory
	bool ___victory_51;
	// System.Boolean GamePlayScript::fail
	bool ___fail_52;
	// System.Boolean GamePlayScript::isPause
	bool ___isPause_53;

public:
	inline static int32_t get_offset_of_timeText_5() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___timeText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_timeText_5() const { return ___timeText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_timeText_5() { return &___timeText_5; }
	inline void set_timeText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___timeText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeText_5), (void*)value);
	}

	inline static int32_t get_offset_of_levelText_6() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___levelText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_levelText_6() const { return ___levelText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_levelText_6() { return &___levelText_6; }
	inline void set_levelText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___levelText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelText_6), (void*)value);
	}

	inline static int32_t get_offset_of_targetText_7() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___targetText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_targetText_7() const { return ___targetText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_targetText_7() { return &___targetText_7; }
	inline void set_targetText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___targetText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetText_7), (void*)value);
	}

	inline static int32_t get_offset_of_scoreText_8() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___scoreText_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_8() const { return ___scoreText_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_8() { return &___scoreText_8; }
	inline void set_scoreText_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_8), (void*)value);
	}

	inline static int32_t get_offset_of_boomText_9() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___boomText_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_boomText_9() const { return ___boomText_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_boomText_9() { return &___boomText_9; }
	inline void set_boomText_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___boomText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boomText_9), (void*)value);
	}

	inline static int32_t get_offset_of_scoreVictoryText_10() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___scoreVictoryText_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreVictoryText_10() const { return ___scoreVictoryText_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreVictoryText_10() { return &___scoreVictoryText_10; }
	inline void set_scoreVictoryText_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreVictoryText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreVictoryText_10), (void*)value);
	}

	inline static int32_t get_offset_of_scoreFailText_11() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___scoreFailText_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreFailText_11() const { return ___scoreFailText_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreFailText_11() { return &___scoreFailText_11; }
	inline void set_scoreFailText_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreFailText_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreFailText_11), (void*)value);
	}

	inline static int32_t get_offset_of_score_12() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___score_12)); }
	inline int32_t get_score_12() const { return ___score_12; }
	inline int32_t* get_address_of_score_12() { return &___score_12; }
	inline void set_score_12(int32_t value)
	{
		___score_12 = value;
	}

	inline static int32_t get_offset_of_scoreTarget_13() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___scoreTarget_13)); }
	inline int32_t get_scoreTarget_13() const { return ___scoreTarget_13; }
	inline int32_t* get_address_of_scoreTarget_13() { return &___scoreTarget_13; }
	inline void set_scoreTarget_13(int32_t value)
	{
		___scoreTarget_13 = value;
	}

	inline static int32_t get_offset_of_time_14() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___time_14)); }
	inline int32_t get_time_14() const { return ___time_14; }
	inline int32_t* get_address_of_time_14() { return &___time_14; }
	inline void set_time_14(int32_t value)
	{
		___time_14 = value;
	}

	inline static int32_t get_offset_of_countDown_15() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___countDown_15)); }
	inline float get_countDown_15() const { return ___countDown_15; }
	inline float* get_address_of_countDown_15() { return &___countDown_15; }
	inline void set_countDown_15(float value)
	{
		___countDown_15 = value;
	}

	inline static int32_t get_offset_of_panelMenu_16() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___panelMenu_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_panelMenu_16() const { return ___panelMenu_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_panelMenu_16() { return &___panelMenu_16; }
	inline void set_panelMenu_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___panelMenu_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panelMenu_16), (void*)value);
	}

	inline static int32_t get_offset_of_panelVictory_17() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___panelVictory_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_panelVictory_17() const { return ___panelVictory_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_panelVictory_17() { return &___panelVictory_17; }
	inline void set_panelVictory_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___panelVictory_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panelVictory_17), (void*)value);
	}

	inline static int32_t get_offset_of_panelFail_18() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___panelFail_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_panelFail_18() const { return ___panelFail_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_panelFail_18() { return &___panelFail_18; }
	inline void set_panelFail_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___panelFail_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panelFail_18), (void*)value);
	}

	inline static int32_t get_offset_of_soundOnButton_19() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___soundOnButton_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_soundOnButton_19() const { return ___soundOnButton_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_soundOnButton_19() { return &___soundOnButton_19; }
	inline void set_soundOnButton_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___soundOnButton_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundOnButton_19), (void*)value);
	}

	inline static int32_t get_offset_of_soundMuteButton_20() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___soundMuteButton_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_soundMuteButton_20() const { return ___soundMuteButton_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_soundMuteButton_20() { return &___soundMuteButton_20; }
	inline void set_soundMuteButton_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___soundMuteButton_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundMuteButton_20), (void*)value);
	}

	inline static int32_t get_offset_of_musicOnButton_21() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___musicOnButton_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_musicOnButton_21() const { return ___musicOnButton_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_musicOnButton_21() { return &___musicOnButton_21; }
	inline void set_musicOnButton_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___musicOnButton_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicOnButton_21), (void*)value);
	}

	inline static int32_t get_offset_of_musicMuteButton_22() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___musicMuteButton_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_musicMuteButton_22() const { return ___musicMuteButton_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_musicMuteButton_22() { return &___musicMuteButton_22; }
	inline void set_musicMuteButton_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___musicMuteButton_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicMuteButton_22), (void*)value);
	}

	inline static int32_t get_offset_of_animPanelMenu_23() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___animPanelMenu_23)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animPanelMenu_23() const { return ___animPanelMenu_23; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animPanelMenu_23() { return &___animPanelMenu_23; }
	inline void set_animPanelMenu_23(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animPanelMenu_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animPanelMenu_23), (void*)value);
	}

	inline static int32_t get_offset_of_animPanelDark_24() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___animPanelDark_24)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animPanelDark_24() const { return ___animPanelDark_24; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animPanelDark_24() { return &___animPanelDark_24; }
	inline void set_animPanelDark_24(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animPanelDark_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animPanelDark_24), (void*)value);
	}

	inline static int32_t get_offset_of_animPanelPlay_25() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___animPanelPlay_25)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animPanelPlay_25() const { return ___animPanelPlay_25; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animPanelPlay_25() { return &___animPanelPlay_25; }
	inline void set_animPanelPlay_25(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animPanelPlay_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animPanelPlay_25), (void*)value);
	}

	inline static int32_t get_offset_of_restartGame_26() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___restartGame_26)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_restartGame_26() const { return ___restartGame_26; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_restartGame_26() { return &___restartGame_26; }
	inline void set_restartGame_26(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___restartGame_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___restartGame_26), (void*)value);
	}

	inline static int32_t get_offset_of_restartFailPanel_27() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___restartFailPanel_27)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_restartFailPanel_27() const { return ___restartFailPanel_27; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_restartFailPanel_27() { return &___restartFailPanel_27; }
	inline void set_restartFailPanel_27(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___restartFailPanel_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___restartFailPanel_27), (void*)value);
	}

	inline static int32_t get_offset_of_level_28() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___level_28)); }
	inline int32_t get_level_28() const { return ___level_28; }
	inline int32_t* get_address_of_level_28() { return &___level_28; }
	inline void set_level_28(int32_t value)
	{
		___level_28 = value;
	}

	inline static int32_t get_offset_of_endgame_29() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___endgame_29)); }
	inline bool get_endgame_29() const { return ___endgame_29; }
	inline bool* get_address_of_endgame_29() { return &___endgame_29; }
	inline void set_endgame_29(bool value)
	{
		___endgame_29 = value;
	}

	inline static int32_t get_offset_of_scoreTextFly_30() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___scoreTextFly_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_scoreTextFly_30() const { return ___scoreTextFly_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_scoreTextFly_30() { return &___scoreTextFly_30; }
	inline void set_scoreTextFly_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___scoreTextFly_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreTextFly_30), (void*)value);
	}

	inline static int32_t get_offset_of_boomFly_31() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___boomFly_31)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_boomFly_31() const { return ___boomFly_31; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_boomFly_31() { return &___boomFly_31; }
	inline void set_boomFly_31(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___boomFly_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boomFly_31), (void*)value);
	}

	inline static int32_t get_offset_of_boomObject_32() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___boomObject_32)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_boomObject_32() const { return ___boomObject_32; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_boomObject_32() { return &___boomObject_32; }
	inline void set_boomObject_32(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___boomObject_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boomObject_32), (void*)value);
	}

	inline static int32_t get_offset_of_buttonNextLevel_33() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___buttonNextLevel_33)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_buttonNextLevel_33() const { return ___buttonNextLevel_33; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_buttonNextLevel_33() { return &___buttonNextLevel_33; }
	inline void set_buttonNextLevel_33(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___buttonNextLevel_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonNextLevel_33), (void*)value);
	}

	inline static int32_t get_offset_of_canvas_34() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___canvas_34)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_canvas_34() const { return ___canvas_34; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_canvas_34() { return &___canvas_34; }
	inline void set_canvas_34(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___canvas_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_34), (void*)value);
	}

	inline static int32_t get_offset_of_numberBoom_35() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___numberBoom_35)); }
	inline int32_t get_numberBoom_35() const { return ___numberBoom_35; }
	inline int32_t* get_address_of_numberBoom_35() { return &___numberBoom_35; }
	inline void set_numberBoom_35(int32_t value)
	{
		___numberBoom_35 = value;
	}

	inline static int32_t get_offset_of_itemSeclected_36() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___itemSeclected_36)); }
	inline String_t* get_itemSeclected_36() const { return ___itemSeclected_36; }
	inline String_t** get_address_of_itemSeclected_36() { return &___itemSeclected_36; }
	inline void set_itemSeclected_36(String_t* value)
	{
		___itemSeclected_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemSeclected_36), (void*)value);
	}

	inline static int32_t get_offset_of_itemDestroy_37() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___itemDestroy_37)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_itemDestroy_37() const { return ___itemDestroy_37; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_itemDestroy_37() { return &___itemDestroy_37; }
	inline void set_itemDestroy_37(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___itemDestroy_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemDestroy_37), (void*)value);
	}

	inline static int32_t get_offset_of_fireObject_38() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___fireObject_38)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_fireObject_38() const { return ___fireObject_38; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_fireObject_38() { return &___fireObject_38; }
	inline void set_fireObject_38(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___fireObject_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fireObject_38), (void*)value);
	}

	inline static int32_t get_offset_of_nextLevel_39() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___nextLevel_39)); }
	inline bool get_nextLevel_39() const { return ___nextLevel_39; }
	inline bool* get_address_of_nextLevel_39() { return &___nextLevel_39; }
	inline void set_nextLevel_39(bool value)
	{
		___nextLevel_39 = value;
	}

	inline static int32_t get_offset_of_audioMusic_40() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___audioMusic_40)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioMusic_40() const { return ___audioMusic_40; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioMusic_40() { return &___audioMusic_40; }
	inline void set_audioMusic_40(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioMusic_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioMusic_40), (void*)value);
	}

	inline static int32_t get_offset_of_audioSound_41() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___audioSound_41)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSound_41() const { return ___audioSound_41; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSound_41() { return &___audioSound_41; }
	inline void set_audioSound_41(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSound_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSound_41), (void*)value);
	}

	inline static int32_t get_offset_of_pressButton_42() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___pressButton_42)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_pressButton_42() const { return ___pressButton_42; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_pressButton_42() { return &___pressButton_42; }
	inline void set_pressButton_42(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___pressButton_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pressButton_42), (void*)value);
	}

	inline static int32_t get_offset_of_explosive_43() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___explosive_43)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_explosive_43() const { return ___explosive_43; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_explosive_43() { return &___explosive_43; }
	inline void set_explosive_43(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___explosive_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explosive_43), (void*)value);
	}

	inline static int32_t get_offset_of_lowValue_44() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___lowValue_44)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_lowValue_44() const { return ___lowValue_44; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_lowValue_44() { return &___lowValue_44; }
	inline void set_lowValue_44(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___lowValue_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lowValue_44), (void*)value);
	}

	inline static int32_t get_offset_of_normalValue_45() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___normalValue_45)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_normalValue_45() const { return ___normalValue_45; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_normalValue_45() { return &___normalValue_45; }
	inline void set_normalValue_45(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___normalValue_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normalValue_45), (void*)value);
	}

	inline static int32_t get_offset_of_highValue_46() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___highValue_46)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_highValue_46() const { return ___highValue_46; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_highValue_46() { return &___highValue_46; }
	inline void set_highValue_46(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___highValue_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___highValue_46), (void*)value);
	}

	inline static int32_t get_offset_of_last10S_47() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___last10S_47)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_last10S_47() const { return ___last10S_47; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_last10S_47() { return &___last10S_47; }
	inline void set_last10S_47(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___last10S_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___last10S_47), (void*)value);
	}

	inline static int32_t get_offset_of_pull_48() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___pull_48)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_pull_48() const { return ___pull_48; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_pull_48() { return &___pull_48; }
	inline void set_pull_48(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___pull_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pull_48), (void*)value);
	}

	inline static int32_t get_offset_of_lose_49() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___lose_49)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_lose_49() const { return ___lose_49; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_lose_49() { return &___lose_49; }
	inline void set_lose_49(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___lose_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lose_49), (void*)value);
	}

	inline static int32_t get_offset_of_win_50() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___win_50)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_win_50() const { return ___win_50; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_win_50() { return &___win_50; }
	inline void set_win_50(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___win_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win_50), (void*)value);
	}

	inline static int32_t get_offset_of_victory_51() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___victory_51)); }
	inline bool get_victory_51() const { return ___victory_51; }
	inline bool* get_address_of_victory_51() { return &___victory_51; }
	inline void set_victory_51(bool value)
	{
		___victory_51 = value;
	}

	inline static int32_t get_offset_of_fail_52() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___fail_52)); }
	inline bool get_fail_52() const { return ___fail_52; }
	inline bool* get_address_of_fail_52() { return &___fail_52; }
	inline void set_fail_52(bool value)
	{
		___fail_52 = value;
	}

	inline static int32_t get_offset_of_isPause_53() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE, ___isPause_53)); }
	inline bool get_isPause_53() const { return ___isPause_53; }
	inline bool* get_address_of_isPause_53() { return &___isPause_53; }
	inline void set_isPause_53(bool value)
	{
		___isPause_53 = value;
	}
};

struct GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_StaticFields
{
public:
	// GamePlayScript GamePlayScript::instance
	GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_StaticFields, ___instance_4)); }
	inline GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * get_instance_4() const { return ___instance_4; }
	inline GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// GiftScript
struct GiftScript_t2AD2012AD53BE26AC1D88583F33A80414A68DC60  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 GiftScript::randomGift
	int32_t ___randomGift_4;
	// System.Boolean GiftScript::isMoveFollow
	bool ___isMoveFollow_5;
	// System.Single GiftScript::maxY
	float ___maxY_6;
	// System.Single GiftScript::speed
	float ___speed_7;

public:
	inline static int32_t get_offset_of_randomGift_4() { return static_cast<int32_t>(offsetof(GiftScript_t2AD2012AD53BE26AC1D88583F33A80414A68DC60, ___randomGift_4)); }
	inline int32_t get_randomGift_4() const { return ___randomGift_4; }
	inline int32_t* get_address_of_randomGift_4() { return &___randomGift_4; }
	inline void set_randomGift_4(int32_t value)
	{
		___randomGift_4 = value;
	}

	inline static int32_t get_offset_of_isMoveFollow_5() { return static_cast<int32_t>(offsetof(GiftScript_t2AD2012AD53BE26AC1D88583F33A80414A68DC60, ___isMoveFollow_5)); }
	inline bool get_isMoveFollow_5() const { return ___isMoveFollow_5; }
	inline bool* get_address_of_isMoveFollow_5() { return &___isMoveFollow_5; }
	inline void set_isMoveFollow_5(bool value)
	{
		___isMoveFollow_5 = value;
	}

	inline static int32_t get_offset_of_maxY_6() { return static_cast<int32_t>(offsetof(GiftScript_t2AD2012AD53BE26AC1D88583F33A80414A68DC60, ___maxY_6)); }
	inline float get_maxY_6() const { return ___maxY_6; }
	inline float* get_address_of_maxY_6() { return &___maxY_6; }
	inline void set_maxY_6(float value)
	{
		___maxY_6 = value;
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(GiftScript_t2AD2012AD53BE26AC1D88583F33A80414A68DC60, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}
};


// LuoiCauScript
struct LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single LuoiCauScript::speed
	float ___speed_5;
	// System.Single LuoiCauScript::speedMin
	float ___speedMin_6;
	// System.Single LuoiCauScript::speedBegin
	float ___speedBegin_7;
	// UnityEngine.Vector2 LuoiCauScript::velocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___velocity_8;
	// System.Single LuoiCauScript::maxX
	float ___maxX_9;
	// System.Single LuoiCauScript::minX
	float ___minX_10;
	// System.Single LuoiCauScript::minY
	float ___minY_11;
	// System.Single LuoiCauScript::maxY
	float ___maxY_12;
	// UnityEngine.Transform LuoiCauScript::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_13;
	// UnityEngine.Vector3 LuoiCauScript::prePosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___prePosition_14;
	// System.Int32 LuoiCauScript::type
	int32_t ___type_15;
	// System.Boolean LuoiCauScript::isUpSpeed
	bool ___isUpSpeed_16;
	// System.Single LuoiCauScript::timeUpSpeed
	float ___timeUpSpeed_17;
	// UnityEngine.GameObject LuoiCauScript::hook
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hook_18;
	// UnityEngine.GameObject LuoiCauScript::halfHook
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___halfHook_19;
	// UnityEngine.Vector3 LuoiCauScript::positionHalfHook
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positionHalfHook_20;
	// UnityEngine.Vector3 LuoiCauScript::scaleHalfHook
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scaleHalfHook_21;
	// System.Boolean LuoiCauScript::cameraOut
	bool ___cameraOut_22;

public:
	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_speedMin_6() { return static_cast<int32_t>(offsetof(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D, ___speedMin_6)); }
	inline float get_speedMin_6() const { return ___speedMin_6; }
	inline float* get_address_of_speedMin_6() { return &___speedMin_6; }
	inline void set_speedMin_6(float value)
	{
		___speedMin_6 = value;
	}

	inline static int32_t get_offset_of_speedBegin_7() { return static_cast<int32_t>(offsetof(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D, ___speedBegin_7)); }
	inline float get_speedBegin_7() const { return ___speedBegin_7; }
	inline float* get_address_of_speedBegin_7() { return &___speedBegin_7; }
	inline void set_speedBegin_7(float value)
	{
		___speedBegin_7 = value;
	}

	inline static int32_t get_offset_of_velocity_8() { return static_cast<int32_t>(offsetof(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D, ___velocity_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_velocity_8() const { return ___velocity_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_velocity_8() { return &___velocity_8; }
	inline void set_velocity_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___velocity_8 = value;
	}

	inline static int32_t get_offset_of_maxX_9() { return static_cast<int32_t>(offsetof(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D, ___maxX_9)); }
	inline float get_maxX_9() const { return ___maxX_9; }
	inline float* get_address_of_maxX_9() { return &___maxX_9; }
	inline void set_maxX_9(float value)
	{
		___maxX_9 = value;
	}

	inline static int32_t get_offset_of_minX_10() { return static_cast<int32_t>(offsetof(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D, ___minX_10)); }
	inline float get_minX_10() const { return ___minX_10; }
	inline float* get_address_of_minX_10() { return &___minX_10; }
	inline void set_minX_10(float value)
	{
		___minX_10 = value;
	}

	inline static int32_t get_offset_of_minY_11() { return static_cast<int32_t>(offsetof(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D, ___minY_11)); }
	inline float get_minY_11() const { return ___minY_11; }
	inline float* get_address_of_minY_11() { return &___minY_11; }
	inline void set_minY_11(float value)
	{
		___minY_11 = value;
	}

	inline static int32_t get_offset_of_maxY_12() { return static_cast<int32_t>(offsetof(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D, ___maxY_12)); }
	inline float get_maxY_12() const { return ___maxY_12; }
	inline float* get_address_of_maxY_12() { return &___maxY_12; }
	inline void set_maxY_12(float value)
	{
		___maxY_12 = value;
	}

	inline static int32_t get_offset_of_target_13() { return static_cast<int32_t>(offsetof(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D, ___target_13)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_13() const { return ___target_13; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_13() { return &___target_13; }
	inline void set_target_13(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_13), (void*)value);
	}

	inline static int32_t get_offset_of_prePosition_14() { return static_cast<int32_t>(offsetof(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D, ___prePosition_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_prePosition_14() const { return ___prePosition_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_prePosition_14() { return &___prePosition_14; }
	inline void set_prePosition_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___prePosition_14 = value;
	}

	inline static int32_t get_offset_of_type_15() { return static_cast<int32_t>(offsetof(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D, ___type_15)); }
	inline int32_t get_type_15() const { return ___type_15; }
	inline int32_t* get_address_of_type_15() { return &___type_15; }
	inline void set_type_15(int32_t value)
	{
		___type_15 = value;
	}

	inline static int32_t get_offset_of_isUpSpeed_16() { return static_cast<int32_t>(offsetof(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D, ___isUpSpeed_16)); }
	inline bool get_isUpSpeed_16() const { return ___isUpSpeed_16; }
	inline bool* get_address_of_isUpSpeed_16() { return &___isUpSpeed_16; }
	inline void set_isUpSpeed_16(bool value)
	{
		___isUpSpeed_16 = value;
	}

	inline static int32_t get_offset_of_timeUpSpeed_17() { return static_cast<int32_t>(offsetof(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D, ___timeUpSpeed_17)); }
	inline float get_timeUpSpeed_17() const { return ___timeUpSpeed_17; }
	inline float* get_address_of_timeUpSpeed_17() { return &___timeUpSpeed_17; }
	inline void set_timeUpSpeed_17(float value)
	{
		___timeUpSpeed_17 = value;
	}

	inline static int32_t get_offset_of_hook_18() { return static_cast<int32_t>(offsetof(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D, ___hook_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hook_18() const { return ___hook_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hook_18() { return &___hook_18; }
	inline void set_hook_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hook_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hook_18), (void*)value);
	}

	inline static int32_t get_offset_of_halfHook_19() { return static_cast<int32_t>(offsetof(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D, ___halfHook_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_halfHook_19() const { return ___halfHook_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_halfHook_19() { return &___halfHook_19; }
	inline void set_halfHook_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___halfHook_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___halfHook_19), (void*)value);
	}

	inline static int32_t get_offset_of_positionHalfHook_20() { return static_cast<int32_t>(offsetof(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D, ___positionHalfHook_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positionHalfHook_20() const { return ___positionHalfHook_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positionHalfHook_20() { return &___positionHalfHook_20; }
	inline void set_positionHalfHook_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positionHalfHook_20 = value;
	}

	inline static int32_t get_offset_of_scaleHalfHook_21() { return static_cast<int32_t>(offsetof(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D, ___scaleHalfHook_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_scaleHalfHook_21() const { return ___scaleHalfHook_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_scaleHalfHook_21() { return &___scaleHalfHook_21; }
	inline void set_scaleHalfHook_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___scaleHalfHook_21 = value;
	}

	inline static int32_t get_offset_of_cameraOut_22() { return static_cast<int32_t>(offsetof(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D, ___cameraOut_22)); }
	inline bool get_cameraOut_22() const { return ___cameraOut_22; }
	inline bool* get_address_of_cameraOut_22() { return &___cameraOut_22; }
	inline void set_cameraOut_22(bool value)
	{
		___cameraOut_22 = value;
	}
};

struct LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_StaticFields
{
public:
	// LuoiCauScript LuoiCauScript::instance
	LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_StaticFields, ___instance_4)); }
	inline LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * get_instance_4() const { return ___instance_4; }
	inline LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// MainMenuController
struct MainMenuController_tB517623519398FBEBC46ED54C54C990158720384  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject MainMenuController::buttonContinue
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___buttonContinue_4;
	// UnityEngine.GameObject MainMenuController::soundOnButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___soundOnButton_5;
	// UnityEngine.GameObject MainMenuController::soundMuteButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___soundMuteButton_6;
	// UnityEngine.GameObject MainMenuController::musicOnButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___musicOnButton_7;
	// UnityEngine.GameObject MainMenuController::musicMuteButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___musicMuteButton_8;
	// UnityEngine.Animator MainMenuController::animPanelSetting
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animPanelSetting_9;
	// UnityEngine.AudioSource MainMenuController::audioMusic
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioMusic_10;
	// UnityEngine.AudioSource MainMenuController::audioSound
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSound_11;
	// UnityEngine.AudioClip MainMenuController::pressButton
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___pressButton_12;
	// System.Boolean MainMenuController::doubleBackToExitPressedOnce
	bool ___doubleBackToExitPressedOnce_13;
	// System.String MainMenuController::toastString
	String_t* ___toastString_14;
	// System.String MainMenuController::input
	String_t* ___input_15;
	// UnityEngine.AndroidJavaObject MainMenuController::currentActivity
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___currentActivity_16;
	// UnityEngine.AndroidJavaClass MainMenuController::UnityPlayer
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___UnityPlayer_17;
	// UnityEngine.AndroidJavaObject MainMenuController::context
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___context_18;

public:
	inline static int32_t get_offset_of_buttonContinue_4() { return static_cast<int32_t>(offsetof(MainMenuController_tB517623519398FBEBC46ED54C54C990158720384, ___buttonContinue_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_buttonContinue_4() const { return ___buttonContinue_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_buttonContinue_4() { return &___buttonContinue_4; }
	inline void set_buttonContinue_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___buttonContinue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonContinue_4), (void*)value);
	}

	inline static int32_t get_offset_of_soundOnButton_5() { return static_cast<int32_t>(offsetof(MainMenuController_tB517623519398FBEBC46ED54C54C990158720384, ___soundOnButton_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_soundOnButton_5() const { return ___soundOnButton_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_soundOnButton_5() { return &___soundOnButton_5; }
	inline void set_soundOnButton_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___soundOnButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundOnButton_5), (void*)value);
	}

	inline static int32_t get_offset_of_soundMuteButton_6() { return static_cast<int32_t>(offsetof(MainMenuController_tB517623519398FBEBC46ED54C54C990158720384, ___soundMuteButton_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_soundMuteButton_6() const { return ___soundMuteButton_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_soundMuteButton_6() { return &___soundMuteButton_6; }
	inline void set_soundMuteButton_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___soundMuteButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundMuteButton_6), (void*)value);
	}

	inline static int32_t get_offset_of_musicOnButton_7() { return static_cast<int32_t>(offsetof(MainMenuController_tB517623519398FBEBC46ED54C54C990158720384, ___musicOnButton_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_musicOnButton_7() const { return ___musicOnButton_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_musicOnButton_7() { return &___musicOnButton_7; }
	inline void set_musicOnButton_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___musicOnButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicOnButton_7), (void*)value);
	}

	inline static int32_t get_offset_of_musicMuteButton_8() { return static_cast<int32_t>(offsetof(MainMenuController_tB517623519398FBEBC46ED54C54C990158720384, ___musicMuteButton_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_musicMuteButton_8() const { return ___musicMuteButton_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_musicMuteButton_8() { return &___musicMuteButton_8; }
	inline void set_musicMuteButton_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___musicMuteButton_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicMuteButton_8), (void*)value);
	}

	inline static int32_t get_offset_of_animPanelSetting_9() { return static_cast<int32_t>(offsetof(MainMenuController_tB517623519398FBEBC46ED54C54C990158720384, ___animPanelSetting_9)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animPanelSetting_9() const { return ___animPanelSetting_9; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animPanelSetting_9() { return &___animPanelSetting_9; }
	inline void set_animPanelSetting_9(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animPanelSetting_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animPanelSetting_9), (void*)value);
	}

	inline static int32_t get_offset_of_audioMusic_10() { return static_cast<int32_t>(offsetof(MainMenuController_tB517623519398FBEBC46ED54C54C990158720384, ___audioMusic_10)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioMusic_10() const { return ___audioMusic_10; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioMusic_10() { return &___audioMusic_10; }
	inline void set_audioMusic_10(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioMusic_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioMusic_10), (void*)value);
	}

	inline static int32_t get_offset_of_audioSound_11() { return static_cast<int32_t>(offsetof(MainMenuController_tB517623519398FBEBC46ED54C54C990158720384, ___audioSound_11)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSound_11() const { return ___audioSound_11; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSound_11() { return &___audioSound_11; }
	inline void set_audioSound_11(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSound_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSound_11), (void*)value);
	}

	inline static int32_t get_offset_of_pressButton_12() { return static_cast<int32_t>(offsetof(MainMenuController_tB517623519398FBEBC46ED54C54C990158720384, ___pressButton_12)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_pressButton_12() const { return ___pressButton_12; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_pressButton_12() { return &___pressButton_12; }
	inline void set_pressButton_12(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___pressButton_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pressButton_12), (void*)value);
	}

	inline static int32_t get_offset_of_doubleBackToExitPressedOnce_13() { return static_cast<int32_t>(offsetof(MainMenuController_tB517623519398FBEBC46ED54C54C990158720384, ___doubleBackToExitPressedOnce_13)); }
	inline bool get_doubleBackToExitPressedOnce_13() const { return ___doubleBackToExitPressedOnce_13; }
	inline bool* get_address_of_doubleBackToExitPressedOnce_13() { return &___doubleBackToExitPressedOnce_13; }
	inline void set_doubleBackToExitPressedOnce_13(bool value)
	{
		___doubleBackToExitPressedOnce_13 = value;
	}

	inline static int32_t get_offset_of_toastString_14() { return static_cast<int32_t>(offsetof(MainMenuController_tB517623519398FBEBC46ED54C54C990158720384, ___toastString_14)); }
	inline String_t* get_toastString_14() const { return ___toastString_14; }
	inline String_t** get_address_of_toastString_14() { return &___toastString_14; }
	inline void set_toastString_14(String_t* value)
	{
		___toastString_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toastString_14), (void*)value);
	}

	inline static int32_t get_offset_of_input_15() { return static_cast<int32_t>(offsetof(MainMenuController_tB517623519398FBEBC46ED54C54C990158720384, ___input_15)); }
	inline String_t* get_input_15() const { return ___input_15; }
	inline String_t** get_address_of_input_15() { return &___input_15; }
	inline void set_input_15(String_t* value)
	{
		___input_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_15), (void*)value);
	}

	inline static int32_t get_offset_of_currentActivity_16() { return static_cast<int32_t>(offsetof(MainMenuController_tB517623519398FBEBC46ED54C54C990158720384, ___currentActivity_16)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_currentActivity_16() const { return ___currentActivity_16; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_currentActivity_16() { return &___currentActivity_16; }
	inline void set_currentActivity_16(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___currentActivity_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentActivity_16), (void*)value);
	}

	inline static int32_t get_offset_of_UnityPlayer_17() { return static_cast<int32_t>(offsetof(MainMenuController_tB517623519398FBEBC46ED54C54C990158720384, ___UnityPlayer_17)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_UnityPlayer_17() const { return ___UnityPlayer_17; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_UnityPlayer_17() { return &___UnityPlayer_17; }
	inline void set_UnityPlayer_17(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___UnityPlayer_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnityPlayer_17), (void*)value);
	}

	inline static int32_t get_offset_of_context_18() { return static_cast<int32_t>(offsetof(MainMenuController_tB517623519398FBEBC46ED54C54C990158720384, ___context_18)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_context_18() const { return ___context_18; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_context_18() { return &___context_18; }
	inline void set_context_18(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___context_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___context_18), (void*)value);
	}
};


// NextLevelController
struct NextLevelController_tB46CD096AFA1DAE33C9FDE07E971E3060A10CF11  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text NextLevelController::textTarget
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textTarget_4;
	// UnityEngine.UI.Text NextLevelController::textLevel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textLevel_5;
	// System.Single NextLevelController::timeDelay
	float ___timeDelay_6;

public:
	inline static int32_t get_offset_of_textTarget_4() { return static_cast<int32_t>(offsetof(NextLevelController_tB46CD096AFA1DAE33C9FDE07E971E3060A10CF11, ___textTarget_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textTarget_4() const { return ___textTarget_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textTarget_4() { return &___textTarget_4; }
	inline void set_textTarget_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textTarget_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textTarget_4), (void*)value);
	}

	inline static int32_t get_offset_of_textLevel_5() { return static_cast<int32_t>(offsetof(NextLevelController_tB46CD096AFA1DAE33C9FDE07E971E3060A10CF11, ___textLevel_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textLevel_5() const { return ___textLevel_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textLevel_5() { return &___textLevel_5; }
	inline void set_textLevel_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textLevel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textLevel_5), (void*)value);
	}

	inline static int32_t get_offset_of_timeDelay_6() { return static_cast<int32_t>(offsetof(NextLevelController_tB46CD096AFA1DAE33C9FDE07E971E3060A10CF11, ___timeDelay_6)); }
	inline float get_timeDelay_6() const { return ___timeDelay_6; }
	inline float* get_address_of_timeDelay_6() { return &___timeDelay_6; }
	inline void set_timeDelay_6(float value)
	{
		___timeDelay_6 = value;
	}
};


// OngGiaScript
struct OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator OngGiaScript::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_5;
	// UnityEngine.GameObject OngGiaScript::halo
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___halo_6;
	// UnityEngine.Vector3 OngGiaScript::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_7;

public:
	inline static int32_t get_offset_of_anim_5() { return static_cast<int32_t>(offsetof(OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF, ___anim_5)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_5() const { return ___anim_5; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_5() { return &___anim_5; }
	inline void set_anim_5(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_5), (void*)value);
	}

	inline static int32_t get_offset_of_halo_6() { return static_cast<int32_t>(offsetof(OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF, ___halo_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_halo_6() const { return ___halo_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_halo_6() { return &___halo_6; }
	inline void set_halo_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___halo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___halo_6), (void*)value);
	}

	inline static int32_t get_offset_of_position_7() { return static_cast<int32_t>(offsetof(OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF, ___position_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_7() const { return ___position_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_7() { return &___position_7; }
	inline void set_position_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_7 = value;
	}
};

struct OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF_StaticFields
{
public:
	// OngGiaScript OngGiaScript::instance
	OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF_StaticFields, ___instance_4)); }
	inline OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * get_instance_4() const { return ___instance_4; }
	inline OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// PopupPanelScript
struct PopupPanelScript_t5D3B719303C80F5988015D711361387D5CD04A0C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 PopupPanelScript::scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_4;
	// System.Single PopupPanelScript::timeDelay
	float ___timeDelay_5;

public:
	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(PopupPanelScript_t5D3B719303C80F5988015D711361387D5CD04A0C, ___scale_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_scale_4() const { return ___scale_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___scale_4 = value;
	}

	inline static int32_t get_offset_of_timeDelay_5() { return static_cast<int32_t>(offsetof(PopupPanelScript_t5D3B719303C80F5988015D711361387D5CD04A0C, ___timeDelay_5)); }
	inline float get_timeDelay_5() const { return ___timeDelay_5; }
	inline float* get_address_of_timeDelay_5() { return &___timeDelay_5; }
	inline void set_timeDelay_5(float value)
	{
		___timeDelay_5 = value;
	}
};


// PowerScript
struct PowerScript_t7DCB9760ECD1E057FABE9C641C6920A08308D344  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject PowerScript::buttonBuy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___buttonBuy_4;
	// UnityEngine.GameObject PowerScript::buttonNBuy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___buttonNBuy_5;
	// UnityEngine.UI.Text PowerScript::textPrice
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textPrice_6;
	// System.Int32 PowerScript::price
	int32_t ___price_7;

public:
	inline static int32_t get_offset_of_buttonBuy_4() { return static_cast<int32_t>(offsetof(PowerScript_t7DCB9760ECD1E057FABE9C641C6920A08308D344, ___buttonBuy_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_buttonBuy_4() const { return ___buttonBuy_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_buttonBuy_4() { return &___buttonBuy_4; }
	inline void set_buttonBuy_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___buttonBuy_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonBuy_4), (void*)value);
	}

	inline static int32_t get_offset_of_buttonNBuy_5() { return static_cast<int32_t>(offsetof(PowerScript_t7DCB9760ECD1E057FABE9C641C6920A08308D344, ___buttonNBuy_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_buttonNBuy_5() const { return ___buttonNBuy_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_buttonNBuy_5() { return &___buttonNBuy_5; }
	inline void set_buttonNBuy_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___buttonNBuy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonNBuy_5), (void*)value);
	}

	inline static int32_t get_offset_of_textPrice_6() { return static_cast<int32_t>(offsetof(PowerScript_t7DCB9760ECD1E057FABE9C641C6920A08308D344, ___textPrice_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textPrice_6() const { return ___textPrice_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textPrice_6() { return &___textPrice_6; }
	inline void set_textPrice_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textPrice_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textPrice_6), (void*)value);
	}

	inline static int32_t get_offset_of_price_7() { return static_cast<int32_t>(offsetof(PowerScript_t7DCB9760ECD1E057FABE9C641C6920A08308D344, ___price_7)); }
	inline int32_t get_price_7() const { return ___price_7; }
	inline int32_t* get_address_of_price_7() { return &___price_7; }
	inline void set_price_7(int32_t value)
	{
		___price_7 = value;
	}
};


// ShopController
struct ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text ShopController::textLevel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textLevel_5;
	// UnityEngine.UI.Text ShopController::textDollar
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textDollar_6;
	// UnityEngine.Transform ShopController::panelShop
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___panelShop_7;
	// UnityEngine.GameObject[] ShopController::instanceItems
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___instanceItems_8;
	// System.Int32[] ShopController::randomCreateItem
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___randomCreateItem_9;
	// UnityEngine.AudioSource ShopController::audioSound
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSound_10;
	// UnityEngine.AudioClip ShopController::pressButton
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___pressButton_11;

public:
	inline static int32_t get_offset_of_textLevel_5() { return static_cast<int32_t>(offsetof(ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964, ___textLevel_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textLevel_5() const { return ___textLevel_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textLevel_5() { return &___textLevel_5; }
	inline void set_textLevel_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textLevel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textLevel_5), (void*)value);
	}

	inline static int32_t get_offset_of_textDollar_6() { return static_cast<int32_t>(offsetof(ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964, ___textDollar_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textDollar_6() const { return ___textDollar_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textDollar_6() { return &___textDollar_6; }
	inline void set_textDollar_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textDollar_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textDollar_6), (void*)value);
	}

	inline static int32_t get_offset_of_panelShop_7() { return static_cast<int32_t>(offsetof(ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964, ___panelShop_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_panelShop_7() const { return ___panelShop_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_panelShop_7() { return &___panelShop_7; }
	inline void set_panelShop_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___panelShop_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panelShop_7), (void*)value);
	}

	inline static int32_t get_offset_of_instanceItems_8() { return static_cast<int32_t>(offsetof(ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964, ___instanceItems_8)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_instanceItems_8() const { return ___instanceItems_8; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_instanceItems_8() { return &___instanceItems_8; }
	inline void set_instanceItems_8(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___instanceItems_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instanceItems_8), (void*)value);
	}

	inline static int32_t get_offset_of_randomCreateItem_9() { return static_cast<int32_t>(offsetof(ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964, ___randomCreateItem_9)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_randomCreateItem_9() const { return ___randomCreateItem_9; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_randomCreateItem_9() { return &___randomCreateItem_9; }
	inline void set_randomCreateItem_9(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___randomCreateItem_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___randomCreateItem_9), (void*)value);
	}

	inline static int32_t get_offset_of_audioSound_10() { return static_cast<int32_t>(offsetof(ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964, ___audioSound_10)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSound_10() const { return ___audioSound_10; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSound_10() { return &___audioSound_10; }
	inline void set_audioSound_10(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSound_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSound_10), (void*)value);
	}

	inline static int32_t get_offset_of_pressButton_11() { return static_cast<int32_t>(offsetof(ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964, ___pressButton_11)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_pressButton_11() const { return ___pressButton_11; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_pressButton_11() { return &___pressButton_11; }
	inline void set_pressButton_11(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___pressButton_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pressButton_11), (void*)value);
	}
};

struct ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_StaticFields
{
public:
	// ShopController ShopController::instance
	ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_StaticFields, ___instance_4)); }
	inline ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * get_instance_4() const { return ___instance_4; }
	inline ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// ShopItemSButtonScript
struct ShopItemSButtonScript_t0EF612061D3DC46882D6CE404D0D21062DA61604  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// TNTScript
struct TNTScript_tA03B0156AEA07E653A9364074F5F83C7556CA722  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject TNTScript::fire
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___fire_4;
	// System.Single TNTScript::speed
	float ___speed_5;
	// UnityEngine.Vector3 TNTScript::vector3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector3_6;

public:
	inline static int32_t get_offset_of_fire_4() { return static_cast<int32_t>(offsetof(TNTScript_tA03B0156AEA07E653A9364074F5F83C7556CA722, ___fire_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_fire_4() const { return ___fire_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_fire_4() { return &___fire_4; }
	inline void set_fire_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___fire_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fire_4), (void*)value);
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(TNTScript_tA03B0156AEA07E653A9364074F5F83C7556CA722, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_vector3_6() { return static_cast<int32_t>(offsetof(TNTScript_tA03B0156AEA07E653A9364074F5F83C7556CA722, ___vector3_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_vector3_6() const { return ___vector3_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_vector3_6() { return &___vector3_6; }
	inline void set_vector3_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___vector3_6 = value;
	}
};


// TextScoreScript
struct TextScoreScript_t83E71EF2C771F0C0936963F7F7B4E940F27FA9E5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 TextScoreScript::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_4;
	// UnityEngine.Vector3 TextScoreScript::scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_5;
	// UnityEngine.UI.Text TextScoreScript::txtScore
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___txtScore_6;
	// UnityEngine.GameObject TextScoreScript::endFly
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___endFly_8;

public:
	inline static int32_t get_offset_of_position_4() { return static_cast<int32_t>(offsetof(TextScoreScript_t83E71EF2C771F0C0936963F7F7B4E940F27FA9E5, ___position_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_4() const { return ___position_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_4() { return &___position_4; }
	inline void set_position_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_4 = value;
	}

	inline static int32_t get_offset_of_scale_5() { return static_cast<int32_t>(offsetof(TextScoreScript_t83E71EF2C771F0C0936963F7F7B4E940F27FA9E5, ___scale_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_scale_5() const { return ___scale_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_scale_5() { return &___scale_5; }
	inline void set_scale_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___scale_5 = value;
	}

	inline static int32_t get_offset_of_txtScore_6() { return static_cast<int32_t>(offsetof(TextScoreScript_t83E71EF2C771F0C0936963F7F7B4E940F27FA9E5, ___txtScore_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_txtScore_6() const { return ___txtScore_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_txtScore_6() { return &___txtScore_6; }
	inline void set_txtScore_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___txtScore_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___txtScore_6), (void*)value);
	}

	inline static int32_t get_offset_of_endFly_8() { return static_cast<int32_t>(offsetof(TextScoreScript_t83E71EF2C771F0C0936963F7F7B4E940F27FA9E5, ___endFly_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_endFly_8() const { return ___endFly_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_endFly_8() { return &___endFly_8; }
	inline void set_endFly_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___endFly_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endFly_8), (void*)value);
	}
};

struct TextScoreScript_t83E71EF2C771F0C0936963F7F7B4E940F27FA9E5_StaticFields
{
public:
	// System.Int32 TextScoreScript::score
	int32_t ___score_7;

public:
	inline static int32_t get_offset_of_score_7() { return static_cast<int32_t>(offsetof(TextScoreScript_t83E71EF2C771F0C0936963F7F7B4E940F27FA9E5_StaticFields, ___score_7)); }
	inline int32_t get_score_7() const { return ___score_7; }
	inline int32_t* get_address_of_score_7() { return &___score_7; }
	inline void set_score_7(int32_t value)
	{
		___score_7 = value;
	}
};


// ThuyenScript
struct ThuyenScript_t454C091DB63BCCCBCA234189566AB5B0DF52652E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ThuyenScript::speedAcceleration
	float ___speedAcceleration_4;
	// System.Single ThuyenScript::speedMax
	float ___speedMax_5;
	// System.Single ThuyenScript::speed
	float ___speed_6;
	// System.Single ThuyenScript::smooth
	float ___smooth_7;
	// System.Single ThuyenScript::tiltAngle
	float ___tiltAngle_8;
	// System.Single ThuyenScript::maxX
	float ___maxX_9;
	// System.Single ThuyenScript::minX
	float ___minX_10;
	// UnityEngine.Vector3 ThuyenScript::dir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir_11;
	// System.Boolean ThuyenScript::isBorder
	bool ___isBorder_12;
	// System.Boolean ThuyenScript::ableMove
	bool ___ableMove_13;

public:
	inline static int32_t get_offset_of_speedAcceleration_4() { return static_cast<int32_t>(offsetof(ThuyenScript_t454C091DB63BCCCBCA234189566AB5B0DF52652E, ___speedAcceleration_4)); }
	inline float get_speedAcceleration_4() const { return ___speedAcceleration_4; }
	inline float* get_address_of_speedAcceleration_4() { return &___speedAcceleration_4; }
	inline void set_speedAcceleration_4(float value)
	{
		___speedAcceleration_4 = value;
	}

	inline static int32_t get_offset_of_speedMax_5() { return static_cast<int32_t>(offsetof(ThuyenScript_t454C091DB63BCCCBCA234189566AB5B0DF52652E, ___speedMax_5)); }
	inline float get_speedMax_5() const { return ___speedMax_5; }
	inline float* get_address_of_speedMax_5() { return &___speedMax_5; }
	inline void set_speedMax_5(float value)
	{
		___speedMax_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(ThuyenScript_t454C091DB63BCCCBCA234189566AB5B0DF52652E, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_smooth_7() { return static_cast<int32_t>(offsetof(ThuyenScript_t454C091DB63BCCCBCA234189566AB5B0DF52652E, ___smooth_7)); }
	inline float get_smooth_7() const { return ___smooth_7; }
	inline float* get_address_of_smooth_7() { return &___smooth_7; }
	inline void set_smooth_7(float value)
	{
		___smooth_7 = value;
	}

	inline static int32_t get_offset_of_tiltAngle_8() { return static_cast<int32_t>(offsetof(ThuyenScript_t454C091DB63BCCCBCA234189566AB5B0DF52652E, ___tiltAngle_8)); }
	inline float get_tiltAngle_8() const { return ___tiltAngle_8; }
	inline float* get_address_of_tiltAngle_8() { return &___tiltAngle_8; }
	inline void set_tiltAngle_8(float value)
	{
		___tiltAngle_8 = value;
	}

	inline static int32_t get_offset_of_maxX_9() { return static_cast<int32_t>(offsetof(ThuyenScript_t454C091DB63BCCCBCA234189566AB5B0DF52652E, ___maxX_9)); }
	inline float get_maxX_9() const { return ___maxX_9; }
	inline float* get_address_of_maxX_9() { return &___maxX_9; }
	inline void set_maxX_9(float value)
	{
		___maxX_9 = value;
	}

	inline static int32_t get_offset_of_minX_10() { return static_cast<int32_t>(offsetof(ThuyenScript_t454C091DB63BCCCBCA234189566AB5B0DF52652E, ___minX_10)); }
	inline float get_minX_10() const { return ___minX_10; }
	inline float* get_address_of_minX_10() { return &___minX_10; }
	inline void set_minX_10(float value)
	{
		___minX_10 = value;
	}

	inline static int32_t get_offset_of_dir_11() { return static_cast<int32_t>(offsetof(ThuyenScript_t454C091DB63BCCCBCA234189566AB5B0DF52652E, ___dir_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dir_11() const { return ___dir_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dir_11() { return &___dir_11; }
	inline void set_dir_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dir_11 = value;
	}

	inline static int32_t get_offset_of_isBorder_12() { return static_cast<int32_t>(offsetof(ThuyenScript_t454C091DB63BCCCBCA234189566AB5B0DF52652E, ___isBorder_12)); }
	inline bool get_isBorder_12() const { return ___isBorder_12; }
	inline bool* get_address_of_isBorder_12() { return &___isBorder_12; }
	inline void set_isBorder_12(bool value)
	{
		___isBorder_12 = value;
	}

	inline static int32_t get_offset_of_ableMove_13() { return static_cast<int32_t>(offsetof(ThuyenScript_t454C091DB63BCCCBCA234189566AB5B0DF52652E, ___ableMove_13)); }
	inline bool get_ableMove_13() const { return ___ableMove_13; }
	inline bool* get_address_of_ableMove_13() { return &___ableMove_13; }
	inline void set_ableMove_13(bool value)
	{
		___ableMove_13 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// VangScript
struct VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean VangScript::isMoveFollow
	bool ___isMoveFollow_4;
	// System.Single VangScript::maxY
	float ___maxY_5;
	// System.Int32 VangScript::score
	int32_t ___score_6;
	// System.Single VangScript::speed
	float ___speed_7;
	// UnityEngine.Vector3 VangScript::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_8;
	// UnityEngine.Animator VangScript::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_9;

public:
	inline static int32_t get_offset_of_isMoveFollow_4() { return static_cast<int32_t>(offsetof(VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818, ___isMoveFollow_4)); }
	inline bool get_isMoveFollow_4() const { return ___isMoveFollow_4; }
	inline bool* get_address_of_isMoveFollow_4() { return &___isMoveFollow_4; }
	inline void set_isMoveFollow_4(bool value)
	{
		___isMoveFollow_4 = value;
	}

	inline static int32_t get_offset_of_maxY_5() { return static_cast<int32_t>(offsetof(VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818, ___maxY_5)); }
	inline float get_maxY_5() const { return ___maxY_5; }
	inline float* get_address_of_maxY_5() { return &___maxY_5; }
	inline void set_maxY_5(float value)
	{
		___maxY_5 = value;
	}

	inline static int32_t get_offset_of_score_6() { return static_cast<int32_t>(offsetof(VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818, ___score_6)); }
	inline int32_t get_score_6() const { return ___score_6; }
	inline int32_t* get_address_of_score_6() { return &___score_6; }
	inline void set_score_6(int32_t value)
	{
		___score_6 = value;
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_position_8() { return static_cast<int32_t>(offsetof(VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818, ___position_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_8() const { return ___position_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_8() { return &___position_8; }
	inline void set_position_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_8 = value;
	}

	inline static int32_t get_offset_of_anim_9() { return static_cast<int32_t>(offsetof(VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818, ___anim_9)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_9() const { return ___anim_9; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_9() { return &___anim_9; }
	inline void set_anim_9(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_9), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
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
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Int32>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);

// System.Void BombScript::SetPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BombScript_SetPrice_m6682186BC82937E6605593BFF54C8A0D4F3DE843 (BombScript_t1D3E47268FDBB34F3ABA23E91FA72B30C842405F * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::RandomRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_RandomRange_mCB428074F55769762659348C65A7A87B88E522D6 (int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void ShopController::SetTextMoney()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_SetTextMoney_m3B94366C8859B8A60E7E0DE07EBC3F0692306438 (ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void BookStoneScript::SetPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BookStoneScript_SetPrice_mB42765415B0B902C9246AC686DC8CFA3C1007838 (BookStoneScript_tE84C49F94464E3F54BFFA45B1C83E4FB7381924A * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void BoomScript::BoomMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoomScript_BoomMove_m067F4004B3A69DD60B3D0AFD85B29DC52DD41C8C (BoomScript_tB417CD47BD905BD27ABF9123BE724A9A0876E656 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void GamePlayScript::SetNumberBoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_SetNumberBoom_m0E2D86DB6728DF99F9C7B59CAFD07B2600E7AEF4 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<DayCauScript>()
inline DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void GamePlayScript::Boom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_Boom_mF45D3BD0090BAB87001AF1E2197623413FEBAF5B (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<LuoiCauScript>()
inline LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void LuoiCauScript::checkTouchScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuoiCauScript_checkTouchScene_m6CCB10F940659DA4DAC88DFE18A515A8A3D813BF (LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void CGameManager::DisableItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_DisableItems_mD26CF3DA64E7EC30274422B1EF9E5A5B9A7BAE25 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, const RuntimeMethod* method);
// System.Void CGameManager::IsGameStartedForTheFirstTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_IsGameStartedForTheFirstTime_m9A1B6A624E6EED6A5E7A8E47D5EEE9516997B237 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, const RuntimeMethod* method);
// System.Void CGameManager::MakeSingleInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_MakeSingleInstance_mDA520A03D193FED60C91DE39DD4F39595FC753AD (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, const RuntimeMethod* method);
// System.Int32 CGameManager::GetMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CGameManager_GetMusic_mAD01CEC6CE0FF00D7A78885A634C0FA9849E36E3 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, const RuntimeMethod* method);
// System.Int32 CGameManager::GetSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CGameManager_GetSound_m2B5F22C9D18FF4623065F61030A625E49ADB69AA (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, const RuntimeMethod* method);
// System.Int32 CGameManager::GetMaxLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CGameManager_GetMaxLevel_m7E3ABF9B3A495BB154964BC1898393005EAF70C0 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void CGameManager::set_gameState(EnumStateGame)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CGameManager_set_gameState_mB0EADC9FD8FB2106DF97AE6CFAFB640B7F3CEC87_inline (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void OnStateChangeHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStateChangeHandler_Invoke_m7FD411FB6C04F05E2B5012F726A18F4A1171428D (OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * __this, const RuntimeMethod* method);
// System.Void CGameManager::set_score(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CGameManager_set_score_m6AE28D0C89A4EE62C7C90F9FDEF5B553AA593361_inline (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void CGameManager::set_timePlay(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CGameManager_set_timePlay_mEF7321ECA6FD78BB7B9DB69B9F8CBE679106E443_inline (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void CGameManager::set_typeLuoiCau(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CGameManager_set_typeLuoiCau_m4ECF536B67C785F4874C15C3B833EC113986A66F_inline (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92 (String_t* ___key0, const RuntimeMethod* method);
// System.Void ChuotScript::ChuotChay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChuotScript_ChuotChay_m4DE467E7DB93E65A6C1B1F01FF593A3F6EE244A9 (ChuotScript_tE1CBBDBD3DA910BA8146FBCADC092DA7078AF5F8 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void ChuotScript::moveFllowTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChuotScript_moveFllowTarget_m1FCF4A53EA5B706C85FDA3D911F4931C0CDD17D0 (ChuotScript_tE1CBBDBD3DA910BA8146FBCADC092DA7078AF5F8 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Collider2D::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8 (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<GamePlayScript>()
inline GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void GamePlayScript::CreateScoreFly(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_CreateScoreFly_m996C8518B2A4BF73807C8F216BC63C3F01B246D4 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, int32_t ___score0, const RuntimeMethod* method);
// System.Void ClockScript::SetPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClockScript_SetPrice_m339766730987970B5E82E9F9D89D36104B5E5E65 (ClockScript_t8583D23AC14B917692BC34069799881AE86E9D0E * __this, const RuntimeMethod* method);
// System.Void CloverScript::SetPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloverScript_SetPrice_m4F8C6AEF072FA16E252C31D6BF35D0E09B1B637E (CloverScript_t39B8076C4C4103D961144A23CDFC5F2E11B633DD * __this, const RuntimeMethod* method);
// System.Void DayCauScript::MakeInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DayCauScript_MakeInstance_m022EC78CC8BCF0C75FFE45BFF78B2EC1D254670F (DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void DiamondScript::SetPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiamondScript_SetPrice_mB38AF850901704C857DDEC776DE725E020260091 (DiamondScript_tA705755084679C900443B9E79A16B6FA16756150 * __this, const RuntimeMethod* method);
// System.Void GamePlayScript::MakeInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_MakeInstance_mF6B31DF527DD2FF02BF7BD512102631AB4B76089 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Int32 CGameManager::GetScoreTarget(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CGameManager_GetScoreTarget_m5080D5BD98092F75E85EFB51D4178C22ECED2ED5 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___level0, const RuntimeMethod* method);
// System.Void GamePlayScript::SoundControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_SoundControl_m406F4B5393D9288E933E219A4E387B80B5D3CB31 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method);
// System.Void GamePlayScript::MusicControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_MusicControl_mE4CBA90D6124C8D33E03C0406B49580C85FF0D37 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method);
// System.Void GamePlayScript::SetButtonMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_SetButtonMusic_m780D0E075E2777B326C8974D44F5BF7EBF426364 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method);
// System.Void GamePlayScript::SetButtonSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_SetButtonSound_m8709655D91D87FBEA3652919C1E075A185EB764A (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Void GamePlayScript::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_PauseGame_m206736B6A8FD2B76F67351B6B0A1E927345B9612 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method);
// System.Void GamePlayScript::PlaySound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_PlaySound_m0828E124C4A965DB699619D1BC63ECDCAB4181A1 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void GamePlayScript::Victory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_Victory_mDB86E46E8B20C895F08F57D558D2D153A8E4EAB5 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method);
// System.Void GamePlayScript::Fail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_Fail_m2657DB839356B595D41EEFFF834CCD2A9F52416B (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Application::get_loadedLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_loadedLevel_m0E346B638F8E10D4FD5D4C883FAA39C34CF41C1E (const RuntimeMethod* method);
// System.Void UnityEngine.Application::LoadLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_LoadLevel_mB8D52CB842A98DDBB611D39C80709F5233AF6AAB (int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::LoadLevel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_LoadLevel_m4DB7F36B66B70C1DB7F4F762A1DA554A028B135A (String_t* ___name0, const RuntimeMethod* method);
// System.Void OngGiaScript::DropBomb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OngGiaScript_DropBomb_m5D572575C5EFA7DAC7C9EC84BB26E9990C12BF15 (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120 (String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_Instantiate_mADD3254CB5E6AB56FBB6964FE4B930F5187AB5AD (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void OngGiaScript::Happy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OngGiaScript_Happy_m1E65893B0D0D40937C8C578782D91355EAEBD1C1 (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method);
// System.Void GamePlayScript/<Do>d__66::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoU3Ed__66__ctor_m2FC1EAD8C106323B6F391615CAF93B5631B502B6 (U3CDoU3Ed__66_t780AA168EB458EDCA78F8ABF70715154D4D5535F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// System.Collections.IEnumerator GamePlayScript::ScoreZoomOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GamePlayScript_ScoreZoomOut_mB2BCB64EB0AE64A76C700C786E799ABC4E72469B (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void GamePlayScript/<ScoreZoomOut>d__69::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScoreZoomOutU3Ed__69__ctor_m2C630ABA9CA8EE744882D20D0A645C7A4A2BB740 (U3CScoreZoomOutU3Ed__69_tCFC04555FC9576F724D6EEBC5614C866CF5B3E5D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void GamePlayScript::RestartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_RestartGame_m60DEA007CEA6E615EEE724A3B2E68312F0B32C3F (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method);
// System.Void GiftScript::moveFllowTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GiftScript_moveFllowTarget_m24F61BBF48E3502E0329F000A4C7928DFC39B24C (GiftScript_t2AD2012AD53BE26AC1D88583F33A80414A68DC60 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, const RuntimeMethod* method);
// System.Void GamePlayScript::Power()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_Power_m51778CF619605409E739F4E192B6FA60B12B0595 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method);
// System.Void GamePlayScript::CreateBoomFly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_CreateBoomFly_mD6756F440E2760CEF93D0E6ACEB9B147E822C746 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method);
// System.Void LuoiCauScript::MakeInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuoiCauScript_MakeInstance_m63E2E241150FB5272066834646AED266A241A9A8 (LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * __this, const RuntimeMethod* method);
// System.Void LuoiCauScript/<TimeUpSpeed>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeUpSpeedU3Ed__21__ctor_m513944078A64237D3F6AA421603656EDE08F7183 (U3CTimeUpSpeedU3Ed__21_t6822F484BFDF87E8C83F66A1650ECDFF800A234C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void LuoiCauScript::checkKeoCauXong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuoiCauScript_checkKeoCauXong_m01F42624C2EC532AC19C698DA089C8BB11C04082 (LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * __this, const RuntimeMethod* method);
// System.Void LuoiCauScript::checkMoveOutCameraView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuoiCauScript_checkMoveOutCameraView_m6828B4252897CFE658DB8542976EB08462805273 (LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Renderer::get_isVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_isVisible_mE424F7FFEA9D78BC657B3F54FDFBE1EB8461CCB7 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2_Normalize_m0F1341493AD5F0B7DA4D504A44F52A1E2FFCCEC3 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Void OngGiaScript::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OngGiaScript_Attack_m1384921774997B32F6FCABBC8084BD6FAAD97E00 (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method);
// System.Boolean LuoiCauScript::checkPositionOutBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LuoiCauScript_checkPositionOutBound_mEEE2A3C96C06079EDA936340D32F0448D7C89688 (LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Void MainMenuController::SoundControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SoundControl_m2C3739E8B9C9000DA3A0EB23D2D1B0F7A6469788 (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method);
// System.Void MainMenuController::MusicControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_MusicControl_m97CDA2765EF3BCA84D2B9704FC7951C15AAF9024 (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method);
// System.Void MainMenuController::SetButtonMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SetButtonMusic_m07D7B33AFB7D5E4D31A5097C20CC64019EFD8510 (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method);
// System.Void MainMenuController::SetButtonSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SetButtonSound_mFEB6A59B1F56CE364A03D392807F9D799AC42D83 (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void MainMenuController::showToastOnUiThread(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_showToastOnUiThread_mCAD10AE2216F4F340690D21BBD214A553D000D36 (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, String_t* ___toastString0, const RuntimeMethod* method);
// System.Collections.IEnumerator MainMenuController::DoubleClickExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MainMenuController_DoubleClickExit_m886CB24B10ECF5F88A744A118E13314612E6A604 (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method);
// System.Void MainMenuController/<DoubleClickExit>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoubleClickExitU3Ed__17__ctor_m9DE035CB6A0FA7B2623A49E00C2078E6E3F56EA8 (U3CDoubleClickExitU3Ed__17_t43E75ED32E51D335B5E5EDAF488B58E8D3DAD1EE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaRunnable::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnable__ctor_m385F79E7C422595C3F8504D588807799A7CF4727 (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___className0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Int32>(System.String)
inline int32_t AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_gshared)(__this, ___fieldName0, method);
}
// !!0 UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void MainMenuController::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_Play_m379878E81EA6E14F8631F89556A878ECCB3C05B2 (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method);
// System.Void OngGiaScript::MakeInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OngGiaScript_MakeInstance_m0686FE9651389BC1CEEEFD32F7D2BD6E751CD85A (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void OngGiaScript::KeoCau()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OngGiaScript_KeoCau_m89BDF78207DA8E70A811DD309FD4E04692A7F1E1 (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator OngGiaScript::StopDeopBomb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OngGiaScript_StopDeopBomb_mAC4369D2C45F6E04A4ED65F1A47641B2557E95DC (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method);
// System.Void OngGiaScript/<StopDeopBomb>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopDeopBombU3Ed__9__ctor_m7EAD4D722C03097A6897854363325EAB1738B12D (U3CStopDeopBombU3Ed__9_t2E4B1011602289F5F7C4F90DDD3FA53360BEE826 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator OngGiaScript::StopAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OngGiaScript_StopAttack_mF20EA2BEC0A6D52A911B0A73444B978408D0A76C (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method);
// System.Void OngGiaScript/<StopAttack>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopAttackU3Ed__11__ctor_m32FCEA9521A8B6FCB9F0B4511065D47F255C25A9 (U3CStopAttackU3Ed__11_tF747141683F19CAF709581EF8636DAA77D5B26A5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator OngGiaScript::StopHappy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OngGiaScript_StopHappy_mDEC0E58685C3302CA823B2599A8731AAEF1BEAB7 (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method);
// System.Void OngGiaScript/<StopHappy>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopHappyU3Ed__13__ctor_m5CC37A9E297FBA71E4699AC9CD73F23FA95C1606 (U3CStopHappyU3Ed__13_t361268E476733EBBAF65A69699F0D46AF5111CF7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator OngGiaScript::StopAngry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OngGiaScript_StopAngry_mE6110CA1618D59E625BC48FFBBAC244AD4168EF8 (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method);
// System.Void OngGiaScript/<StopAngry>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopAngryU3Ed__15__ctor_mB7B8347F67DDDD4FF05C5A94F3C495198F96F713 (U3CStopAngryU3Ed__15_tC7DC4704812E3FB9B9BC0C8CE431D1E418CF79F8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void PopupPanelScript::PanelScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopupPanelScript_PanelScale_m2834D11ADC7D0464AE53C795A90D3D831DA3A897 (PopupPanelScript_t5D3B719303C80F5988015D711361387D5CD04A0C * __this, const RuntimeMethod* method);
// System.Void PowerScript::SetPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerScript_SetPrice_mE65DF037B47CF510667B875E6B90A085CCD0C114 (PowerScript_t7DCB9760ECD1E057FABE9C641C6920A08308D344 * __this, const RuntimeMethod* method);
// System.Void ShopController::MakeInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_MakeInstance_m2A2A9F9D840D607F5B7A4DBCFEDE8FD3D4F6431E (ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * __this, const RuntimeMethod* method);
// System.Void ShopController::RandomItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_RandomItem_mAEDAF8BC27420311707DC3E77959F1EDF59883C3 (ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * __this, const RuntimeMethod* method);
// System.Void ShopController::DisplayItems(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_DisplayItems_m5204134197EFA3522E9F7861C9942ECB24416CB9 (ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * __this, int32_t ___position0, int32_t ___item1, const RuntimeMethod* method);
// System.Boolean ShopController::CheckSame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShopController_CheckSame_m52EC97AA9EFD08C3F7FC8E09AD3D1DBF6BA752EC (ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * __this, int32_t ___m0, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
// System.Void TextScoreScript::TextMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextScoreScript_TextMove_m9336CB238868BA5D928819B340F90162B3E66BAA (TextScoreScript_t83E71EF2C771F0C0936963F7F7B4E940F27FA9E5 * __this, const RuntimeMethod* method);
// System.Void GamePlayScript::ScoreZoomEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_ScoreZoomEffect_mB3E9426DBC2BEC92298CF1281C6FA42E1E220ED7 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method);
// System.Void GamePlayScript::SetScoreText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_SetScoreText_m697631F1256D03CCD5D865B5C7674D00E385A03E (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method);
// System.Void ThuyenScript::move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThuyenScript_move_mDCFD5089511A8909FEC850392F9D5F4533BEC91A (ThuyenScript_t454C091DB63BCCCBCA234189566AB5B0DF52652E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// System.Collections.IEnumerator VangScript::RunEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VangScript_RunEffect_m1F2900DA15CE76D92BFFEC8A3A4D3B0A2D175C9D (VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * __this, const RuntimeMethod* method);
// System.Void VangScript/<RunEffect>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunEffectU3Ed__8__ctor_mF4D48B46A17B8775949E350259AA5485C177A43B (U3CRunEffectU3Ed__8_tAD4129AD5FA4A9642D6970825422CBD58859C51B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void VangScript/<StopEffect>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopEffectU3Ed__9__ctor_m6F42D95A7A2D96F885E0939C25C067E2A8D4CC82 (U3CStopEffectU3Ed__9_tCE8C03F0B4712BB8CE9D2C4E717B50C674B65C55 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void VangScript::moveFllowTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VangScript_moveFllowTarget_mB2D654E2D8DBFDB0C7ABAE2F4ED6286319F8E7CA (VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void OngGiaScript::Angry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OngGiaScript_Angry_m014F2EFD9FED97D6E777F8A50069FAB23B02B33A (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator VangScript::StopEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VangScript_StopEffect_mAA528772DDF5574867531EF4F57366E98D7A98F0 (VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BombScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BombScript_Start_m837BDF2F01719906AA59E1FFC7791DBA3E86DE75 (BombScript_t1D3E47268FDBB34F3ABA23E91FA72B30C842405F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD4E79D5BF1664C1E246E08132AFC9D0DA294C60);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetPrice();
		BombScript_SetPrice_m6682186BC82937E6605593BFF54C8A0D4F3DE843(__this, /*hidden argument*/NULL);
		// bomb = PlayerPrefs.GetInt("Bomb");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralBD4E79D5BF1664C1E246E08132AFC9D0DA294C60, /*hidden argument*/NULL);
		__this->set_bomb_7(L_0);
		// }
		return;
	}
}
// System.Void BombScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BombScript_Update_m3255BE52A49ADE17C35892C2C0506D754D93E25F (BombScript_t1D3E47268FDBB34F3ABA23E91FA72B30C842405F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BombScript::SetPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BombScript_SetPrice_m6682186BC82937E6605593BFF54C8A0D4F3DE843 (BombScript_t1D3E47268FDBB34F3ABA23E91FA72B30C842405F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// price = Random.RandomRange(50, 300);
		int32_t L_0;
		L_0 = Random_RandomRange_mCB428074F55769762659348C65A7A87B88E522D6(((int32_t)50), ((int32_t)300), /*hidden argument*/NULL);
		__this->set_price_8(L_0);
		// textPrice.text = "$" + price;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_textPrice_6();
		int32_t* L_2 = __this->get_address_of_price_8();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void BombScript::PressButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BombScript_PressButton_mDC48A62F2D9CF68AD578D10D2D74C40FBAD91CFE (BombScript_t1D3E47268FDBB34F3ABA23E91FA72B30C842405F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD4E79D5BF1664C1E246E08132AFC9D0DA294C60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// bomb++;
		int32_t L_0 = __this->get_bomb_7();
		__this->set_bomb_7(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// PlayerPrefs.SetInt("Bomb", bomb);
		int32_t L_1 = __this->get_bomb_7();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralBD4E79D5BF1664C1E246E08132AFC9D0DA294C60, L_1, /*hidden argument*/NULL);
		// int dollar = PlayerPrefs.GetInt("MaxDollar");
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB, /*hidden argument*/NULL);
		V_0 = L_2;
		// PlayerPrefs.SetInt("MaxDollar", dollar - price);
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get_price_8();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB, ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4)), /*hidden argument*/NULL);
		// ShopController.instance.SetTextMoney();
		ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * L_5 = ((ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_StaticFields*)il2cpp_codegen_static_fields_for(ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_5);
		ShopController_SetTextMoney_m3B94366C8859B8A60E7E0DE07EBC3F0692306438(L_5, /*hidden argument*/NULL);
		// buttonNBuy.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_buttonNBuy_5();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
		// buttonBuy.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_buttonBuy_4();
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BombScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BombScript__ctor_m2A65AA9D6A32A3897038DDD5AC7798F26A9276F3 (BombScript_t1D3E47268FDBB34F3ABA23E91FA72B30C842405F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BookStoneScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BookStoneScript_Start_m6908A4A8E01F5D407DA85C3B4A7BEF3D6291B499 (BookStoneScript_tE84C49F94464E3F54BFFA45B1C83E4FB7381924A * __this, const RuntimeMethod* method)
{
	{
		// SetPrice();
		BookStoneScript_SetPrice_mB42765415B0B902C9246AC686DC8CFA3C1007838(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BookStoneScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BookStoneScript_Update_m4B396A3E90D56DDA537EB9E93063E86EB20BA70E (BookStoneScript_tE84C49F94464E3F54BFFA45B1C83E4FB7381924A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BookStoneScript::SetPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BookStoneScript_SetPrice_mB42765415B0B902C9246AC686DC8CFA3C1007838 (BookStoneScript_tE84C49F94464E3F54BFFA45B1C83E4FB7381924A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// price = Random.RandomRange(10, 70);
		int32_t L_0;
		L_0 = Random_RandomRange_mCB428074F55769762659348C65A7A87B88E522D6(((int32_t)10), ((int32_t)70), /*hidden argument*/NULL);
		__this->set_price_7(L_0);
		// textPrice.text = "$" + price;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_textPrice_6();
		int32_t* L_2 = __this->get_address_of_price_7();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void BookStoneScript::Buy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BookStoneScript_Buy_m16694820D79D8CADBCBC340ABD842FB6C3377C27 (BookStoneScript_tE84C49F94464E3F54BFFA45B1C83E4FB7381924A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// CGameManager.instance.bookStone = true;
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_0 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		L_0->set_bookStone_25((bool)1);
		// int dollar = PlayerPrefs.GetInt("MaxDollar");
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB, /*hidden argument*/NULL);
		V_0 = L_1;
		// PlayerPrefs.SetInt("MaxDollar", dollar - price);
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_price_7();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)), /*hidden argument*/NULL);
		// ShopController.instance.SetTextMoney();
		ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * L_4 = ((ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_StaticFields*)il2cpp_codegen_static_fields_for(ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_4);
		ShopController_SetTextMoney_m3B94366C8859B8A60E7E0DE07EBC3F0692306438(L_4, /*hidden argument*/NULL);
		// buttonNBuy.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_buttonNBuy_5();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// buttonBuy.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_buttonBuy_4();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BookStoneScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BookStoneScript__ctor_m4279413949745B3E971E8AD3F964EF1E0560F018 (BookStoneScript_tE84C49F94464E3F54BFFA45B1C83E4FB7381924A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BoomScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoomScript_Start_m05ACF1D80022EFCB4E5854C33B1FF8CB312C0D2F (BoomScript_tB417CD47BD905BD27ABF9123BE724A9A0876E656 * __this, const RuntimeMethod* method)
{
	{
		// position = transform.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_0, /*hidden argument*/NULL);
		__this->set_position_4(L_1);
		// scale = transform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_2, /*hidden argument*/NULL);
		__this->set_scale_5(L_3);
		// }
		return;
	}
}
// System.Void BoomScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoomScript_Update_mE7EE800748A6C306BBA219B0252FFB2B5E060934 (BoomScript_tB417CD47BD905BD27ABF9123BE724A9A0876E656 * __this, const RuntimeMethod* method)
{
	{
		// BoomMove();
		BoomScript_BoomMove_m067F4004B3A69DD60B3D0AFD85B29DC52DD41C8C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BoomScript::BoomMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoomScript_BoomMove_m067F4004B3A69DD60B3D0AFD85B29DC52DD41C8C (BoomScript_tB417CD47BD905BD27ABF9123BE724A9A0876E656 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// float x = position.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_position_4();
		float L_1 = L_0->get_x_2();
		V_0 = L_1;
		// float y = position.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = __this->get_address_of_position_4();
		float L_3 = L_2->get_y_3();
		V_1 = L_3;
		// float xScale = scale.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_scale_5();
		float L_5 = L_4->get_x_2();
		V_2 = L_5;
		// float yScale = scale.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of_scale_5();
		float L_7 = L_6->get_y_3();
		V_3 = L_7;
		// if (x < 212)
		float L_8 = V_0;
		if ((!(((float)L_8) < ((float)(212.0f)))))
		{
			goto IL_0056;
		}
	}
	{
		// x += x * UnityEngine.Time.deltaTime * 2;
		float L_9 = V_0;
		float L_10 = V_0;
		float L_11;
		L_11 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_add((float)L_9, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), (float)(2.0f)))));
		// position.x = x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = __this->get_address_of_position_4();
		float L_13 = V_0;
		L_12->set_x_2(L_13);
		// }
		goto IL_008a;
	}

IL_0056:
	{
		// xScale -= UnityEngine.Time.deltaTime * 4;
		float L_14 = V_2;
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_subtract((float)L_14, (float)((float)il2cpp_codegen_multiply((float)L_15, (float)(4.0f)))));
		// scale.x = xScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_16 = __this->get_address_of_scale_5();
		float L_17 = V_2;
		L_16->set_x_2(L_17);
		// yScale -= UnityEngine.Time.deltaTime * 4;
		float L_18 = V_3;
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_3 = ((float)il2cpp_codegen_subtract((float)L_18, (float)((float)il2cpp_codegen_multiply((float)L_19, (float)(4.0f)))));
		// scale.y = yScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_20 = __this->get_address_of_scale_5();
		float L_21 = V_3;
		L_20->set_y_3(L_21);
	}

IL_008a:
	{
		// if (y < 338)
		float L_22 = V_1;
		if ((!(((float)L_22) < ((float)(338.0f)))))
		{
			goto IL_00b0;
		}
	}
	{
		// y += y * UnityEngine.Time.deltaTime * 2;
		float L_23 = V_1;
		float L_24 = V_1;
		float L_25;
		L_25 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_add((float)L_23, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_24, (float)L_25)), (float)(2.0f)))));
		// position.y = y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_26 = __this->get_address_of_position_4();
		float L_27 = V_1;
		L_26->set_y_3(L_27);
		// }
		goto IL_00e4;
	}

IL_00b0:
	{
		// xScale += UnityEngine.Time.deltaTime * 2;
		float L_28 = V_2;
		float L_29;
		L_29 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_add((float)L_28, (float)((float)il2cpp_codegen_multiply((float)L_29, (float)(2.0f)))));
		// scale.x = xScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_30 = __this->get_address_of_scale_5();
		float L_31 = V_2;
		L_30->set_x_2(L_31);
		// yScale += UnityEngine.Time.deltaTime * 2;
		float L_32 = V_3;
		float L_33;
		L_33 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_3 = ((float)il2cpp_codegen_add((float)L_32, (float)((float)il2cpp_codegen_multiply((float)L_33, (float)(2.0f)))));
		// scale.y = yScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_34 = __this->get_address_of_scale_5();
		float L_35 = V_3;
		L_34->set_y_3(L_35);
	}

IL_00e4:
	{
		// transform.localScale = scale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = __this->get_scale_5();
		NullCheck(L_36);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_36, L_37, /*hidden argument*/NULL);
		// transform.localPosition = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = __this->get_position_4();
		NullCheck(L_38);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_38, L_39, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BoomScript::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoomScript_OnTriggerEnter2D_m7DCC18E7BD2112CAD1AC7F5101C17B524799741F (BoomScript_tB417CD47BD905BD27ABF9123BE724A9A0876E656 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral125D0A8A96A1A1BBF3FBA9D810500136CAFAC94E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD4E79D5BF1664C1E246E08132AFC9D0DA294C60);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.tag == "boomObject")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral125D0A8A96A1A1BBF3FBA9D810500136CAFAC94E, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005a;
		}
	}
	{
		// bomb = PlayerPrefs.GetInt("Bomb");
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralBD4E79D5BF1664C1E246E08132AFC9D0DA294C60, /*hidden argument*/NULL);
		__this->set_bomb_6(L_3);
		// bomb++;
		int32_t L_4 = __this->get_bomb_6();
		__this->set_bomb_6(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		// PlayerPrefs.SetInt("Bomb", bomb);
		int32_t L_5 = __this->get_bomb_6();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralBD4E79D5BF1664C1E246E08132AFC9D0DA294C60, L_5, /*hidden argument*/NULL);
		// GamePlayScript.instance.SetNumberBoom();
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_6 = ((GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_6);
		GamePlayScript_SetNumberBoom_m0E2D86DB6728DF99F9C7B59CAFD07B2600E7AEF4(L_6, /*hidden argument*/NULL);
		// Destroy(gameObject, 0.5f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_7, (0.5f), /*hidden argument*/NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void BoomScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoomScript__ctor_m6444CDF228B7730A8A3A28E40FFB1881D76BAEC6 (BoomScript_tB417CD47BD905BD27ABF9123BE724A9A0876E656 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ButtonTouchScript::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonTouchScript_OnPointerDown_mBDDBF9FE8DADBC9200D6E023E1E7F6124F1C42CE (ButtonTouchScript_tE9F34CD0FF590DD2D73C241734664C99DB5B3C1B * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA4FBC49BDBBF4E11198EDA96F7B7ACF7F2A85F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.name == "Boom")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral0EA4FBC49BDBBF4E11198EDA96F7B7ACF7F2A85F, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// if(GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction == TypeAction.KeoCau)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_3);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_4;
		L_4 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_3, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_4);
		int32_t L_5 = L_4->get_typeAction_9();
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004d;
		}
	}
	{
		// GamePlayScript.instance.Boom();
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_6 = ((GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_6);
		GamePlayScript_Boom_mF45D3BD0090BAB87001AF1E2197623413FEBAF5B(L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0039:
	{
		// GameObject.Find("luoiCau").GetComponent<LuoiCauScript>().checkTouchScene();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604, /*hidden argument*/NULL);
		NullCheck(L_7);
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_8;
		L_8 = GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290(L_7, /*hidden argument*/GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290_RuntimeMethod_var);
		NullCheck(L_8);
		LuoiCauScript_checkTouchScene_m6CCB10F940659DA4DAC88DFE18A515A8A3D813BF(L_8, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void ButtonTouchScript::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonTouchScript_OnPointerUp_m1D7913D29512A77B40AD1E26AA67E6C21FC26158 (ButtonTouchScript_tE9F34CD0FF590DD2D73C241734664C99DB5B3C1B * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ButtonTouchScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonTouchScript_Start_m6F5FAD288C68BBBC346A5524955474505B3BC6B4 (ButtonTouchScript_tE9F34CD0FF590DD2D73C241734664C99DB5B3C1B * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ButtonTouchScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonTouchScript_Update_m9A9A2FCD7639C7136EB36F6EF431FD5AC462A47D (ButtonTouchScript_tE9F34CD0FF590DD2D73C241734664C99DB5B3C1B * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ButtonTouchScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonTouchScript__ctor_mAFECA6EE1075A33A3A0A848097BEDA83322A05A3 (ButtonTouchScript_tE9F34CD0FF590DD2D73C241734664C99DB5B3C1B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CGameManager::add_OnStateChange(OnStateChangeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_add_OnStateChange_mEC8AA042FE9BF350551E23E6DDA528D0D9DE575C (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * V_0 = NULL;
	OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * V_1 = NULL;
	OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * V_2 = NULL;
	{
		OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * L_0 = __this->get_OnStateChange_16();
		V_0 = L_0;
	}

IL_0007:
	{
		OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * L_1 = V_0;
		V_1 = L_1;
		OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * L_2 = V_1;
		OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E *)CastclassSealed((RuntimeObject*)L_4, OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E_il2cpp_TypeInfo_var));
		OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E ** L_5 = __this->get_address_of_OnStateChange_16();
		OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * L_6 = V_2;
		OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * L_7 = V_1;
		OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E *>((OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E **)L_5, L_6, L_7);
		V_0 = L_8;
		OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * L_9 = V_0;
		OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E *)L_9) == ((RuntimeObject*)(OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void CGameManager::remove_OnStateChange(OnStateChangeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_remove_OnStateChange_mF6AD3AF8851CC6E5E460D164698A933CF45E800B (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * V_0 = NULL;
	OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * V_1 = NULL;
	OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * V_2 = NULL;
	{
		OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * L_0 = __this->get_OnStateChange_16();
		V_0 = L_0;
	}

IL_0007:
	{
		OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * L_1 = V_0;
		V_1 = L_1;
		OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * L_2 = V_1;
		OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E *)CastclassSealed((RuntimeObject*)L_4, OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E_il2cpp_TypeInfo_var));
		OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E ** L_5 = __this->get_address_of_OnStateChange_16();
		OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * L_6 = V_2;
		OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * L_7 = V_1;
		OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E *>((OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E **)L_5, L_6, L_7);
		V_0 = L_8;
		OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * L_9 = V_0;
		OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E *)L_9) == ((RuntimeObject*)(OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// EnumStateGame CGameManager::get_gameState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CGameManager_get_gameState_m56D2FCE60816DAA508FEFC50AC893C381A26BB02 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, const RuntimeMethod* method)
{
	{
		// public EnumStateGame gameState { get; private set; }
		int32_t L_0 = __this->get_U3CgameStateU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void CGameManager::set_gameState(EnumStateGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_set_gameState_mB0EADC9FD8FB2106DF97AE6CFAFB640B7F3CEC87 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public EnumStateGame gameState { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CgameStateU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Int32 CGameManager::get_score()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CGameManager_get_score_mED69003F10A4A435144EAB7AEEE41A89E7B60234 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, const RuntimeMethod* method)
{
	{
		// public int score { get; private set; }
		int32_t L_0 = __this->get_U3CscoreU3Ek__BackingField_18();
		return L_0;
	}
}
// System.Void CGameManager::set_score(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_set_score_m6AE28D0C89A4EE62C7C90F9FDEF5B553AA593361 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int score { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CscoreU3Ek__BackingField_18(L_0);
		return;
	}
}
// System.Int32 CGameManager::get_level()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CGameManager_get_level_m00BC04A5728FF05FBAA99C9A82353F422F985426 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, const RuntimeMethod* method)
{
	{
		// public int level { get; private set; }
		int32_t L_0 = __this->get_U3ClevelU3Ek__BackingField_19();
		return L_0;
	}
}
// System.Void CGameManager::set_level(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_set_level_m5DDA3C580653619869B08CBF205303BE213B2FDD (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int level { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3ClevelU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.Int32 CGameManager::get_maxScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CGameManager_get_maxScore_mF62E027721E4048EAD88DF96CCF56FBF4C3ACC14 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, const RuntimeMethod* method)
{
	{
		// public int maxScore { get; private set; }
		int32_t L_0 = __this->get_U3CmaxScoreU3Ek__BackingField_20();
		return L_0;
	}
}
// System.Void CGameManager::set_maxScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_set_maxScore_m2A71327A23D7CB68E975850417F3209C2F1DE97D (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int maxScore { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CmaxScoreU3Ek__BackingField_20(L_0);
		return;
	}
}
// System.Int32 CGameManager::get_timePlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CGameManager_get_timePlay_mBD3712E57B59EB00BBB27F1F3B37FB87A4E095EB (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, const RuntimeMethod* method)
{
	{
		// public int timePlay { get; private set; }
		int32_t L_0 = __this->get_U3CtimePlayU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void CGameManager::set_timePlay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_set_timePlay_mEF7321ECA6FD78BB7B9DB69B9F8CBE679106E443 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int timePlay { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CtimePlayU3Ek__BackingField_21(L_0);
		return;
	}
}
// System.Int32 CGameManager::get_typeLuoiCau()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CGameManager_get_typeLuoiCau_m411E384C28E20DC4E42B5AFE7122683247FA60EA (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, const RuntimeMethod* method)
{
	{
		// public int typeLuoiCau { get; private set; }
		int32_t L_0 = __this->get_U3CtypeLuoiCauU3Ek__BackingField_22();
		return L_0;
	}
}
// System.Void CGameManager::set_typeLuoiCau(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_set_typeLuoiCau_m4ECF536B67C785F4874C15C3B833EC113986A66F (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int typeLuoiCau { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CtypeLuoiCauU3Ek__BackingField_22(L_0);
		return;
	}
}
// System.Void CGameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_Awake_m5EF3EF6B7D8B24141E280B162575BD4C30B2910A (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// DisableItems();
		CGameManager_DisableItems_mD26CF3DA64E7EC30274422B1EF9E5A5B9A7BAE25(__this, /*hidden argument*/NULL);
		// IsGameStartedForTheFirstTime();
		CGameManager_IsGameStartedForTheFirstTime_m9A1B6A624E6EED6A5E7A8E47D5EEE9516997B237(__this, /*hidden argument*/NULL);
		// MakeSingleInstance();
		CGameManager_MakeSingleInstance_mDA520A03D193FED60C91DE39DD4F39595FC753AD(__this, /*hidden argument*/NULL);
		// music = GetMusic();
		int32_t L_0;
		L_0 = CGameManager_GetMusic_mAD01CEC6CE0FF00D7A78885A634C0FA9849E36E3(__this, /*hidden argument*/NULL);
		__this->set_music_5(L_0);
		// sound = GetSound();
		int32_t L_1;
		L_1 = CGameManager_GetSound_m2B5F22C9D18FF4623065F61030A625E49ADB69AA(__this, /*hidden argument*/NULL);
		__this->set_sound_6(L_1);
		// int maxLevel = GetMaxLevel();
		int32_t L_2;
		L_2 = CGameManager_GetMaxLevel_m7E3ABF9B3A495BB154964BC1898393005EAF70C0(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		// if(maxLevel == 0)
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		// levelCurrent = 1;
		__this->set_levelCurrent_23(1);
		// }
		return;
	}

IL_003c:
	{
		// levelCurrent = maxLevel;
		int32_t L_4 = V_0;
		__this->set_levelCurrent_23(L_4);
		// }
		return;
	}
}
// System.Void CGameManager::MakeSingleInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_MakeSingleInstance_mDA520A03D193FED60C91DE39DD4F39595FC753AD (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_0 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0019:
	{
		// instance = this;
		((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 CGameManager::GetScoreTarget(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CGameManager_GetScoreTarget_m5080D5BD98092F75E85EFB51D4178C22ECED2ED5 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___level0, const RuntimeMethod* method)
{
	{
		// if (level == 1)
		int32_t L_0 = ___level0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000a;
		}
	}
	{
		// return 800;
		return ((int32_t)800);
	}

IL_000a:
	{
		// else if (level == 2)
		int32_t L_1 = ___level0;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0014;
		}
	}
	{
		// return 2050;
		return ((int32_t)2050);
	}

IL_0014:
	{
		// return 800 + (level - 1) * 1250 + (level - 2) * 500;
		int32_t L_2 = ___level0;
		int32_t L_3 = ___level0;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)800), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)), (int32_t)((int32_t)1250))))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)2)), (int32_t)((int32_t)500)))));
	}
}
// System.Void CGameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_Update_m63C2C607E8195C187EC97C384C436BFFAE2F0E8D (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CGameManager::DisableItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_DisableItems_mD26CF3DA64E7EC30274422B1EF9E5A5B9A7BAE25 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, const RuntimeMethod* method)
{
	{
		// power = false;
		__this->set_power_24((bool)0);
		// bookStone = false;
		__this->set_bookStone_25((bool)0);
		// clover = false;
		__this->set_clover_26((bool)0);
		// diamond = false;
		__this->set_diamond_27((bool)0);
		// clock = false;
		__this->set_clock_28((bool)0);
		// powerCurrent = false;
		__this->set_powerCurrent_29((bool)0);
		// }
		return;
	}
}
// System.Void CGameManager::SetGameState(EnumStateGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_SetGameState_m82A8D3725DFE9773F568E94CCE5B08CCED46D397 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___gameState0, const RuntimeMethod* method)
{
	{
		// this.gameState = gameState;
		int32_t L_0 = ___gameState0;
		CGameManager_set_gameState_mB0EADC9FD8FB2106DF97AE6CFAFB640B7F3CEC87_inline(__this, L_0, /*hidden argument*/NULL);
		// if(OnStateChange!=null) {
		OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * L_1 = __this->get_OnStateChange_16();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// OnStateChange();
		OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * L_2 = __this->get_OnStateChange_16();
		NullCheck(L_2);
		OnStateChangeHandler_Invoke_m7FD411FB6C04F05E2B5012F726A18F4A1171428D(L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void CGameManager::SetScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_SetScore_m38A5F04282AC52D5BA6BCA4BFB270E43F7A20FB2 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___newScore0, const RuntimeMethod* method)
{
	{
		// this.score = newScore;
		int32_t L_0 = ___newScore0;
		CGameManager_set_score_m6AE28D0C89A4EE62C7C90F9FDEF5B553AA593361_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CGameManager::SetTimePlay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_SetTimePlay_m8AC80597AEA1FA3F0CF7F8E0BEC7E301DD7BECE4 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___newTime0, const RuntimeMethod* method)
{
	{
		// this.timePlay = newTime;
		int32_t L_0 = ___newTime0;
		CGameManager_set_timePlay_mEF7321ECA6FD78BB7B9DB69B9F8CBE679106E443_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CGameManager::SetTypeLuoiCau(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_SetTypeLuoiCau_mCA7316B6BA2A34D94943EE46AD2DC07D7CBA892B (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___type0, const RuntimeMethod* method)
{
	{
		// this.typeLuoiCau = type;
		int32_t L_0 = ___type0;
		CGameManager_set_typeLuoiCau_m4ECF536B67C785F4874C15C3B833EC113986A66F_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CGameManager::IsGameStartedForTheFirstTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_IsGameStartedForTheFirstTime_m9A1B6A624E6EED6A5E7A8E47D5EEE9516997B237 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FE49F3BEB56785574137C52FD9023D38DE8B35C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74AA77852D505FA9B916F6C64BC0B0E44A1550B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD4E79D5BF1664C1E246E08132AFC9D0DA294C60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!PlayerPrefs.HasKey("IsGameStartedForTheFirstTime"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral7FE49F3BEB56785574137C52FD9023D38DE8B35C, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_004e;
		}
	}
	{
		// PlayerPrefs.SetInt("Bomb", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralBD4E79D5BF1664C1E246E08132AFC9D0DA294C60, 0, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("MaxLevel", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralA74AA77852D505FA9B916F6C64BC0B0E44A1550B, 0, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("MaxDollar", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB, 0, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt(MUSIC, 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, 1, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt(SOUND, 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, 1, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("IsGameStartedForTheFirstTime", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral7FE49F3BEB56785574137C52FD9023D38DE8B35C, 0, /*hidden argument*/NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void CGameManager::SetMaxLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_SetMaxLevel_m7A8B06C35DE24AAC54B41D898E25E524855081E5 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___maxLevel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74AA77852D505FA9B916F6C64BC0B0E44A1550B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("MaxLevel", maxLevel);
		int32_t L_0 = ___maxLevel0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralA74AA77852D505FA9B916F6C64BC0B0E44A1550B, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 CGameManager::GetMaxLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CGameManager_GetMaxLevel_m7E3ABF9B3A495BB154964BC1898393005EAF70C0 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74AA77852D505FA9B916F6C64BC0B0E44A1550B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetInt("MaxLevel");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralA74AA77852D505FA9B916F6C64BC0B0E44A1550B, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void CGameManager::SetMaxScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_SetMaxScore_m8CED617EB9460EC2187BBA7C5F5D5375370C3DDE (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___maxScore0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("MaxDollar", maxScore);
		int32_t L_0 = ___maxScore0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 CGameManager::GetMaxScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CGameManager_GetMaxScore_m3F39A9DDD0E76471AAA4AEE8001DC5273F1F953E (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetInt("MaxDollar");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void CGameManager::SetMusic(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_SetMusic_m9B1FB91F693EDD6B168F450B12CACAAB361DC1C1 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___music0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt(MUSIC, music);
		int32_t L_0 = ___music0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 CGameManager::GetMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CGameManager_GetMusic_mAD01CEC6CE0FF00D7A78885A634C0FA9849E36E3 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetInt(MUSIC);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void CGameManager::SetSound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager_SetSound_mA45A67D929238D11336F6264E389253D9C208565 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___sound0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt(SOUND, sound);
		int32_t L_0 = ___sound0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 CGameManager::GetSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CGameManager_GetSound_m2B5F22C9D18FF4623065F61030A625E49ADB69AA (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetInt(SOUND);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void CGameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGameManager__ctor_m4121C352B20DA3D208E43A91828CBEA1718D4475 (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4ABC2BD3D62C498CCEF3CEF6B391EC720A5FEC3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral926184E059998AC6B0C37D1AA3CB36A3EDA46A2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4ED4E6C12DDEFDB02BF0E4AFBD61A184207265D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int music = 1, sound = 1;
		__this->set_music_5(1);
		// public int music = 1, sound = 1;
		__this->set_sound_6(1);
		// public string keyLevelNow = "levelNow";
		__this->set_keyLevelNow_13(_stringLiteralD4ED4E6C12DDEFDB02BF0E4AFBD61A184207265D);
		// public string keyLevelMax = "levelMax";
		__this->set_keyLevelMax_14(_stringLiteral4ABC2BD3D62C498CCEF3CEF6B391EC720A5FEC3E);
		// public string keyNumberLevel = "numberLevel";
		__this->set_keyNumberLevel_15(_stringLiteral926184E059998AC6B0C37D1AA3CB36A3EDA46A2B);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ChuotScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChuotScript_Start_m2F1131F02BB1FD1862405873C8B45712854923E7 (ChuotScript_tE1CBBDBD3DA910BA8146FBCADC092DA7078AF5F8 * __this, const RuntimeMethod* method)
{
	{
		// isMoveFollow = false;
		__this->set_isMoveFollow_7((bool)0);
		// }
		return;
	}
}
// System.Void ChuotScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChuotScript_Update_m5374F1AF8440C44D0D835D72EC2853AC05631E5C (ChuotScript_tE1CBBDBD3DA910BA8146FBCADC092DA7078AF5F8 * __this, const RuntimeMethod* method)
{
	{
		// ChuotChay();
		ChuotScript_ChuotChay_m4DE467E7DB93E65A6C1B1F01FF593A3F6EE244A9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChuotScript::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChuotScript_FixedUpdate_m6CBD022F832856BC04486043C6C9330F622BFF12 (ChuotScript_tE1CBBDBD3DA910BA8146FBCADC092DA7078AF5F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604);
		s_Il2CppMethodInitialized = true;
	}
	{
		// moveFllowTarget(GameObject.Find("luoiCau").transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		ChuotScript_moveFllowTarget_m1FCF4A53EA5B706C85FDA3D911F4931C0CDD17D0(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChuotScript::ChuotChay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChuotScript_ChuotChay_m4DE467E7DB93E65A6C1B1F01FF593A3F6EE244A9 (ChuotScript_tE1CBBDBD3DA910BA8146FBCADC092DA7078AF5F8 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 temp = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// temp.x += quayDau * speedRun * UnityEngine.Time.deltaTime;
		float* L_2 = (&V_0)->get_address_of_x_2();
		float* L_3 = L_2;
		float L_4 = *((float*)L_3);
		int32_t L_5 = __this->get_quayDau_5();
		float L_6 = __this->get_speedRun_4();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		*((float*)L_3) = (float)((float)il2cpp_codegen_add((float)L_4, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_5)), (float)L_6)), (float)L_7))));
		// transform.position = temp;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		NullCheck(L_8);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_9, /*hidden argument*/NULL);
		// Vector3 scale = transform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// scale.x = quayLai;
		int32_t L_12 = __this->get_quayLai_6();
		(&V_1)->set_x_2(((float)((float)L_12)));
		// transform.localScale = scale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_1;
		NullCheck(L_13);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_13, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChuotScript::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChuotScript_OnTriggerEnter2D_mE48980FD298FBAA3EDE8C3C61ADA617CD3007EC8 (ChuotScript_tE1CBBDBD3DA910BA8146FBCADC092DA7078AF5F8 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DDBD79525333BACF62E3D8159878CA4D371BA7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82F11F27C6914EF909CFE52A0002EB75FEB9EDF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name == "QuayTrai")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral4DDBD79525333BACF62E3D8159878CA4D371BA7F, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// quayDau = -1;
		__this->set_quayDau_5((-1));
		// quayLai = 1;
		__this->set_quayLai_6(1);
		// }
		return;
	}

IL_0026:
	{
		// else if (collision.gameObject.name == "QuayPhai")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___collision0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteral82F11F27C6914EF909CFE52A0002EB75FEB9EDF1, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		// quayDau = 1;
		__this->set_quayDau_5(1);
		// quayLai = -1;
		__this->set_quayLai_6((-1));
		// }
		return;
	}

IL_004c:
	{
		// else if(collision.gameObject.name == "luoiCau" &&
		//     GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction != TypeAction.KeoCau)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8 = ___collision0;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, _stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_010a;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_12);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_13;
		L_13 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_12, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_13);
		int32_t L_14 = L_13->get_typeAction_9();
		if ((((int32_t)L_14) == ((int32_t)2)))
		{
			goto IL_010a;
		}
	}
	{
		// LuoiCauScript.instance.cameraOut = false;
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_15 = ((LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_StaticFields*)il2cpp_codegen_static_fields_for(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_15);
		L_15->set_cameraOut_22((bool)0);
		// isMoveFollow = true;
		__this->set_isMoveFollow_7((bool)1);
		// GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction = TypeAction.KeoCau;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_16);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_17;
		L_17 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_16, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_17);
		L_17->set_typeAction_9(2);
		// GameObject.Find("luoiCau").GetComponent<LuoiCauScript>().velocity = -GameObject.Find("luoiCau").GetComponent<LuoiCauScript>().velocity;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604, /*hidden argument*/NULL);
		NullCheck(L_18);
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_19;
		L_19 = GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290(L_18, /*hidden argument*/GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604, /*hidden argument*/NULL);
		NullCheck(L_20);
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_21;
		L_21 = GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290(L_20, /*hidden argument*/GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290_RuntimeMethod_var);
		NullCheck(L_21);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = L_21->get_velocity_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline(L_22, /*hidden argument*/NULL);
		NullCheck(L_19);
		L_19->set_velocity_8(L_23);
		// GameObject.Find("luoiCau").GetComponent<LuoiCauScript>().speed -= this.speed;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604, /*hidden argument*/NULL);
		NullCheck(L_24);
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_25;
		L_25 = GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290(L_24, /*hidden argument*/GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290_RuntimeMethod_var);
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_26 = L_25;
		NullCheck(L_26);
		float L_27 = L_26->get_speed_5();
		float L_28 = __this->get_speed_10();
		NullCheck(L_26);
		L_26->set_speed_5(((float)il2cpp_codegen_subtract((float)L_27, (float)L_28)));
		// GamePlayScript.instance.itemSeclected = gameObject.name;
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_29 = ((GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		String_t* L_31;
		L_31 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		L_29->set_itemSeclected_36(L_31);
	}

IL_010a:
	{
		// }
		return;
	}
}
// System.Void ChuotScript::moveFllowTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChuotScript_moveFllowTarget_m1FCF4A53EA5B706C85FDA3D911F4931C0CDD17D0 (ChuotScript_tE1CBBDBD3DA910BA8146FBCADC092DA7078AF5F8 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (isMoveFollow)
		bool L_0 = __this->get_isMoveFollow_7();
		if (!L_0)
		{
			goto IL_0111;
		}
	}
	{
		// Quaternion tg = Quaternion.Euler(target.parent.transform.rotation.x,
		//                                  target.parent.transform.rotation.y,
		//                                  90 + target.parent.transform.rotation.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___target0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = ___target0;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = ___target0;
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_z_2();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_5, L_10, ((float)il2cpp_codegen_add((float)(90.0f), (float)L_15)), /*hidden argument*/NULL);
		// transform.position = new Vector3(target.position.x,
		//                                  target.position.y - gameObject.GetComponent<Collider2D>().GetComponent<Collider2D>().bounds.size.y / 2,
		//                                  transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = ___target0;
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = ___target0;
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_25;
		L_25 = GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E(L_24, /*hidden argument*/GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E_RuntimeMethod_var);
		NullCheck(L_25);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_26;
		L_26 = Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30(L_25, /*hidden argument*/Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		NullCheck(L_26);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_27;
		L_27 = Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8(L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_0), /*hidden argument*/NULL);
		float L_29 = L_28.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_33), L_20, ((float)il2cpp_codegen_subtract((float)L_23, (float)((float)((float)L_29/(float)(2.0f))))), L_32, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_17, L_33, /*hidden argument*/NULL);
		// if (GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction == TypeAction.Nghi)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_34);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_35;
		L_35 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_34, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_35);
		int32_t L_36 = L_35->get_typeAction_9();
		if (L_36)
		{
			goto IL_0111;
		}
	}
	{
		// GameObject.Find("GamePlay").GetComponent<GamePlayScript>().score += this.score;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207, /*hidden argument*/NULL);
		NullCheck(L_37);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_38;
		L_38 = GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28(L_37, /*hidden argument*/GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28_RuntimeMethod_var);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_39 = L_38;
		NullCheck(L_39);
		int32_t L_40 = L_39->get_score_12();
		int32_t L_41 = __this->get_score_9();
		NullCheck(L_39);
		L_39->set_score_12(((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)L_41)));
		// GameObject.Find("GamePlay").GetComponent<GamePlayScript>().CreateScoreFly(this.score);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42;
		L_42 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207, /*hidden argument*/NULL);
		NullCheck(L_42);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_43;
		L_43 = GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28(L_42, /*hidden argument*/GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28_RuntimeMethod_var);
		int32_t L_44 = __this->get_score_9();
		NullCheck(L_43);
		GamePlayScript_CreateScoreFly_m996C8518B2A4BF73807C8F216BC63C3F01B246D4(L_43, L_44, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_45, /*hidden argument*/NULL);
	}

IL_0111:
	{
		// }
		return;
	}
}
// System.Void ChuotScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChuotScript__ctor_m868990FE3C493E850B3203D469A69C53A0CF62F6 (ChuotScript_tE1CBBDBD3DA910BA8146FBCADC092DA7078AF5F8 * __this, const RuntimeMethod* method)
{
	{
		// private float speedRun = 2f;
		__this->set_speedRun_4((2.0f));
		// private int quayDau = -1;
		__this->set_quayDau_5((-1));
		// private int quayLai = 1;
		__this->set_quayLai_6(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ClockScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClockScript_Start_mA4CC09221D09A3E6EB43C44BC49FBFCDDFDF8CA9 (ClockScript_t8583D23AC14B917692BC34069799881AE86E9D0E * __this, const RuntimeMethod* method)
{
	{
		// SetPrice();
		ClockScript_SetPrice_m339766730987970B5E82E9F9D89D36104B5E5E65(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ClockScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClockScript_Update_mA5F28FBE51B239302262FD0D1ABE15C8CF96ED6F (ClockScript_t8583D23AC14B917692BC34069799881AE86E9D0E * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ClockScript::SetPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClockScript_SetPrice_m339766730987970B5E82E9F9D89D36104B5E5E65 (ClockScript_t8583D23AC14B917692BC34069799881AE86E9D0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// price = Random.RandomRange(10, 70);
		int32_t L_0;
		L_0 = Random_RandomRange_mCB428074F55769762659348C65A7A87B88E522D6(((int32_t)10), ((int32_t)70), /*hidden argument*/NULL);
		__this->set_price_7(L_0);
		// textPrice.text = "$" + price;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_textPrice_4();
		int32_t* L_2 = __this->get_address_of_price_7();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void ClockScript::Buy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClockScript_Buy_m2383A4D31F688424663760627819C868875024A3 (ClockScript_t8583D23AC14B917692BC34069799881AE86E9D0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int dollar = PlayerPrefs.GetInt("MaxDollar");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB, /*hidden argument*/NULL);
		V_0 = L_0;
		// PlayerPrefs.SetInt("MaxDollar", dollar - price);
		int32_t L_1 = V_0;
		int32_t L_2 = __this->get_price_7();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB, ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)), /*hidden argument*/NULL);
		// ShopController.instance.SetTextMoney();
		ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * L_3 = ((ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_StaticFields*)il2cpp_codegen_static_fields_for(ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_3);
		ShopController_SetTextMoney_m3B94366C8859B8A60E7E0DE07EBC3F0692306438(L_3, /*hidden argument*/NULL);
		// CGameManager.instance.clock = true;
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_4 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_4);
		L_4->set_clock_28((bool)1);
		// buttonNBuy.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_buttonNBuy_6();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// buttonBuy.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_buttonBuy_5();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ClockScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClockScript__ctor_mF17620F71A00F88CBBF752C8AFEDCC46088958AD (ClockScript_t8583D23AC14B917692BC34069799881AE86E9D0E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CloverScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloverScript_Start_m0F5BDEAB7E0837848D0AC7F948EB420C3D823625 (CloverScript_t39B8076C4C4103D961144A23CDFC5F2E11B633DD * __this, const RuntimeMethod* method)
{
	{
		// SetPrice();
		CloverScript_SetPrice_m4F8C6AEF072FA16E252C31D6BF35D0E09B1B637E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CloverScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloverScript_Update_m639132A25B17E59A6C45ABFC46FB7739738BD61C (CloverScript_t39B8076C4C4103D961144A23CDFC5F2E11B633DD * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CloverScript::SetPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloverScript_SetPrice_m4F8C6AEF072FA16E252C31D6BF35D0E09B1B637E (CloverScript_t39B8076C4C4103D961144A23CDFC5F2E11B633DD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// price = Random.RandomRange(10, 70);
		int32_t L_0;
		L_0 = Random_RandomRange_mCB428074F55769762659348C65A7A87B88E522D6(((int32_t)10), ((int32_t)70), /*hidden argument*/NULL);
		__this->set_price_7(L_0);
		// textPrice.text = "$" + price;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_textPrice_6();
		int32_t* L_2 = __this->get_address_of_price_7();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void CloverScript::Buy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloverScript_Buy_mCDDA63BBBFCF831C076547CCAB79D751056D5734 (CloverScript_t39B8076C4C4103D961144A23CDFC5F2E11B633DD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int dollar = PlayerPrefs.GetInt("MaxDollar");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB, /*hidden argument*/NULL);
		V_0 = L_0;
		// PlayerPrefs.SetInt("MaxDollar", dollar - price);
		int32_t L_1 = V_0;
		int32_t L_2 = __this->get_price_7();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB, ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)), /*hidden argument*/NULL);
		// ShopController.instance.SetTextMoney();
		ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * L_3 = ((ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_StaticFields*)il2cpp_codegen_static_fields_for(ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_3);
		ShopController_SetTextMoney_m3B94366C8859B8A60E7E0DE07EBC3F0692306438(L_3, /*hidden argument*/NULL);
		// CGameManager.instance.clover = true;
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_4 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_4);
		L_4->set_clover_26((bool)1);
		// buttonNBuy.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_buttonNBuy_5();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// buttonBuy.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_buttonBuy_4();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CloverScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloverScript__ctor_mDFAB48D5D012FA6B423E2A5C72FF6D31FE7F1B9D (CloverScript_t39B8076C4C4103D961144A23CDFC5F2E11B633DD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DayCauScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DayCauScript_Start_m22CBD2D95ED5A96D793887FB87CF7A12D478BCD4 (DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MakeInstance();
		DayCauScript_MakeInstance_m022EC78CC8BCF0C75FFE45BFF78B2EC1D254670F(__this, /*hidden argument*/NULL);
		// luoiCau = GameObject.Find("luoiCau").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		__this->set_luoiCau_5(L_1);
		// initAngles = new Vector3(transform.eulerAngles.x, transform.eulerAngles.y, transform.eulerAngles.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_11), L_4, L_7, L_10, /*hidden argument*/NULL);
		__this->set_initAngles_10(L_11);
		// }
		return;
	}
}
// System.Void DayCauScript::MakeInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DayCauScript_MakeInstance_m022EC78CC8BCF0C75FFE45BFF78B2EC1D254670F (DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_0 = ((DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_StaticFields*)il2cpp_codegen_static_fields_for(DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = this;
		((DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_StaticFields*)il2cpp_codegen_static_fields_for(DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_il2cpp_TypeInfo_var))->set_instance_4(__this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void DayCauScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DayCauScript_Update_m407173E51F84FE5DEE5BEE11B71543E9C58EC06E (DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<LineRenderer>().SetPosition(0, transform.position);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_1;
		L_1 = GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB(L_0, /*hidden argument*/GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_1, 0, L_3, /*hidden argument*/NULL);
		// gameObject.GetComponent<LineRenderer>().SetPosition(1, luoiCau.position);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_5;
		L_5 = GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB(L_4, /*hidden argument*/GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_luoiCau_5();
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_5, 1, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DayCauScript::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DayCauScript_FixedUpdate_mDCCCE5FDA911049B9AD7A3112BE8651765B3F51D (DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * __this, const RuntimeMethod* method)
{
	{
		// if(speed > 0 && typeAction == TypeAction.Nghi)
		float L_0 = __this->get_speed_7();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_1 = __this->get_typeAction_9();
		if (L_1)
		{
			goto IL_0047;
		}
	}
	{
		// transform.rotation = Quaternion.Euler(0, 0, Mathf.Sin(Time.time * speed) * angleMax);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_3;
		L_3 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_4 = __this->get_speed_7();
		float L_5;
		L_5 = sinf(((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)));
		float L_6 = __this->get_angleMax_8();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_2, L_7, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// rotationDay = transform.rotation.z;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_z_2();
		__this->set_rotationDay_11(L_10);
		// }
		return;
	}
}
// System.Void DayCauScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DayCauScript__ctor_m637F93614430C84B28DF8E8225B7724640D146F0 (DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * __this, const RuntimeMethod* method)
{
	{
		// private float speed = 3;
		__this->set_speed_7((3.0f));
		// public float angleMax = 70;
		__this->set_angleMax_8((70.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DiamondScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiamondScript_Start_m351B29ADA1B8F5CB46B7467C7A0CCE1F9FA802EB (DiamondScript_tA705755084679C900443B9E79A16B6FA16756150 * __this, const RuntimeMethod* method)
{
	{
		// SetPrice();
		DiamondScript_SetPrice_mB38AF850901704C857DDEC776DE725E020260091(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DiamondScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiamondScript_Update_mAD331FECBE3515AB1CFAAC4E9BD86C975F2D22F9 (DiamondScript_tA705755084679C900443B9E79A16B6FA16756150 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DiamondScript::SetPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiamondScript_SetPrice_mB38AF850901704C857DDEC776DE725E020260091 (DiamondScript_tA705755084679C900443B9E79A16B6FA16756150 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// price = Random.RandomRange(10, 70);
		int32_t L_0;
		L_0 = Random_RandomRange_mCB428074F55769762659348C65A7A87B88E522D6(((int32_t)10), ((int32_t)70), /*hidden argument*/NULL);
		__this->set_price_7(L_0);
		// textPrice.text = "$" + price;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_textPrice_6();
		int32_t* L_2 = __this->get_address_of_price_7();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void DiamondScript::Buy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiamondScript_Buy_m4C75F1B7C8610372B0AE6491EA818EBC4028FAF6 (DiamondScript_tA705755084679C900443B9E79A16B6FA16756150 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int dollar = PlayerPrefs.GetInt("MaxDollar");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB, /*hidden argument*/NULL);
		V_0 = L_0;
		// PlayerPrefs.SetInt("MaxDollar", dollar - price);
		int32_t L_1 = V_0;
		int32_t L_2 = __this->get_price_7();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB, ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)), /*hidden argument*/NULL);
		// ShopController.instance.SetTextMoney();
		ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * L_3 = ((ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_StaticFields*)il2cpp_codegen_static_fields_for(ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_3);
		ShopController_SetTextMoney_m3B94366C8859B8A60E7E0DE07EBC3F0692306438(L_3, /*hidden argument*/NULL);
		// CGameManager.instance.diamond = true;
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_4 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_4);
		L_4->set_diamond_27((bool)1);
		// buttonNBuy.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_buttonNBuy_5();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// buttonBuy.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_buttonBuy_4();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DiamondScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiamondScript__ctor_mC00ECAB2DC6D59C78EDF9D6F8C5EA1ADFBFE8C90 (DiamondScript_tA705755084679C900443B9E79A16B6FA16756150 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FireObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireObject_Start_m7E0F44F95B135888A41D61903A39B5DA89F7F0CA (FireObject_t087811D4DEB966C1AE112DC143B132300AB6F620 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void FireObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireObject_Update_m62ACC372094F43113E380664ECBEB155FF2D6CEB (FireObject_t087811D4DEB966C1AE112DC143B132300AB6F620 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject, 0.7f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_0, (0.699999988f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FireObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireObject__ctor_mECA4E7C00F0C79BB6782235032AFDF612E98E5C4 (FireObject_t087811D4DEB966C1AE112DC143B132300AB6F620 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GamePlayScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_Start_m9DE8AA5A6F3D6080375BAD5F8BA3FB8694BD0DC1 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C459A33B11E3AB83E34CD4E146B521BA8ED64F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4A7908AA21C1C066940D339E8CE6E157180EDBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score = PlayerPrefs.GetInt("MaxDollar");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB, /*hidden argument*/NULL);
		__this->set_score_12(L_0);
		// scoreText.text = "$" + score;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_scoreText_8();
		int32_t* L_2 = __this->get_address_of_score_12();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// MakeInstance();
		GamePlayScript_MakeInstance_mF6B31DF527DD2FF02BF7BD512102631AB4B76089(__this, /*hidden argument*/NULL);
		// level = 0;
		__this->set_level_28(0);
		// this.StartCoroutine("Do");
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(__this, _stringLiteralA4A7908AA21C1C066940D339E8CE6E157180EDBE, /*hidden argument*/NULL);
		// levelText.text = "LEVEL " + CGameManager.instance.levelCurrent;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_levelText_6();
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_7 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_7);
		int32_t* L_8 = L_7->get_address_of_levelCurrent_23();
		String_t* L_9;
		L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral4C459A33B11E3AB83E34CD4E146B521BA8ED64F5, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_10);
		// scoreTarget = CGameManager.instance.GetScoreTarget(CGameManager.instance.levelCurrent);
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_11 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_12 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_levelCurrent_23();
		NullCheck(L_11);
		int32_t L_14;
		L_14 = CGameManager_GetScoreTarget_m5080D5BD98092F75E85EFB51D4178C22ECED2ED5(L_11, L_13, /*hidden argument*/NULL);
		__this->set_scoreTarget_13(L_14);
		// targetText.text = "$" + scoreTarget.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = __this->get_targetText_7();
		int32_t* L_16 = __this->get_address_of_scoreTarget_13();
		String_t* L_17;
		L_17 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_16, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_18);
		// if (CGameManager.instance.clock)
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_19 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_19);
		bool L_20 = L_19->get_clock_28();
		if (!L_20)
		{
			goto IL_00c0;
		}
	}
	{
		// countDown = 76;
		__this->set_countDown_15((76.0f));
		// }
		goto IL_00cb;
	}

IL_00c0:
	{
		// countDown = 61;
		__this->set_countDown_15((61.0f));
	}

IL_00cb:
	{
		// SoundControl();
		GamePlayScript_SoundControl_m406F4B5393D9288E933E219A4E387B80B5D3CB31(__this, /*hidden argument*/NULL);
		// MusicControl();
		GamePlayScript_MusicControl_mE4CBA90D6124C8D33E03C0406B49580C85FF0D37(__this, /*hidden argument*/NULL);
		// SetButtonMusic();
		GamePlayScript_SetButtonMusic_m780D0E075E2777B326C8974D44F5BF7EBF426364(__this, /*hidden argument*/NULL);
		// SetButtonSound();
		GamePlayScript_SetButtonSound_m8709655D91D87FBEA3652919C1E075A185EB764A(__this, /*hidden argument*/NULL);
		// SetNumberBoom();
		GamePlayScript_SetNumberBoom_m0E2D86DB6728DF99F9C7B59CAFD07B2600E7AEF4(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayScript::MakeInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_MakeInstance_mF6B31DF527DD2FF02BF7BD512102631AB4B76089 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_0 = ((GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = this;
		((GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var))->set_instance_4(__this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void GamePlayScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_Update_mE6443C7C30100B75215F49C88814371E758E87DB (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKey(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// PauseGame();
		GamePlayScript_PauseGame_m206736B6A8FD2B76F67351B6B0A1E927345B9612(__this, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// if (score >= scoreTarget)
		int32_t L_1 = __this->get_score_12();
		int32_t L_2 = __this->get_scoreTarget_13();
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0029;
		}
	}
	{
		// buttonNextLevel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_buttonNextLevel_33();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// countDown -= UnityEngine.Time.deltaTime;
		float L_4 = __this->get_countDown_15();
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_countDown_15(((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)));
		// time = (int)countDown;
		float L_6 = __this->get_countDown_15();
		__this->set_time_14(il2cpp_codegen_cast_double_to_int<int32_t>(L_6));
		// if (time > 0)
		int32_t L_7 = __this->get_time_14();
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		// timeText.text = time.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_timeText_5();
		int32_t* L_9 = __this->get_address_of_time_14();
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_10);
		// if(time < 10)
		int32_t L_11 = __this->get_time_14();
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_00b4;
		}
	}
	{
		// if(victory || fail)
		bool L_12 = __this->get_victory_51();
		if (L_12)
		{
			goto IL_00b4;
		}
	}
	{
		bool L_13 = __this->get_fail_52();
		if (L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// PlaySound(6);
		GamePlayScript_PlaySound_m0828E124C4A965DB699619D1BC63ECDCAB4181A1(__this, 6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0089:
	{
		// if(score >= scoreTarget)
		int32_t L_14 = __this->get_score_12();
		int32_t L_15 = __this->get_scoreTarget_13();
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_00a6;
		}
	}
	{
		// if (!victory)
		bool L_16 = __this->get_victory_51();
		if (L_16)
		{
			goto IL_00b4;
		}
	}
	{
		// Victory();
		GamePlayScript_Victory_mDB86E46E8B20C895F08F57D558D2D153A8E4EAB5(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00a6:
	{
		// if (!fail)
		bool L_17 = __this->get_fail_52();
		if (L_17)
		{
			goto IL_00b4;
		}
	}
	{
		// Fail();
		GamePlayScript_Fail_m2657DB839356B595D41EEFFF834CCD2A9F52416B(__this, /*hidden argument*/NULL);
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void GamePlayScript::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_OnApplicationPause_m071B1C82A1E68F8C237FE7CE7058F3DE5E1042E0 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, bool ___pause0, const RuntimeMethod* method)
{
	{
		// if (pause && !isPause)
		bool L_0 = ___pause0;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		bool L_1 = __this->get_isPause_53();
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		// if (victory && fail)
		bool L_2 = __this->get_victory_51();
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		bool L_3 = __this->get_fail_52();
		if (L_3)
		{
			goto IL_0021;
		}
	}

IL_001b:
	{
		// PauseGame();
		GamePlayScript_PauseGame_m206736B6A8FD2B76F67351B6B0A1E927345B9612(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void GamePlayScript::PlaySound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_PlaySound_m0828E124C4A965DB699619D1BC63ECDCAB4181A1 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___i0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_0051;
			}
			case 3:
			{
				goto IL_0063;
			}
			case 4:
			{
				goto IL_0075;
			}
			case 5:
			{
				goto IL_00a4;
			}
			case 6:
			{
				goto IL_00c3;
			}
			case 7:
			{
				goto IL_00d5;
			}
			case 8:
			{
				goto IL_00e7;
			}
		}
	}
	{
		return;
	}

IL_002d:
	{
		// audioSound.PlayOneShot(lowValue);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_audioSound_41();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = __this->get_lowValue_44();
		NullCheck(L_1);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_1, L_2, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_003f:
	{
		// audioSound.PlayOneShot(normalValue);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get_audioSound_41();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4 = __this->get_normalValue_45();
		NullCheck(L_3);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_3, L_4, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0051:
	{
		// audioSound.PlayOneShot(highValue);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = __this->get_audioSound_41();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_6 = __this->get_highValue_46();
		NullCheck(L_5);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_5, L_6, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0063:
	{
		// audioSound.PlayOneShot(explosive);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = __this->get_audioSound_41();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_8 = __this->get_explosive_43();
		NullCheck(L_7);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_7, L_8, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0075:
	{
		// if (!audioSound.isPlaying)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_9 = __this->get_audioSound_41();
		NullCheck(L_9);
		bool L_10;
		L_10 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_00f8;
		}
	}
	{
		// if (victory || fail)
		bool L_11 = __this->get_victory_51();
		if (L_11)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_12 = __this->get_fail_52();
		if (L_12)
		{
			goto IL_00f8;
		}
	}
	{
		// audioSound.PlayOneShot(pull);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_13 = __this->get_audioSound_41();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_14 = __this->get_pull_48();
		NullCheck(L_13);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_13, L_14, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00a4:
	{
		// if (!audioSound.isPlaying)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_15 = __this->get_audioSound_41();
		NullCheck(L_15);
		bool L_16;
		L_16 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00f8;
		}
	}
	{
		// audioSound.PlayOneShot(last10S);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_17 = __this->get_audioSound_41();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_18 = __this->get_last10S_47();
		NullCheck(L_17);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_17, L_18, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00c3:
	{
		// audioSound.PlayOneShot(lose);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_19 = __this->get_audioSound_41();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_20 = __this->get_lose_49();
		NullCheck(L_19);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_19, L_20, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00d5:
	{
		// audioSound.PlayOneShot(win);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_21 = __this->get_audioSound_41();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_22 = __this->get_win_50();
		NullCheck(L_21);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_21, L_22, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00e7:
	{
		// audioSound.PlayOneShot(pressButton);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_23 = __this->get_audioSound_41();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_24 = __this->get_pressButton_42();
		NullCheck(L_23);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_23, L_24, /*hidden argument*/NULL);
	}

IL_00f8:
	{
		// }
		return;
	}
}
// System.Void GamePlayScript::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_PauseGame_m206736B6A8FD2B76F67351B6B0A1E927345B9612 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayScript_U3CPauseGameU3Eb__55_0_m0CC3237051EF6967E19649FF4089E4FA0839849B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isPause = true;
		__this->set_isPause_53((bool)1);
		// audioSound.enabled = false;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSound_41();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)0, /*hidden argument*/NULL);
		// animPanelDark.SetBool("In", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get_animPanelDark_24();
		NullCheck(L_1);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_1, _stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8, (bool)1, /*hidden argument*/NULL);
		// animPanelMenu.SetBool("In", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_animPanelMenu_23();
		NullCheck(L_2);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_2, _stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8, (bool)1, /*hidden argument*/NULL);
		// animPanelMenu.SetBool("Out", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_animPanelMenu_23();
		NullCheck(L_3);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_3, _stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44, (bool)0, /*hidden argument*/NULL);
		// UnityEngine.Time.timeScale = 0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// restartGame.onClick.RemoveAllListeners();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = __this->get_restartGame_26();
		NullCheck(L_4);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_5;
		L_5 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(L_5, /*hidden argument*/NULL);
		// restartGame.onClick.AddListener(() => RestartGame());
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = __this->get_restartGame_26();
		NullCheck(L_6);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_7;
		L_7 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_6, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_8 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_8, __this, (intptr_t)((intptr_t)GamePlayScript_U3CPauseGameU3Eb__55_0_m0CC3237051EF6967E19649FF4089E4FA0839849B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayScript::ResumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_ResumeGame_m33939BF2364F79DE7E28A7C14F076E9A80104D98 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isPause = false;
		__this->set_isPause_53((bool)0);
		// audioSound.enabled = true;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSound_41();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)1, /*hidden argument*/NULL);
		// PlaySound(9);
		GamePlayScript_PlaySound_m0828E124C4A965DB699619D1BC63ECDCAB4181A1(__this, ((int32_t)9), /*hidden argument*/NULL);
		// UnityEngine.Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// animPanelDark.SetBool("In", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get_animPanelDark_24();
		NullCheck(L_1);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_1, _stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8, (bool)0, /*hidden argument*/NULL);
		// animPanelMenu.SetBool("Out", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_animPanelMenu_23();
		NullCheck(L_2);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_2, _stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayScript::Victory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_Victory_mDB86E46E8B20C895F08F57D558D2D153A8E4EAB5 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74AA77852D505FA9B916F6C64BC0B0E44A1550B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioMusic.enabled = false;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioMusic_40();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)0, /*hidden argument*/NULL);
		// PlaySound(8);
		GamePlayScript_PlaySound_m0828E124C4A965DB699619D1BC63ECDCAB4181A1(__this, 8, /*hidden argument*/NULL);
		// victory = true;
		__this->set_victory_51((bool)1);
		// UnityEngine.Time.timeScale = 0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// panelVictory.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_panelVictory_17();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// scoreVictoryText.text = "$" + score;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_scoreVictoryText_10();
		int32_t* L_3 = __this->get_address_of_score_12();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// PlayerPrefs.SetInt("MaxLevel", CGameManager.instance.levelCurrent);
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_6 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_levelCurrent_23();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralA74AA77852D505FA9B916F6C64BC0B0E44A1550B, L_7, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("MaxDollar", score);
		int32_t L_8 = __this->get_score_12();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayScript::Fail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_Fail_m2657DB839356B595D41EEFFF834CCD2A9F52416B (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayScript_U3CFailU3Eb__58_0_mF5769F31B2E24533EDD86E281D1BF069BF5C5733_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioMusic.enabled = false;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioMusic_40();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)0, /*hidden argument*/NULL);
		// PlaySound(7);
		GamePlayScript_PlaySound_m0828E124C4A965DB699619D1BC63ECDCAB4181A1(__this, 7, /*hidden argument*/NULL);
		// fail = true;
		__this->set_fail_52((bool)1);
		// UnityEngine.Time.timeScale = 0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// panelFail.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_panelFail_18();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// scoreFailText.text = "$" + score;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_scoreFailText_11();
		int32_t* L_3 = __this->get_address_of_score_12();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// restartFailPanel.onClick.RemoveAllListeners();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = __this->get_restartFailPanel_27();
		NullCheck(L_6);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_7;
		L_7 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(L_7, /*hidden argument*/NULL);
		// restartFailPanel.onClick.AddListener(() => RestartGame());
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8 = __this->get_restartFailPanel_27();
		NullCheck(L_8);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_9;
		L_9 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_8, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_10 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_10, __this, (intptr_t)((intptr_t)GamePlayScript_U3CFailU3Eb__58_0_mF5769F31B2E24533EDD86E281D1BF069BF5C5733_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayScript::RestartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_RestartGame_m60DEA007CEA6E615EEE724A3B2E68312F0B32C3F (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// CGameManager.instance.powerCurrent = false;
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_0 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		L_0->set_powerCurrent_29((bool)0);
		// Application.LoadLevel(Application.loadedLevel);
		int32_t L_1;
		L_1 = Application_get_loadedLevel_m0E346B638F8E10D4FD5D4C883FAA39C34CF41C1E(/*hidden argument*/NULL);
		Application_LoadLevel_mB8D52CB842A98DDBB611D39C80709F5233AF6AAB(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayScript::NextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_NextLevel_mB025C307837081FC323774A99F43F2F742988F85 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CGameManager.instance.DisableItems();
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_0 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		CGameManager_DisableItems_mD26CF3DA64E7EC30274422B1EF9E5A5B9A7BAE25(L_0, /*hidden argument*/NULL);
		// Application.LoadLevel("Shop");
		Application_LoadLevel_m4DB7F36B66B70C1DB7F4F762A1DA554A028B135A(_stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223, /*hidden argument*/NULL);
		// CGameManager.instance.levelCurrent++;
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_1 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_levelCurrent_23();
		NullCheck(L_2);
		L_2->set_levelCurrent_23(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		// }
		return;
	}
}
// System.Void GamePlayScript::NextLevelAndSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_NextLevelAndSave_m3A56F72AFF1E5D552D062F128B2FED286621018C (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74AA77852D505FA9B916F6C64BC0B0E44A1550B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("MaxLevel", CGameManager.instance.levelCurrent);
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_0 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_levelCurrent_23();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralA74AA77852D505FA9B916F6C64BC0B0E44A1550B, L_1, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("MaxDollar", score);
		int32_t L_2 = __this->get_score_12();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB, L_2, /*hidden argument*/NULL);
		// CGameManager.instance.DisableItems();
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_3 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_3);
		CGameManager_DisableItems_mD26CF3DA64E7EC30274422B1EF9E5A5B9A7BAE25(L_3, /*hidden argument*/NULL);
		// Application.LoadLevel("Shop");
		Application_LoadLevel_m4DB7F36B66B70C1DB7F4F762A1DA554A028B135A(_stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223, /*hidden argument*/NULL);
		// CGameManager.instance.levelCurrent++;
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_4 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_levelCurrent_23();
		NullCheck(L_5);
		L_5->set_levelCurrent_23(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		// }
		return;
	}
}
// System.Void GamePlayScript::BackToMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_BackToMenu_m34EE20C57B0660A001624FABE34DA1C1A24D927F (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.LoadLevel("MainMenu");
		Application_LoadLevel_m4DB7F36B66B70C1DB7F4F762A1DA554A028B135A(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayScript::Boom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_Boom_mF45D3BD0090BAB87001AF1E2197623413FEBAF5B (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral452171630649949878FA10E645128E1E28D26C5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6853B00927EB8BAE6FD25AE411383457D8EC0D05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral803BD8341EDEE47FB612B8B9BF65BADFA3F1E1B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral937CF4AA29E8BA035C35BA0901DC5699940902D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95E4B00E4CCB9013CF0E6A1A81909CBA669AD082);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD4E79D5BF1664C1E246E08132AFC9D0DA294C60);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// OngGiaScript.instance.DropBomb();
		OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * L_0 = ((OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF_StaticFields*)il2cpp_codegen_static_fields_for(OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		OngGiaScript_DropBomb_m5D572575C5EFA7DAC7C9EC84BB26E9990C12BF15(L_0, /*hidden argument*/NULL);
		// itemDestroy = GameObject.Find(itemSeclected);
		String_t* L_1 = __this->get_itemSeclected_36();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_1, /*hidden argument*/NULL);
		__this->set_itemDestroy_37(L_2);
		// Vector3 vector3 = itemDestroy.transform.localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_itemDestroy_37();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// PlaySound(4);
		GamePlayScript_PlaySound_m0828E124C4A965DB699619D1BC63ECDCAB4181A1(__this, 4, /*hidden argument*/NULL);
		// if(itemDestroy.tag == "Gold")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_itemDestroy_37();
		NullCheck(L_6);
		String_t* L_7;
		L_7 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteral6853B00927EB8BAE6FD25AE411383457D8EC0D05, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_008c;
		}
	}
	{
		// fireObject = Instantiate(Resources.Load("GoldFire"), vector3, Quaternion.identity) as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_9;
		L_9 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral803BD8341EDEE47FB612B8B9BF65BADFA3F1E1B2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_12;
		L_12 = Object_Instantiate_mADD3254CB5E6AB56FBB6964FE4B930F5187AB5AD(L_9, L_10, L_11, /*hidden argument*/NULL);
		__this->set_fireObject_38(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_12, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)));
		// fireObject.transform.localScale = itemDestroy.transform.localScale;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_fireObject_38();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_itemDestroy_37();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_14, L_17, /*hidden argument*/NULL);
		// }
		goto IL_0105;
	}

IL_008c:
	{
		// else if(itemDestroy.tag == "Stone")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_itemDestroy_37();
		NullCheck(L_18);
		String_t* L_19;
		L_19 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_19, _stringLiteral937CF4AA29E8BA035C35BA0901DC5699940902D9, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00e5;
		}
	}
	{
		// fireObject = Instantiate(Resources.Load("StoneFire"), vector3, Quaternion.identity) as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_21;
		L_21 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral95E4B00E4CCB9013CF0E6A1A81909CBA669AD082, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_24;
		L_24 = Object_Instantiate_mADD3254CB5E6AB56FBB6964FE4B930F5187AB5AD(L_21, L_22, L_23, /*hidden argument*/NULL);
		__this->set_fireObject_38(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_24, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)));
		// fireObject.transform.localScale = itemDestroy.transform.localScale;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_fireObject_38();
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_itemDestroy_37();
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_26, L_29, /*hidden argument*/NULL);
		// }
		goto IL_0105;
	}

IL_00e5:
	{
		// fireObject = Instantiate(Resources.Load("OtherFire"), vector3, Quaternion.identity) as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_30;
		L_30 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral452171630649949878FA10E645128E1E28D26C5C, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_32;
		L_32 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_33;
		L_33 = Object_Instantiate_mADD3254CB5E6AB56FBB6964FE4B930F5187AB5AD(L_30, L_31, L_32, /*hidden argument*/NULL);
		__this->set_fireObject_38(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_33, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)));
	}

IL_0105:
	{
		// Destroy(itemDestroy);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = __this->get_itemDestroy_37();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_34, /*hidden argument*/NULL);
		// numberBoom = PlayerPrefs.GetInt("Bomb");
		int32_t L_35;
		L_35 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralBD4E79D5BF1664C1E246E08132AFC9D0DA294C60, /*hidden argument*/NULL);
		__this->set_numberBoom_35(L_35);
		// numberBoom--;
		int32_t L_36 = __this->get_numberBoom_35();
		__this->set_numberBoom_35(((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)1)));
		// PlayerPrefs.SetInt("Bomb", numberBoom);
		int32_t L_37 = __this->get_numberBoom_35();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralBD4E79D5BF1664C1E246E08132AFC9D0DA294C60, L_37, /*hidden argument*/NULL);
		// SetNumberBoom();
		GamePlayScript_SetNumberBoom_m0E2D86DB6728DF99F9C7B59CAFD07B2600E7AEF4(__this, /*hidden argument*/NULL);
		// if(GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction == TypeAction.KeoCau)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38;
		L_38 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_38);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_39;
		L_39 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_38, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_39);
		int32_t L_40 = L_39->get_typeAction_9();
		if ((!(((uint32_t)L_40) == ((uint32_t)2))))
		{
			goto IL_016a;
		}
	}
	{
		// LuoiCauScript.instance.speed = 4;
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_41 = ((LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_StaticFields*)il2cpp_codegen_static_fields_for(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_41);
		L_41->set_speed_5((4.0f));
	}

IL_016a:
	{
		// }
		return;
	}
}
// System.Void GamePlayScript::Power()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_Power_m51778CF619605409E739F4E192B6FA60B12B0595 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CGameManager.instance.powerCurrent = true;
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_0 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		L_0->set_powerCurrent_29((bool)1);
		// OngGiaScript.instance.Happy();
		OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * L_1 = ((OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF_StaticFields*)il2cpp_codegen_static_fields_for(OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_1);
		OngGiaScript_Happy_m1E65893B0D0D40937C8C578782D91355EAEBD1C1(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayScript::SetNumberBoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_SetNumberBoom_m0E2D86DB6728DF99F9C7B59CAFD07B2600E7AEF4 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD4E79D5BF1664C1E246E08132AFC9D0DA294C60);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (PlayerPrefs.GetInt("Bomb") > 0)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralBD4E79D5BF1664C1E246E08132AFC9D0DA294C60, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		// boomObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_boomObject_32();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// boomText.text = PlayerPrefs.GetInt("Bomb").ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_boomText_9();
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralBD4E79D5BF1664C1E246E08132AFC9D0DA294C60, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// }
		return;
	}

IL_0037:
	{
		// boomObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_boomObject_32();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GamePlayScript::Do()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GamePlayScript_Do_m9A1F87EAF2B1294FB684D903286BD4606A1FDA05 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDoU3Ed__66_t780AA168EB458EDCA78F8ABF70715154D4D5535F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDoU3Ed__66_t780AA168EB458EDCA78F8ABF70715154D4D5535F * L_0 = (U3CDoU3Ed__66_t780AA168EB458EDCA78F8ABF70715154D4D5535F *)il2cpp_codegen_object_new(U3CDoU3Ed__66_t780AA168EB458EDCA78F8ABF70715154D4D5535F_il2cpp_TypeInfo_var);
		U3CDoU3Ed__66__ctor_m2FC1EAD8C106323B6F391615CAF93B5631B502B6(L_0, 0, /*hidden argument*/NULL);
		U3CDoU3Ed__66_t780AA168EB458EDCA78F8ABF70715154D4D5535F * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GamePlayScript::CreateScoreFly(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_CreateScoreFly_m996C8518B2A4BF73807C8F216BC63C3F01B246D4 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, int32_t ___score0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextScoreScript_t83E71EF2C771F0C0936963F7F7B4E940F27FA9E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 vector3 = scoreTextFly.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_scoreTextFly_30();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Instantiate(scoreTextFly, vector3, Quaternion.identity).transform.SetParent(canvas, false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_scoreTextFly_30();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_3, L_4, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_canvas_34();
		NullCheck(L_7);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_7, L_8, (bool)0, /*hidden argument*/NULL);
		// TextScoreScript.score = score;
		int32_t L_9 = ___score0;
		((TextScoreScript_t83E71EF2C771F0C0936963F7F7B4E940F27FA9E5_StaticFields*)il2cpp_codegen_static_fields_for(TextScoreScript_t83E71EF2C771F0C0936963F7F7B4E940F27FA9E5_il2cpp_TypeInfo_var))->set_score_7(L_9);
		// }
		return;
	}
}
// System.Void GamePlayScript::ScoreZoomEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_ScoreZoomEffect_mB3E9426DBC2BEC92298CF1281C6FA42E1E220ED7 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18E6316ADA637DB2A17BD50EEDBE17672A060DED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animPanelPlay.SetBool("Zoom", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animPanelPlay_25();
		NullCheck(L_0);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteral18E6316ADA637DB2A17BD50EEDBE17672A060DED, (bool)1, /*hidden argument*/NULL);
		// StartCoroutine(ScoreZoomOut());
		RuntimeObject* L_1;
		L_1 = GamePlayScript_ScoreZoomOut_mB2BCB64EB0AE64A76C700C786E799ABC4E72469B(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GamePlayScript::ScoreZoomOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GamePlayScript_ScoreZoomOut_mB2BCB64EB0AE64A76C700C786E799ABC4E72469B (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CScoreZoomOutU3Ed__69_tCFC04555FC9576F724D6EEBC5614C866CF5B3E5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CScoreZoomOutU3Ed__69_tCFC04555FC9576F724D6EEBC5614C866CF5B3E5D * L_0 = (U3CScoreZoomOutU3Ed__69_tCFC04555FC9576F724D6EEBC5614C866CF5B3E5D *)il2cpp_codegen_object_new(U3CScoreZoomOutU3Ed__69_tCFC04555FC9576F724D6EEBC5614C866CF5B3E5D_il2cpp_TypeInfo_var);
		U3CScoreZoomOutU3Ed__69__ctor_m2C630ABA9CA8EE744882D20D0A645C7A4A2BB740(L_0, 0, /*hidden argument*/NULL);
		U3CScoreZoomOutU3Ed__69_tCFC04555FC9576F724D6EEBC5614C866CF5B3E5D * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GamePlayScript::CreateBoomFly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_CreateBoomFly_mD6756F440E2760CEF93D0E6ACEB9B147E822C746 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 vector3 = boomFly.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_boomFly_31();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Instantiate(boomFly, vector3, Quaternion.identity).transform.SetParent(canvas, false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_boomFly_31();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_3, L_4, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_canvas_34();
		NullCheck(L_7);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_7, L_8, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayScript::SetScoreText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_SetScoreText_m697631F1256D03CCD5D865B5C7674D00E385A03E (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreText.text = "$" + score.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_scoreText_8();
		int32_t* L_1 = __this->get_address_of_score_12();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void GamePlayScript::SoundControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_SoundControl_m406F4B5393D9288E933E219A4E387B80B5D3CB31 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt("Sound") == 1)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}
	{
		// audioSound.enabled = true;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_audioSound_41();
		NullCheck(L_1);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// audioSound.enabled = false;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_audioSound_41();
		NullCheck(L_2);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayScript::MusicControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_MusicControl_mE4CBA90D6124C8D33E03C0406B49580C85FF0D37 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt("Music") == 1)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}
	{
		// audioMusic.enabled = true;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_audioMusic_40();
		NullCheck(L_1);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// audioMusic.enabled = false;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_audioMusic_40();
		NullCheck(L_2);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayScript::SetOnMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_SetOnMusic_mF07670630DDCFCA3B61B0F640214AC6AF446E577 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Music", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, 1, /*hidden argument*/NULL);
		// SetButtonMusic();
		GamePlayScript_SetButtonMusic_m780D0E075E2777B326C8974D44F5BF7EBF426364(__this, /*hidden argument*/NULL);
		// MusicControl();
		GamePlayScript_MusicControl_mE4CBA90D6124C8D33E03C0406B49580C85FF0D37(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayScript::SetOnSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_SetOnSound_mE311B73C91E0685E3861F90F2FC6723DE6E5870C (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Sound", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, 1, /*hidden argument*/NULL);
		// SetButtonSound();
		GamePlayScript_SetButtonSound_m8709655D91D87FBEA3652919C1E075A185EB764A(__this, /*hidden argument*/NULL);
		// SoundControl();
		GamePlayScript_SoundControl_m406F4B5393D9288E933E219A4E387B80B5D3CB31(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayScript::SetMuteMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_SetMuteMusic_mA608FFB9FF97FE4F5F3AE468BFD176E5B32376A9 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Music", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, 0, /*hidden argument*/NULL);
		// SetButtonMusic();
		GamePlayScript_SetButtonMusic_m780D0E075E2777B326C8974D44F5BF7EBF426364(__this, /*hidden argument*/NULL);
		// MusicControl();
		GamePlayScript_MusicControl_mE4CBA90D6124C8D33E03C0406B49580C85FF0D37(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayScript::SetMuteSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_SetMuteSound_mE57283E2A35B885F0C934A928DC2D55718C77715 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Sound", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, 0, /*hidden argument*/NULL);
		// SetButtonSound();
		GamePlayScript_SetButtonSound_m8709655D91D87FBEA3652919C1E075A185EB764A(__this, /*hidden argument*/NULL);
		// SoundControl();
		GamePlayScript_SoundControl_m406F4B5393D9288E933E219A4E387B80B5D3CB31(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayScript::SetButtonSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_SetButtonSound_m8709655D91D87FBEA3652919C1E075A185EB764A (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt("Sound") == 1)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		// soundOnButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_soundOnButton_19();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// soundMuteButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_soundMuteButton_20();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0026:
	{
		// soundOnButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_soundOnButton_19();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// soundMuteButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_soundMuteButton_20();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayScript::SetButtonMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_SetButtonMusic_m780D0E075E2777B326C8974D44F5BF7EBF426364 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt("Music") == 1)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		// musicOnButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_musicOnButton_21();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// musicMuteButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_musicMuteButton_22();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0026:
	{
		// musicMuteButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_musicMuteButton_22();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// musicOnButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_musicOnButton_21();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePlayScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript__ctor_m540F1AE8B852D6C2DEC5C674CC401F41EB2A577A (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GamePlayScript::<PauseGame>b__55_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_U3CPauseGameU3Eb__55_0_m0CC3237051EF6967E19649FF4089E4FA0839849B (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	{
		// restartGame.onClick.AddListener(() => RestartGame());
		GamePlayScript_RestartGame_m60DEA007CEA6E615EEE724A3B2E68312F0B32C3F(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GamePlayScript::<Fail>b__58_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayScript_U3CFailU3Eb__58_0_mF5769F31B2E24533EDD86E281D1BF069BF5C5733 (GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * __this, const RuntimeMethod* method)
{
	{
		// restartFailPanel.onClick.AddListener(() => RestartGame());
		GamePlayScript_RestartGame_m60DEA007CEA6E615EEE724A3B2E68312F0B32C3F(__this, /*hidden argument*/NULL);
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
// System.Void GiftScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GiftScript_Start_m3E689F5B0C85EDDD21FCC4838F2BCBCE3D5940D7 (GiftScript_t2AD2012AD53BE26AC1D88583F33A80414A68DC60 * __this, const RuntimeMethod* method)
{
	{
		// isMoveFollow = false;
		__this->set_isMoveFollow_5((bool)0);
		// }
		return;
	}
}
// System.Void GiftScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GiftScript_Update_mB665C498A815C0B81C7F502457A073F0729959D4 (GiftScript_t2AD2012AD53BE26AC1D88583F33A80414A68DC60 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GiftScript::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GiftScript_FixedUpdate_m58CBCD8109B7E726A1D595377567997FDFFB6012 (GiftScript_t2AD2012AD53BE26AC1D88583F33A80414A68DC60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604);
		s_Il2CppMethodInitialized = true;
	}
	{
		// moveFllowTarget(GameObject.Find("luoiCau").transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		GiftScript_moveFllowTarget_m24F61BBF48E3502E0329F000A4C7928DFC39B24C(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GiftScript::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GiftScript_OnTriggerEnter2D_m018470D59CFF30F045987872964715C445578A87 (GiftScript_t2AD2012AD53BE26AC1D88583F33A80414A68DC60 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.name == "luoiCau"
		//     && GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction != TypeAction.KeoCau)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00c0;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_4);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_5;
		L_5 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_4, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_5);
		int32_t L_6 = L_5->get_typeAction_9();
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_00c0;
		}
	}
	{
		// LuoiCauScript.instance.cameraOut = false;
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_7 = ((LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_StaticFields*)il2cpp_codegen_static_fields_for(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_7);
		L_7->set_cameraOut_22((bool)0);
		// isMoveFollow = true;
		__this->set_isMoveFollow_5((bool)1);
		// GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction = TypeAction.KeoCau;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_8);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_9;
		L_9 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_8, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_9);
		L_9->set_typeAction_9(2);
		// GameObject.Find("luoiCau").GetComponent<LuoiCauScript>().velocity = -GameObject.Find("luoiCau").GetComponent<LuoiCauScript>().velocity;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604, /*hidden argument*/NULL);
		NullCheck(L_10);
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_11;
		L_11 = GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290(L_10, /*hidden argument*/GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604, /*hidden argument*/NULL);
		NullCheck(L_12);
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_13;
		L_13 = GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290(L_12, /*hidden argument*/GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290_RuntimeMethod_var);
		NullCheck(L_13);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = L_13->get_velocity_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set_velocity_8(L_15);
		// GameObject.Find("luoiCau").GetComponent<LuoiCauScript>().speed -= this.speed;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604, /*hidden argument*/NULL);
		NullCheck(L_16);
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_17;
		L_17 = GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290(L_16, /*hidden argument*/GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290_RuntimeMethod_var);
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_18 = L_17;
		NullCheck(L_18);
		float L_19 = L_18->get_speed_5();
		float L_20 = __this->get_speed_7();
		NullCheck(L_18);
		L_18->set_speed_5(((float)il2cpp_codegen_subtract((float)L_19, (float)L_20)));
		// if (GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction == TypeAction.KeoCau)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_21);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_22;
		L_22 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_21, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_22);
		int32_t L_23 = L_22->get_typeAction_9();
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void GiftScript::moveFllowTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GiftScript_moveFllowTarget_m24F61BBF48E3502E0329F000A4C7928DFC39B24C (GiftScript_t2AD2012AD53BE26AC1D88583F33A80414A68DC60 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// if (isMoveFollow)
		bool L_0 = __this->get_isMoveFollow_5();
		if (!L_0)
		{
			goto IL_02b8;
		}
	}
	{
		// Quaternion tg = Quaternion.Euler(target.parent.transform.rotation.x,
		//                                  target.parent.transform.rotation.y,
		//                                  90 + target.parent.transform.rotation.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___target0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = ___target0;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = ___target0;
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_z_2();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_5, L_10, ((float)il2cpp_codegen_add((float)(90.0f), (float)L_15)), /*hidden argument*/NULL);
		// transform.position = new Vector3(target.position.x,
		//                                  target.position.y - gameObject.GetComponent<Collider2D>().bounds.size.y / 2,
		//                                  transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = ___target0;
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = ___target0;
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_25;
		L_25 = GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E(L_24, /*hidden argument*/GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E_RuntimeMethod_var);
		NullCheck(L_25);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_26;
		L_26 = Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8(L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_0), /*hidden argument*/NULL);
		float L_28 = L_27.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_32), L_20, ((float)il2cpp_codegen_subtract((float)L_23, (float)((float)((float)L_28/(float)(2.0f))))), L_31, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_17, L_32, /*hidden argument*/NULL);
		// if (GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction == TypeAction.Nghi)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33;
		L_33 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_33);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_34;
		L_34 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_33, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_34);
		int32_t L_35 = L_34->get_typeAction_9();
		if (L_35)
		{
			goto IL_02b8;
		}
	}
	{
		// if (CGameManager.instance.clover)
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_36 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_36);
		bool L_37 = L_36->get_clover_26();
		if (!L_37)
		{
			goto IL_017c;
		}
	}
	{
		// randomGift = Random.RandomRange(1, 5);
		int32_t L_38;
		L_38 = Random_RandomRange_mCB428074F55769762659348C65A7A87B88E522D6(1, 5, /*hidden argument*/NULL);
		__this->set_randomGift_4(L_38);
		// switch (randomGift)
		int32_t L_39 = __this->get_randomGift_4();
		V_2 = L_39;
		int32_t L_40 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0109;
			}
			case 1:
			{
				goto IL_0118;
			}
			case 2:
			{
				goto IL_015e;
			}
			case 3:
			{
				goto IL_016d;
			}
		}
	}
	{
		goto IL_02ad;
	}

IL_0109:
	{
		// GamePlayScript.instance.Power();
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_41 = ((GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_41);
		GamePlayScript_Power_m51778CF619605409E739F4E192B6FA60B12B0595(L_41, /*hidden argument*/NULL);
		// break;
		goto IL_02ad;
	}

IL_0118:
	{
		// int score = Random.RandomRange(300, 400);
		int32_t L_42;
		L_42 = Random_RandomRange_mCB428074F55769762659348C65A7A87B88E522D6(((int32_t)300), ((int32_t)400), /*hidden argument*/NULL);
		V_1 = L_42;
		// GameObject.Find("GamePlay").GetComponent<GamePlayScript>().score += score;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207, /*hidden argument*/NULL);
		NullCheck(L_43);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_44;
		L_44 = GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28(L_43, /*hidden argument*/GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28_RuntimeMethod_var);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_45 = L_44;
		NullCheck(L_45);
		int32_t L_46 = L_45->get_score_12();
		int32_t L_47 = V_1;
		NullCheck(L_45);
		L_45->set_score_12(((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)L_47)));
		// GameObject.Find("GamePlay").GetComponent<GamePlayScript>().CreateScoreFly(score);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48;
		L_48 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207, /*hidden argument*/NULL);
		NullCheck(L_48);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_49;
		L_49 = GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28(L_48, /*hidden argument*/GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28_RuntimeMethod_var);
		int32_t L_50 = V_1;
		NullCheck(L_49);
		GamePlayScript_CreateScoreFly_m996C8518B2A4BF73807C8F216BC63C3F01B246D4(L_49, L_50, /*hidden argument*/NULL);
		// break;
		goto IL_02ad;
	}

IL_015e:
	{
		// GamePlayScript.instance.CreateBoomFly();
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_51 = ((GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_51);
		GamePlayScript_CreateBoomFly_mD6756F440E2760CEF93D0E6ACEB9B147E822C746(L_51, /*hidden argument*/NULL);
		// break;
		goto IL_02ad;
	}

IL_016d:
	{
		// GamePlayScript.instance.Power();
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_52 = ((GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_52);
		GamePlayScript_Power_m51778CF619605409E739F4E192B6FA60B12B0595(L_52, /*hidden argument*/NULL);
		// break;
		goto IL_02ad;
	}

IL_017c:
	{
		// randomGift = Random.RandomRange(1, 8);
		int32_t L_53;
		L_53 = Random_RandomRange_mCB428074F55769762659348C65A7A87B88E522D6(1, 8, /*hidden argument*/NULL);
		__this->set_randomGift_4(L_53);
		// switch (randomGift)
		int32_t L_54 = __this->get_randomGift_4();
		V_2 = L_54;
		int32_t L_55 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)1)))
		{
			case 0:
			{
				goto IL_01b9;
			}
			case 1:
			{
				goto IL_01fc;
			}
			case 2:
			{
				goto IL_02ad;
			}
			case 3:
			{
				goto IL_020b;
			}
			case 4:
			{
				goto IL_021a;
			}
			case 5:
			{
				goto IL_0229;
			}
			case 6:
			{
				goto IL_026c;
			}
		}
	}
	{
		goto IL_02ad;
	}

IL_01b9:
	{
		// int score = Random.RandomRange(50, 150);
		int32_t L_56;
		L_56 = Random_RandomRange_mCB428074F55769762659348C65A7A87B88E522D6(((int32_t)50), ((int32_t)150), /*hidden argument*/NULL);
		V_3 = L_56;
		// GameObject.Find("GamePlay").GetComponent<GamePlayScript>().score += score;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_57;
		L_57 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207, /*hidden argument*/NULL);
		NullCheck(L_57);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_58;
		L_58 = GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28(L_57, /*hidden argument*/GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28_RuntimeMethod_var);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_59 = L_58;
		NullCheck(L_59);
		int32_t L_60 = L_59->get_score_12();
		int32_t L_61 = V_3;
		NullCheck(L_59);
		L_59->set_score_12(((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)L_61)));
		// GameObject.Find("GamePlay").GetComponent<GamePlayScript>().CreateScoreFly(score);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62;
		L_62 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207, /*hidden argument*/NULL);
		NullCheck(L_62);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_63;
		L_63 = GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28(L_62, /*hidden argument*/GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28_RuntimeMethod_var);
		int32_t L_64 = V_3;
		NullCheck(L_63);
		GamePlayScript_CreateScoreFly_m996C8518B2A4BF73807C8F216BC63C3F01B246D4(L_63, L_64, /*hidden argument*/NULL);
		// break;
		goto IL_02ad;
	}

IL_01fc:
	{
		// GamePlayScript.instance.CreateBoomFly();
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_65 = ((GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_65);
		GamePlayScript_CreateBoomFly_mD6756F440E2760CEF93D0E6ACEB9B147E822C746(L_65, /*hidden argument*/NULL);
		// break;
		goto IL_02ad;
	}

IL_020b:
	{
		// GamePlayScript.instance.Power();
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_66 = ((GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_66);
		GamePlayScript_Power_m51778CF619605409E739F4E192B6FA60B12B0595(L_66, /*hidden argument*/NULL);
		// break;
		goto IL_02ad;
	}

IL_021a:
	{
		// GamePlayScript.instance.CreateBoomFly();
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_67 = ((GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_67);
		GamePlayScript_CreateBoomFly_mD6756F440E2760CEF93D0E6ACEB9B147E822C746(L_67, /*hidden argument*/NULL);
		// break;
		goto IL_02ad;
	}

IL_0229:
	{
		// int score6 = Random.RandomRange(50, 150);
		int32_t L_68;
		L_68 = Random_RandomRange_mCB428074F55769762659348C65A7A87B88E522D6(((int32_t)50), ((int32_t)150), /*hidden argument*/NULL);
		V_4 = L_68;
		// GameObject.Find("GamePlay").GetComponent<GamePlayScript>().score += score6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69;
		L_69 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207, /*hidden argument*/NULL);
		NullCheck(L_69);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_70;
		L_70 = GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28(L_69, /*hidden argument*/GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28_RuntimeMethod_var);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_71 = L_70;
		NullCheck(L_71);
		int32_t L_72 = L_71->get_score_12();
		int32_t L_73 = V_4;
		NullCheck(L_71);
		L_71->set_score_12(((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)L_73)));
		// GameObject.Find("GamePlay").GetComponent<GamePlayScript>().CreateScoreFly(score6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_74;
		L_74 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207, /*hidden argument*/NULL);
		NullCheck(L_74);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_75;
		L_75 = GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28(L_74, /*hidden argument*/GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28_RuntimeMethod_var);
		int32_t L_76 = V_4;
		NullCheck(L_75);
		GamePlayScript_CreateScoreFly_m996C8518B2A4BF73807C8F216BC63C3F01B246D4(L_75, L_76, /*hidden argument*/NULL);
		// break;
		goto IL_02ad;
	}

IL_026c:
	{
		// int score7 = Random.RandomRange(50, 150);
		int32_t L_77;
		L_77 = Random_RandomRange_mCB428074F55769762659348C65A7A87B88E522D6(((int32_t)50), ((int32_t)150), /*hidden argument*/NULL);
		V_5 = L_77;
		// GameObject.Find("GamePlay").GetComponent<GamePlayScript>().score += score7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_78;
		L_78 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207, /*hidden argument*/NULL);
		NullCheck(L_78);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_79;
		L_79 = GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28(L_78, /*hidden argument*/GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28_RuntimeMethod_var);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_80 = L_79;
		NullCheck(L_80);
		int32_t L_81 = L_80->get_score_12();
		int32_t L_82 = V_5;
		NullCheck(L_80);
		L_80->set_score_12(((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)L_82)));
		// GameObject.Find("GamePlay").GetComponent<GamePlayScript>().CreateScoreFly(score7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_83;
		L_83 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207, /*hidden argument*/NULL);
		NullCheck(L_83);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_84;
		L_84 = GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28(L_83, /*hidden argument*/GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28_RuntimeMethod_var);
		int32_t L_85 = V_5;
		NullCheck(L_84);
		GamePlayScript_CreateScoreFly_m996C8518B2A4BF73807C8F216BC63C3F01B246D4(L_84, L_85, /*hidden argument*/NULL);
	}

IL_02ad:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_86;
		L_86 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_86, /*hidden argument*/NULL);
	}

IL_02b8:
	{
		// }
		return;
	}
}
// System.Void GiftScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GiftScript__ctor_mEFA919924D2623FA0CB68DFAF0938339819EAE61 (GiftScript_t2AD2012AD53BE26AC1D88583F33A80414A68DC60 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void LuoiCauScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuoiCauScript_Start_mD422A5B97499321196FE71B8DA2E05C61AD85DD2 (LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * __this, const RuntimeMethod* method)
{
	{
		// MakeInstance();
		LuoiCauScript_MakeInstance_m63E2E241150FB5272066834646AED266A241A9A8(__this, /*hidden argument*/NULL);
		// isUpSpeed = false;
		__this->set_isUpSpeed_16((bool)0);
		// prePosition = transform.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_0, /*hidden argument*/NULL);
		__this->set_prePosition_14(L_1);
		// }
		return;
	}
}
// System.Void LuoiCauScript::MakeInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuoiCauScript_MakeInstance_m63E2E241150FB5272066834646AED266A241A9A8 (LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(instance == null)
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_0 = ((LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_StaticFields*)il2cpp_codegen_static_fields_for(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = this;
		((LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_StaticFields*)il2cpp_codegen_static_fields_for(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_il2cpp_TypeInfo_var))->set_instance_4(__this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator LuoiCauScript::TimeUpSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LuoiCauScript_TimeUpSpeed_m30814A566A9C6D083F58845A6B08903E595CD78E (LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTimeUpSpeedU3Ed__21_t6822F484BFDF87E8C83F66A1650ECDFF800A234C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTimeUpSpeedU3Ed__21_t6822F484BFDF87E8C83F66A1650ECDFF800A234C * L_0 = (U3CTimeUpSpeedU3Ed__21_t6822F484BFDF87E8C83F66A1650ECDFF800A234C *)il2cpp_codegen_object_new(U3CTimeUpSpeedU3Ed__21_t6822F484BFDF87E8C83F66A1650ECDFF800A234C_il2cpp_TypeInfo_var);
		U3CTimeUpSpeedU3Ed__21__ctor_m513944078A64237D3F6AA421603656EDE08F7183(L_0, 0, /*hidden argument*/NULL);
		U3CTimeUpSpeedU3Ed__21_t6822F484BFDF87E8C83F66A1650ECDFF800A234C * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void LuoiCauScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuoiCauScript_Update_m449526CA9014F46CCA850E5A840747E27E5A3EE1 (LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896);
		s_Il2CppMethodInitialized = true;
	}
	{
		// checkKeoCauXong();
		LuoiCauScript_checkKeoCauXong_m01F42624C2EC532AC19C698DA089C8BB11C04082(__this, /*hidden argument*/NULL);
		// checkMoveOutCameraView();
		LuoiCauScript_checkMoveOutCameraView_m6828B4252897CFE658DB8542976EB08462805273(__this, /*hidden argument*/NULL);
		// if (CGameManager.instance.power || CGameManager.instance.powerCurrent)
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_0 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_power_24();
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_2 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_2);
		bool L_3 = L_2->get_powerCurrent_29();
		if (!L_3)
		{
			goto IL_002f;
		}
	}

IL_0024:
	{
		// speed = 4;
		__this->set_speed_5((4.0f));
	}

IL_002f:
	{
		// positionHalfHook = halfHook.gameObject.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_halfHook_19();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		__this->set_positionHalfHook_20(L_7);
		// scaleHalfHook = halfHook.gameObject.transform.localScale;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_halfHook_19();
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_10, /*hidden argument*/NULL);
		__this->set_scaleHalfHook_21(L_11);
		// if (GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction == TypeAction.KeoCau && !cameraOut)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_12);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_13;
		L_13 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_12, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_13);
		int32_t L_14 = L_13->get_typeAction_9();
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_00f9;
		}
	}
	{
		bool L_15 = __this->get_cameraOut_22();
		if (L_15)
		{
			goto IL_00f9;
		}
	}
	{
		// GamePlayScript.instance.PlaySound(5);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_16 = ((GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_16);
		GamePlayScript_PlaySound_m0828E124C4A965DB699619D1BC63ECDCAB4181A1(L_16, 5, /*hidden argument*/NULL);
		// hook.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_hook_18();
		NullCheck(L_17);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)0, /*hidden argument*/NULL);
		// halfHook.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_halfHook_19();
		NullCheck(L_18);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)1, /*hidden argument*/NULL);
		// if (positionHalfHook.x > 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_19 = __this->get_address_of_positionHalfHook_20();
		float L_20 = L_19->get_x_2();
		if ((!(((float)L_20) > ((float)(0.0f)))))
		{
			goto IL_00cb;
		}
	}
	{
		// scaleHalfHook.x = -0.2f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_21 = __this->get_address_of_scaleHalfHook_21();
		L_21->set_x_2((-0.200000003f));
		// }
		goto IL_00db;
	}

IL_00cb:
	{
		// scaleHalfHook.x = 0.2f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_22 = __this->get_address_of_scaleHalfHook_21();
		L_22->set_x_2((0.200000003f));
	}

IL_00db:
	{
		// halfHook.transform.localScale = scaleHalfHook;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_halfHook_19();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = __this->get_scaleHalfHook_21();
		NullCheck(L_24);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_24, L_25, /*hidden argument*/NULL);
		// cameraOut = false;
		__this->set_cameraOut_22((bool)0);
		// }
		return;
	}

IL_00f9:
	{
		// else if (GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction == TypeAction.Nghi)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_26);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_27;
		L_27 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_26, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_27);
		int32_t L_28 = L_27->get_typeAction_9();
		if (L_28)
		{
			goto IL_0127;
		}
	}
	{
		// hook.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_hook_18();
		NullCheck(L_29);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_29, (bool)1, /*hidden argument*/NULL);
		// halfHook.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_halfHook_19();
		NullCheck(L_30);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_30, (bool)0, /*hidden argument*/NULL);
	}

IL_0127:
	{
		// }
		return;
	}
}
// System.Void LuoiCauScript::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuoiCauScript_FixedUpdate_mBC991349D94D28A2E6DB7F41BEAC305302D1E8D4 (LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction == TypeAction.ThaCau)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_0);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_1;
		L_1 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_0, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = L_1->get_typeAction_9();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0034;
		}
	}
	{
		// GetComponent<Rigidbody2D>().velocity = velocity * speed;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3;
		L_3 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = __this->get_velocity_8();
		float L_5 = __this->get_speed_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_3, L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0034:
	{
		// else if(GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction == TypeAction.KeoCau)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_7);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_8;
		L_8 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_7, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_8);
		int32_t L_9 = L_8->get_typeAction_9();
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0096;
		}
	}
	{
		// if (cameraOut)
		bool L_10 = __this->get_cameraOut_22();
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		// GetComponent<Rigidbody2D>().velocity = velocity * speed * 3;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_11;
		L_11 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = __this->get_velocity_8();
		float L_13 = __this->get_speed_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_12, L_13, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_14, (3.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_11, L_15, /*hidden argument*/NULL);
		// }
		return;
	}

IL_007a:
	{
		// GetComponent<Rigidbody2D>().velocity = velocity * speed;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_16;
		L_16 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = __this->get_velocity_8();
		float L_18 = __this->get_speed_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_16, L_19, /*hidden argument*/NULL);
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void LuoiCauScript::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuoiCauScript_OnTriggerExit2D_m30F4B43501EB33B6FA1A8554B9B2975019906846 (LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Boolean LuoiCauScript::checkPositionOutBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LuoiCauScript_checkPositionOutBound_mEEE2A3C96C06079EDA936340D32F0448D7C89688 (LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return  gameObject.GetComponent<Renderer>().isVisible ;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1;
		L_1 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_0, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_2;
		L_2 = Renderer_get_isVisible_mE424F7FFEA9D78BC657B3F54FDFBE1EB8461CCB7(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void LuoiCauScript::checkTouchScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuoiCauScript_checkTouchScene_m6CCB10F940659DA4DAC88DFE18A515A8A3D813BF (LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction == TypeAction.Nghi)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_0);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_1;
		L_1 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_0, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = L_1->get_typeAction_9();
		if (L_2)
		{
			goto IL_009c;
		}
	}
	{
		// GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction = TypeAction.ThaCau;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_3);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_4;
		L_4 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_3, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set_typeAction_9(1);
		// velocity = new Vector2(transform.position.x - target.position.x,
		//                        transform.position.y - target.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_target_13();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = __this->get_target_13();
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_17), ((float)il2cpp_codegen_subtract((float)L_7, (float)L_10)), ((float)il2cpp_codegen_subtract((float)L_13, (float)L_16)), /*hidden argument*/NULL);
		__this->set_velocity_8(L_17);
		// velocity.Normalize();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_18 = __this->get_address_of_velocity_8();
		Vector2_Normalize_m0F1341493AD5F0B7DA4D504A44F52A1E2FFCCEC3((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_18, /*hidden argument*/NULL);
		// speed = speedBegin;
		float L_19 = __this->get_speedBegin_7();
		__this->set_speed_5(L_19);
		// OngGiaScript.instance.Attack();
		OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * L_20 = ((OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF_StaticFields*)il2cpp_codegen_static_fields_for(OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_20);
		OngGiaScript_Attack_m1384921774997B32F6FCABBC8084BD6FAAD97E00(L_20, /*hidden argument*/NULL);
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void LuoiCauScript::checkMoveOutCameraView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuoiCauScript_checkMoveOutCameraView_m6828B4252897CFE658DB8542976EB08462805273 (LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction == TypeAction.ThaCau) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_0);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_1;
		L_1 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_0, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = L_1->get_typeAction_9();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_004c;
		}
	}
	{
		// if(!checkPositionOutBound()) {
		bool L_3;
		L_3 = LuoiCauScript_checkPositionOutBound_mEEE2A3C96C06079EDA936340D32F0448D7C89688(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_004c;
		}
	}
	{
		// cameraOut = true;
		__this->set_cameraOut_22((bool)1);
		// GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction = TypeAction.KeoCau;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_4);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_5;
		L_5 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_4, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->set_typeAction_9(2);
		// velocity = -velocity;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = __this->get_velocity_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline(L_6, /*hidden argument*/NULL);
		__this->set_velocity_8(L_7);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void LuoiCauScript::checkKeoCauXong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuoiCauScript_checkKeoCauXong_m01F42624C2EC532AC19C698DA089C8BB11C04082 (LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(transform.localPosition.y > maxY && GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction == TypeAction.KeoCau) {
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		float L_3 = __this->get_maxY_12();
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_0065;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_4);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_5;
		L_5 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_4, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_5);
		int32_t L_6 = L_5->get_typeAction_9();
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0065;
		}
	}
	{
		// GetComponent<Rigidbody2D>().velocity = Vector2.zero;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_7;
		L_7 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		NullCheck(L_7);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_7, L_8, /*hidden argument*/NULL);
		// GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction = TypeAction.Nghi;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_9);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_10;
		L_10 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_9, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_10);
		L_10->set_typeAction_9(0);
		// transform.localPosition = prePosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_prePosition_14();
		NullCheck(L_11);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void LuoiCauScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuoiCauScript__ctor_m7F0EF33ADAA6AEB1D6BA13919EB364CE7423FA92 (LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MainMenuController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_Start_m12200CF2BEC3A5B0D153891CD5ADEC1F421A86AD (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74AA77852D505FA9B916F6C64BC0B0E44A1550B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// CGameManager.instance.DisableItems();
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_0 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		CGameManager_DisableItems_mD26CF3DA64E7EC30274422B1EF9E5A5B9A7BAE25(L_0, /*hidden argument*/NULL);
		// SoundControl();
		MainMenuController_SoundControl_m2C3739E8B9C9000DA3A0EB23D2D1B0F7A6469788(__this, /*hidden argument*/NULL);
		// MusicControl();
		MainMenuController_MusicControl_m97CDA2765EF3BCA84D2B9704FC7951C15AAF9024(__this, /*hidden argument*/NULL);
		// SetButtonMusic();
		MainMenuController_SetButtonMusic_m07D7B33AFB7D5E4D31A5097C20CC64019EFD8510(__this, /*hidden argument*/NULL);
		// SetButtonSound();
		MainMenuController_SetButtonSound_mFEB6A59B1F56CE364A03D392807F9D799AC42D83(__this, /*hidden argument*/NULL);
		// if (PlayerPrefs.GetInt("MaxLevel") != 0)
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralA74AA77852D505FA9B916F6C64BC0B0E44A1550B, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		// buttonContinue.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_buttonContinue_4();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0052;
	}

IL_0046:
	{
		// buttonContinue.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_buttonContinue_4();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_4;
		L_4 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_009c;
		}
	}
	{
		// UnityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_5 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_5, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, /*hidden argument*/NULL);
		__this->set_UnityPlayer_17(L_5);
		// currentActivity = UnityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_6 = __this->get_UnityPlayer_17();
		NullCheck(L_6);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_7;
		L_7 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_6, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		__this->set_currentActivity_16(L_7);
		// context = currentActivity.Call<AndroidJavaObject>("getApplicationContext");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8 = __this->get_currentActivity_16();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9;
		L_9 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_8);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_10;
		L_10 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_8, _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9, L_9, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		__this->set_context_18(L_10);
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void MainMenuController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_Update_m9AFD37FB3510723959EEF01EE363A3B8F2222B6B (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBACE4D07BB0A29D0173C9957B995A6344F25D564);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		// if (doubleBackToExitPressedOnce)
		bool L_1 = __this->get_doubleBackToExitPressedOnce_13();
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_0016:
	{
		// doubleBackToExitPressedOnce = true;
		__this->set_doubleBackToExitPressedOnce_13((bool)1);
		// showToastOnUiThread("Please click BACK again to exit");
		MainMenuController_showToastOnUiThread_mCAD10AE2216F4F340690D21BBD214A553D000D36(__this, _stringLiteralBACE4D07BB0A29D0173C9957B995A6344F25D564, /*hidden argument*/NULL);
		// StartCoroutine(DoubleClickExit());
		RuntimeObject* L_2;
		L_2 = MainMenuController_DoubleClickExit_m886CB24B10ECF5F88A744A118E13314612E6A604(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator MainMenuController::DoubleClickExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MainMenuController_DoubleClickExit_m886CB24B10ECF5F88A744A118E13314612E6A604 (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDoubleClickExitU3Ed__17_t43E75ED32E51D335B5E5EDAF488B58E8D3DAD1EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDoubleClickExitU3Ed__17_t43E75ED32E51D335B5E5EDAF488B58E8D3DAD1EE * L_0 = (U3CDoubleClickExitU3Ed__17_t43E75ED32E51D335B5E5EDAF488B58E8D3DAD1EE *)il2cpp_codegen_object_new(U3CDoubleClickExitU3Ed__17_t43E75ED32E51D335B5E5EDAF488B58E8D3DAD1EE_il2cpp_TypeInfo_var);
		U3CDoubleClickExitU3Ed__17__ctor_m9DE035CB6A0FA7B2623A49E00C2078E6E3F56EA8(L_0, 0, /*hidden argument*/NULL);
		U3CDoubleClickExitU3Ed__17_t43E75ED32E51D335B5E5EDAF488B58E8D3DAD1EE * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void MainMenuController::showToastOnUiThread(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_showToastOnUiThread_mCAD10AE2216F4F340690D21BBD214A553D000D36 (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, String_t* ___toastString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuController_showToast_mDD64D3132484D3AF312B0C53E2AFF50C06AB9EA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.toastString = toastString;
		String_t* L_0 = ___toastString0;
		__this->set_toastString_14(L_0);
		// currentActivity.Call("runOnUiThread", new AndroidJavaRunnable(showToast));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = __this->get_currentActivity_16();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * L_4 = (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 *)il2cpp_codegen_object_new(AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		AndroidJavaRunnable__ctor_m385F79E7C422595C3F8504D588807799A7CF4727(L_4, __this, (intptr_t)((intptr_t)MainMenuController_showToast_mDD64D3132484D3AF312B0C53E2AFF50C06AB9EA1_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_1);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_1, _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::showToast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_showToast_mDD64D3132484D3AF312B0C53E2AFF50C06AB9EA1 (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55C55F06F540638BB0C811FD4FFC86C7127043FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0F8DE350853B431995428CD2DCC9DAEF547030C);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * V_0 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_1 = NULL;
	MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * G_B2_0 = NULL;
	MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// Debug.Log(this + ": Running on UI thread");
		G_B1_0 = __this;
		if (__this)
		{
			G_B2_0 = __this;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_000d;
	}

IL_0008:
	{
		NullCheck(G_B2_0);
		String_t* L_0;
		L_0 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_0;
	}

IL_000d:
	{
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B3_0, _stringLiteralD0F8DE350853B431995428CD2DCC9DAEF547030C, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// AndroidJavaClass Toast = new AndroidJavaClass("android.widget.Toast");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_2 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_2, _stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C, /*hidden argument*/NULL);
		V_0 = L_2;
		// AndroidJavaObject javaString = new AndroidJavaObject("java.lang.String", toastString);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		String_t* L_5 = __this->get_toastString_14();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_6 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_6, _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_4, /*hidden argument*/NULL);
		V_1 = L_6;
		// AndroidJavaObject toast = Toast.CallStatic<AndroidJavaObject>("makeText", context, javaString, Toast.GetStatic<int>("LENGTH_SHORT"));
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_7 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_10 = __this->get_context_18();
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_9;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_12 = V_1;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_11;
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74(L_14, _stringLiteral55C55F06F540638BB0C811FD4FFC86C7127043FE, /*hidden argument*/AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_RuntimeMethod_var);
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_17);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_17);
		NullCheck(L_7);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_18;
		L_18 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2(L_7, _stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0, L_13, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		// toast.Call("show");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19;
		L_19 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_18);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_18, _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192, L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_Play_m379878E81EA6E14F8631F89556A878ECCB3C05B2 (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral939776A9D3774DE8EFB26EC22EA7ACA701791E02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74AA77852D505FA9B916F6C64BC0B0E44A1550B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD4E79D5BF1664C1E246E08132AFC9D0DA294C60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSound.PlayOneShot(pressButton);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSound_11();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_pressButton_12();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_0, L_1, /*hidden argument*/NULL);
		// CGameManager.instance.levelCurrent = 1;
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_2 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_2);
		L_2->set_levelCurrent_23(1);
		// PlayerPrefs.SetInt("Bomb", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralBD4E79D5BF1664C1E246E08132AFC9D0DA294C60, 0, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("MaxLevel", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralA74AA77852D505FA9B916F6C64BC0B0E44A1550B, 0, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("MaxDollar", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB, 0, /*hidden argument*/NULL);
		// Application.LoadLevel("NextLevel");
		Application_LoadLevel_m4DB7F36B66B70C1DB7F4F762A1DA554A028B135A(_stringLiteral939776A9D3774DE8EFB26EC22EA7ACA701791E02, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::PlayContinue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_PlayContinue_mB84E3B9D67A9A97A6C26CF1BACE9C9496FABFDFA (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74AA77852D505FA9B916F6C64BC0B0E44A1550B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// audioSound.PlayOneShot(pressButton);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSound_11();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_pressButton_12();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_0, L_1, /*hidden argument*/NULL);
		// int maxLevel = PlayerPrefs.GetInt("MaxLevel");
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralA74AA77852D505FA9B916F6C64BC0B0E44A1550B, /*hidden argument*/NULL);
		V_0 = L_2;
		// if(maxLevel == 0)
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		// CGameManager.instance.levelCurrent = 1;
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_4 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_4);
		L_4->set_levelCurrent_23(1);
		// Play();
		MainMenuController_Play_m379878E81EA6E14F8631F89556A878ECCB3C05B2(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0031:
	{
		// CGameManager.instance.levelCurrent = maxLevel + 1;
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_5 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		L_5->set_levelCurrent_23(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		// Application.LoadLevel("Shop");
		Application_LoadLevel_m4DB7F36B66B70C1DB7F4F762A1DA554A028B135A(_stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::Setting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_Setting_m1C817E6335E06937D4EEF460C707DEFE32EE34DD (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSound.PlayOneShot(pressButton);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSound_11();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_pressButton_12();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_0, L_1, /*hidden argument*/NULL);
		// animPanelSetting.SetBool("In", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_animPanelSetting_9();
		NullCheck(L_2);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_2, _stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8, (bool)1, /*hidden argument*/NULL);
		// animPanelSetting.SetBool("Out", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_animPanelSetting_9();
		NullCheck(L_3);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_3, _stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::ExitSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_ExitSetting_m449ECD5A6AF5B9DEEB02708816EBEF860B654CF3 (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSound.PlayOneShot(pressButton);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSound_11();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_pressButton_12();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_0, L_1, /*hidden argument*/NULL);
		// animPanelSetting.SetBool("Out", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_animPanelSetting_9();
		NullCheck(L_2);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_2, _stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::SoundControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SoundControl_m2C3739E8B9C9000DA3A0EB23D2D1B0F7A6469788 (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt("Sound") == 1)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}
	{
		// audioSound.enabled = true;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_audioSound_11();
		NullCheck(L_1);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// audioSound.enabled = false;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_audioSound_11();
		NullCheck(L_2);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::MusicControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_MusicControl_m97CDA2765EF3BCA84D2B9704FC7951C15AAF9024 (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt("Music") == 1)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}
	{
		// audioMusic.enabled = true;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_audioMusic_10();
		NullCheck(L_1);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// audioMusic.enabled = false;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_audioMusic_10();
		NullCheck(L_2);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::SetOnMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SetOnMusic_m8F7613CC97740516E94708DD6E16A2DD1E743B05 (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Music", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, 1, /*hidden argument*/NULL);
		// SetButtonMusic();
		MainMenuController_SetButtonMusic_m07D7B33AFB7D5E4D31A5097C20CC64019EFD8510(__this, /*hidden argument*/NULL);
		// MusicControl();
		MainMenuController_MusicControl_m97CDA2765EF3BCA84D2B9704FC7951C15AAF9024(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::SetOnSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SetOnSound_m66327E51B90C7409AFED9D300ECDD5913AABD0DA (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Sound", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, 1, /*hidden argument*/NULL);
		// SetButtonSound();
		MainMenuController_SetButtonSound_mFEB6A59B1F56CE364A03D392807F9D799AC42D83(__this, /*hidden argument*/NULL);
		// SoundControl();
		MainMenuController_SoundControl_m2C3739E8B9C9000DA3A0EB23D2D1B0F7A6469788(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::SetMuteMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SetMuteMusic_m30C385A541D60756B363FAE0A711301A04F73AF7 (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Music", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, 0, /*hidden argument*/NULL);
		// SetButtonMusic();
		MainMenuController_SetButtonMusic_m07D7B33AFB7D5E4D31A5097C20CC64019EFD8510(__this, /*hidden argument*/NULL);
		// MusicControl();
		MainMenuController_MusicControl_m97CDA2765EF3BCA84D2B9704FC7951C15AAF9024(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::SetMuteSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SetMuteSound_m1E9C974307E0E918CF3E13297D0EF39EA636EC0E (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Sound", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, 0, /*hidden argument*/NULL);
		// SetButtonSound();
		MainMenuController_SetButtonSound_mFEB6A59B1F56CE364A03D392807F9D799AC42D83(__this, /*hidden argument*/NULL);
		// SoundControl();
		MainMenuController_SoundControl_m2C3739E8B9C9000DA3A0EB23D2D1B0F7A6469788(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::SetButtonSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SetButtonSound_mFEB6A59B1F56CE364A03D392807F9D799AC42D83 (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt("Sound") == 1)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		// soundOnButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_soundOnButton_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// soundMuteButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_soundMuteButton_6();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0026:
	{
		// soundOnButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_soundOnButton_5();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// soundMuteButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_soundMuteButton_6();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::SetButtonMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_SetButtonMusic_m07D7B33AFB7D5E4D31A5097C20CC64019EFD8510 (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt("Music") == 1)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		// musicOnButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_musicOnButton_7();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// musicMuteButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_musicMuteButton_8();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0026:
	{
		// musicMuteButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_musicMuteButton_8();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// musicOnButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_musicOnButton_7();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController__ctor_m7EB6E7E153F9BBDA2B9153137BB10D6338666451 (MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void NextLevelController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextLevelController_Start_m50583F05ACAE2EA58EEDB1C7A3D3C670E5A22CE7 (NextLevelController_tB46CD096AFA1DAE33C9FDE07E971E3060A10CF11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C459A33B11E3AB83E34CD4E146B521BA8ED64F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// textTarget.text = "$" + CGameManager.instance.GetScoreTarget(CGameManager.instance.levelCurrent).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_textTarget_4();
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_1 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_2 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_levelCurrent_23();
		NullCheck(L_1);
		int32_t L_4;
		L_4 = CGameManager_GetScoreTarget_m5080D5BD98092F75E85EFB51D4178C22ECED2ED5(L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_6);
		// textLevel.text = "LEVEL " + CGameManager.instance.levelCurrent;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_textLevel_5();
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_8 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_8);
		int32_t* L_9 = L_8->get_address_of_levelCurrent_23();
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral4C459A33B11E3AB83E34CD4E146B521BA8ED64F5, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_11);
		// }
		return;
	}
}
// System.Void NextLevelController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextLevelController_Update_mA5C3C660AAEC411FBDDA6030C040BFAE5354F260 (NextLevelController_tB46CD096AFA1DAE33C9FDE07E971E3060A10CF11 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// timeDelay += UnityEngine.Time.deltaTime * 10;
		float L_0 = __this->get_timeDelay_6();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timeDelay_6(((float)il2cpp_codegen_add((float)L_0, (float)((float)il2cpp_codegen_multiply((float)L_1, (float)(10.0f))))));
		// if(timeDelay > 25)
		float L_2 = __this->get_timeDelay_6();
		if ((!(((float)L_2) > ((float)(25.0f)))))
		{
			goto IL_006b;
		}
	}
	{
		// int level = CGameManager.instance.levelCurrent;
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_3 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_levelCurrent_23();
		V_0 = L_4;
		// if(level <= 9)
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)9))))
		{
			goto IL_004c;
		}
	}
	{
		// Application.LoadLevel("Level" + level);
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, L_6, /*hidden argument*/NULL);
		Application_LoadLevel_m4DB7F36B66B70C1DB7F4F762A1DA554A028B135A(L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004c:
	{
		// int ran = Random.RandomRange(2, 9);
		int32_t L_8;
		L_8 = Random_RandomRange_mCB428074F55769762659348C65A7A87B88E522D6(2, ((int32_t)9), /*hidden argument*/NULL);
		V_1 = L_8;
		// Application.LoadLevel("Level" + ran);
		String_t* L_9;
		L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, L_9, /*hidden argument*/NULL);
		Application_LoadLevel_m4DB7F36B66B70C1DB7F4F762A1DA554A028B135A(L_10, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void NextLevelController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextLevelController__ctor_mA3EBD8A1E2611FB5F56986C97C4741A83CF29764 (NextLevelController_tB46CD096AFA1DAE33C9FDE07E971E3060A10CF11 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E (OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void OnStateChangeHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStateChangeHandler__ctor_m739DA124A33FF42AE0C0326CD86118012918BFB8 (OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void OnStateChangeHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStateChangeHandler_Invoke_m7FD411FB6C04F05E2B5012F726A18F4A1171428D (OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult OnStateChangeHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnStateChangeHandler_BeginInvoke_m64834848B78BDC3BB3547FC83BA770A03EC7F129 (OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void OnStateChangeHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStateChangeHandler_EndInvoke_m8C981D4BAA1E4A632171DD728D095E021042001C (OnStateChangeHandler_t7546A5052510F4963148EE9A8F5C81ED8B27D50E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OngGiaScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OngGiaScript_Start_mC5452BB8A32CEC47515A7D8E4820EA57370EAE9E (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MakeInstance();
		OngGiaScript_MakeInstance_m0686FE9651389BC1CEEEFD32F7D2BD6E751CD85A(__this, /*hidden argument*/NULL);
		// anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim_5(L_0);
		// position = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		__this->set_position_7(L_2);
		// }
		return;
	}
}
// System.Void OngGiaScript::MakeInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OngGiaScript_MakeInstance_m0686FE9651389BC1CEEEFD32F7D2BD6E751CD85A (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(instance == null)
		OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * L_0 = ((OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF_StaticFields*)il2cpp_codegen_static_fields_for(OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = this;
		((OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF_StaticFields*)il2cpp_codegen_static_fields_for(OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF_il2cpp_TypeInfo_var))->set_instance_4(__this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void OngGiaScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OngGiaScript_Update_mE5873CCF020FFA6539AD417FDF75F969D0D246EB (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method)
{
	{
		// KeoCau();
		OngGiaScript_KeoCau_m89BDF78207DA8E70A811DD309FD4E04692A7F1E1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OngGiaScript::KeoCau()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OngGiaScript_KeoCau_m89BDF78207DA8E70A811DD309FD4E04692A7F1E1 (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB16B4B524C163162FF5B125579A2E4D7114B9ABD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction == TypeAction.KeoCau)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_0);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_1;
		L_1 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_0, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = L_1->get_typeAction_9();
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0058;
		}
	}
	{
		// if((LuoiCauScript.instance.speed < 1.5f) && !CGameManager.instance.power)
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_3 = ((LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_StaticFields*)il2cpp_codegen_static_fields_for(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_3);
		float L_4 = L_3->get_speed_5();
		if ((!(((float)L_4) < ((float)(1.5f)))))
		{
			goto IL_0046;
		}
	}
	{
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_5 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_5);
		bool L_6 = L_5->get_power_24();
		if (L_6)
		{
			goto IL_0046;
		}
	}
	{
		// anim.SetBool("PullHeavy", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_7 = __this->get_anim_5();
		NullCheck(L_7);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_7, _stringLiteralB16B4B524C163162FF5B125579A2E4D7114B9ABD, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0046:
	{
		// anim.SetBool("Pull", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_8 = __this->get_anim_5();
		NullCheck(L_8);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_8, _stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0058:
	{
		// else if(GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction == TypeAction.Nghi)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_9);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_10;
		L_10 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_9, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_10);
		int32_t L_11 = L_10->get_typeAction_9();
		if (L_11)
		{
			goto IL_0090;
		}
	}
	{
		// anim.SetBool("Pull", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_12 = __this->get_anim_5();
		NullCheck(L_12);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_12, _stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11, (bool)0, /*hidden argument*/NULL);
		// anim.SetBool("PullHeavy", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_13 = __this->get_anim_5();
		NullCheck(L_13);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_13, _stringLiteralB16B4B524C163162FF5B125579A2E4D7114B9ABD, (bool)0, /*hidden argument*/NULL);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void OngGiaScript::DropBomb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OngGiaScript_DropBomb_m5D572575C5EFA7DAC7C9EC84BB26E9990C12BF15 (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C92149A9B035A718607796CF5610BA129B52AA4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetBool("DropBomb", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_anim_5();
		NullCheck(L_0);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteral3C92149A9B035A718607796CF5610BA129B52AA4, (bool)1, /*hidden argument*/NULL);
		// StartCoroutine(StopDeopBomb());
		RuntimeObject* L_1;
		L_1 = OngGiaScript_StopDeopBomb_mAC4369D2C45F6E04A4ED65F1A47641B2557E95DC(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator OngGiaScript::StopDeopBomb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OngGiaScript_StopDeopBomb_mAC4369D2C45F6E04A4ED65F1A47641B2557E95DC (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStopDeopBombU3Ed__9_t2E4B1011602289F5F7C4F90DDD3FA53360BEE826_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStopDeopBombU3Ed__9_t2E4B1011602289F5F7C4F90DDD3FA53360BEE826 * L_0 = (U3CStopDeopBombU3Ed__9_t2E4B1011602289F5F7C4F90DDD3FA53360BEE826 *)il2cpp_codegen_object_new(U3CStopDeopBombU3Ed__9_t2E4B1011602289F5F7C4F90DDD3FA53360BEE826_il2cpp_TypeInfo_var);
		U3CStopDeopBombU3Ed__9__ctor_m7EAD4D722C03097A6897854363325EAB1738B12D(L_0, 0, /*hidden argument*/NULL);
		U3CStopDeopBombU3Ed__9_t2E4B1011602289F5F7C4F90DDD3FA53360BEE826 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void OngGiaScript::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OngGiaScript_Attack_m1384921774997B32F6FCABBC8084BD6FAAD97E00 (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetBool("Attack", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_anim_5();
		NullCheck(L_0);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, (bool)1, /*hidden argument*/NULL);
		// StartCoroutine(StopAttack());
		RuntimeObject* L_1;
		L_1 = OngGiaScript_StopAttack_mF20EA2BEC0A6D52A911B0A73444B978408D0A76C(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator OngGiaScript::StopAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OngGiaScript_StopAttack_mF20EA2BEC0A6D52A911B0A73444B978408D0A76C (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStopAttackU3Ed__11_tF747141683F19CAF709581EF8636DAA77D5B26A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStopAttackU3Ed__11_tF747141683F19CAF709581EF8636DAA77D5B26A5 * L_0 = (U3CStopAttackU3Ed__11_tF747141683F19CAF709581EF8636DAA77D5B26A5 *)il2cpp_codegen_object_new(U3CStopAttackU3Ed__11_tF747141683F19CAF709581EF8636DAA77D5B26A5_il2cpp_TypeInfo_var);
		U3CStopAttackU3Ed__11__ctor_m32FCEA9521A8B6FCB9F0B4511065D47F255C25A9(L_0, 0, /*hidden argument*/NULL);
		U3CStopAttackU3Ed__11_tF747141683F19CAF709581EF8636DAA77D5B26A5 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void OngGiaScript::Happy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OngGiaScript_Happy_m1E65893B0D0D40937C8C578782D91355EAEBD1C1 (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7B58FB86EB28E20130C1AE96B9DC7F4D1E134C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetBool("Happy", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_anim_5();
		NullCheck(L_0);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5, (bool)1, /*hidden argument*/NULL);
		// StartCoroutine(StopHappy());
		RuntimeObject* L_1;
		L_1 = OngGiaScript_StopHappy_mDEC0E58685C3302CA823B2599A8731AAEF1BEAB7(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// halo = Instantiate(Resources.Load("Halo"), position, Quaternion.identity) as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3;
		L_3 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteralA7B58FB86EB28E20130C1AE96B9DC7F4D1E134C7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_position_7();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_6;
		L_6 = Object_Instantiate_mADD3254CB5E6AB56FBB6964FE4B930F5187AB5AD(L_3, L_4, L_5, /*hidden argument*/NULL);
		__this->set_halo_6(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_6, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Collections.IEnumerator OngGiaScript::StopHappy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OngGiaScript_StopHappy_mDEC0E58685C3302CA823B2599A8731AAEF1BEAB7 (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStopHappyU3Ed__13_t361268E476733EBBAF65A69699F0D46AF5111CF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStopHappyU3Ed__13_t361268E476733EBBAF65A69699F0D46AF5111CF7 * L_0 = (U3CStopHappyU3Ed__13_t361268E476733EBBAF65A69699F0D46AF5111CF7 *)il2cpp_codegen_object_new(U3CStopHappyU3Ed__13_t361268E476733EBBAF65A69699F0D46AF5111CF7_il2cpp_TypeInfo_var);
		U3CStopHappyU3Ed__13__ctor_m5CC37A9E297FBA71E4699AC9CD73F23FA95C1606(L_0, 0, /*hidden argument*/NULL);
		U3CStopHappyU3Ed__13_t361268E476733EBBAF65A69699F0D46AF5111CF7 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void OngGiaScript::Angry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OngGiaScript_Angry_m014F2EFD9FED97D6E777F8A50069FAB23B02B33A (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAA93D0A1F1929ADF3FB6A0806931463C880F65);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetBool("Angry", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_anim_5();
		NullCheck(L_0);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteral5FAA93D0A1F1929ADF3FB6A0806931463C880F65, (bool)1, /*hidden argument*/NULL);
		// StartCoroutine(StopAngry());
		RuntimeObject* L_1;
		L_1 = OngGiaScript_StopAngry_mE6110CA1618D59E625BC48FFBBAC244AD4168EF8(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator OngGiaScript::StopAngry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OngGiaScript_StopAngry_mE6110CA1618D59E625BC48FFBBAC244AD4168EF8 (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStopAngryU3Ed__15_tC7DC4704812E3FB9B9BC0C8CE431D1E418CF79F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStopAngryU3Ed__15_tC7DC4704812E3FB9B9BC0C8CE431D1E418CF79F8 * L_0 = (U3CStopAngryU3Ed__15_tC7DC4704812E3FB9B9BC0C8CE431D1E418CF79F8 *)il2cpp_codegen_object_new(U3CStopAngryU3Ed__15_tC7DC4704812E3FB9B9BC0C8CE431D1E418CF79F8_il2cpp_TypeInfo_var);
		U3CStopAngryU3Ed__15__ctor_mB7B8347F67DDDD4FF05C5A94F3C495198F96F713(L_0, 0, /*hidden argument*/NULL);
		U3CStopAngryU3Ed__15_tC7DC4704812E3FB9B9BC0C8CE431D1E418CF79F8 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void OngGiaScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OngGiaScript__ctor_m89EA63E0070C4560DC00AE6607C6E7F2ABC10228 (OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PopupPanelScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopupPanelScript_Start_m47210C9E7BB8C0D1A1B326CC838BBCD4F1B15783 (PopupPanelScript_t5D3B719303C80F5988015D711361387D5CD04A0C * __this, const RuntimeMethod* method)
{
	{
		// scale = transform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_0, /*hidden argument*/NULL);
		__this->set_scale_4(L_1);
		// }
		return;
	}
}
// System.Void PopupPanelScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopupPanelScript_Update_mE2079544B439D6D2C021FC6E0023DA2AB3C19BAA (PopupPanelScript_t5D3B719303C80F5988015D711361387D5CD04A0C * __this, const RuntimeMethod* method)
{
	{
		// PanelScale();
		PopupPanelScript_PanelScale_m2834D11ADC7D0464AE53C795A90D3D831DA3A897(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PopupPanelScript::PanelScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopupPanelScript_PanelScale_m2834D11ADC7D0464AE53C795A90D3D831DA3A897 (PopupPanelScript_t5D3B719303C80F5988015D711361387D5CD04A0C * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float xScale = scale.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_scale_4();
		float L_1 = L_0->get_x_2();
		V_0 = L_1;
		// float yScale = scale.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = __this->get_address_of_scale_4();
		float L_3 = L_2->get_y_3();
		V_1 = L_3;
		// xScale += UnityEngine.Time.deltaTime * 2;
		float L_4 = V_0;
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_add((float)L_4, (float)((float)il2cpp_codegen_multiply((float)L_5, (float)(2.0f)))));
		// yScale += UnityEngine.Time.deltaTime * 2;
		float L_6 = V_1;
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_add((float)L_6, (float)((float)il2cpp_codegen_multiply((float)L_7, (float)(2.0f)))));
		// if(xScale > 1.5f)
		float L_8 = V_0;
		if ((!(((float)L_8) > ((float)(1.5f)))))
		{
			goto IL_0048;
		}
	}
	{
		// xScale = 1.5f;
		V_0 = (1.5f);
		// yScale = 1.5f;
		V_1 = (1.5f);
	}

IL_0048:
	{
		// scale.x = xScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = __this->get_address_of_scale_4();
		float L_10 = V_0;
		L_9->set_x_2(L_10);
		// scale.y = yScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = __this->get_address_of_scale_4();
		float L_12 = V_1;
		L_11->set_y_3(L_12);
		// transform.localScale = scale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = __this->get_scale_4();
		NullCheck(L_13);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_13, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PopupPanelScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopupPanelScript__ctor_m3000451C7A3D2AF9589161DE790FFFD7DA4DC1FB (PopupPanelScript_t5D3B719303C80F5988015D711361387D5CD04A0C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PowerScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerScript_Start_mEDB46208EDF542B8840423FF91E90B33264835CF (PowerScript_t7DCB9760ECD1E057FABE9C641C6920A08308D344 * __this, const RuntimeMethod* method)
{
	{
		// SetPrice();
		PowerScript_SetPrice_mE65DF037B47CF510667B875E6B90A085CCD0C114(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PowerScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerScript_Update_m83E6376D7BF8359B5E9A6E1E63761D99E4BFBF56 (PowerScript_t7DCB9760ECD1E057FABE9C641C6920A08308D344 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void PowerScript::SetPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerScript_SetPrice_mE65DF037B47CF510667B875E6B90A085CCD0C114 (PowerScript_t7DCB9760ECD1E057FABE9C641C6920A08308D344 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// price = Random.RandomRange(10, 70);
		int32_t L_0;
		L_0 = Random_RandomRange_mCB428074F55769762659348C65A7A87B88E522D6(((int32_t)10), ((int32_t)70), /*hidden argument*/NULL);
		__this->set_price_7(L_0);
		// textPrice.text = "$" + price;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_textPrice_6();
		int32_t* L_2 = __this->get_address_of_price_7();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void PowerScript::Buy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerScript_Buy_m1E822E8535ED4D2085DEDE62C2CD23D367A49250 (PowerScript_t7DCB9760ECD1E057FABE9C641C6920A08308D344 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int dollar = PlayerPrefs.GetInt("MaxDollar");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB, /*hidden argument*/NULL);
		V_0 = L_0;
		// PlayerPrefs.SetInt("MaxDollar", dollar - price);
		int32_t L_1 = V_0;
		int32_t L_2 = __this->get_price_7();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB, ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)), /*hidden argument*/NULL);
		// ShopController.instance.SetTextMoney();
		ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * L_3 = ((ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_StaticFields*)il2cpp_codegen_static_fields_for(ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_3);
		ShopController_SetTextMoney_m3B94366C8859B8A60E7E0DE07EBC3F0692306438(L_3, /*hidden argument*/NULL);
		// CGameManager.instance.power = true;
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_4 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_4);
		L_4->set_power_24((bool)1);
		// buttonNBuy.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_buttonNBuy_5();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// buttonBuy.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_buttonBuy_4();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PowerScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerScript__ctor_m04A341ABF1B0B88CD34244A2CDDA10D0D461D1AC (PowerScript_t7DCB9760ECD1E057FABE9C641C6920A08308D344 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ShopController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_Start_m55C7E8A993F5C4F493FC48EE067711BFC57246E9 (ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C459A33B11E3AB83E34CD4E146B521BA8ED64F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74AA77852D505FA9B916F6C64BC0B0E44A1550B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// CGameManager.instance.DisableItems();
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_0 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		CGameManager_DisableItems_mD26CF3DA64E7EC30274422B1EF9E5A5B9A7BAE25(L_0, /*hidden argument*/NULL);
		// UnityEngine.Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// MakeInstance();
		ShopController_MakeInstance_m2A2A9F9D840D607F5B7A4DBCFEDE8FD3D4F6431E(__this, /*hidden argument*/NULL);
		// RandomItem();
		ShopController_RandomItem_mAEDAF8BC27420311707DC3E77959F1EDF59883C3(__this, /*hidden argument*/NULL);
		// DisplayItems(1, 1);
		ShopController_DisplayItems_m5204134197EFA3522E9F7861C9942ECB24416CB9(__this, 1, 1, /*hidden argument*/NULL);
		// textLevel.text = "LEVEL " + PlayerPrefs.GetInt("MaxLevel");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_textLevel_5();
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralA74AA77852D505FA9B916F6C64BC0B0E44A1550B, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral4C459A33B11E3AB83E34CD4E146B521BA8ED64F5, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// SetTextMoney();
		ShopController_SetTextMoney_m3B94366C8859B8A60E7E0DE07EBC3F0692306438(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopController::MakeInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_MakeInstance_m2A2A9F9D840D607F5B7A4DBCFEDE8FD3D4F6431E (ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(instance == null)
		ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * L_0 = ((ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_StaticFields*)il2cpp_codegen_static_fields_for(ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = this;
		((ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_StaticFields*)il2cpp_codegen_static_fields_for(ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964_il2cpp_TypeInfo_var))->set_instance_4(__this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void ShopController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_Update_m75DF0BBB8D6309E284C869D63A5E068D786F8EED (ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKey(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Application.LoadLevel("MainMenu");
		Application_LoadLevel_m4DB7F36B66B70C1DB7F4F762A1DA554A028B135A(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void ShopController::SetTextMoney()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_SetTextMoney_m3B94366C8859B8A60E7E0DE07EBC3F0692306438 (ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// audioSound.PlayOneShot(pressButton);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSound_10();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_pressButton_11();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_0, L_1, /*hidden argument*/NULL);
		// textDollar.text = "$" + PlayerPrefs.GetInt("MaxDollar");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_textDollar_6();
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralDB210B7E55C0737CA25FBD16990FBBF702979DBB, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// }
		return;
	}
}
// System.Void ShopController::RandomItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_RandomItem_mAEDAF8BC27420311707DC3E77959F1EDF59883C3 (ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// for(int i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_002e;
	}

IL_0004:
	{
		// int count = 0;
		V_1 = 0;
		goto IL_0026;
	}

IL_0008:
	{
		// int ran = Random.RandomRange(1, 7);
		int32_t L_0;
		L_0 = Random_RandomRange_mCB428074F55769762659348C65A7A87B88E522D6(1, 7, /*hidden argument*/NULL);
		V_2 = L_0;
		// if (!CheckSame(ran))
		int32_t L_1 = V_2;
		bool L_2;
		L_2 = ShopController_CheckSame_m52EC97AA9EFD08C3F7FC8E09AD3D1DBF6BA752EC(__this, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		// randomCreateItem[i] = ran;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = __this->get_randomCreateItem_9();
		int32_t L_4 = V_0;
		int32_t L_5 = V_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_5);
		// count++;
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0026:
	{
		// while(count < 3)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)3)))
		{
			goto IL_0008;
		}
	}
	{
		// for(int i = 0; i < 3; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002e:
	{
		// for(int i = 0; i < 3; i++)
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean ShopController::CheckSame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShopController_CheckSame_m52EC97AA9EFD08C3F7FC8E09AD3D1DBF6BA752EC (ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * __this, int32_t ___m0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for(int i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// if (randomCreateItem[i] == m)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_randomCreateItem_9();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ___m0;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0011;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0011:
	{
		// for(int i = 0; i < 3; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0015:
	{
		// for(int i = 0; i < 3; i++)
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Void ShopController::DisplayItems(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_DisplayItems_m5204134197EFA3522E9F7861C9942ECB24416CB9 (ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * __this, int32_t ___position0, int32_t ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		// for(int i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_0077;
	}

IL_0004:
	{
		// Vector3 vector3 = new Vector3(0, 120 - 225*i, 0);
		int32_t L_0 = V_0;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), (0.0f), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)120), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)225), (int32_t)L_0)))))), (0.0f), /*hidden argument*/NULL);
		// string nameLoad = "Item" + randomCreateItem[i];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = __this->get_randomCreateItem_9();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		// instanceItems[i]= Instantiate(Resources.Load(nameLoad), vector3, Quaternion.identity) as GameObject;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = __this->get_instanceItems_8();
		int32_t L_6 = V_0;
		String_t* L_7 = V_2;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_8;
		L_8 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_11;
		L_11 = Object_Instantiate_mADD3254CB5E6AB56FBB6964FE4B930F5187AB5AD(L_8, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_11, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)));
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_11, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)));
		// instanceItems[i].transform.SetParent(panelShop, false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = __this->get_instanceItems_8();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = __this->get_panelShop_7();
		NullCheck(L_16);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_16, L_17, (bool)0, /*hidden argument*/NULL);
		// for(int i = 0; i < 3; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0077:
	{
		// for(int i = 0; i < 3; i++)
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ShopController::PlayLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController_PlayLevel_m3BA47C43C70EBF9E717D2B5C8CAF9B56E3FB6DB8 (ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral939776A9D3774DE8EFB26EC22EA7ACA701791E02);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSound.PlayOneShot(pressButton);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSound_10();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_pressButton_11();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_0, L_1, /*hidden argument*/NULL);
		// Application.LoadLevel("NextLevel");
		Application_LoadLevel_m4DB7F36B66B70C1DB7F4F762A1DA554A028B135A(_stringLiteral939776A9D3774DE8EFB26EC22EA7ACA701791E02, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController__ctor_m8F7837C4274D81D87B0F80181A8899F6B2F1D89C (ShopController_tFEF6D967D24B9F215E56061C179FC1C79DCAA964 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GameObject[] instanceItems = new GameObject[3];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_instanceItems_8(L_0);
		// int[] randomCreateItem = new int[3];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_randomCreateItem_9(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ShopItemSButtonScript::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemSButtonScript_OnPointerDown_m355CF427B0670F324C8CE2E187945F5F31CEB7A5 (ShopItemSButtonScript_t0EF612061D3DC46882D6CE404D0D21062DA61604 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral147C07FF2563EDE2A2FF40F3ECEC50F1FE96D671);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B65BEB206497163B21E95EBF13EEB3F9BD39C80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996B2FCAFD02EE4839D677CDCA3A170A00FA56FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD19D16FC49582C6579331D429D68F3622A1592D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(gameObject.name == "Button Power")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral996B2FCAFD02EE4839D677CDCA3A170A00FA56FF, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		// else if(gameObject.name == "Button Clover")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteral147C07FF2563EDE2A2FF40F3ECEC50F1FE96D671, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_005b;
		}
	}
	{
		// else if(gameObject.name == "Button Book")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteralD19D16FC49582C6579331D429D68F3622A1592D6, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_005b;
		}
	}
	{
		// else if(gameObject.name == "Button Bomb")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, _stringLiteral7B65BEB206497163B21E95EBF13EEB3F9BD39C80, /*hidden argument*/NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void ShopItemSButtonScript::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemSButtonScript_OnPointerUp_m82BB33C128431BDCBE2C1977CBE065D25BF0D5B2 (ShopItemSButtonScript_t0EF612061D3DC46882D6CE404D0D21062DA61604 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ShopItemSButtonScript_OnPointerUp_m82BB33C128431BDCBE2C1977CBE065D25BF0D5B2_RuntimeMethod_var)));
	}
}
// System.Void ShopItemSButtonScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemSButtonScript_Start_m8C898A95C3BE0EEAB4DAF390F92F2F5AB30653A1 (ShopItemSButtonScript_t0EF612061D3DC46882D6CE404D0D21062DA61604 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ShopItemSButtonScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemSButtonScript_Update_mEC88C06C44DB97FEC6877F447CFC1334240B78F3 (ShopItemSButtonScript_t0EF612061D3DC46882D6CE404D0D21062DA61604 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ShopItemSButtonScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemSButtonScript__ctor_m41CC81655CF6D4F3393A52864AF2A0A94196D6B2 (ShopItemSButtonScript_t0EF612061D3DC46882D6CE404D0D21062DA61604 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TNTScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TNTScript_Start_mAFDB25F3A1DF9DBC50FDF314E624E24929A7BBEB (TNTScript_tA03B0156AEA07E653A9364074F5F83C7556CA722 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TNTScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TNTScript_Update_mA66F86395F0C127787B7B30557506B457F54552B (TNTScript_tA03B0156AEA07E653A9364074F5F83C7556CA722 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TNTScript::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TNTScript_OnTriggerEnter2D_m3F023AEF571954E5245FD7AC27B1CCCB7996178C (TNTScript_tA03B0156AEA07E653A9364074F5F83C7556CA722 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B2E9606510F59B550CF96B80E0C9653E267DAB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name == "luoiCau")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00f5;
		}
	}
	{
		// fire.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_fire_4();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// GamePlayScript.instance.PlaySound(4);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_5 = ((GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_5);
		GamePlayScript_PlaySound_m0828E124C4A965DB699619D1BC63ECDCAB4181A1(L_5, 4, /*hidden argument*/NULL);
		// LuoiCauScript.instance.cameraOut = true;
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_6 = ((LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_StaticFields*)il2cpp_codegen_static_fields_for(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_6);
		L_6->set_cameraOut_22((bool)1);
		// GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction = TypeAction.KeoCau;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_7);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_8;
		L_8 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_7, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_8);
		L_8->set_typeAction_9(2);
		// GameObject.Find("luoiCau").GetComponent<LuoiCauScript>().velocity = -GameObject.Find("luoiCau").GetComponent<LuoiCauScript>().velocity * 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604, /*hidden argument*/NULL);
		NullCheck(L_9);
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_10;
		L_10 = GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290(L_9, /*hidden argument*/GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604, /*hidden argument*/NULL);
		NullCheck(L_11);
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_12;
		L_12 = GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290(L_11, /*hidden argument*/GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290_RuntimeMethod_var);
		NullCheck(L_12);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = L_12->get_velocity_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline(L_13, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_14, (2.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->set_velocity_8(L_15);
		// GameObject.Find("luoiCau").GetComponent<LuoiCauScript>().speed -= this.speed;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604, /*hidden argument*/NULL);
		NullCheck(L_16);
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_17;
		L_17 = GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290(L_16, /*hidden argument*/GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290_RuntimeMethod_var);
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_18 = L_17;
		NullCheck(L_18);
		float L_19 = L_18->get_speed_5();
		float L_20 = __this->get_speed_5();
		NullCheck(L_18);
		L_18->set_speed_5(((float)il2cpp_codegen_subtract((float)L_19, (float)L_20)));
		// vector3 = gameObject.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		__this->set_vector3_6(L_23);
		// Instantiate(Resources.Load("TNTFire"), vector3, Quaternion.identity);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_24;
		L_24 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteralB1B2E9606510F59B550CF96B80E0C9653E267DAB, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = __this->get_vector3_6();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26;
		L_26 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_27;
		L_27 = Object_Instantiate_mADD3254CB5E6AB56FBB6964FE4B930F5187AB5AD(L_24, L_25, L_26, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_28, /*hidden argument*/NULL);
		// Destroy(fire, 0.5f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_fire_4();
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_29, (0.5f), /*hidden argument*/NULL);
	}

IL_00f5:
	{
		// }
		return;
	}
}
// System.Void TNTScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TNTScript__ctor_mBC1735D775497C7E9369C6DA0057DB65C234EEDA (TNTScript_tA03B0156AEA07E653A9364074F5F83C7556CA722 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TextScoreScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextScoreScript_Start_mDA84E374035EDE7EF3FC8598C8C902B9FDAA917E (TextScoreScript_t83E71EF2C771F0C0936963F7F7B4E940F27FA9E5 * __this, const RuntimeMethod* method)
{
	{
		// position = transform.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_0, /*hidden argument*/NULL);
		__this->set_position_4(L_1);
		// scale = transform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_2, /*hidden argument*/NULL);
		__this->set_scale_5(L_3);
		// }
		return;
	}
}
// System.Void TextScoreScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextScoreScript_Update_m8B8DD7D8C1CF2AA3F9AE178DF7A7556104A206B8 (TextScoreScript_t83E71EF2C771F0C0936963F7F7B4E940F27FA9E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextScoreScript_t83E71EF2C771F0C0936963F7F7B4E940F27FA9E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// txtScore.text = "$"+ score.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_txtScore_6();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((TextScoreScript_t83E71EF2C771F0C0936963F7F7B4E940F27FA9E5_StaticFields*)il2cpp_codegen_static_fields_for(TextScoreScript_t83E71EF2C771F0C0936963F7F7B4E940F27FA9E5_il2cpp_TypeInfo_var))->get_address_of_score_7()), /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// TextMove();
		TextScoreScript_TextMove_m9336CB238868BA5D928819B340F90162B3E66BAA(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TextScoreScript::TextMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextScoreScript_TextMove_m9336CB238868BA5D928819B340F90162B3E66BAA (TextScoreScript_t83E71EF2C771F0C0936963F7F7B4E940F27FA9E5 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// float x = position.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_position_4();
		float L_1 = L_0->get_x_2();
		V_0 = L_1;
		// float y = position.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = __this->get_address_of_position_4();
		float L_3 = L_2->get_y_3();
		V_1 = L_3;
		// float xScale = scale.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_scale_5();
		float L_5 = L_4->get_x_2();
		V_2 = L_5;
		// float yScale = scale.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of_scale_5();
		float L_7 = L_6->get_y_3();
		V_3 = L_7;
		// if (x > -500)
		float L_8 = V_0;
		if ((!(((float)L_8) > ((float)(-500.0f)))))
		{
			goto IL_0056;
		}
	}
	{
		// x += x * UnityEngine.Time.deltaTime * 2;
		float L_9 = V_0;
		float L_10 = V_0;
		float L_11;
		L_11 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_add((float)L_9, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), (float)(2.0f)))));
		// position.x = x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = __this->get_address_of_position_4();
		float L_13 = V_0;
		L_12->set_x_2(L_13);
		// }
		goto IL_008a;
	}

IL_0056:
	{
		// xScale -= UnityEngine.Time.deltaTime * 4;
		float L_14 = V_2;
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_subtract((float)L_14, (float)((float)il2cpp_codegen_multiply((float)L_15, (float)(4.0f)))));
		// scale.x = xScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_16 = __this->get_address_of_scale_5();
		float L_17 = V_2;
		L_16->set_x_2(L_17);
		// yScale -= UnityEngine.Time.deltaTime * 4;
		float L_18 = V_3;
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_3 = ((float)il2cpp_codegen_subtract((float)L_18, (float)((float)il2cpp_codegen_multiply((float)L_19, (float)(4.0f)))));
		// scale.y = yScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_20 = __this->get_address_of_scale_5();
		float L_21 = V_3;
		L_20->set_y_3(L_21);
	}

IL_008a:
	{
		// if (y < 450)
		float L_22 = V_1;
		if ((!(((float)L_22) < ((float)(450.0f)))))
		{
			goto IL_00b0;
		}
	}
	{
		// y += y * UnityEngine.Time.deltaTime * 2;
		float L_23 = V_1;
		float L_24 = V_1;
		float L_25;
		L_25 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_add((float)L_23, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_24, (float)L_25)), (float)(2.0f)))));
		// position.y = y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_26 = __this->get_address_of_position_4();
		float L_27 = V_1;
		L_26->set_y_3(L_27);
		// }
		goto IL_00e4;
	}

IL_00b0:
	{
		// xScale += UnityEngine.Time.deltaTime * 0.4f;
		float L_28 = V_2;
		float L_29;
		L_29 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_add((float)L_28, (float)((float)il2cpp_codegen_multiply((float)L_29, (float)(0.400000006f)))));
		// scale.x = xScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_30 = __this->get_address_of_scale_5();
		float L_31 = V_2;
		L_30->set_x_2(L_31);
		// yScale += UnityEngine.Time.deltaTime * 0.4f;
		float L_32 = V_3;
		float L_33;
		L_33 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_3 = ((float)il2cpp_codegen_add((float)L_32, (float)((float)il2cpp_codegen_multiply((float)L_33, (float)(0.400000006f)))));
		// scale.y = yScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_34 = __this->get_address_of_scale_5();
		float L_35 = V_3;
		L_34->set_y_3(L_35);
	}

IL_00e4:
	{
		// transform.localScale = scale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = __this->get_scale_5();
		NullCheck(L_36);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_36, L_37, /*hidden argument*/NULL);
		// transform.localPosition = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = __this->get_position_4();
		NullCheck(L_38);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_38, L_39, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TextScoreScript::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextScoreScript_OnTriggerEnter2D_m12B3801957C464BA5293A3130860898A3B26B823 (TextScoreScript_t83E71EF2C771F0C0936963F7F7B4E940F27FA9E5 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF950E2165E3670EE0518B31FA6CE6B4DE05EAE9F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.tag == "scoreObject")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralF950E2165E3670EE0518B31FA6CE6B4DE05EAE9F, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// GamePlayScript.instance.ScoreZoomEffect();
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_3 = ((GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_3);
		GamePlayScript_ScoreZoomEffect_mB3E9426DBC2BEC92298CF1281C6FA42E1E220ED7(L_3, /*hidden argument*/NULL);
		// GamePlayScript.instance.SetScoreText();
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_4 = ((GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_4);
		GamePlayScript_SetScoreText_m697631F1256D03CCD5D865B5C7674D00E385A03E(L_4, /*hidden argument*/NULL);
		// Destroy(gameObject, 0.4f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_5, (0.400000006f), /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void TextScoreScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextScoreScript__ctor_mC8E498DEFED4AEB93CE8CCC25CDBC75153CAB9D9 (TextScoreScript_t83E71EF2C771F0C0936963F7F7B4E940F27FA9E5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ThuyenScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThuyenScript_Start_mAEFCC347ED7817A2E5140DC76C24569E99A66CBA (ThuyenScript_t454C091DB63BCCCBCA234189566AB5B0DF52652E * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ThuyenScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThuyenScript_Update_m68A6A870472EFBD49641EC11DC77797A054DC5B8 (ThuyenScript_t454C091DB63BCCCBCA234189566AB5B0DF52652E * __this, const RuntimeMethod* method)
{
	{
		// if(ableMove)
		bool L_0 = __this->get_ableMove_13();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// move();
		ThuyenScript_move_mDCFD5089511A8909FEC850392F9D5F4533BEC91A(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void ThuyenScript::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThuyenScript_FixedUpdate_m68408373872E204FAC432A89FD22F9084380EB9B (ThuyenScript_t454C091DB63BCCCBCA234189566AB5B0DF52652E * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ThuyenScript::move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThuyenScript_move_mDCFD5089511A8909FEC850392F9D5F4533BEC91A (ThuyenScript_t454C091DB63BCCCBCA234189566AB5B0DF52652E * __this, const RuntimeMethod* method)
{
	{
		// dir.x = Input.acceleration.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_dir_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361(/*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		L_0->set_x_2(L_2);
		// dir *= Time.fixedDeltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_dir_11();
		float L_4;
		L_4 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_4, /*hidden argument*/NULL);
		__this->set_dir_11(L_5);
		// float tiltAroundZ = Input.acceleration.z * tiltAngle;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361(/*hidden argument*/NULL);
		float L_7 = __this->get_tiltAngle_8();
		// float tiltAroundX = Input.acceleration.x * tiltAngle;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361(/*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		float L_10 = __this->get_tiltAngle_8();
		// Quaternion target = Quaternion.Euler(tiltAroundX * 2, 90, 0 );
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)), (float)(2.0f))), (90.0f), (0.0f), /*hidden argument*/NULL);
		// transform.Translate(dir * speedAcceleration);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_dir_11();
		float L_14 = __this->get_speedAcceleration_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_12, L_15, /*hidden argument*/NULL);
		// if(this.transform.position.x <= minX){
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_x_2();
		float L_19 = __this->get_minX_10();
		if ((!(((float)L_18) <= ((float)L_19))))
		{
			goto IL_00c9;
		}
	}
	{
		// this.transform.position = new Vector3(minX,transform.position.y,transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_21 = __this->get_minX_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_28), L_21, L_24, L_27, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_20, L_28, /*hidden argument*/NULL);
	}

IL_00c9:
	{
		// if(this.transform.position.x >=  maxX){
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_x_2();
		float L_32 = __this->get_maxX_9();
		if ((!(((float)L_31) >= ((float)L_32))))
		{
			goto IL_0117;
		}
	}
	{
		// this.transform.position = new Vector3(maxX,transform.position.y,transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_34 = __this->get_maxX_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_35, /*hidden argument*/NULL);
		float L_37 = L_36.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_38, /*hidden argument*/NULL);
		float L_40 = L_39.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_41), L_34, L_37, L_40, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_33, L_41, /*hidden argument*/NULL);
	}

IL_0117:
	{
		// }
		return;
	}
}
// System.Void ThuyenScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThuyenScript__ctor_mAD56AC247606ED228C77ED78B4AFAF3D7447B04E (ThuyenScript_t454C091DB63BCCCBCA234189566AB5B0DF52652E * __this, const RuntimeMethod* method)
{
	{
		// public float speedAcceleration = 30.0F;
		__this->set_speedAcceleration_4((30.0f));
		// public float speedMax = 100.0F;
		__this->set_speedMax_5((100.0f));
		// public float speed = 20.0F;
		__this->set_speed_6((20.0f));
		// public float smooth = 2.0F;
		__this->set_smooth_7((2.0f));
		// public float tiltAngle = 60.0F;
		__this->set_tiltAngle_8((60.0f));
		// public bool ableMove = true;
		__this->set_ableMove_13((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VangScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VangScript_Start_mF0AFA7F6D26D0F113280230CFA1E80D514DFB2A7 (VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * __this, const RuntimeMethod* method)
{
	{
		// isMoveFollow = false;
		__this->set_isMoveFollow_4((bool)0);
		// StartCoroutine(RunEffect());
		RuntimeObject* L_0;
		L_0 = VangScript_RunEffect_m1F2900DA15CE76D92BFFEC8A3A4D3B0A2D175C9D(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VangScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VangScript_Update_mA32840505A54F4419FED742BACEE207A440968F1 (VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator VangScript::RunEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VangScript_RunEffect_m1F2900DA15CE76D92BFFEC8A3A4D3B0A2D175C9D (VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRunEffectU3Ed__8_tAD4129AD5FA4A9642D6970825422CBD58859C51B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRunEffectU3Ed__8_tAD4129AD5FA4A9642D6970825422CBD58859C51B * L_0 = (U3CRunEffectU3Ed__8_tAD4129AD5FA4A9642D6970825422CBD58859C51B *)il2cpp_codegen_object_new(U3CRunEffectU3Ed__8_tAD4129AD5FA4A9642D6970825422CBD58859C51B_il2cpp_TypeInfo_var);
		U3CRunEffectU3Ed__8__ctor_mF4D48B46A17B8775949E350259AA5485C177A43B(L_0, 0, /*hidden argument*/NULL);
		U3CRunEffectU3Ed__8_tAD4129AD5FA4A9642D6970825422CBD58859C51B * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator VangScript::StopEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VangScript_StopEffect_mAA528772DDF5574867531EF4F57366E98D7A98F0 (VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStopEffectU3Ed__9_tCE8C03F0B4712BB8CE9D2C4E717B50C674B65C55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStopEffectU3Ed__9_tCE8C03F0B4712BB8CE9D2C4E717B50C674B65C55 * L_0 = (U3CStopEffectU3Ed__9_tCE8C03F0B4712BB8CE9D2C4E717B50C674B65C55 *)il2cpp_codegen_object_new(U3CStopEffectU3Ed__9_tCE8C03F0B4712BB8CE9D2C4E717B50C674B65C55_il2cpp_TypeInfo_var);
		U3CStopEffectU3Ed__9__ctor_m6F42D95A7A2D96F885E0939C25C067E2A8D4CC82(L_0, 0, /*hidden argument*/NULL);
		U3CStopEffectU3Ed__9_tCE8C03F0B4712BB8CE9D2C4E717B50C674B65C55 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void VangScript::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VangScript_FixedUpdate_m5D2CBF33C241D93A4563B2B75AE8A98C3B1C4113 (VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604);
		s_Il2CppMethodInitialized = true;
	}
	{
		// moveFllowTarget(GameObject.Find("luoiCau").transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		VangScript_moveFllowTarget_mB2D654E2D8DBFDB0C7ABAE2F4ED6286319F8E7CA(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VangScript::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VangScript_OnTriggerEnter2D_m4559A23D13285D37E9BD173650C7F5E9D6B31599 (VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral491808D7EEB006360E8FF7C51AA2757B43D35E12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral803BD8341EDEE47FB612B8B9BF65BADFA3F1E1B2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.gameObject.name == "luoiCau"
		//     && GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction != TypeAction.KeoCau)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00d6;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_4);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_5;
		L_5 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_4, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_5);
		int32_t L_6 = L_5->get_typeAction_9();
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_00d6;
		}
	}
	{
		// isMoveFollow = true;
		__this->set_isMoveFollow_4((bool)1);
		// LuoiCauScript.instance.cameraOut = false;
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_7 = ((LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_StaticFields*)il2cpp_codegen_static_fields_for(LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_7);
		L_7->set_cameraOut_22((bool)0);
		// GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction = TypeAction.KeoCau;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_8);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_9;
		L_9 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_8, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_9);
		L_9->set_typeAction_9(2);
		// GameObject.Find("luoiCau").GetComponent<LuoiCauScript>().velocity = -GameObject.Find("luoiCau").GetComponent<LuoiCauScript>().velocity;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604, /*hidden argument*/NULL);
		NullCheck(L_10);
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_11;
		L_11 = GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290(L_10, /*hidden argument*/GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604, /*hidden argument*/NULL);
		NullCheck(L_12);
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_13;
		L_13 = GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290(L_12, /*hidden argument*/GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290_RuntimeMethod_var);
		NullCheck(L_13);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = L_13->get_velocity_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set_velocity_8(L_15);
		// GameObject.Find("luoiCau").GetComponent<LuoiCauScript>().speed -= this.speed;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral004B1F5D7F409B6B9049DD4671F537768A97E604, /*hidden argument*/NULL);
		NullCheck(L_16);
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_17;
		L_17 = GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290(L_16, /*hidden argument*/GameObject_GetComponent_TisLuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D_m9BBF823084615C105CC26CCCD857D66DB7BA9290_RuntimeMethod_var);
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_18 = L_17;
		NullCheck(L_18);
		float L_19 = L_18->get_speed_5();
		float L_20 = __this->get_speed_7();
		NullCheck(L_18);
		L_18->set_speed_5(((float)il2cpp_codegen_subtract((float)L_19, (float)L_20)));
		// if (GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction == TypeAction.KeoCau)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_21);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_22;
		L_22 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_21, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_22);
		int32_t L_23 = L_22->get_typeAction_9();
		// GamePlayScript.instance.itemSeclected = gameObject.name;
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_24 = ((GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		L_24->set_itemSeclected_36(L_26);
		// }
		return;
	}

IL_00d6:
	{
		// else if (other.tag == "fire")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_27 = ___other0;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_27, /*hidden argument*/NULL);
		bool L_29;
		L_29 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_28, _stringLiteral491808D7EEB006360E8FF7C51AA2757B43D35E12, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0124;
		}
	}
	{
		// position = gameObject.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		__this->set_position_8(L_32);
		// Instantiate(Resources.Load("GoldFire"), position, Quaternion.identity);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_33;
		L_33 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral803BD8341EDEE47FB612B8B9BF65BADFA3F1E1B2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = __this->get_position_8();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_35;
		L_35 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_36;
		L_36 = Object_Instantiate_mADD3254CB5E6AB56FBB6964FE4B930F5187AB5AD(L_33, L_34, L_35, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_37, /*hidden argument*/NULL);
	}

IL_0124:
	{
		// }
		return;
	}
}
// System.Void VangScript::moveFllowTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VangScript_moveFllowTarget_mB2D654E2D8DBFDB0C7ABAE2F4ED6286319F8E7CA (VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A23AA468FF756DFCDEB9586D68E0364288ADED8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral937CF4AA29E8BA035C35BA0901DC5699940902D9);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if(isMoveFollow)
		bool L_0 = __this->get_isMoveFollow_4();
		if (!L_0)
		{
			goto IL_029f;
		}
	}
	{
		// Quaternion tg = Quaternion.Euler(target.parent.transform.rotation.x,
		//                                  target.parent.transform.rotation.y,
		//                                   target.parent.transform.rotation.z * 40);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___target0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = ___target0;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = ___target0;
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_z_2();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_5, L_10, ((float)il2cpp_codegen_multiply((float)L_15, (float)(40.0f))), /*hidden argument*/NULL);
		V_0 = L_16;
		// transform.rotation = Quaternion.Slerp(transform.rotation, tg, 0.5f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_18, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21;
		L_21 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_19, L_20, (0.5f), /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_17, L_21, /*hidden argument*/NULL);
		// transform.position = new Vector3(target.position.x,
		//                                     target.position.y - gameObject.GetComponent<Collider2D>().bounds.size.y / 3,
		//                                     transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23 = ___target0;
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		float L_25 = L_24.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26 = ___target0;
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_30;
		L_30 = GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E(L_29, /*hidden argument*/GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E_RuntimeMethod_var);
		NullCheck(L_30);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_31;
		L_31 = Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8(L_30, /*hidden argument*/NULL);
		V_1 = L_31;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_33 = L_32.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_37), L_25, ((float)il2cpp_codegen_subtract((float)L_28, (float)((float)((float)L_33/(float)(3.0f))))), L_36, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_22, L_37, /*hidden argument*/NULL);
		// if (GameObject.Find("dayCau").GetComponent<DayCauScript>().typeAction == TypeAction.Nghi) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38;
		L_38 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral493C6E21659F33AF0A43381D0D1FABE581F91896, /*hidden argument*/NULL);
		NullCheck(L_38);
		DayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF * L_39;
		L_39 = GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641(L_38, /*hidden argument*/GameObject_GetComponent_TisDayCauScript_t6AE00B1282E403EFDBAA837E7812BBFC2381D5CF_mE813967CCBF7E5FE3DE975872E38917A77A23641_RuntimeMethod_var);
		NullCheck(L_39);
		int32_t L_40 = L_39->get_typeAction_9();
		if (L_40)
		{
			goto IL_029f;
		}
	}
	{
		// if(score > 0 && score <= 150)
		int32_t L_41 = __this->get_score_6();
		if ((((int32_t)L_41) <= ((int32_t)0)))
		{
			goto IL_010d;
		}
	}
	{
		int32_t L_42 = __this->get_score_6();
		if ((((int32_t)L_42) > ((int32_t)((int32_t)150))))
		{
			goto IL_010d;
		}
	}
	{
		// GamePlayScript.instance.PlaySound(1);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_43 = ((GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_43);
		GamePlayScript_PlaySound_m0828E124C4A965DB699619D1BC63ECDCAB4181A1(L_43, 1, /*hidden argument*/NULL);
		// }
		goto IL_013f;
	}

IL_010d:
	{
		// else if( score >150 && score <= 400)
		int32_t L_44 = __this->get_score_6();
		if ((((int32_t)L_44) <= ((int32_t)((int32_t)150))))
		{
			goto IL_0134;
		}
	}
	{
		int32_t L_45 = __this->get_score_6();
		if ((((int32_t)L_45) > ((int32_t)((int32_t)400))))
		{
			goto IL_0134;
		}
	}
	{
		// GamePlayScript.instance.PlaySound(2);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_46 = ((GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_46);
		GamePlayScript_PlaySound_m0828E124C4A965DB699619D1BC63ECDCAB4181A1(L_46, 2, /*hidden argument*/NULL);
		// }
		goto IL_013f;
	}

IL_0134:
	{
		// GamePlayScript.instance.PlaySound(3);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_47 = ((GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_StaticFields*)il2cpp_codegen_static_fields_for(GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_47);
		GamePlayScript_PlaySound_m0828E124C4A965DB699619D1BC63ECDCAB4181A1(L_47, 3, /*hidden argument*/NULL);
	}

IL_013f:
	{
		// if (gameObject.tag == "Stone")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48;
		L_48 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_48);
		String_t* L_49;
		L_49 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_48, /*hidden argument*/NULL);
		bool L_50;
		L_50 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_49, _stringLiteral937CF4AA29E8BA035C35BA0901DC5699940902D9, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_01f3;
		}
	}
	{
		// if (CGameManager.instance.bookStone)
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_51 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_51);
		bool L_52 = L_51->get_bookStone_25();
		if (!L_52)
		{
			goto IL_01a9;
		}
	}
	{
		// GameObject.Find("GamePlay").GetComponent<GamePlayScript>().score += this.score * 3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53;
		L_53 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207, /*hidden argument*/NULL);
		NullCheck(L_53);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_54;
		L_54 = GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28(L_53, /*hidden argument*/GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28_RuntimeMethod_var);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_55 = L_54;
		NullCheck(L_55);
		int32_t L_56 = L_55->get_score_12();
		int32_t L_57 = __this->get_score_6();
		NullCheck(L_55);
		L_55->set_score_12(((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_57, (int32_t)3)))));
		// GameObject.Find("GamePlay").GetComponent<GamePlayScript>().CreateScoreFly(this.score * 3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58;
		L_58 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207, /*hidden argument*/NULL);
		NullCheck(L_58);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_59;
		L_59 = GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28(L_58, /*hidden argument*/GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28_RuntimeMethod_var);
		int32_t L_60 = __this->get_score_6();
		NullCheck(L_59);
		GamePlayScript_CreateScoreFly_m996C8518B2A4BF73807C8F216BC63C3F01B246D4(L_59, ((int32_t)il2cpp_codegen_multiply((int32_t)L_60, (int32_t)3)), /*hidden argument*/NULL);
		// }
		goto IL_0294;
	}

IL_01a9:
	{
		// GameObject.Find("GamePlay").GetComponent<GamePlayScript>().score += this.score;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_61;
		L_61 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207, /*hidden argument*/NULL);
		NullCheck(L_61);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_62;
		L_62 = GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28(L_61, /*hidden argument*/GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28_RuntimeMethod_var);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_63 = L_62;
		NullCheck(L_63);
		int32_t L_64 = L_63->get_score_12();
		int32_t L_65 = __this->get_score_6();
		NullCheck(L_63);
		L_63->set_score_12(((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)L_65)));
		// GameObject.Find("GamePlay").GetComponent<GamePlayScript>().CreateScoreFly(this.score);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66;
		L_66 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207, /*hidden argument*/NULL);
		NullCheck(L_66);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_67;
		L_67 = GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28(L_66, /*hidden argument*/GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28_RuntimeMethod_var);
		int32_t L_68 = __this->get_score_6();
		NullCheck(L_67);
		GamePlayScript_CreateScoreFly_m996C8518B2A4BF73807C8F216BC63C3F01B246D4(L_67, L_68, /*hidden argument*/NULL);
		// OngGiaScript.instance.Angry();
		OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * L_69 = ((OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF_StaticFields*)il2cpp_codegen_static_fields_for(OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_69);
		OngGiaScript_Angry_m014F2EFD9FED97D6E777F8A50069FAB23B02B33A(L_69, /*hidden argument*/NULL);
		// }
		goto IL_0294;
	}

IL_01f3:
	{
		// else if (gameObject.tag == "Diamond" && CGameManager.instance.diamond)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70;
		L_70 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_70);
		String_t* L_71;
		L_71 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_70, /*hidden argument*/NULL);
		bool L_72;
		L_72 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_71, _stringLiteral1A23AA468FF756DFCDEB9586D68E0364288ADED8, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_0259;
		}
	}
	{
		CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * L_73 = ((CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_StaticFields*)il2cpp_codegen_static_fields_for(CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_73);
		bool L_74 = L_73->get_diamond_27();
		if (!L_74)
		{
			goto IL_0259;
		}
	}
	{
		// GameObject.Find("GamePlay").GetComponent<GamePlayScript>().score += this.score  +100;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_75;
		L_75 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207, /*hidden argument*/NULL);
		NullCheck(L_75);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_76;
		L_76 = GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28(L_75, /*hidden argument*/GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28_RuntimeMethod_var);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_77 = L_76;
		NullCheck(L_77);
		int32_t L_78 = L_77->get_score_12();
		int32_t L_79 = __this->get_score_6();
		NullCheck(L_77);
		L_77->set_score_12(((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)((int32_t)100))))));
		// GameObject.Find("GamePlay").GetComponent<GamePlayScript>().CreateScoreFly(this.score + 100);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_80;
		L_80 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207, /*hidden argument*/NULL);
		NullCheck(L_80);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_81;
		L_81 = GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28(L_80, /*hidden argument*/GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28_RuntimeMethod_var);
		int32_t L_82 = __this->get_score_6();
		NullCheck(L_81);
		GamePlayScript_CreateScoreFly_m996C8518B2A4BF73807C8F216BC63C3F01B246D4(L_81, ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)((int32_t)100))), /*hidden argument*/NULL);
		// }
		goto IL_0294;
	}

IL_0259:
	{
		// GameObject.Find("GamePlay").GetComponent<GamePlayScript>().score += this.score;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_83;
		L_83 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207, /*hidden argument*/NULL);
		NullCheck(L_83);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_84;
		L_84 = GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28(L_83, /*hidden argument*/GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28_RuntimeMethod_var);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_85 = L_84;
		NullCheck(L_85);
		int32_t L_86 = L_85->get_score_12();
		int32_t L_87 = __this->get_score_6();
		NullCheck(L_85);
		L_85->set_score_12(((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)L_87)));
		// GameObject.Find("GamePlay").GetComponent<GamePlayScript>().CreateScoreFly(this.score);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_88;
		L_88 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207, /*hidden argument*/NULL);
		NullCheck(L_88);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_89;
		L_89 = GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28(L_88, /*hidden argument*/GameObject_GetComponent_TisGamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE_m785629585447632843D0DA9F3297B6F4BB478A28_RuntimeMethod_var);
		int32_t L_90 = __this->get_score_6();
		NullCheck(L_89);
		GamePlayScript_CreateScoreFly_m996C8518B2A4BF73807C8F216BC63C3F01B246D4(L_89, L_90, /*hidden argument*/NULL);
	}

IL_0294:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_91;
		L_91 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_91, /*hidden argument*/NULL);
	}

IL_029f:
	{
		// }
		return;
	}
}
// System.Void VangScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VangScript__ctor_m0A9E1B8E860B3AC5CC20161CD7B9A980CDBDC716 (VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GamePlayScript/<Do>d__66::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoU3Ed__66__ctor_m2FC1EAD8C106323B6F391615CAF93B5631B502B6 (U3CDoU3Ed__66_t780AA168EB458EDCA78F8ABF70715154D4D5535F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GamePlayScript/<Do>d__66::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoU3Ed__66_System_IDisposable_Dispose_m0CB2E2049D1249B23A6E3B6313028A5BF7FDE57D (U3CDoU3Ed__66_t780AA168EB458EDCA78F8ABF70715154D4D5535F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GamePlayScript/<Do>d__66::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoU3Ed__66_MoveNext_mC32C548FB4924FE86B264632DE5B3EF0B85849E5 (U3CDoU3Ed__66_t780AA168EB458EDCA78F8ABF70715154D4D5535F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// bool add = true;
		__this->set_U3CaddU3E5__2_3((bool)1);
		goto IL_006e;
	}

IL_0027:
	{
		// yield return new WaitForSeconds (1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0040:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if(time > 0) {
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_time_14();
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		// time --;
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_7 = V_1;
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_time_14();
		NullCheck(L_7);
		L_7->set_time_14(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)));
	}

IL_005e:
	{
		// if(time <= 0 && !endgame) {
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_time_14();
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_12 = V_1;
		NullCheck(L_12);
		bool L_13 = L_12->get_endgame_29();
	}

IL_006e:
	{
		// while(add){
		bool L_14 = __this->get_U3CaddU3E5__2_3();
		if (L_14)
		{
			goto IL_0027;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object GamePlayScript/<Do>d__66::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDoU3Ed__66_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m68BB666F9AC9C9757DD57462A5C5222C5296ADCD (U3CDoU3Ed__66_t780AA168EB458EDCA78F8ABF70715154D4D5535F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GamePlayScript/<Do>d__66::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoU3Ed__66_System_Collections_IEnumerator_Reset_m944246B3891064E942F665885360235757BD074E (U3CDoU3Ed__66_t780AA168EB458EDCA78F8ABF70715154D4D5535F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDoU3Ed__66_System_Collections_IEnumerator_Reset_m944246B3891064E942F665885360235757BD074E_RuntimeMethod_var)));
	}
}
// System.Object GamePlayScript/<Do>d__66::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDoU3Ed__66_System_Collections_IEnumerator_get_Current_mA7DE9D8036CE5CC5461CFD4A530F3BA3A7EE9EEF (U3CDoU3Ed__66_t780AA168EB458EDCA78F8ABF70715154D4D5535F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void GamePlayScript/<ScoreZoomOut>d__69::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScoreZoomOutU3Ed__69__ctor_m2C630ABA9CA8EE744882D20D0A645C7A4A2BB740 (U3CScoreZoomOutU3Ed__69_tCFC04555FC9576F724D6EEBC5614C866CF5B3E5D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GamePlayScript/<ScoreZoomOut>d__69::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScoreZoomOutU3Ed__69_System_IDisposable_Dispose_mBF27BB29E6C9219AD4DEA75590861EE33F6B41E3 (U3CScoreZoomOutU3Ed__69_tCFC04555FC9576F724D6EEBC5614C866CF5B3E5D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GamePlayScript/<ScoreZoomOut>d__69::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CScoreZoomOutU3Ed__69_MoveNext_m5B70673EA1293F420589E687D9E089CD58716802 (U3CScoreZoomOutU3Ed__69_tCFC04555FC9576F724D6EEBC5614C866CF5B3E5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18E6316ADA637DB2A17BD50EEDBE17672A060DED);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// animPanelPlay.SetBool("Zoom", false);
		GamePlayScript_t9906D09DDBFD3088F5E51DBC0EEBAAE70428FADE * L_5 = V_1;
		NullCheck(L_5);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = L_5->get_animPanelPlay_25();
		NullCheck(L_6);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_6, _stringLiteral18E6316ADA637DB2A17BD50EEDBE17672A060DED, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GamePlayScript/<ScoreZoomOut>d__69::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CScoreZoomOutU3Ed__69_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB34AE5A791457EA4BEA938DD5CA2998654A5D271 (U3CScoreZoomOutU3Ed__69_tCFC04555FC9576F724D6EEBC5614C866CF5B3E5D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GamePlayScript/<ScoreZoomOut>d__69::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScoreZoomOutU3Ed__69_System_Collections_IEnumerator_Reset_m4350A28773B5B2AAEC368D5FED616DF8E1B7482B (U3CScoreZoomOutU3Ed__69_tCFC04555FC9576F724D6EEBC5614C866CF5B3E5D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CScoreZoomOutU3Ed__69_System_Collections_IEnumerator_Reset_m4350A28773B5B2AAEC368D5FED616DF8E1B7482B_RuntimeMethod_var)));
	}
}
// System.Object GamePlayScript/<ScoreZoomOut>d__69::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CScoreZoomOutU3Ed__69_System_Collections_IEnumerator_get_Current_m731D8FE1D20389A71F5D177B918276F19E3032B6 (U3CScoreZoomOutU3Ed__69_tCFC04555FC9576F724D6EEBC5614C866CF5B3E5D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void LuoiCauScript/<TimeUpSpeed>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeUpSpeedU3Ed__21__ctor_m513944078A64237D3F6AA421603656EDE08F7183 (U3CTimeUpSpeedU3Ed__21_t6822F484BFDF87E8C83F66A1650ECDFF800A234C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void LuoiCauScript/<TimeUpSpeed>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeUpSpeedU3Ed__21_System_IDisposable_Dispose_m21DAB49631AD34464851C593949A93D3C986F9B3 (U3CTimeUpSpeedU3Ed__21_t6822F484BFDF87E8C83F66A1650ECDFF800A234C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean LuoiCauScript/<TimeUpSpeed>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTimeUpSpeedU3Ed__21_MoveNext_mFA6025AF0B0ABB19E8DA066EDE9EA8BD15F13C59 (U3CTimeUpSpeedU3Ed__21_t6822F484BFDF87E8C83F66A1650ECDFF800A234C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// if(isUpSpeed)
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get_isUpSpeed_16();
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// timeUpSpeed = timeUpSpeed - 1;
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_6 = V_1;
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->get_timeUpSpeed_17();
		NullCheck(L_6);
		L_6->set_timeUpSpeed_17(((float)il2cpp_codegen_subtract((float)L_8, (float)(1.0f))));
		// if(timeUpSpeed <= 0)
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->get_timeUpSpeed_17();
		if ((!(((float)L_10) <= ((float)(0.0f)))))
		{
			goto IL_004c;
		}
	}
	{
		// isUpSpeed = false;
		LuoiCauScript_t7AF2A92F16D915EB003D8D067F84CDA9837EF57D * L_11 = V_1;
		NullCheck(L_11);
		L_11->set_isUpSpeed_16((bool)0);
	}

IL_004c:
	{
		// yield return new WaitForSeconds (1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_12 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_12, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0065:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while(true){
		goto IL_001e;
	}
}
// System.Object LuoiCauScript/<TimeUpSpeed>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTimeUpSpeedU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD732B650634B09F5CE7AB2E48759693BC2B7277A (U3CTimeUpSpeedU3Ed__21_t6822F484BFDF87E8C83F66A1650ECDFF800A234C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void LuoiCauScript/<TimeUpSpeed>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeUpSpeedU3Ed__21_System_Collections_IEnumerator_Reset_m51CEE60074B01CEB1302FA6A9109EBC9CD88542D (U3CTimeUpSpeedU3Ed__21_t6822F484BFDF87E8C83F66A1650ECDFF800A234C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTimeUpSpeedU3Ed__21_System_Collections_IEnumerator_Reset_m51CEE60074B01CEB1302FA6A9109EBC9CD88542D_RuntimeMethod_var)));
	}
}
// System.Object LuoiCauScript/<TimeUpSpeed>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTimeUpSpeedU3Ed__21_System_Collections_IEnumerator_get_Current_m47FFBE39014D77D9BB214CA2794D9BD9AC2AE4BC (U3CTimeUpSpeedU3Ed__21_t6822F484BFDF87E8C83F66A1650ECDFF800A234C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void MainMenuController/<DoubleClickExit>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoubleClickExitU3Ed__17__ctor_m9DE035CB6A0FA7B2623A49E00C2078E6E3F56EA8 (U3CDoubleClickExitU3Ed__17_t43E75ED32E51D335B5E5EDAF488B58E8D3DAD1EE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MainMenuController/<DoubleClickExit>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoubleClickExitU3Ed__17_System_IDisposable_Dispose_mB525D63EDAA4ECA3344704AA61E9305741397043 (U3CDoubleClickExitU3Ed__17_t43E75ED32E51D335B5E5EDAF488B58E8D3DAD1EE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MainMenuController/<DoubleClickExit>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoubleClickExitU3Ed__17_MoveNext_mF3270BE8AFDF0B7D4ADCED4C2AF48F01D96DF178 (U3CDoubleClickExitU3Ed__17_t43E75ED32E51D335B5E5EDAF488B58E8D3DAD1EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (1.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// doubleBackToExitPressedOnce = false;
		MainMenuController_tB517623519398FBEBC46ED54C54C990158720384 * L_5 = V_1;
		NullCheck(L_5);
		L_5->set_doubleBackToExitPressedOnce_13((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object MainMenuController/<DoubleClickExit>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDoubleClickExitU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6F12821D685A94F6D4C0EB8D5FB90950C6FF4A3C (U3CDoubleClickExitU3Ed__17_t43E75ED32E51D335B5E5EDAF488B58E8D3DAD1EE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MainMenuController/<DoubleClickExit>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoubleClickExitU3Ed__17_System_Collections_IEnumerator_Reset_m64D9B7353F29EB32D07679A7F5E8CF442687CE9E (U3CDoubleClickExitU3Ed__17_t43E75ED32E51D335B5E5EDAF488B58E8D3DAD1EE * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDoubleClickExitU3Ed__17_System_Collections_IEnumerator_Reset_m64D9B7353F29EB32D07679A7F5E8CF442687CE9E_RuntimeMethod_var)));
	}
}
// System.Object MainMenuController/<DoubleClickExit>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDoubleClickExitU3Ed__17_System_Collections_IEnumerator_get_Current_mED70F99694E6E89FA6B1A8A6B7BA90382AF89B58 (U3CDoubleClickExitU3Ed__17_t43E75ED32E51D335B5E5EDAF488B58E8D3DAD1EE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void OngGiaScript/<StopAngry>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopAngryU3Ed__15__ctor_mB7B8347F67DDDD4FF05C5A94F3C495198F96F713 (U3CStopAngryU3Ed__15_tC7DC4704812E3FB9B9BC0C8CE431D1E418CF79F8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void OngGiaScript/<StopAngry>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopAngryU3Ed__15_System_IDisposable_Dispose_mE7FC1A1601CD2C015CFB92394B106F146F8A8D35 (U3CStopAngryU3Ed__15_tC7DC4704812E3FB9B9BC0C8CE431D1E418CF79F8 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean OngGiaScript/<StopAngry>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStopAngryU3Ed__15_MoveNext_mCD9E2F03DF2FC4871D9893939A72C9B5FEA9B6CF (U3CStopAngryU3Ed__15_tC7DC4704812E3FB9B9BC0C8CE431D1E418CF79F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAA93D0A1F1929ADF3FB6A0806931463C880F65);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// anim.SetBool("Angry", false);
		OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * L_5 = V_1;
		NullCheck(L_5);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = L_5->get_anim_5();
		NullCheck(L_6);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_6, _stringLiteral5FAA93D0A1F1929ADF3FB6A0806931463C880F65, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object OngGiaScript/<StopAngry>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStopAngryU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7EA7A8A7E2772A84BA8D900823209C7996491799 (U3CStopAngryU3Ed__15_tC7DC4704812E3FB9B9BC0C8CE431D1E418CF79F8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void OngGiaScript/<StopAngry>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopAngryU3Ed__15_System_Collections_IEnumerator_Reset_m9134CEBA89B48DA8DBF763905ED838A77F2B4D61 (U3CStopAngryU3Ed__15_tC7DC4704812E3FB9B9BC0C8CE431D1E418CF79F8 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStopAngryU3Ed__15_System_Collections_IEnumerator_Reset_m9134CEBA89B48DA8DBF763905ED838A77F2B4D61_RuntimeMethod_var)));
	}
}
// System.Object OngGiaScript/<StopAngry>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStopAngryU3Ed__15_System_Collections_IEnumerator_get_Current_mCDBB9E4E875FA9106DB5FC51BEA623B0CBEC2356 (U3CStopAngryU3Ed__15_tC7DC4704812E3FB9B9BC0C8CE431D1E418CF79F8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void OngGiaScript/<StopAttack>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopAttackU3Ed__11__ctor_m32FCEA9521A8B6FCB9F0B4511065D47F255C25A9 (U3CStopAttackU3Ed__11_tF747141683F19CAF709581EF8636DAA77D5B26A5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void OngGiaScript/<StopAttack>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopAttackU3Ed__11_System_IDisposable_Dispose_m7410EF478CCB39117C5E8951D82B04DA101B473E (U3CStopAttackU3Ed__11_tF747141683F19CAF709581EF8636DAA77D5B26A5 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean OngGiaScript/<StopAttack>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStopAttackU3Ed__11_MoveNext_m868601272BBB9A7F32F4409B181075173151312C (U3CStopAttackU3Ed__11_tF747141683F19CAF709581EF8636DAA77D5B26A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (1.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// anim.SetBool("Attack", false);
		OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * L_5 = V_1;
		NullCheck(L_5);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = L_5->get_anim_5();
		NullCheck(L_6);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_6, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object OngGiaScript/<StopAttack>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStopAttackU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC3BDE22AE5A105B8E14044285E9E38F45AB1FFFA (U3CStopAttackU3Ed__11_tF747141683F19CAF709581EF8636DAA77D5B26A5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void OngGiaScript/<StopAttack>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopAttackU3Ed__11_System_Collections_IEnumerator_Reset_mF904056B58D7179D46EDC0B07BFABFDF2DB603A1 (U3CStopAttackU3Ed__11_tF747141683F19CAF709581EF8636DAA77D5B26A5 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStopAttackU3Ed__11_System_Collections_IEnumerator_Reset_mF904056B58D7179D46EDC0B07BFABFDF2DB603A1_RuntimeMethod_var)));
	}
}
// System.Object OngGiaScript/<StopAttack>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStopAttackU3Ed__11_System_Collections_IEnumerator_get_Current_m5D2E6E69CF87AF7392F56C7757B9CFE06959CCBA (U3CStopAttackU3Ed__11_tF747141683F19CAF709581EF8636DAA77D5B26A5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void OngGiaScript/<StopDeopBomb>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopDeopBombU3Ed__9__ctor_m7EAD4D722C03097A6897854363325EAB1738B12D (U3CStopDeopBombU3Ed__9_t2E4B1011602289F5F7C4F90DDD3FA53360BEE826 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void OngGiaScript/<StopDeopBomb>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopDeopBombU3Ed__9_System_IDisposable_Dispose_m4BACF053F33DDB6C209F05A8C95C5960071411A9 (U3CStopDeopBombU3Ed__9_t2E4B1011602289F5F7C4F90DDD3FA53360BEE826 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean OngGiaScript/<StopDeopBomb>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStopDeopBombU3Ed__9_MoveNext_m0570827B70B914A7935B2B2E8A17721D41D57230 (U3CStopDeopBombU3Ed__9_t2E4B1011602289F5F7C4F90DDD3FA53360BEE826 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C92149A9B035A718607796CF5610BA129B52AA4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(0.7f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (0.699999988f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// anim.SetBool("DropBomb", false);
		OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * L_5 = V_1;
		NullCheck(L_5);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = L_5->get_anim_5();
		NullCheck(L_6);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_6, _stringLiteral3C92149A9B035A718607796CF5610BA129B52AA4, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object OngGiaScript/<StopDeopBomb>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStopDeopBombU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m03D49E67B660045FC5DD1A1AFBD706C2F6D19E4E (U3CStopDeopBombU3Ed__9_t2E4B1011602289F5F7C4F90DDD3FA53360BEE826 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void OngGiaScript/<StopDeopBomb>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopDeopBombU3Ed__9_System_Collections_IEnumerator_Reset_m77CDB3507FFB438AC5A0B35771FF262946D8D733 (U3CStopDeopBombU3Ed__9_t2E4B1011602289F5F7C4F90DDD3FA53360BEE826 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStopDeopBombU3Ed__9_System_Collections_IEnumerator_Reset_m77CDB3507FFB438AC5A0B35771FF262946D8D733_RuntimeMethod_var)));
	}
}
// System.Object OngGiaScript/<StopDeopBomb>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStopDeopBombU3Ed__9_System_Collections_IEnumerator_get_Current_m8FE1EDC03AB35450405DC870942F479CAE60E51F (U3CStopDeopBombU3Ed__9_t2E4B1011602289F5F7C4F90DDD3FA53360BEE826 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void OngGiaScript/<StopHappy>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopHappyU3Ed__13__ctor_m5CC37A9E297FBA71E4699AC9CD73F23FA95C1606 (U3CStopHappyU3Ed__13_t361268E476733EBBAF65A69699F0D46AF5111CF7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void OngGiaScript/<StopHappy>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopHappyU3Ed__13_System_IDisposable_Dispose_m70B41C1041FC7CC424BD57E962D5E9676E830771 (U3CStopHappyU3Ed__13_t361268E476733EBBAF65A69699F0D46AF5111CF7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean OngGiaScript/<StopHappy>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStopHappyU3Ed__13_MoveNext_mC5458B46D47AD93A2F6B6249C4823F25D6945AF6 (U3CStopHappyU3Ed__13_t361268E476733EBBAF65A69699F0D46AF5111CF7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// anim.SetBool("Happy", false);
		OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * L_5 = V_1;
		NullCheck(L_5);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = L_5->get_anim_5();
		NullCheck(L_6);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_6, _stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5, (bool)0, /*hidden argument*/NULL);
		// Destroy(halo);
		OngGiaScript_tD79FDB9759D2606D25EA99D76805F9C1CC12C5DF * L_7 = V_1;
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7->get_halo_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_8, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object OngGiaScript/<StopHappy>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStopHappyU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m44AD527C34AEA30631BBAD78DEDC7B265F00E274 (U3CStopHappyU3Ed__13_t361268E476733EBBAF65A69699F0D46AF5111CF7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void OngGiaScript/<StopHappy>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopHappyU3Ed__13_System_Collections_IEnumerator_Reset_mBBDB2C00D88219EF291DCCEEEA0E4B6E77A96AC4 (U3CStopHappyU3Ed__13_t361268E476733EBBAF65A69699F0D46AF5111CF7 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStopHappyU3Ed__13_System_Collections_IEnumerator_Reset_mBBDB2C00D88219EF291DCCEEEA0E4B6E77A96AC4_RuntimeMethod_var)));
	}
}
// System.Object OngGiaScript/<StopHappy>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStopHappyU3Ed__13_System_Collections_IEnumerator_get_Current_mFAB2AFB52C42BC17622C7CD2673B940BDC93D173 (U3CStopHappyU3Ed__13_t361268E476733EBBAF65A69699F0D46AF5111CF7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void VangScript/<RunEffect>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunEffectU3Ed__8__ctor_mF4D48B46A17B8775949E350259AA5485C177A43B (U3CRunEffectU3Ed__8_tAD4129AD5FA4A9642D6970825422CBD58859C51B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void VangScript/<RunEffect>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunEffectU3Ed__8_System_IDisposable_Dispose_m57AA4D5F8AD8CD742CF90A7D304AB95AB06364B2 (U3CRunEffectU3Ed__8_tAD4129AD5FA4A9642D6970825422CBD58859C51B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean VangScript/<RunEffect>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRunEffectU3Ed__8_MoveNext_mADA6951437915C6F876D8D6F2092E705B67DD6D4 (U3CRunEffectU3Ed__8_tAD4129AD5FA4A9642D6970825422CBD58859C51B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int ran = Random.RandomRange(2, 5);
		int32_t L_4;
		L_4 = Random_RandomRange_mCB428074F55769762659348C65A7A87B88E522D6(2, 5, /*hidden argument*/NULL);
		V_2 = L_4;
		// yield return new WaitForSeconds(ran);
		int32_t L_5 = V_2;
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, ((float)((float)L_5)), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// anim.SetBool("Run", true);
		VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * L_7 = V_1;
		NullCheck(L_7);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_8 = L_7->get_anim_9();
		NullCheck(L_8);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_8, _stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC, (bool)1, /*hidden argument*/NULL);
		// StartCoroutine(StopEffect());
		VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * L_9 = V_1;
		VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * L_10 = V_1;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = VangScript_StopEffect_mAA528772DDF5574867531EF4F57366E98D7A98F0(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_12;
		L_12 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_9, L_11, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object VangScript/<RunEffect>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRunEffectU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3FBABFC1C7FB9B2EF182CC7CAA4A9BF88CB27A60 (U3CRunEffectU3Ed__8_tAD4129AD5FA4A9642D6970825422CBD58859C51B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void VangScript/<RunEffect>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunEffectU3Ed__8_System_Collections_IEnumerator_Reset_mB61DF5F62D7AA60C8A1D0A0C3CE5EAAEDB60FCAA (U3CRunEffectU3Ed__8_tAD4129AD5FA4A9642D6970825422CBD58859C51B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRunEffectU3Ed__8_System_Collections_IEnumerator_Reset_mB61DF5F62D7AA60C8A1D0A0C3CE5EAAEDB60FCAA_RuntimeMethod_var)));
	}
}
// System.Object VangScript/<RunEffect>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRunEffectU3Ed__8_System_Collections_IEnumerator_get_Current_m2A7166CE03E2B54EFB56D9EF49BEA073F8E75BC4 (U3CRunEffectU3Ed__8_tAD4129AD5FA4A9642D6970825422CBD58859C51B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void VangScript/<StopEffect>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopEffectU3Ed__9__ctor_m6F42D95A7A2D96F885E0939C25C067E2A8D4CC82 (U3CStopEffectU3Ed__9_tCE8C03F0B4712BB8CE9D2C4E717B50C674B65C55 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void VangScript/<StopEffect>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopEffectU3Ed__9_System_IDisposable_Dispose_m880AEE4D7B096AF23C9E013B45A29504F4A157ED (U3CStopEffectU3Ed__9_tCE8C03F0B4712BB8CE9D2C4E717B50C674B65C55 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean VangScript/<StopEffect>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStopEffectU3Ed__9_MoveNext_m25339CFBFEA36A73E1A3A158009E9E8BE60E6746 (U3CStopEffectU3Ed__9_tCE8C03F0B4712BB8CE9D2C4E717B50C674B65C55 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int ran = Random.RandomRange(1, 3);
		int32_t L_4;
		L_4 = Random_RandomRange_mCB428074F55769762659348C65A7A87B88E522D6(1, 3, /*hidden argument*/NULL);
		V_2 = L_4;
		// yield return new WaitForSeconds(ran);
		int32_t L_5 = V_2;
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, ((float)((float)L_5)), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// anim.SetBool("Run", false);
		VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * L_7 = V_1;
		NullCheck(L_7);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_8 = L_7->get_anim_9();
		NullCheck(L_8);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_8, _stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC, (bool)0, /*hidden argument*/NULL);
		// StartCoroutine(RunEffect());
		VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * L_9 = V_1;
		VangScript_t4B242CF7B7BAF733525D785BF6014D5A8672B818 * L_10 = V_1;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = VangScript_RunEffect_m1F2900DA15CE76D92BFFEC8A3A4D3B0A2D175C9D(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_12;
		L_12 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_9, L_11, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object VangScript/<StopEffect>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStopEffectU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB88BCE96673C523B8E262E3C815C66D9C1B79B81 (U3CStopEffectU3Ed__9_tCE8C03F0B4712BB8CE9D2C4E717B50C674B65C55 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void VangScript/<StopEffect>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopEffectU3Ed__9_System_Collections_IEnumerator_Reset_mCFFB7D99A0B4480A7DDC59A2AD9A8C8962C4871E (U3CStopEffectU3Ed__9_tCE8C03F0B4712BB8CE9D2C4E717B50C674B65C55 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStopEffectU3Ed__9_System_Collections_IEnumerator_Reset_mCFFB7D99A0B4480A7DDC59A2AD9A8C8962C4871E_RuntimeMethod_var)));
	}
}
// System.Object VangScript/<StopEffect>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStopEffectU3Ed__9_System_Collections_IEnumerator_get_Current_m1DD5E7D45D570C1832447B2D182AAC99C0400728 (U3CStopEffectU3Ed__9_tCE8C03F0B4712BB8CE9D2C4E717B50C674B65C55 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CGameManager_set_gameState_mB0EADC9FD8FB2106DF97AE6CFAFB640B7F3CEC87_inline (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public EnumStateGame gameState { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CgameStateU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CGameManager_set_score_m6AE28D0C89A4EE62C7C90F9FDEF5B553AA593361_inline (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int score { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CscoreU3Ek__BackingField_18(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CGameManager_set_timePlay_mEF7321ECA6FD78BB7B9DB69B9F8CBE679106E443_inline (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int timePlay { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CtimePlayU3Ek__BackingField_21(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CGameManager_set_typeLuoiCau_m4ECF536B67C785F4874C15C3B833EC113986A66F_inline (CGameManager_tC9F1C987DC7892C5746AE00DD4C7B5CB6AE8A204 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int typeLuoiCau { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CtypeLuoiCauU3Ek__BackingField_22(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___a0;
		float L_3 = L_2.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), ((-L_1)), ((-L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
