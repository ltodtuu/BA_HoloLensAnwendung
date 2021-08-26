#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// DrawingUtils.DrawBoundingBoxes
struct DrawBoundingBoxes_t5B83439701CBD420BEECFAE9F126E90FA1D08781;
// DrawingUtils.Texture2DExtension
struct Texture2DExtension_t20DB441D7A3C5B489A36107F966BF05CFF8F08BE;
// HoloLensForCV.ISensorFrameSinkGroup
struct ISensorFrameSinkGroup_tF5B6B0A94C69297B65BCE11AD1C48E9B9A2036E4;
// HoloLensForCV.InteropDeviceReceiver
struct InteropDeviceReceiver_t8F7F4847F49139840744A5EF41D07048541E8056;
// HoloLensForCV.MediaFrameSourceGroup
struct MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8;
// HoloLensForCV.SensorFrameStreamer
struct SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849;
// HoloLensForCV.SpatialPerception
struct SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577;
// HoloLensForCV.__IMediaFrameSourceGroupFactory
struct __IMediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B;
// IActivationFactory
struct Il2CppIActivationFactory;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>
struct Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>
struct Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>
struct Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>
struct Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>
struct Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>
struct Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>
struct Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>
struct Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>
struct Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>
struct Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>
struct Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>
struct Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C;
// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>
struct Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7;
// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>
struct Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E;
// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>
struct Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.IList`1<System.Byte>
struct IList_1_tC112D5EFC7DB01066BFD64B6EB0EAB4B2BA1DE10;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<YoloRuntime.BoundingBox>
struct List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tEFDFBE18E061A6065AB2FF735F1425FB59F919BC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t1359D75350E9D976BFA28AD96E417450DE277673;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Color[]
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.TextMesh
struct TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;
// UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE;
// UnityEngine.XR.WSA.Input.GestureRecognizer/GestureErrorDelegate
struct GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCanceledEventDelegate
struct HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCompletedEventDelegate
struct HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldStartedEventDelegate
struct HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCanceledEventDelegate
struct ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCompletedEventDelegate
struct ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationStartedEventDelegate
struct ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationUpdatedEventDelegate
struct ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCanceledEventDelegate
struct NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCompletedEventDelegate
struct NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationStartedEventDelegate
struct NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationUpdatedEventDelegate
struct NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A;
// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionEndedEventDelegate
struct RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B;
// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionStartedEventDelegate
struct RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214;
// UnityEngine.XR.WSA.Input.GestureRecognizer/TappedEventDelegate
struct TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F;
// Windows.Foundation.IAsyncAction
struct IAsyncAction_tF980B79DBC4BD4F9F262E473628FD971545C5109;
// YoloDetectionHoloLens.CvUtils
struct CvUtils_tDDE420F005D1E8CD9B8960D7885BA9F3C09624B4;
// YoloDetectionHoloLens.YoloDetection
struct YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170;
// YoloDetectionHoloLens.YoloDetection/<ConnectSocket>d__21
struct U3CConnectSocketU3Ed__21_t99138AC9287719D80B4741681665A8EADE3A77D5;
// YoloRuntime.BoundingBox
struct BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E;
// YoloRuntime.BoundingBox[]
struct BoundingBoxU5BU5D_t5B9F44BFB097826E449B05F7B253AF86C0F785C5;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t80AAA2E9B1A5ACE1A1B9B4E9708E673AC848FBF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tC112D5EFC7DB01066BFD64B6EB0EAB4B2BA1DE10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteropDeviceReceiver_t8F7F4847F49139840744A5EF41D07048541E8056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CConnectSocketU3Ed__21_t99138AC9287719D80B4741681665A8EADE3A77D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral091B5035885C00170FEC9ECF24224933E3DE3FCC;
IL2CPP_EXTERN_C String_t* _stringLiteral1EE609382901A262FB16D7B7B19630F034B77F12;
IL2CPP_EXTERN_C String_t* _stringLiteral2488D2EC38A36283EC47A4FA993159300A16ABE7;
IL2CPP_EXTERN_C String_t* _stringLiteral26A2991396F6FE0B6C703B5F7CCF1D7AA06BA0AB;
IL2CPP_EXTERN_C String_t* _stringLiteral2A50DDF9299C2BC22E5EE7CAE8D46440A8639A1E;
IL2CPP_EXTERN_C String_t* _stringLiteral30A75E68757E475E31D449625A4F95F654CB74E1;
IL2CPP_EXTERN_C String_t* _stringLiteral32C70CEBF110EEDB8637B5E875A6C94F1EF6E8C5;
IL2CPP_EXTERN_C String_t* _stringLiteral3CDFC97974C6F1A3BAFF59D51C8CCE0DE6FE48F6;
IL2CPP_EXTERN_C String_t* _stringLiteral50F3E52D0FF41B3145D9217D4B5325645210B7BF;
IL2CPP_EXTERN_C String_t* _stringLiteral5E227C150AA398EA5700EC62889C8707116B879E;
IL2CPP_EXTERN_C String_t* _stringLiteral6525F2E663E8D223C2F9041FEFDF2DBA6CA70D63;
IL2CPP_EXTERN_C String_t* _stringLiteral65EA01F22804D2263DA97B976E79E83FC5768B3D;
IL2CPP_EXTERN_C String_t* _stringLiteral68E0DCE54A9E2E87FCB590EC7B7E61E1B73EE778;
IL2CPP_EXTERN_C String_t* _stringLiteral851E13A65333F91428701953BA315C36D27D71EB;
IL2CPP_EXTERN_C String_t* _stringLiteral8AB5B342F3E264773622A8B0C6501A028824ADF2;
IL2CPP_EXTERN_C String_t* _stringLiteral8BBDDB4A037421A7B1E1B1BDD6447B03097F0DF1;
IL2CPP_EXTERN_C String_t* _stringLiteral8CB2237D0679CA88DB6464EAC60DA96345513964;
IL2CPP_EXTERN_C String_t* _stringLiteral8F341727B14D9D10A0DCE4584A1D0C6E23DE2C4D;
IL2CPP_EXTERN_C String_t* _stringLiteral94EFDD6F628EDA9C1AE893467C9652808443EF3E;
IL2CPP_EXTERN_C String_t* _stringLiteral9AD4BD96F2FC22067DBFC1E696668766CE873FA0;
IL2CPP_EXTERN_C String_t* _stringLiteral9D989E8D27DC9E0EC3389FC855F142C3D40F0C50;
IL2CPP_EXTERN_C String_t* _stringLiteral9E32521DD2F8B27B64FE869FDADFA53E7D976F56;
IL2CPP_EXTERN_C String_t* _stringLiteralA3E3318B0A3061F0557EEBF61E84AB99723AA21B;
IL2CPP_EXTERN_C String_t* _stringLiteralA7D2CDC2C8F8B6FF5B227F1E5310143E4C265E6B;
IL2CPP_EXTERN_C String_t* _stringLiteralAFCAC3549C932CB9C3E4BD4A62017327B7D7E039;
IL2CPP_EXTERN_C String_t* _stringLiteralC2B076BB0C995373D2FC212D6D2DEA8909EBE2FB;
IL2CPP_EXTERN_C String_t* _stringLiteralC771FFED510957F9B9CC4A08666469848B90D663;
IL2CPP_EXTERN_C String_t* _stringLiteralCA869464FCD7C463BB3078DEA53E273D9305656F;
IL2CPP_EXTERN_C String_t* _stringLiteralCCEB5663AFEC60D7FF60B0CCED845E69A6DB7373;
IL2CPP_EXTERN_C String_t* _stringLiteralCD92815BF6273ACBAF834B9FAED277C722068291;
IL2CPP_EXTERN_C String_t* _stringLiteralD39A47507BBE27C2A7948861847F3607EDA8E1BE;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDE4748660C68C578CE09DBF781372426E97DA31B;
IL2CPP_EXTERN_C String_t* _stringLiteralE49512524F47B4138D850C9D9D85972927281DA0;
IL2CPP_EXTERN_C String_t* _stringLiteralF3AAC50A98CC3831289E85EEB8C2E630FFA7DB99;
IL2CPP_EXTERN_C String_t* _stringLiteralF4B99F032C22B5BEC7A39B66BDC207F3390231A0;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mC172C98F4F0CF247C0880F1F05D557C9005F0FF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E_mA46FD375C487157DF3D2B54C53AD801DE2E3CC1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E_mAFCC6580E0480601D0ADE975F6C8A4AA676C81B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E_mAF69801E94737358106A53C7E841690872A864AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E_mC2779327E38A70A4E5AFE04497E71D9E972229D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4_m3C8FE7472A29499FE76AF56F312CD295CEEA1FB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086_mADDAB7C7E4CF02D2CE7DB7009E34332AB05D158B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4_m202E08614EAC7260259F7ED67E2CA5E8C6C5A2CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086_mE287B3539418CDDD25E13BCA833FC8A6B2F5A312_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m370D55FE9FF4E2AE42A6ABF701C630FFD51A5AE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m813FB5877ED872791AF4DE4D36E12BC4CEC71FF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mED2EEC7B719235F5482E8B620CB024B3AC567C8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_m6548CB329DD537D824051D169084C7FB1CD251D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4A70F555579FEDB39DDCEDC6265FDFADAD4C774B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m746A585FC72DCE28430CA2861BABACBBC39E8965_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m676738485DAF2EB7F8FCCCB098940619AAD1256A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m779E2C8DA57F6D6C703A22EEC269AD1B308197E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m6895A7A231540279E01A537649EB42814FD2671B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CConnectSocketU3Ed__21_System_Collections_IEnumerator_Reset_mD7DEA717FC1342C98DD690FF8A91535C41D98E15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YoloDetection_GestureRecognizer_Tapped_m36613AC9F634E60546F013B8E50AE989AFDD47C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t DrawBoundingBoxes_DrawBoxes_mBF91D848C6332C38633F6E64F2D9864AAEE605AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DrawBoundingBoxes_InitDrawBoundingBoxes_m7E3B2FEE87F65F6D8022A27E2CAE6D5B68A996D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Texture2DExtension_Line_mA1E0B540A88277013555C23E9B3355CEAE2CC96F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Texture2DExtension_TransparentTexture_m69BD7C2533E5B64B8BB217DBCD5878F3D9D52F8C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CConnectSocketU3Ed__21_MoveNext_m12EF0E1B460131A7AE42DA343AE4D471DDDC6833_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CConnectSocketU3Ed__21_System_Collections_IEnumerator_Reset_mD7DEA717FC1342C98DD690FF8A91535C41D98E15_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3COnApplicationQuitU3Ed__18_MoveNext_mBFA3020146C1436A0229EF0FD0BDB110A7209EBC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_MoveNext_mC4742EC564E8BB4518A13B1EA7FF65C1103D915C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__17_MoveNext_mEA3C34532E698E93497366121035D67C0FF078DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_MoveNext_mAAA32F4E6D9099355B27C411F95A135A7F890BF2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YoloDetection_ConnectSocket_m7E8DFE7099ECBF475A8BC8D23322AD17674FA469_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YoloDetection_GestureRecognizer_Tapped_m36613AC9F634E60546F013B8E50AE989AFDD47C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YoloDetection_InitializeHandler_m39D449D3810CE283420F77E7E0FD1605EFFA0673_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YoloDetection_OnApplicationQuit_m6A1736D565DEB45593ED0C16A19AE48A29A377F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YoloDetection_StartHoloLensMediaFrameSourceGroup_m6125D3DFC68D2683495149A91E4B5B2F28A305F7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YoloDetection_Start_m2213099EF893F1B0050F6CC12C9F4DD8383F6919_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YoloDetection_StopHoloLensMediaFrameSourceGroup_mD6B32FF012FC6FD8F3C3E35E12C2CBEF3FA6A933_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YoloDetection__ctor_m9A918BB846D7B59D28F1F51A24048E03014C9238_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncActionCompletedHandler_t609AD05A4860888E107296DA98829F161DA0A6A7_ComCallableWrapper;
struct IBoundingBoxClass_tD87A26227778A4583BFB754E6169E9E119275506;
struct ISensorFrameSinkGroup_tF5B6B0A94C69297B65BCE11AD1C48E9B9A2036E4;
struct __IInteropDeviceReceiverPublicNonVirtuals_tA33BD77BC7C4324954A222A63E80B8564B5283E8;
struct __IMediaFrameSourceGroupPublicNonVirtuals_t2AF40F8686B5E8E011733613FE80F10FC716ACAB;
struct __ISensorFrameStreamerPublicNonVirtuals_t8C9ECA5E465C3AB054CD0F0206FDAAD8573CB3B3;
struct __ISpatialPerceptionPublicNonVirtuals_t30DD9212F05E1C1DAA90C94A8347EFD4CDFB3FAD;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};

// HoloLensForCV.ISensorFrameSinkGroup
struct NOVTABLE ISensorFrameSinkGroup_tF5B6B0A94C69297B65BCE11AD1C48E9B9A2036E4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISensorFrameSinkGroup_U24__Stripped0_GetSensorFrameSink_mC9E479D9713BF26C4804E924A6B1E04396F90329() = 0;
};

// System.Object

// Windows.Foundation.IAsyncAction
struct NOVTABLE IAsyncAction_tF980B79DBC4BD4F9F262E473628FD971545C5109 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_put_Completed_mFA47FD762A357FA74B185A6CB2229B13A02B4F75(IAsyncActionCompletedHandler_t609AD05A4860888E107296DA98829F161DA0A6A7_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_get_Completed_mECC654248B45FBEA0BBCBD4BF8C1952E1D7313E1(IAsyncActionCompletedHandler_t609AD05A4860888E107296DA98829F161DA0A6A7_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_GetResults_m192BCF4CC6EE9E2E66722E3D2BFBBAEE124D7AD7() = 0;
};

// DrawingUtils.Texture2DExtension
struct  Texture2DExtension_t20DB441D7A3C5B489A36107F966BF05CFF8F08BE  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<YoloRuntime.BoundingBox>
struct  List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BoundingBoxU5BU5D_t5B9F44BFB097826E449B05F7B253AF86C0F785C5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591, ____items_1)); }
	inline BoundingBoxU5BU5D_t5B9F44BFB097826E449B05F7B253AF86C0F785C5* get__items_1() const { return ____items_1; }
	inline BoundingBoxU5BU5D_t5B9F44BFB097826E449B05F7B253AF86C0F785C5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BoundingBoxU5BU5D_t5B9F44BFB097826E449B05F7B253AF86C0F785C5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BoundingBoxU5BU5D_t5B9F44BFB097826E449B05F7B253AF86C0F785C5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591_StaticFields, ____emptyArray_5)); }
	inline BoundingBoxU5BU5D_t5B9F44BFB097826E449B05F7B253AF86C0F785C5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BoundingBoxU5BU5D_t5B9F44BFB097826E449B05F7B253AF86C0F785C5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BoundingBoxU5BU5D_t5B9F44BFB097826E449B05F7B253AF86C0F785C5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
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


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.__Il2CppComObject


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// YoloDetectionHoloLens.CvUtils
struct  CvUtils_tDDE420F005D1E8CD9B8960D7885BA9F3C09624B4  : public RuntimeObject
{
public:

public:
};


// YoloDetectionHoloLens.YoloDetection_<ConnectSocket>d__21
struct  U3CConnectSocketU3Ed__21_t99138AC9287719D80B4741681665A8EADE3A77D5  : public RuntimeObject
{
public:
	// System.Int32 YoloDetectionHoloLens.YoloDetection_<ConnectSocket>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object YoloDetectionHoloLens.YoloDetection_<ConnectSocket>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// YoloDetectionHoloLens.YoloDetection YoloDetectionHoloLens.YoloDetection_<ConnectSocket>d__21::<>4__this
	YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * ___U3CU3E4__this_2;
	// HoloLensForCV.InteropDeviceReceiver YoloDetectionHoloLens.YoloDetection_<ConnectSocket>d__21::<interopDeviceReceiver>5__2
	InteropDeviceReceiver_t8F7F4847F49139840744A5EF41D07048541E8056 * ___U3CinteropDeviceReceiverU3E5__2_3;
	// System.String YoloDetectionHoloLens.YoloDetection_<ConnectSocket>d__21::<textString>5__3
	String_t* ___U3CtextStringU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CConnectSocketU3Ed__21_t99138AC9287719D80B4741681665A8EADE3A77D5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CConnectSocketU3Ed__21_t99138AC9287719D80B4741681665A8EADE3A77D5, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CConnectSocketU3Ed__21_t99138AC9287719D80B4741681665A8EADE3A77D5, ___U3CU3E4__this_2)); }
	inline YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinteropDeviceReceiverU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CConnectSocketU3Ed__21_t99138AC9287719D80B4741681665A8EADE3A77D5, ___U3CinteropDeviceReceiverU3E5__2_3)); }
	inline InteropDeviceReceiver_t8F7F4847F49139840744A5EF41D07048541E8056 * get_U3CinteropDeviceReceiverU3E5__2_3() const { return ___U3CinteropDeviceReceiverU3E5__2_3; }
	inline InteropDeviceReceiver_t8F7F4847F49139840744A5EF41D07048541E8056 ** get_address_of_U3CinteropDeviceReceiverU3E5__2_3() { return &___U3CinteropDeviceReceiverU3E5__2_3; }
	inline void set_U3CinteropDeviceReceiverU3E5__2_3(InteropDeviceReceiver_t8F7F4847F49139840744A5EF41D07048541E8056 * value)
	{
		___U3CinteropDeviceReceiverU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinteropDeviceReceiverU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtextStringU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CConnectSocketU3Ed__21_t99138AC9287719D80B4741681665A8EADE3A77D5, ___U3CtextStringU3E5__3_4)); }
	inline String_t* get_U3CtextStringU3E5__3_4() const { return ___U3CtextStringU3E5__3_4; }
	inline String_t** get_address_of_U3CtextStringU3E5__3_4() { return &___U3CtextStringU3E5__3_4; }
	inline void set_U3CtextStringU3E5__3_4(String_t* value)
	{
		___U3CtextStringU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtextStringU3E5__3_4), (void*)value);
	}
};


// YoloRuntime.BoundingBox
struct  BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E  : public RuntimeObject
{
public:
	// System.String YoloRuntime.BoundingBox::<Label>k__BackingField
	String_t* ___U3CLabelU3Ek__BackingField_0;
	// System.Int32 YoloRuntime.BoundingBox::<TopLabel>k__BackingField
	int32_t ___U3CTopLabelU3Ek__BackingField_1;
	// System.Single YoloRuntime.BoundingBox::<X>k__BackingField
	float ___U3CXU3Ek__BackingField_2;
	// System.Single YoloRuntime.BoundingBox::<Y>k__BackingField
	float ___U3CYU3Ek__BackingField_3;
	// System.Single YoloRuntime.BoundingBox::<Height>k__BackingField
	float ___U3CHeightU3Ek__BackingField_4;
	// System.Single YoloRuntime.BoundingBox::<Width>k__BackingField
	float ___U3CWidthU3Ek__BackingField_5;
	// System.Single YoloRuntime.BoundingBox::<Confidence>k__BackingField
	float ___U3CConfidenceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CLabelU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E, ___U3CLabelU3Ek__BackingField_0)); }
	inline String_t* get_U3CLabelU3Ek__BackingField_0() const { return ___U3CLabelU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CLabelU3Ek__BackingField_0() { return &___U3CLabelU3Ek__BackingField_0; }
	inline void set_U3CLabelU3Ek__BackingField_0(String_t* value)
	{
		___U3CLabelU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLabelU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTopLabelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E, ___U3CTopLabelU3Ek__BackingField_1)); }
	inline int32_t get_U3CTopLabelU3Ek__BackingField_1() const { return ___U3CTopLabelU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CTopLabelU3Ek__BackingField_1() { return &___U3CTopLabelU3Ek__BackingField_1; }
	inline void set_U3CTopLabelU3Ek__BackingField_1(int32_t value)
	{
		___U3CTopLabelU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CXU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E, ___U3CXU3Ek__BackingField_2)); }
	inline float get_U3CXU3Ek__BackingField_2() const { return ___U3CXU3Ek__BackingField_2; }
	inline float* get_address_of_U3CXU3Ek__BackingField_2() { return &___U3CXU3Ek__BackingField_2; }
	inline void set_U3CXU3Ek__BackingField_2(float value)
	{
		___U3CXU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CYU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E, ___U3CYU3Ek__BackingField_3)); }
	inline float get_U3CYU3Ek__BackingField_3() const { return ___U3CYU3Ek__BackingField_3; }
	inline float* get_address_of_U3CYU3Ek__BackingField_3() { return &___U3CYU3Ek__BackingField_3; }
	inline void set_U3CYU3Ek__BackingField_3(float value)
	{
		___U3CYU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E, ___U3CHeightU3Ek__BackingField_4)); }
	inline float get_U3CHeightU3Ek__BackingField_4() const { return ___U3CHeightU3Ek__BackingField_4; }
	inline float* get_address_of_U3CHeightU3Ek__BackingField_4() { return &___U3CHeightU3Ek__BackingField_4; }
	inline void set_U3CHeightU3Ek__BackingField_4(float value)
	{
		___U3CHeightU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E, ___U3CWidthU3Ek__BackingField_5)); }
	inline float get_U3CWidthU3Ek__BackingField_5() const { return ___U3CWidthU3Ek__BackingField_5; }
	inline float* get_address_of_U3CWidthU3Ek__BackingField_5() { return &___U3CWidthU3Ek__BackingField_5; }
	inline void set_U3CWidthU3Ek__BackingField_5(float value)
	{
		___U3CWidthU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CConfidenceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E, ___U3CConfidenceU3Ek__BackingField_6)); }
	inline float get_U3CConfidenceU3Ek__BackingField_6() const { return ___U3CConfidenceU3Ek__BackingField_6; }
	inline float* get_address_of_U3CConfidenceU3Ek__BackingField_6() { return &___U3CConfidenceU3Ek__BackingField_6; }
	inline void set_U3CConfidenceU3Ek__BackingField_6(float value)
	{
		___U3CConfidenceU3Ek__BackingField_6 = value;
	}
};


// HoloLensForCV.InteropDeviceReceiver
struct  InteropDeviceReceiver_t8F7F4847F49139840744A5EF41D07048541E8056  : public Il2CppComObject
{
public:

public:
};

struct InteropDeviceReceiver_t8F7F4847F49139840744A5EF41D07048541E8056_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("HoloLensForCV.InteropDeviceReceiver"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}
};


// HoloLensForCV.SensorFrameStreamer
struct  SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849  : public Il2CppComObject
{
public:

public:
};

struct SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("HoloLensForCV.SensorFrameStreamer"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}
};


// HoloLensForCV.SpatialPerception
struct  SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577  : public Il2CppComObject
{
public:

public:
};

struct SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("HoloLensForCV.SpatialPerception"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<YoloRuntime.BoundingBox>
struct  Enumerator_t33CA2315FF3D74E9ADAD80F3BB4B3129553C76C1 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t33CA2315FF3D74E9ADAD80F3BB4B3129553C76C1, ___list_0)); }
	inline List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 * get_list_0() const { return ___list_0; }
	inline List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t33CA2315FF3D74E9ADAD80F3BB4B3129553C76C1, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t33CA2315FF3D74E9ADAD80F3BB4B3129553C76C1, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t33CA2315FF3D74E9ADAD80F3BB4B3129553C76C1, ___current_3)); }
	inline BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * get_current_3() const { return ___current_3; }
	inline BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_defaultContextAction_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct  TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F, ___m_task_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshaled_pinvoke
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshaled_com
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
};

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};

// HoloLensForCV.DeviceType
struct  DeviceType_t128020FCF42A03FD3E6BC4F98AC437F2B17ECCE6 
{
public:
	// System.Int32 HoloLensForCV.DeviceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceType_t128020FCF42A03FD3E6BC4F98AC437F2B17ECCE6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HoloLensForCV.MediaFrameSourceGroupType
struct  MediaFrameSourceGroupType_tD313583C232A5364AB10C88709EDEE0672705638 
{
public:
	// System.Int32 HoloLensForCV.MediaFrameSourceGroupType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaFrameSourceGroupType_tD313583C232A5364AB10C88709EDEE0672705638, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HoloLensForCV.SensorType
struct  SensorType_t61C3C6CE95FDA09A5F40396D7192A0B3FB80DD10 
{
public:
	// System.Int32 HoloLensForCV.SensorType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SensorType_t61C3C6CE95FDA09A5F40396D7192A0B3FB80DD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct  AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9, ___m_task_2)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct  AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_task_2)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshaled_pinvoke
{
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke ___m_coreState_1;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshaled_com
{
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com ___m_coreState_1;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;
};

// System.Threading.Tasks.Task
struct  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_15)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_18)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.GestureRecognizer
struct  GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.Input.GestureRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCanceled
	Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * ___HoldCanceled_1;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCompleted
	Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * ___HoldCompleted_2;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldStarted
	Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * ___HoldStarted_3;
	// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::Tapped
	Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * ___Tapped_4;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCanceled
	Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * ___ManipulationCanceled_5;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCompleted
	Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * ___ManipulationCompleted_6;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationStarted
	Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * ___ManipulationStarted_7;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationUpdated
	Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * ___ManipulationUpdated_8;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCanceled
	Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * ___NavigationCanceled_9;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCompleted
	Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * ___NavigationCompleted_10;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationStarted
	Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * ___NavigationStarted_11;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationUpdated
	Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * ___NavigationUpdated_12;
	// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionEnded
	Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * ___RecognitionEnded_13;
	// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionStarted
	Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * ___RecognitionStarted_14;
	// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::GestureError
	Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * ___GestureError_15;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCanceledEvent
	HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * ___HoldCanceledEvent_16;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCompletedEvent
	HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * ___HoldCompletedEvent_17;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldStartedEvent
	HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * ___HoldStartedEvent_18;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::TappedEvent
	TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * ___TappedEvent_19;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCanceledEvent
	ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * ___ManipulationCanceledEvent_20;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCompletedEvent
	ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * ___ManipulationCompletedEvent_21;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationStartedEvent
	ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * ___ManipulationStartedEvent_22;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationUpdatedEvent
	ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * ___ManipulationUpdatedEvent_23;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCanceledEvent
	NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * ___NavigationCanceledEvent_24;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCompletedEvent
	NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * ___NavigationCompletedEvent_25;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationStartedEvent
	NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * ___NavigationStartedEvent_26;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationUpdatedEvent
	NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * ___NavigationUpdatedEvent_27;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionEndedEvent
	RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * ___RecognitionEndedEvent_28;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionStartedEvent
	RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * ___RecognitionStartedEvent_29;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::GestureErrorEvent
	GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * ___GestureErrorEvent_30;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_HoldCanceled_1() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCanceled_1)); }
	inline Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * get_HoldCanceled_1() const { return ___HoldCanceled_1; }
	inline Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B ** get_address_of_HoldCanceled_1() { return &___HoldCanceled_1; }
	inline void set_HoldCanceled_1(Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * value)
	{
		___HoldCanceled_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCanceled_1), (void*)value);
	}

	inline static int32_t get_offset_of_HoldCompleted_2() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCompleted_2)); }
	inline Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * get_HoldCompleted_2() const { return ___HoldCompleted_2; }
	inline Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 ** get_address_of_HoldCompleted_2() { return &___HoldCompleted_2; }
	inline void set_HoldCompleted_2(Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * value)
	{
		___HoldCompleted_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCompleted_2), (void*)value);
	}

	inline static int32_t get_offset_of_HoldStarted_3() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldStarted_3)); }
	inline Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * get_HoldStarted_3() const { return ___HoldStarted_3; }
	inline Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E ** get_address_of_HoldStarted_3() { return &___HoldStarted_3; }
	inline void set_HoldStarted_3(Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * value)
	{
		___HoldStarted_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldStarted_3), (void*)value);
	}

	inline static int32_t get_offset_of_Tapped_4() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___Tapped_4)); }
	inline Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * get_Tapped_4() const { return ___Tapped_4; }
	inline Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 ** get_address_of_Tapped_4() { return &___Tapped_4; }
	inline void set_Tapped_4(Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * value)
	{
		___Tapped_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tapped_4), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCanceled_5() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCanceled_5)); }
	inline Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * get_ManipulationCanceled_5() const { return ___ManipulationCanceled_5; }
	inline Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E ** get_address_of_ManipulationCanceled_5() { return &___ManipulationCanceled_5; }
	inline void set_ManipulationCanceled_5(Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * value)
	{
		___ManipulationCanceled_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCanceled_5), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCompleted_6() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCompleted_6)); }
	inline Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * get_ManipulationCompleted_6() const { return ___ManipulationCompleted_6; }
	inline Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F ** get_address_of_ManipulationCompleted_6() { return &___ManipulationCompleted_6; }
	inline void set_ManipulationCompleted_6(Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * value)
	{
		___ManipulationCompleted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCompleted_6), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationStarted_7() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationStarted_7)); }
	inline Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * get_ManipulationStarted_7() const { return ___ManipulationStarted_7; }
	inline Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E ** get_address_of_ManipulationStarted_7() { return &___ManipulationStarted_7; }
	inline void set_ManipulationStarted_7(Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * value)
	{
		___ManipulationStarted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationStarted_7), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationUpdated_8() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationUpdated_8)); }
	inline Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * get_ManipulationUpdated_8() const { return ___ManipulationUpdated_8; }
	inline Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC ** get_address_of_ManipulationUpdated_8() { return &___ManipulationUpdated_8; }
	inline void set_ManipulationUpdated_8(Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * value)
	{
		___ManipulationUpdated_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationUpdated_8), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCanceled_9() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCanceled_9)); }
	inline Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * get_NavigationCanceled_9() const { return ___NavigationCanceled_9; }
	inline Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B ** get_address_of_NavigationCanceled_9() { return &___NavigationCanceled_9; }
	inline void set_NavigationCanceled_9(Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * value)
	{
		___NavigationCanceled_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCanceled_9), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCompleted_10() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCompleted_10)); }
	inline Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * get_NavigationCompleted_10() const { return ___NavigationCompleted_10; }
	inline Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 ** get_address_of_NavigationCompleted_10() { return &___NavigationCompleted_10; }
	inline void set_NavigationCompleted_10(Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * value)
	{
		___NavigationCompleted_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCompleted_10), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationStarted_11() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationStarted_11)); }
	inline Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * get_NavigationStarted_11() const { return ___NavigationStarted_11; }
	inline Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E ** get_address_of_NavigationStarted_11() { return &___NavigationStarted_11; }
	inline void set_NavigationStarted_11(Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * value)
	{
		___NavigationStarted_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationStarted_11), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationUpdated_12() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationUpdated_12)); }
	inline Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * get_NavigationUpdated_12() const { return ___NavigationUpdated_12; }
	inline Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C ** get_address_of_NavigationUpdated_12() { return &___NavigationUpdated_12; }
	inline void set_NavigationUpdated_12(Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * value)
	{
		___NavigationUpdated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationUpdated_12), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionEnded_13() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionEnded_13)); }
	inline Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * get_RecognitionEnded_13() const { return ___RecognitionEnded_13; }
	inline Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 ** get_address_of_RecognitionEnded_13() { return &___RecognitionEnded_13; }
	inline void set_RecognitionEnded_13(Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * value)
	{
		___RecognitionEnded_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionEnded_13), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionStarted_14() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionStarted_14)); }
	inline Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * get_RecognitionStarted_14() const { return ___RecognitionStarted_14; }
	inline Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E ** get_address_of_RecognitionStarted_14() { return &___RecognitionStarted_14; }
	inline void set_RecognitionStarted_14(Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * value)
	{
		___RecognitionStarted_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionStarted_14), (void*)value);
	}

	inline static int32_t get_offset_of_GestureError_15() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___GestureError_15)); }
	inline Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * get_GestureError_15() const { return ___GestureError_15; }
	inline Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B ** get_address_of_GestureError_15() { return &___GestureError_15; }
	inline void set_GestureError_15(Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * value)
	{
		___GestureError_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GestureError_15), (void*)value);
	}

	inline static int32_t get_offset_of_HoldCanceledEvent_16() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCanceledEvent_16)); }
	inline HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * get_HoldCanceledEvent_16() const { return ___HoldCanceledEvent_16; }
	inline HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 ** get_address_of_HoldCanceledEvent_16() { return &___HoldCanceledEvent_16; }
	inline void set_HoldCanceledEvent_16(HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * value)
	{
		___HoldCanceledEvent_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCanceledEvent_16), (void*)value);
	}

	inline static int32_t get_offset_of_HoldCompletedEvent_17() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCompletedEvent_17)); }
	inline HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * get_HoldCompletedEvent_17() const { return ___HoldCompletedEvent_17; }
	inline HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A ** get_address_of_HoldCompletedEvent_17() { return &___HoldCompletedEvent_17; }
	inline void set_HoldCompletedEvent_17(HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * value)
	{
		___HoldCompletedEvent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCompletedEvent_17), (void*)value);
	}

	inline static int32_t get_offset_of_HoldStartedEvent_18() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldStartedEvent_18)); }
	inline HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * get_HoldStartedEvent_18() const { return ___HoldStartedEvent_18; }
	inline HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 ** get_address_of_HoldStartedEvent_18() { return &___HoldStartedEvent_18; }
	inline void set_HoldStartedEvent_18(HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * value)
	{
		___HoldStartedEvent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldStartedEvent_18), (void*)value);
	}

	inline static int32_t get_offset_of_TappedEvent_19() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___TappedEvent_19)); }
	inline TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * get_TappedEvent_19() const { return ___TappedEvent_19; }
	inline TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F ** get_address_of_TappedEvent_19() { return &___TappedEvent_19; }
	inline void set_TappedEvent_19(TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * value)
	{
		___TappedEvent_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TappedEvent_19), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCanceledEvent_20() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCanceledEvent_20)); }
	inline ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * get_ManipulationCanceledEvent_20() const { return ___ManipulationCanceledEvent_20; }
	inline ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 ** get_address_of_ManipulationCanceledEvent_20() { return &___ManipulationCanceledEvent_20; }
	inline void set_ManipulationCanceledEvent_20(ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * value)
	{
		___ManipulationCanceledEvent_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCanceledEvent_20), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCompletedEvent_21() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCompletedEvent_21)); }
	inline ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * get_ManipulationCompletedEvent_21() const { return ___ManipulationCompletedEvent_21; }
	inline ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 ** get_address_of_ManipulationCompletedEvent_21() { return &___ManipulationCompletedEvent_21; }
	inline void set_ManipulationCompletedEvent_21(ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * value)
	{
		___ManipulationCompletedEvent_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCompletedEvent_21), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationStartedEvent_22() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationStartedEvent_22)); }
	inline ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * get_ManipulationStartedEvent_22() const { return ___ManipulationStartedEvent_22; }
	inline ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 ** get_address_of_ManipulationStartedEvent_22() { return &___ManipulationStartedEvent_22; }
	inline void set_ManipulationStartedEvent_22(ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * value)
	{
		___ManipulationStartedEvent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationStartedEvent_22), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationUpdatedEvent_23() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationUpdatedEvent_23)); }
	inline ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * get_ManipulationUpdatedEvent_23() const { return ___ManipulationUpdatedEvent_23; }
	inline ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 ** get_address_of_ManipulationUpdatedEvent_23() { return &___ManipulationUpdatedEvent_23; }
	inline void set_ManipulationUpdatedEvent_23(ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * value)
	{
		___ManipulationUpdatedEvent_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationUpdatedEvent_23), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCanceledEvent_24() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCanceledEvent_24)); }
	inline NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * get_NavigationCanceledEvent_24() const { return ___NavigationCanceledEvent_24; }
	inline NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 ** get_address_of_NavigationCanceledEvent_24() { return &___NavigationCanceledEvent_24; }
	inline void set_NavigationCanceledEvent_24(NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * value)
	{
		___NavigationCanceledEvent_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCanceledEvent_24), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCompletedEvent_25() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCompletedEvent_25)); }
	inline NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * get_NavigationCompletedEvent_25() const { return ___NavigationCompletedEvent_25; }
	inline NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 ** get_address_of_NavigationCompletedEvent_25() { return &___NavigationCompletedEvent_25; }
	inline void set_NavigationCompletedEvent_25(NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * value)
	{
		___NavigationCompletedEvent_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCompletedEvent_25), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationStartedEvent_26() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationStartedEvent_26)); }
	inline NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * get_NavigationStartedEvent_26() const { return ___NavigationStartedEvent_26; }
	inline NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF ** get_address_of_NavigationStartedEvent_26() { return &___NavigationStartedEvent_26; }
	inline void set_NavigationStartedEvent_26(NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * value)
	{
		___NavigationStartedEvent_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationStartedEvent_26), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationUpdatedEvent_27() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationUpdatedEvent_27)); }
	inline NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * get_NavigationUpdatedEvent_27() const { return ___NavigationUpdatedEvent_27; }
	inline NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A ** get_address_of_NavigationUpdatedEvent_27() { return &___NavigationUpdatedEvent_27; }
	inline void set_NavigationUpdatedEvent_27(NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * value)
	{
		___NavigationUpdatedEvent_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationUpdatedEvent_27), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionEndedEvent_28() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionEndedEvent_28)); }
	inline RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * get_RecognitionEndedEvent_28() const { return ___RecognitionEndedEvent_28; }
	inline RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B ** get_address_of_RecognitionEndedEvent_28() { return &___RecognitionEndedEvent_28; }
	inline void set_RecognitionEndedEvent_28(RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * value)
	{
		___RecognitionEndedEvent_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionEndedEvent_28), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionStartedEvent_29() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionStartedEvent_29)); }
	inline RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * get_RecognitionStartedEvent_29() const { return ___RecognitionStartedEvent_29; }
	inline RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 ** get_address_of_RecognitionStartedEvent_29() { return &___RecognitionStartedEvent_29; }
	inline void set_RecognitionStartedEvent_29(RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * value)
	{
		___RecognitionStartedEvent_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionStartedEvent_29), (void*)value);
	}

	inline static int32_t get_offset_of_GestureErrorEvent_30() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___GestureErrorEvent_30)); }
	inline GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * get_GestureErrorEvent_30() const { return ___GestureErrorEvent_30; }
	inline GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 ** get_address_of_GestureErrorEvent_30() { return &___GestureErrorEvent_30; }
	inline void set_GestureErrorEvent_30(GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * value)
	{
		___GestureErrorEvent_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GestureErrorEvent_30), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_pinvoke
{
	intptr_t ___m_Recognizer_0;
	Il2CppMethodPointer ___HoldCanceled_1;
	Il2CppMethodPointer ___HoldCompleted_2;
	Il2CppMethodPointer ___HoldStarted_3;
	Il2CppMethodPointer ___Tapped_4;
	Il2CppMethodPointer ___ManipulationCanceled_5;
	Il2CppMethodPointer ___ManipulationCompleted_6;
	Il2CppMethodPointer ___ManipulationStarted_7;
	Il2CppMethodPointer ___ManipulationUpdated_8;
	Il2CppMethodPointer ___NavigationCanceled_9;
	Il2CppMethodPointer ___NavigationCompleted_10;
	Il2CppMethodPointer ___NavigationStarted_11;
	Il2CppMethodPointer ___NavigationUpdated_12;
	Il2CppMethodPointer ___RecognitionEnded_13;
	Il2CppMethodPointer ___RecognitionStarted_14;
	Il2CppMethodPointer ___GestureError_15;
	Il2CppMethodPointer ___HoldCanceledEvent_16;
	Il2CppMethodPointer ___HoldCompletedEvent_17;
	Il2CppMethodPointer ___HoldStartedEvent_18;
	Il2CppMethodPointer ___TappedEvent_19;
	Il2CppMethodPointer ___ManipulationCanceledEvent_20;
	Il2CppMethodPointer ___ManipulationCompletedEvent_21;
	Il2CppMethodPointer ___ManipulationStartedEvent_22;
	Il2CppMethodPointer ___ManipulationUpdatedEvent_23;
	Il2CppMethodPointer ___NavigationCanceledEvent_24;
	Il2CppMethodPointer ___NavigationCompletedEvent_25;
	Il2CppMethodPointer ___NavigationStartedEvent_26;
	Il2CppMethodPointer ___NavigationUpdatedEvent_27;
	Il2CppMethodPointer ___RecognitionEndedEvent_28;
	Il2CppMethodPointer ___RecognitionStartedEvent_29;
	Il2CppMethodPointer ___GestureErrorEvent_30;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_com
{
	intptr_t ___m_Recognizer_0;
	Il2CppMethodPointer ___HoldCanceled_1;
	Il2CppMethodPointer ___HoldCompleted_2;
	Il2CppMethodPointer ___HoldStarted_3;
	Il2CppMethodPointer ___Tapped_4;
	Il2CppMethodPointer ___ManipulationCanceled_5;
	Il2CppMethodPointer ___ManipulationCompleted_6;
	Il2CppMethodPointer ___ManipulationStarted_7;
	Il2CppMethodPointer ___ManipulationUpdated_8;
	Il2CppMethodPointer ___NavigationCanceled_9;
	Il2CppMethodPointer ___NavigationCompleted_10;
	Il2CppMethodPointer ___NavigationStarted_11;
	Il2CppMethodPointer ___NavigationUpdated_12;
	Il2CppMethodPointer ___RecognitionEnded_13;
	Il2CppMethodPointer ___RecognitionStarted_14;
	Il2CppMethodPointer ___GestureError_15;
	Il2CppMethodPointer ___HoldCanceledEvent_16;
	Il2CppMethodPointer ___HoldCompletedEvent_17;
	Il2CppMethodPointer ___HoldStartedEvent_18;
	Il2CppMethodPointer ___TappedEvent_19;
	Il2CppMethodPointer ___ManipulationCanceledEvent_20;
	Il2CppMethodPointer ___ManipulationCompletedEvent_21;
	Il2CppMethodPointer ___ManipulationStartedEvent_22;
	Il2CppMethodPointer ___ManipulationUpdatedEvent_23;
	Il2CppMethodPointer ___NavigationCanceledEvent_24;
	Il2CppMethodPointer ___NavigationCompletedEvent_25;
	Il2CppMethodPointer ___NavigationStartedEvent_26;
	Il2CppMethodPointer ___NavigationUpdatedEvent_27;
	Il2CppMethodPointer ___RecognitionEndedEvent_28;
	Il2CppMethodPointer ___RecognitionStartedEvent_29;
	Il2CppMethodPointer ___GestureErrorEvent_30;
};

// UnityEngine.XR.WSA.Input.GestureSettings
struct  GestureSettings_t75803D4EC100BFFD3E80E60E6228FE13BC816F4A 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.GestureSettings::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureSettings_t75803D4EC100BFFD3E80E60E6228FE13BC816F4A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceFlags
struct  InteractionSourceFlags_tFEED23CE62EF1B04EEBB6C7DD1CA6921D73E9BBE 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceFlags_tFEED23CE62EF1B04EEBB6C7DD1CA6921D73E9BBE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceHandedness
struct  InteractionSourceHandedness_t10FDFBFAABBC3E04468D3AE77CE3614E7DD9308E 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceHandedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceHandedness_t10FDFBFAABBC3E04468D3AE77CE3614E7DD9308E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceKind
struct  InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags
struct  InteractionSourcePoseFlags_t46E1164F226BCDCDEAD84C338483E7A401794BA8 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePoseFlags_t46E1164F226BCDCDEAD84C338483E7A401794BA8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy
struct  InteractionSourcePositionAccuracy_t53AC6BBABBE0182903C6CA4529BD2FA3479276AD 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePositionAccuracy_t53AC6BBABBE0182903C6CA4529BD2FA3479276AD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// YoloDetectionHoloLens.CvUtils_DeviceTypeUnity
struct  DeviceTypeUnity_t22F982D44BAC7582B101AEED3571635BCEC555E8 
{
public:
	// System.Int32 YoloDetectionHoloLens.CvUtils_DeviceTypeUnity::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceTypeUnity_t22F982D44BAC7582B101AEED3571635BCEC555E8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// YoloDetectionHoloLens.YoloDetection_SensorTypeUnity
struct  SensorTypeUnity_t4C8F09E850B3626D3FB78141C7DD8832612E95B6 
{
public:
	// System.Int32 YoloDetectionHoloLens.YoloDetection_SensorTypeUnity::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SensorTypeUnity_t4C8F09E850B3626D3FB78141C7DD8832612E95B6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

// HoloLensForCV.__IMediaFrameSourceGroupFactory
struct NOVTABLE __IMediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL __IMediaFrameSourceGroupFactory_CreateInstance_m22A92579AD4FE5D1509579032E6C02110C51233E(int32_t ___mediaFrameSourceGroupType0, __ISpatialPerceptionPublicNonVirtuals_t30DD9212F05E1C1DAA90C94A8347EFD4CDFB3FAD* ___spatialPerception1, int32_t ___deviceType2, ISensorFrameSinkGroup_tF5B6B0A94C69297B65BCE11AD1C48E9B9A2036E4* ___optionalSensorFrameSinkGroup3, __IMediaFrameSourceGroupPublicNonVirtuals_t2AF40F8686B5E8E011733613FE80F10FC716ACAB** comReturnValue) = 0;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct  AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9 * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshaled_com
{
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSource
struct  InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 
{
public:
	// System.UInt32 UnityEngine.XR.WSA.Input.InteractionSource::m_Id
	uint32_t ___m_Id_0;
	// UnityEngine.XR.WSA.Input.InteractionSourceKind UnityEngine.XR.WSA.Input.InteractionSource::m_SourceKind
	int32_t ___m_SourceKind_1;
	// UnityEngine.XR.WSA.Input.InteractionSourceHandedness UnityEngine.XR.WSA.Input.InteractionSource::m_Handedness
	int32_t ___m_Handedness_2;
	// UnityEngine.XR.WSA.Input.InteractionSourceFlags UnityEngine.XR.WSA.Input.InteractionSource::m_Flags
	int32_t ___m_Flags_3;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_VendorId
	uint16_t ___m_VendorId_4;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductId
	uint16_t ___m_ProductId_5;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductVersion
	uint16_t ___m_ProductVersion_6;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_Id_0)); }
	inline uint32_t get_m_Id_0() const { return ___m_Id_0; }
	inline uint32_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(uint32_t value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceKind_1() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_SourceKind_1)); }
	inline int32_t get_m_SourceKind_1() const { return ___m_SourceKind_1; }
	inline int32_t* get_address_of_m_SourceKind_1() { return &___m_SourceKind_1; }
	inline void set_m_SourceKind_1(int32_t value)
	{
		___m_SourceKind_1 = value;
	}

	inline static int32_t get_offset_of_m_Handedness_2() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_Handedness_2)); }
	inline int32_t get_m_Handedness_2() const { return ___m_Handedness_2; }
	inline int32_t* get_address_of_m_Handedness_2() { return &___m_Handedness_2; }
	inline void set_m_Handedness_2(int32_t value)
	{
		___m_Handedness_2 = value;
	}

	inline static int32_t get_offset_of_m_Flags_3() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_Flags_3)); }
	inline int32_t get_m_Flags_3() const { return ___m_Flags_3; }
	inline int32_t* get_address_of_m_Flags_3() { return &___m_Flags_3; }
	inline void set_m_Flags_3(int32_t value)
	{
		___m_Flags_3 = value;
	}

	inline static int32_t get_offset_of_m_VendorId_4() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_VendorId_4)); }
	inline uint16_t get_m_VendorId_4() const { return ___m_VendorId_4; }
	inline uint16_t* get_address_of_m_VendorId_4() { return &___m_VendorId_4; }
	inline void set_m_VendorId_4(uint16_t value)
	{
		___m_VendorId_4 = value;
	}

	inline static int32_t get_offset_of_m_ProductId_5() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_ProductId_5)); }
	inline uint16_t get_m_ProductId_5() const { return ___m_ProductId_5; }
	inline uint16_t* get_address_of_m_ProductId_5() { return &___m_ProductId_5; }
	inline void set_m_ProductId_5(uint16_t value)
	{
		___m_ProductId_5 = value;
	}

	inline static int32_t get_offset_of_m_ProductVersion_6() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_ProductVersion_6)); }
	inline uint16_t get_m_ProductVersion_6() const { return ___m_ProductVersion_6; }
	inline uint16_t* get_address_of_m_ProductVersion_6() { return &___m_ProductVersion_6; }
	inline void set_m_ProductVersion_6(uint16_t value)
	{
		___m_ProductVersion_6 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePose
struct  InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 
{
public:
	// UnityEngine.Quaternion UnityEngine.XR.WSA.Input.InteractionSourcePose::m_GripRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_GripRotation_0;
	// UnityEngine.Quaternion UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PointerRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_PointerRotation_1;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_GripPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_GripPosition_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PointerPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_PointerPosition_3;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_Velocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_AngularVelocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_AngularVelocity_5;
	// UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PositionAccuracy
	int32_t ___m_PositionAccuracy_6;
	// UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags UnityEngine.XR.WSA.Input.InteractionSourcePose::m_Flags
	int32_t ___m_Flags_7;

public:
	inline static int32_t get_offset_of_m_GripRotation_0() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_GripRotation_0)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_GripRotation_0() const { return ___m_GripRotation_0; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_GripRotation_0() { return &___m_GripRotation_0; }
	inline void set_m_GripRotation_0(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_GripRotation_0 = value;
	}

	inline static int32_t get_offset_of_m_PointerRotation_1() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_PointerRotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_PointerRotation_1() const { return ___m_PointerRotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_PointerRotation_1() { return &___m_PointerRotation_1; }
	inline void set_m_PointerRotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_PointerRotation_1 = value;
	}

	inline static int32_t get_offset_of_m_GripPosition_2() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_GripPosition_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_GripPosition_2() const { return ___m_GripPosition_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_GripPosition_2() { return &___m_GripPosition_2; }
	inline void set_m_GripPosition_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_GripPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PointerPosition_3() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_PointerPosition_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_PointerPosition_3() const { return ___m_PointerPosition_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_PointerPosition_3() { return &___m_PointerPosition_3; }
	inline void set_m_PointerPosition_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_PointerPosition_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_Velocity_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_AngularVelocity_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_PositionAccuracy_6() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_PositionAccuracy_6)); }
	inline int32_t get_m_PositionAccuracy_6() const { return ___m_PositionAccuracy_6; }
	inline int32_t* get_address_of_m_PositionAccuracy_6() { return &___m_PositionAccuracy_6; }
	inline void set_m_PositionAccuracy_6(int32_t value)
	{
		___m_PositionAccuracy_6 = value;
	}

	inline static int32_t get_offset_of_m_Flags_7() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_Flags_7)); }
	inline int32_t get_m_Flags_7() const { return ___m_Flags_7; }
	inline int32_t* get_address_of_m_Flags_7() { return &___m_Flags_7; }
	inline void set_m_Flags_7(int32_t value)
	{
		___m_Flags_7 = value;
	}
};


// YoloDetectionHoloLens.YoloDetection_<OnApplicationQuit>d__18
struct  U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4 
{
public:
	// System.Int32 YoloDetectionHoloLens.YoloDetection_<OnApplicationQuit>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder YoloDetectionHoloLens.YoloDetection_<OnApplicationQuit>d__18::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// YoloDetectionHoloLens.YoloDetection YoloDetectionHoloLens.YoloDetection_<OnApplicationQuit>d__18::<>4__this
	YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter YoloDetectionHoloLens.YoloDetection_<OnApplicationQuit>d__18::<>u__1
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4, ___U3CU3E4__this_2)); }
	inline YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// YoloDetectionHoloLens.YoloDetection_<Start>d__17
struct  U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086 
{
public:
	// System.Int32 YoloDetectionHoloLens.YoloDetection_<Start>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder YoloDetectionHoloLens.YoloDetection_<Start>d__17::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// YoloDetectionHoloLens.YoloDetection YoloDetectionHoloLens.YoloDetection_<Start>d__17::<>4__this
	YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter YoloDetectionHoloLens.YoloDetection_<Start>d__17::<>u__1
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086, ___U3CU3E4__this_2)); }
	inline YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// HoloLensForCV.MediaFrameSourceGroup
struct  MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8  : public Il2CppComObject
{
public:

public:
};

struct MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to HoloLensForCV.__IMediaFrameSourceGroupFactory
	__IMediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B* ____imediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("HoloLensForCV.MediaFrameSourceGroup"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline __IMediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B* get_____imediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B()
	{
		__IMediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B* returnValue = ____imediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(__IMediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<__IMediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B>((&____imediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B;
			}
		}
		return returnValue;
	}
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.TextMesh
struct  TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.XR.WSA.Input.TappedEventArgs
struct  TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.TappedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.TappedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.TappedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// System.Int32 UnityEngine.XR.WSA.Input.TappedEventArgs::m_TapCount
	int32_t ___m_TapCount_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_3() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_TapCount_3)); }
	inline int32_t get_m_TapCount_3() const { return ___m_TapCount_3; }
	inline int32_t* get_address_of_m_TapCount_3() { return &___m_TapCount_3; }
	inline void set_m_TapCount_3(int32_t value)
	{
		___m_TapCount_3 = value;
	}
};


// YoloDetectionHoloLens.YoloDetection_<StartHoloLensMediaFrameSourceGroup>d__19
struct  U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E 
{
public:
	// System.Int32 YoloDetectionHoloLens.YoloDetection_<StartHoloLensMediaFrameSourceGroup>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder YoloDetectionHoloLens.YoloDetection_<StartHoloLensMediaFrameSourceGroup>d__19::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// YoloDetectionHoloLens.YoloDetection YoloDetectionHoloLens.YoloDetection_<StartHoloLensMediaFrameSourceGroup>d__19::<>4__this
	YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter YoloDetectionHoloLens.YoloDetection_<StartHoloLensMediaFrameSourceGroup>d__19::<>u__1
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E, ___U3CU3E4__this_2)); }
	inline YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// YoloDetectionHoloLens.YoloDetection_<StopHoloLensMediaFrameSourceGroup>d__20
struct  U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E 
{
public:
	// System.Int32 YoloDetectionHoloLens.YoloDetection_<StopHoloLensMediaFrameSourceGroup>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder YoloDetectionHoloLens.YoloDetection_<StopHoloLensMediaFrameSourceGroup>d__20::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// YoloDetectionHoloLens.YoloDetection YoloDetectionHoloLens.YoloDetection_<StopHoloLensMediaFrameSourceGroup>d__20::<>4__this
	YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter YoloDetectionHoloLens.YoloDetection_<StopHoloLensMediaFrameSourceGroup>d__20::<>u__1
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E, ___U3CU3E4__this_2)); }
	inline YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>
struct  Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MeshRenderer
struct  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// DrawingUtils.DrawBoundingBoxes
struct  DrawBoundingBoxes_t5B83439701CBD420BEECFAE9F126E90FA1D08781  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Vector2 DrawingUtils.DrawBoundingBoxes::textureSize
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___textureSize_4;
	// UnityEngine.GameObject DrawingUtils.DrawBoundingBoxes::textBoxPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___textBoxPrefab_5;
	// UnityEngine.Material DrawingUtils.DrawBoundingBoxes::_material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ____material_6;
	// UnityEngine.Texture2D DrawingUtils.DrawBoundingBoxes::_texture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____texture_7;
	// UnityEngine.GameObject DrawingUtils.DrawBoundingBoxes::_thisBoundingBox
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ____thisBoundingBox_8;

public:
	inline static int32_t get_offset_of_textureSize_4() { return static_cast<int32_t>(offsetof(DrawBoundingBoxes_t5B83439701CBD420BEECFAE9F126E90FA1D08781, ___textureSize_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_textureSize_4() const { return ___textureSize_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_textureSize_4() { return &___textureSize_4; }
	inline void set_textureSize_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___textureSize_4 = value;
	}

	inline static int32_t get_offset_of_textBoxPrefab_5() { return static_cast<int32_t>(offsetof(DrawBoundingBoxes_t5B83439701CBD420BEECFAE9F126E90FA1D08781, ___textBoxPrefab_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_textBoxPrefab_5() const { return ___textBoxPrefab_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_textBoxPrefab_5() { return &___textBoxPrefab_5; }
	inline void set_textBoxPrefab_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___textBoxPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textBoxPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of__material_6() { return static_cast<int32_t>(offsetof(DrawBoundingBoxes_t5B83439701CBD420BEECFAE9F126E90FA1D08781, ____material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get__material_6() const { return ____material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of__material_6() { return &____material_6; }
	inline void set__material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		____material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____material_6), (void*)value);
	}

	inline static int32_t get_offset_of__texture_7() { return static_cast<int32_t>(offsetof(DrawBoundingBoxes_t5B83439701CBD420BEECFAE9F126E90FA1D08781, ____texture_7)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get__texture_7() const { return ____texture_7; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of__texture_7() { return &____texture_7; }
	inline void set__texture_7(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		____texture_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____texture_7), (void*)value);
	}

	inline static int32_t get_offset_of__thisBoundingBox_8() { return static_cast<int32_t>(offsetof(DrawBoundingBoxes_t5B83439701CBD420BEECFAE9F126E90FA1D08781, ____thisBoundingBox_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get__thisBoundingBox_8() const { return ____thisBoundingBox_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of__thisBoundingBox_8() { return &____thisBoundingBox_8; }
	inline void set__thisBoundingBox_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		____thisBoundingBox_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____thisBoundingBox_8), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// YoloDetectionHoloLens.YoloDetection
struct  YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// YoloDetectionHoloLens.CvUtils_DeviceTypeUnity YoloDetectionHoloLens.YoloDetection::deviceType
	int32_t ___deviceType_4;
	// UnityEngine.XR.WSA.Input.GestureRecognizer YoloDetectionHoloLens.YoloDetection::_gestureRecognizer
	GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * ____gestureRecognizer_5;
	// DrawingUtils.DrawBoundingBoxes YoloDetectionHoloLens.YoloDetection::drawBoundingBoxes
	DrawBoundingBoxes_t5B83439701CBD420BEECFAE9F126E90FA1D08781 * ___drawBoundingBoxes_6;
	// System.String YoloDetectionHoloLens.YoloDetection::ipAddressForConnect
	String_t* ___ipAddressForConnect_7;
	// System.String YoloDetectionHoloLens.YoloDetection::hostId
	String_t* ___hostId_8;
	// UnityEngine.UI.Text YoloDetectionHoloLens.YoloDetection::myText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___myText_9;
	// System.Int32 YoloDetectionHoloLens.YoloDetection::_tapCount
	int32_t ____tapCount_10;
	// System.String[] YoloDetectionHoloLens.YoloDetection::_labels
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____labels_11;
	// System.Boolean YoloDetectionHoloLens.YoloDetection::_holoLensMediaFrameSourceGroupStarted
	bool ____holoLensMediaFrameSourceGroupStarted_12;
	// YoloDetectionHoloLens.YoloDetection_SensorTypeUnity YoloDetectionHoloLens.YoloDetection::sensorTypePv
	int32_t ___sensorTypePv_13;
	// HoloLensForCV.MediaFrameSourceGroupType YoloDetectionHoloLens.YoloDetection::_selectedMediaFrameSourceGroupType
	int32_t ____selectedMediaFrameSourceGroupType_14;
	// HoloLensForCV.SensorFrameStreamer YoloDetectionHoloLens.YoloDetection::_sensorFrameStreamer
	SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849 * ____sensorFrameStreamer_15;
	// HoloLensForCV.SpatialPerception YoloDetectionHoloLens.YoloDetection::_spatialPerception
	SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577 * ____spatialPerception_16;
	// HoloLensForCV.DeviceType YoloDetectionHoloLens.YoloDetection::_deviceType
	int32_t ____deviceType_17;
	// HoloLensForCV.MediaFrameSourceGroup YoloDetectionHoloLens.YoloDetection::_holoLensMediaFrameSourceGroup
	MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * ____holoLensMediaFrameSourceGroup_18;
	// HoloLensForCV.SensorType YoloDetectionHoloLens.YoloDetection::_sensorType
	int32_t ____sensorType_19;

public:
	inline static int32_t get_offset_of_deviceType_4() { return static_cast<int32_t>(offsetof(YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170, ___deviceType_4)); }
	inline int32_t get_deviceType_4() const { return ___deviceType_4; }
	inline int32_t* get_address_of_deviceType_4() { return &___deviceType_4; }
	inline void set_deviceType_4(int32_t value)
	{
		___deviceType_4 = value;
	}

	inline static int32_t get_offset_of__gestureRecognizer_5() { return static_cast<int32_t>(offsetof(YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170, ____gestureRecognizer_5)); }
	inline GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * get__gestureRecognizer_5() const { return ____gestureRecognizer_5; }
	inline GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE ** get_address_of__gestureRecognizer_5() { return &____gestureRecognizer_5; }
	inline void set__gestureRecognizer_5(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * value)
	{
		____gestureRecognizer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gestureRecognizer_5), (void*)value);
	}

	inline static int32_t get_offset_of_drawBoundingBoxes_6() { return static_cast<int32_t>(offsetof(YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170, ___drawBoundingBoxes_6)); }
	inline DrawBoundingBoxes_t5B83439701CBD420BEECFAE9F126E90FA1D08781 * get_drawBoundingBoxes_6() const { return ___drawBoundingBoxes_6; }
	inline DrawBoundingBoxes_t5B83439701CBD420BEECFAE9F126E90FA1D08781 ** get_address_of_drawBoundingBoxes_6() { return &___drawBoundingBoxes_6; }
	inline void set_drawBoundingBoxes_6(DrawBoundingBoxes_t5B83439701CBD420BEECFAE9F126E90FA1D08781 * value)
	{
		___drawBoundingBoxes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___drawBoundingBoxes_6), (void*)value);
	}

	inline static int32_t get_offset_of_ipAddressForConnect_7() { return static_cast<int32_t>(offsetof(YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170, ___ipAddressForConnect_7)); }
	inline String_t* get_ipAddressForConnect_7() const { return ___ipAddressForConnect_7; }
	inline String_t** get_address_of_ipAddressForConnect_7() { return &___ipAddressForConnect_7; }
	inline void set_ipAddressForConnect_7(String_t* value)
	{
		___ipAddressForConnect_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ipAddressForConnect_7), (void*)value);
	}

	inline static int32_t get_offset_of_hostId_8() { return static_cast<int32_t>(offsetof(YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170, ___hostId_8)); }
	inline String_t* get_hostId_8() const { return ___hostId_8; }
	inline String_t** get_address_of_hostId_8() { return &___hostId_8; }
	inline void set_hostId_8(String_t* value)
	{
		___hostId_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hostId_8), (void*)value);
	}

	inline static int32_t get_offset_of_myText_9() { return static_cast<int32_t>(offsetof(YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170, ___myText_9)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_myText_9() const { return ___myText_9; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_myText_9() { return &___myText_9; }
	inline void set_myText_9(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___myText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myText_9), (void*)value);
	}

	inline static int32_t get_offset_of__tapCount_10() { return static_cast<int32_t>(offsetof(YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170, ____tapCount_10)); }
	inline int32_t get__tapCount_10() const { return ____tapCount_10; }
	inline int32_t* get_address_of__tapCount_10() { return &____tapCount_10; }
	inline void set__tapCount_10(int32_t value)
	{
		____tapCount_10 = value;
	}

	inline static int32_t get_offset_of__labels_11() { return static_cast<int32_t>(offsetof(YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170, ____labels_11)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__labels_11() const { return ____labels_11; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__labels_11() { return &____labels_11; }
	inline void set__labels_11(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____labels_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____labels_11), (void*)value);
	}

	inline static int32_t get_offset_of__holoLensMediaFrameSourceGroupStarted_12() { return static_cast<int32_t>(offsetof(YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170, ____holoLensMediaFrameSourceGroupStarted_12)); }
	inline bool get__holoLensMediaFrameSourceGroupStarted_12() const { return ____holoLensMediaFrameSourceGroupStarted_12; }
	inline bool* get_address_of__holoLensMediaFrameSourceGroupStarted_12() { return &____holoLensMediaFrameSourceGroupStarted_12; }
	inline void set__holoLensMediaFrameSourceGroupStarted_12(bool value)
	{
		____holoLensMediaFrameSourceGroupStarted_12 = value;
	}

	inline static int32_t get_offset_of_sensorTypePv_13() { return static_cast<int32_t>(offsetof(YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170, ___sensorTypePv_13)); }
	inline int32_t get_sensorTypePv_13() const { return ___sensorTypePv_13; }
	inline int32_t* get_address_of_sensorTypePv_13() { return &___sensorTypePv_13; }
	inline void set_sensorTypePv_13(int32_t value)
	{
		___sensorTypePv_13 = value;
	}

	inline static int32_t get_offset_of__selectedMediaFrameSourceGroupType_14() { return static_cast<int32_t>(offsetof(YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170, ____selectedMediaFrameSourceGroupType_14)); }
	inline int32_t get__selectedMediaFrameSourceGroupType_14() const { return ____selectedMediaFrameSourceGroupType_14; }
	inline int32_t* get_address_of__selectedMediaFrameSourceGroupType_14() { return &____selectedMediaFrameSourceGroupType_14; }
	inline void set__selectedMediaFrameSourceGroupType_14(int32_t value)
	{
		____selectedMediaFrameSourceGroupType_14 = value;
	}

	inline static int32_t get_offset_of__sensorFrameStreamer_15() { return static_cast<int32_t>(offsetof(YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170, ____sensorFrameStreamer_15)); }
	inline SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849 * get__sensorFrameStreamer_15() const { return ____sensorFrameStreamer_15; }
	inline SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849 ** get_address_of__sensorFrameStreamer_15() { return &____sensorFrameStreamer_15; }
	inline void set__sensorFrameStreamer_15(SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849 * value)
	{
		____sensorFrameStreamer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sensorFrameStreamer_15), (void*)value);
	}

	inline static int32_t get_offset_of__spatialPerception_16() { return static_cast<int32_t>(offsetof(YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170, ____spatialPerception_16)); }
	inline SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577 * get__spatialPerception_16() const { return ____spatialPerception_16; }
	inline SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577 ** get_address_of__spatialPerception_16() { return &____spatialPerception_16; }
	inline void set__spatialPerception_16(SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577 * value)
	{
		____spatialPerception_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____spatialPerception_16), (void*)value);
	}

	inline static int32_t get_offset_of__deviceType_17() { return static_cast<int32_t>(offsetof(YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170, ____deviceType_17)); }
	inline int32_t get__deviceType_17() const { return ____deviceType_17; }
	inline int32_t* get_address_of__deviceType_17() { return &____deviceType_17; }
	inline void set__deviceType_17(int32_t value)
	{
		____deviceType_17 = value;
	}

	inline static int32_t get_offset_of__holoLensMediaFrameSourceGroup_18() { return static_cast<int32_t>(offsetof(YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170, ____holoLensMediaFrameSourceGroup_18)); }
	inline MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * get__holoLensMediaFrameSourceGroup_18() const { return ____holoLensMediaFrameSourceGroup_18; }
	inline MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 ** get_address_of__holoLensMediaFrameSourceGroup_18() { return &____holoLensMediaFrameSourceGroup_18; }
	inline void set__holoLensMediaFrameSourceGroup_18(MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * value)
	{
		____holoLensMediaFrameSourceGroup_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____holoLensMediaFrameSourceGroup_18), (void*)value);
	}

	inline static int32_t get_offset_of__sensorType_19() { return static_cast<int32_t>(offsetof(YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170, ____sensorType_19)); }
	inline int32_t get__sensorType_19() const { return ____sensorType_19; }
	inline int32_t* get_address_of__sensorType_19() { return &____sensorType_19; }
	inline void set__sensorType_19(int32_t value)
	{
		____sensorType_19 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_35;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_38;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_41;

public:
	inline static int32_t get_offset_of_m_FontData_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_35)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_35() const { return ___m_FontData_35; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_35() { return &___m_FontData_35; }
	inline void set_m_FontData_35(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_36)); }
	inline String_t* get_m_Text_36() const { return ___m_Text_36; }
	inline String_t** get_address_of_m_Text_36() { return &___m_Text_36; }
	inline void set_m_Text_36(String_t* value)
	{
		___m_Text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_37() const { return ___m_TextCache_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_37() { return &___m_TextCache_37; }
	inline void set_m_TextCache_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_38)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_38() const { return ___m_TextCacheForLayout_38; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_38() { return &___m_TextCacheForLayout_38; }
	inline void set_m_TextCacheForLayout_38(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_40)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_40() const { return ___m_DisableFontTextureRebuiltCallback_40; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_40() { return &___m_DisableFontTextureRebuiltCallback_40; }
	inline void set_m_DisableFontTextureRebuiltCallback_40(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_40 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_41() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_41)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_41() const { return ___m_TempVerts_41; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_41() { return &___m_TempVerts_41; }
	inline void set_m_TempVerts_41(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_41), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_39;

public:
	inline static int32_t get_offset_of_s_DefaultText_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_39)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_39() const { return ___s_DefaultText_39; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_39() { return &___s_DefaultText_39; }
	inline void set_s_DefaultText_39(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_39), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
// UnityEngine.Color[]
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  m_Items[1];

public:
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m8867D785EA346B8A61A18514E0E806029BD9A159_gshared (RuntimeObject * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent3, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<YoloDetectionHoloLens.YoloDetection/<Start>d__17>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086_mE287B3539418CDDD25E13BCA833FC8A6B2F5A312_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<YoloDetectionHoloLens.YoloDetection/<OnApplicationQuit>d__18>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4_m202E08614EAC7260259F7ED67E2CA5E8C6C5A2CB_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<YoloDetectionHoloLens.YoloDetection/<StartHoloLensMediaFrameSourceGroup>d__19>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E_mAF69801E94737358106A53C7E841690872A864AC_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<YoloDetectionHoloLens.YoloDetection/<StopHoloLensMediaFrameSourceGroup>d__20>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E_mC2779327E38A70A4E5AFE04497E71D9E972229D7_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mC172C98F4F0CF247C0880F1F05D557C9005F0FF0_gshared (Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,YoloDetectionHoloLens.YoloDetection/<OnApplicationQuit>d__18>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4_m3C8FE7472A29499FE76AF56F312CD295CEEA1FB2_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,YoloDetectionHoloLens.YoloDetection/<Start>d__17>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086_mADDAB7C7E4CF02D2CE7DB7009E34332AB05D158B_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,YoloDetectionHoloLens.YoloDetection/<StartHoloLensMediaFrameSourceGroup>d__19>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E_mA46FD375C487157DF3D2B54C53AD801DE2E3CC1A_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,YoloDetectionHoloLens.YoloDetection/<StopHoloLensMediaFrameSourceGroup>d__20>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E_mAFCC6580E0480601D0ADE975F6C8A4AA676C81B6_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E * ___stateMachine1, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m0C86A87871AA8075791EF98499D34DA95ACB0E35 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// UnityEngine.Texture2D DrawingUtils.Texture2DExtension::TransparentTexture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * Texture2DExtension_TransparentTexture_m69BD7C2533E5B64B8BB217DBCD5878F3D9D52F8C (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___tex0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m0742CFF768E9701618DA07C71F009239AB31EB41 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<YoloRuntime.BoundingBox>::GetEnumerator()
inline Enumerator_t33CA2315FF3D74E9ADAD80F3BB4B3129553C76C1  List_1_GetEnumerator_m746A585FC72DCE28430CA2861BABACBBC39E8965 (List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t33CA2315FF3D74E9ADAD80F3BB4B3129553C76C1  (*) (List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<YoloRuntime.BoundingBox>::get_Current()
inline BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * Enumerator_get_Current_mED2EEC7B719235F5482E8B620CB024B3AC567C8F_inline (Enumerator_t33CA2315FF3D74E9ADAD80F3BB4B3129553C76C1 * __this, const RuntimeMethod* method)
{
	return ((  BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * (*) (Enumerator_t33CA2315FF3D74E9ADAD80F3BB4B3129553C76C1 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Single YoloRuntime.BoundingBox::get_Height()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float BoundingBox_get_Height_m44F20B7B98E0D1653AF681B3503AC63D95D473A8_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, const RuntimeMethod* method);
// System.Single YoloRuntime.BoundingBox::get_Width()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float BoundingBox_get_Width_m9F5893974844C8D811D4F1545FFF55EC1A3BE6FD_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, const RuntimeMethod* method);
// System.Single YoloRuntime.BoundingBox::get_X()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float BoundingBox_get_X_m7361C188C25CE49269F2398540BBE36CED8076BB_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, const RuntimeMethod* method);
// System.Single YoloRuntime.BoundingBox::get_Y()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float BoundingBox_get_Y_mE985B150AE0E2B6700175A096E1A44AC28536C21_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mB23DDD2CD05B2E66F9CF8CA72ECA66C02DCC209E (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2 (const RuntimeMethod* method);
// UnityEngine.Texture2D DrawingUtils.Texture2DExtension::Box(UnityEngine.Texture2D,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * Texture2DExtension_Box_m9D12FC71B72445631754346EF2E1BFB9D0568746 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___tex0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___tl1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___br2, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m6895A7A231540279E01A537649EB42814FD2671B (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m8867D785EA346B8A61A18514E0E806029BD9A159_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.String YoloRuntime.BoundingBox::get_Label()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* BoundingBox_get_Label_m788FE38136E283E055925F59A2B8DDC679A95102_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, const RuntimeMethod* method);
// System.Single YoloRuntime.BoundingBox::get_Confidence()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float BoundingBox_get_Confidence_m65994A5209CB19A6688665FFB42B4E2CDFCCD2AA_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.TextMesh>()
inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * GameObject_GetComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_m6548CB329DD537D824051D169084C7FB1CD251D8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_color_mF86B9E8CD0F9FD387AF7D543337B5C14DFE67AF0 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<YoloRuntime.BoundingBox>::MoveNext()
inline bool Enumerator_MoveNext_m813FB5877ED872791AF4DE4D36E12BC4CEC71FF8 (Enumerator_t33CA2315FF3D74E9ADAD80F3BB4B3129553C76C1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t33CA2315FF3D74E9ADAD80F3BB4B3129553C76C1 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<YoloRuntime.BoundingBox>::Dispose()
inline void Enumerator_Dispose_m370D55FE9FF4E2AE42A6ABF701C630FFD51A5AE4 (Enumerator_t33CA2315FF3D74E9ADAD80F3BB4B3129553C76C1 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t33CA2315FF3D74E9ADAD80F3BB4B3129553C76C1 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D DrawingUtils.Texture2DExtension::Line(UnityEngine.Texture2D,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * Texture2DExtension_Line_mA1E0B540A88277013555C23E9B3355CEAE2CC96F (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___tex0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___p11, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___p22, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color3, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_Lerp_m85DD66409D128B4F175627F89FA9D8751B75589F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m8BE87C152447B812D06CB894B3570269CC2DE7C3 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___x0, int32_t ___y1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_clear_m419239BDAEB3D3C4B4291BF2C6EF09A7D7D81360 (const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_mDE50229135F49F323D265340C415D680CCB2FB92 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* ___colors0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<YoloDetectionHoloLens.YoloDetection/<Start>d__17>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086_mE287B3539418CDDD25E13BCA833FC8A6B2F5A312 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086_mE287B3539418CDDD25E13BCA833FC8A6B2F5A312_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<YoloDetectionHoloLens.YoloDetection/<OnApplicationQuit>d__18>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4_m202E08614EAC7260259F7ED67E2CA5E8C6C5A2CB (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4_m202E08614EAC7260259F7ED67E2CA5E8C6C5A2CB_gshared)(__this, ___stateMachine0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<YoloDetectionHoloLens.YoloDetection/<StartHoloLensMediaFrameSourceGroup>d__19>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E_mAF69801E94737358106A53C7E841690872A864AC (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E_mAF69801E94737358106A53C7E841690872A864AC_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<YoloDetectionHoloLens.YoloDetection/<StopHoloLensMediaFrameSourceGroup>d__20>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E_mC2779327E38A70A4E5AFE04497E71D9E972229D7 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E_mC2779327E38A70A4E5AFE04497E71D9E972229D7_gshared)(__this, ___stateMachine0, method);
}
// System.Void YoloDetectionHoloLens.YoloDetection/<ConnectSocket>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectSocketU3Ed__21__ctor_m276D99A670D1D03AA65A899CC37FBCE7C628B8F7 (U3CConnectSocketU3Ed__21_t99138AC9287719D80B4741681665A8EADE3A77D5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer__ctor_m4EC0013B225C0189D0ACB2DC77092C809764F1D5 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.GestureSettings UnityEngine.XR.WSA.Input.GestureRecognizer::SetRecognizableGestures(UnityEngine.XR.WSA.Input.GestureSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GestureRecognizer_SetRecognizableGestures_mF459BAE914B9B2E01E7B1652ACF23C5C2722DA68 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, int32_t ___newMaskValue0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::StartCapturingGestures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_StartCapturingGestures_mD02F289C8263C8EACB47B4593E55C8B767C524FA (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC172C98F4F0CF247C0880F1F05D557C9005F0FF0 (Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mC172C98F4F0CF247C0880F1F05D557C9005F0FF0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_Tapped(System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_add_Tapped_mD5587B3F0115F9AC0599D555E2988E63136DA3EC (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WSA.Input.TappedEventArgs::get_tapCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TappedEventArgs_get_tapCount_m5E131CC9B998A34BBD45C264538D982C7B31C291 (TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator YoloDetectionHoloLens.YoloDetection::ConnectSocket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YoloDetection_ConnectSocket_m7E8DFE7099ECBF475A8BC8D23322AD17674FA469 (YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::StopCapturingGestures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_StopCapturingGestures_mBA5D5DFFC507CE972150A242E9DFC59B06121D61 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_Dispose_mCDB9196736129DA85372020E13A8768175E9A97C (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method);
// System.Void HoloLensForCV.InteropDeviceReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropDeviceReceiver__ctor_m4A2282AAC923E5C05842DDF65DDA5CA19F8A18A0 (InteropDeviceReceiver_t8F7F4847F49139840744A5EF41D07048541E8056 * __this, const RuntimeMethod* method);
// System.Void HoloLensForCV.InteropDeviceReceiver::ConnectSocket_Click(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropDeviceReceiver_ConnectSocket_Click_m0B4955E4ECB1FBE4E3081CC3CE2DF0FBF0C0CC54 (InteropDeviceReceiver_t8F7F4847F49139840744A5EF41D07048541E8056 * __this, String_t* ___ipAddress0, String_t* ___hostId1, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<System.Byte> HoloLensForCV.InteropDeviceReceiver::GetBoundingBoxResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InteropDeviceReceiver_GetBoundingBoxResults_mEC3C7223049867407C2BB56D4F42F6BC1C0ECE54 (InteropDeviceReceiver_t8F7F4847F49139840744A5EF41D07048541E8056 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<YoloRuntime.BoundingBox>::.ctor()
inline void List_1__ctor_m676738485DAF2EB7F8FCCCB098940619AAD1256A (List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void YoloRuntime.BoundingBox::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBox__ctor_mF91EB45114F7548B304C39AEE5856A3850C2FD65 (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, const RuntimeMethod* method);
// System.Void YoloRuntime.BoundingBox::put_TopLabel(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BoundingBox_put_TopLabel_m60E903D13BDDC6DD044D1F332EA4EC9F265ED1C5_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void YoloRuntime.BoundingBox::put_X(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BoundingBox_put_X_m479D6E24443A7FD4AA0E8BCF67C2069D130FEBD2_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, float ___value0, const RuntimeMethod* method);
// System.Void YoloRuntime.BoundingBox::put_Y(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BoundingBox_put_Y_mF04BCDDF71EADCB4A96387180129AC56F3993B6B_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, float ___value0, const RuntimeMethod* method);
// System.Void YoloRuntime.BoundingBox::put_Height(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BoundingBox_put_Height_m38EB832CB2BDDE7A130B8C1C95C1A701B6423AAD_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, float ___value0, const RuntimeMethod* method);
// System.Void YoloRuntime.BoundingBox::put_Width(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BoundingBox_put_Width_m13E3ECE097F5E74717FC250C0F8E1A004E3CD5EF_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, float ___value0, const RuntimeMethod* method);
// System.Void YoloRuntime.BoundingBox::put_Confidence(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BoundingBox_put_Confidence_m92A5795FEBACE603B43ED5F1F1785662651AA1ED_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 YoloRuntime.BoundingBox::get_TopLabel()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BoundingBox_get_TopLabel_m96627B1BEACBCC7CAF1C47D692B101680E80CDA3_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, const RuntimeMethod* method);
// System.Void YoloRuntime.BoundingBox::put_Label(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BoundingBox_put_Label_mA3CF2637F14B4F08DF8B02FCBA0AD5A23DA3B843_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<YoloRuntime.BoundingBox>::Add(!0)
inline void List_1_Add_m4A70F555579FEDB39DDCEDC6265FDFADAD4C774B (List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 * __this, BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 *, BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void DrawingUtils.DrawBoundingBoxes::DrawBoxes(System.Collections.Generic.List`1<YoloRuntime.BoundingBox>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawBoundingBoxes_DrawBoxes_mBF91D848C6332C38633F6E64F2D9864AAEE605AF (DrawBoundingBoxes_t5B83439701CBD420BEECFAE9F126E90FA1D08781 * __this, List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 * ___boxes0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<YoloRuntime.BoundingBox>::get_Count()
inline int32_t List_1_get_Count_m779E2C8DA57F6D6C703A22EEC269AD1B308197E4_inline (List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task YoloDetectionHoloLens.YoloDetection::StopHoloLensMediaFrameSourceGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * YoloDetection_StopHoloLensMediaFrameSourceGroup_mD6B32FF012FC6FD8F3C3E35E12C2CBEF3FA6A933 (YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87 (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,YoloDetectionHoloLens.YoloDetection/<OnApplicationQuit>d__18>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4_m3C8FE7472A29499FE76AF56F312CD295CEEA1FB2 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4_m3C8FE7472A29499FE76AF56F312CD295CEEA1FB2_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, const RuntimeMethod* method);
// System.Void YoloDetectionHoloLens.YoloDetection/<OnApplicationQuit>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationQuitU3Ed__18_MoveNext_mBFA3020146C1436A0229EF0FD0BDB110A7209EBC (U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void YoloDetectionHoloLens.YoloDetection/<OnApplicationQuit>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationQuitU3Ed__18_SetStateMachine_mE70A78707B374E94BC8881F28E0DB1FE370FCD5B (U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void YoloDetectionHoloLens.YoloDetection::InitializeHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YoloDetection_InitializeHandler_m39D449D3810CE283420F77E7E0FD1605EFFA0673 (YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * __this, const RuntimeMethod* method);
// System.Void DrawingUtils.DrawBoundingBoxes::InitDrawBoundingBoxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawBoundingBoxes_InitDrawBoundingBoxes_m7E3B2FEE87F65F6D8022A27E2CAE6D5B68A996D2 (DrawBoundingBoxes_t5B83439701CBD420BEECFAE9F126E90FA1D08781 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task YoloDetectionHoloLens.YoloDetection::StartHoloLensMediaFrameSourceGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * YoloDetection_StartHoloLensMediaFrameSourceGroup_m6125D3DFC68D2683495149A91E4B5B2F28A305F7 (YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,YoloDetectionHoloLens.YoloDetection/<Start>d__17>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086_mADDAB7C7E4CF02D2CE7DB7009E34332AB05D158B (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086_mADDAB7C7E4CF02D2CE7DB7009E34332AB05D158B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void YoloDetectionHoloLens.YoloDetection/<Start>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__17_MoveNext_mEA3C34532E698E93497366121035D67C0FF078DA (U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086 * __this, const RuntimeMethod* method);
// System.Void YoloDetectionHoloLens.YoloDetection/<Start>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__17_SetStateMachine_m285A3AA2515F2545D5BEC354A70FD03C4E3CAD2B (U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void HoloLensForCV.SensorFrameStreamer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorFrameStreamer__ctor_m2A7FE63EE0D6B674FB9C840663B0EAFBF377C657 (SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849 * __this, const RuntimeMethod* method);
// System.Void HoloLensForCV.SensorFrameStreamer::Enable(HoloLensForCV.SensorType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorFrameStreamer_Enable_m76FACD01E7F7662E5C8045742125D0D6494E82AD (SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849 * __this, int32_t ___sensorType0, const RuntimeMethod* method);
// System.Void HoloLensForCV.SpatialPerception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialPerception__ctor_mEF5E6D7D5750DD1AF34E9F594E10846F1EB007D3 (SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577 * __this, const RuntimeMethod* method);
// System.Void HoloLensForCV.MediaFrameSourceGroup::.ctor(HoloLensForCV.MediaFrameSourceGroupType,HoloLensForCV.SpatialPerception,HoloLensForCV.DeviceType,HoloLensForCV.ISensorFrameSinkGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaFrameSourceGroup__ctor_m913D624E7537CDB301BB6FC480EA6C8D12FEA667 (MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * __this, int32_t ___mediaFrameSourceGroupType0, SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577 * ___spatialPerception1, int32_t ___deviceType2, RuntimeObject* ___optionalSensorFrameSinkGroup3, const RuntimeMethod* method);
// System.Void HoloLensForCV.MediaFrameSourceGroup::Enable(HoloLensForCV.SensorType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaFrameSourceGroup_Enable_mFB95B66C15BEAD3C5AC911DD021551BBE8692532 (MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * __this, int32_t ___sensorType0, const RuntimeMethod* method);
// Windows.Foundation.IAsyncAction HoloLensForCV.MediaFrameSourceGroup::StartAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaFrameSourceGroup_StartAsync_m526B5B8956EB089601E9B7CA2A9AFE318DD6490C (MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.WindowsRuntimeSystemExtensions::GetAwaiter(Windows.Foundation.IAsyncAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  WindowsRuntimeSystemExtensions_GetAwaiter_m1E46B83D2D5BEE385305CFFD9496572784AB5D2C (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,YoloDetectionHoloLens.YoloDetection/<StartHoloLensMediaFrameSourceGroup>d__19>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E_mA46FD375C487157DF3D2B54C53AD801DE2E3CC1A (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E_mA46FD375C487157DF3D2B54C53AD801DE2E3CC1A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, const RuntimeMethod* method);
// System.Void YoloDetectionHoloLens.YoloDetection/<StartHoloLensMediaFrameSourceGroup>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_MoveNext_mC4742EC564E8BB4518A13B1EA7FF65C1103D915C (U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void YoloDetectionHoloLens.YoloDetection/<StartHoloLensMediaFrameSourceGroup>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_SetStateMachine_mC949D4C5D8AC21F972D35E8480180973764B7DCD (U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// Windows.Foundation.IAsyncAction HoloLensForCV.MediaFrameSourceGroup::StopAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaFrameSourceGroup_StopAsync_m7BD719AB4F6251735FE4EAFA4A0C48794CD23368 (MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,YoloDetectionHoloLens.YoloDetection/<StopHoloLensMediaFrameSourceGroup>d__20>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E_mAFCC6580E0480601D0ADE975F6C8A4AA676C81B6 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E_mAFCC6580E0480601D0ADE975F6C8A4AA676C81B6_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void YoloDetectionHoloLens.YoloDetection/<StopHoloLensMediaFrameSourceGroup>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_MoveNext_mAAA32F4E6D9099355B27C411F95A135A7F890BF2 (U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E * __this, const RuntimeMethod* method);
// System.Void YoloDetectionHoloLens.YoloDetection/<StopHoloLensMediaFrameSourceGroup>d__20::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_SetStateMachine_mE58BC5D2A6F7E89217F1587BC6529784DDD4BC01 (U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
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
// System.Void DrawingUtils.DrawBoundingBoxes::InitDrawBoundingBoxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawBoundingBoxes_InitDrawBoundingBoxes_m7E3B2FEE87F65F6D8022A27E2CAE6D5B68A996D2 (DrawBoundingBoxes_t5B83439701CBD420BEECFAE9F126E90FA1D08781 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DrawBoundingBoxes_InitDrawBoundingBoxes_m7E3B2FEE87F65F6D8022A27E2CAE6D5B68A996D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_texture != null)
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = __this->get__texture_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(_texture);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_2 = __this->get__texture_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// _material = this.gameObject.GetComponent<MeshRenderer>().material;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_4 = GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72(L_3, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72_RuntimeMethod_var);
		NullCheck(L_4);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_5 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_4, /*hidden argument*/NULL);
		__this->set__material_6(L_5);
		// _texture = new Texture2D((int)textureSize.x, (int)textureSize.y);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_6 = __this->get_address_of_textureSize_4();
		float L_7 = L_6->get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_8 = __this->get_address_of_textureSize_4();
		float L_9 = L_8->get_y_1();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_10 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m0C86A87871AA8075791EF98499D34DA95ACB0E35(L_10, (((int32_t)((int32_t)L_7))), (((int32_t)((int32_t)L_9))), /*hidden argument*/NULL);
		__this->set__texture_7(L_10);
		// _texture = Texture2DExtension.TransparentTexture(_texture);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_11 = __this->get__texture_7();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_12 = Texture2DExtension_TransparentTexture_m69BD7C2533E5B64B8BB217DBCD5878F3D9D52F8C(L_11, /*hidden argument*/NULL);
		__this->set__texture_7(L_12);
		// _texture.Apply();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_13 = __this->get__texture_7();
		NullCheck(L_13);
		Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA(L_13, /*hidden argument*/NULL);
		// _material.mainTexture = _texture;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_14 = __this->get__material_6();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_15 = __this->get__texture_7();
		NullCheck(L_14);
		Material_set_mainTexture_m0742CFF768E9701618DA07C71F009239AB31EB41(L_14, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DrawingUtils.DrawBoundingBoxes::DrawBoxes(System.Collections.Generic.List`1<YoloRuntime.BoundingBox>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawBoundingBoxes_DrawBoxes_mBF91D848C6332C38633F6E64F2D9864AAEE605AF (DrawBoundingBoxes_t5B83439701CBD420BEECFAE9F126E90FA1D08781 * __this, List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 * ___boxes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DrawBoundingBoxes_DrawBoxes_mBF91D848C6332C38633F6E64F2D9864AAEE605AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t33CA2315FF3D74E9ADAD80F3BB4B3129553C76C1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	String_t* V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B20_0 = 0;
	{
		// if (_texture != null)
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = __this->get__texture_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(_texture);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_2 = __this->get__texture_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// if (_thisBoundingBox != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get__thisBoundingBox_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// Destroy(_thisBoundingBox);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get__thisBoundingBox_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_5, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// _texture = new Texture2D((int)textureSize.x, (int)textureSize.y);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_6 = __this->get_address_of_textureSize_4();
		float L_7 = L_6->get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_8 = __this->get_address_of_textureSize_4();
		float L_9 = L_8->get_y_1();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_10 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m0C86A87871AA8075791EF98499D34DA95ACB0E35(L_10, (((int32_t)((int32_t)L_7))), (((int32_t)((int32_t)L_9))), /*hidden argument*/NULL);
		__this->set__texture_7(L_10);
		// _texture = Texture2DExtension.TransparentTexture(_texture);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_11 = __this->get__texture_7();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_12 = Texture2DExtension_TransparentTexture_m69BD7C2533E5B64B8BB217DBCD5878F3D9D52F8C(L_11, /*hidden argument*/NULL);
		__this->set__texture_7(L_12);
		// foreach (var box in boxes)
		List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 * L_13 = ___boxes0;
		NullCheck(L_13);
		Enumerator_t33CA2315FF3D74E9ADAD80F3BB4B3129553C76C1  L_14 = List_1_GetEnumerator_m746A585FC72DCE28430CA2861BABACBBC39E8965(L_13, /*hidden argument*/List_1_GetEnumerator_m746A585FC72DCE28430CA2861BABACBBC39E8965_RuntimeMethod_var);
		V_0 = L_14;
	}

IL_006d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02d2;
		}

IL_0072:
		{
			// foreach (var box in boxes)
			BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_15 = Enumerator_get_Current_mED2EEC7B719235F5482E8B620CB024B3AC567C8F_inline((Enumerator_t33CA2315FF3D74E9ADAD80F3BB4B3129553C76C1 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mED2EEC7B719235F5482E8B620CB024B3AC567C8F_RuntimeMethod_var);
			V_1 = L_15;
			// if (box.Height < 50 || box.Width < 50)
			BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_16 = V_1;
			NullCheck(L_16);
			float L_17 = BoundingBox_get_Height_m44F20B7B98E0D1653AF681B3503AC63D95D473A8_inline(L_16, /*hidden argument*/NULL);
			if ((((float)L_17) < ((float)(50.0f))))
			{
				goto IL_02d2;
			}
		}

IL_008a:
		{
			BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_18 = V_1;
			NullCheck(L_18);
			float L_19 = BoundingBox_get_Width_m9F5893974844C8D811D4F1545FFF55EC1A3BE6FD_inline(L_18, /*hidden argument*/NULL);
			if ((((float)L_19) < ((float)(50.0f))))
			{
				goto IL_02d2;
			}
		}

IL_009a:
		{
			// int x1 = box.X > 0.0f ? (int)box.X : 0 + 2;
			BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_20 = V_1;
			NullCheck(L_20);
			float L_21 = BoundingBox_get_X_m7361C188C25CE49269F2398540BBE36CED8076BB_inline(L_20, /*hidden argument*/NULL);
			if ((((float)L_21) > ((float)(0.0f))))
			{
				goto IL_00aa;
			}
		}

IL_00a7:
		{
			G_B11_0 = 2;
			goto IL_00b1;
		}

IL_00aa:
		{
			BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_22 = V_1;
			NullCheck(L_22);
			float L_23 = BoundingBox_get_X_m7361C188C25CE49269F2398540BBE36CED8076BB_inline(L_22, /*hidden argument*/NULL);
			G_B11_0 = (((int32_t)((int32_t)L_23)));
		}

IL_00b1:
		{
			V_2 = G_B11_0;
			// int y1 = box.Y > 0.0f ? (int)box.Y : 0 + 2;
			BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_24 = V_1;
			NullCheck(L_24);
			float L_25 = BoundingBox_get_Y_mE985B150AE0E2B6700175A096E1A44AC28536C21_inline(L_24, /*hidden argument*/NULL);
			if ((((float)L_25) > ((float)(0.0f))))
			{
				goto IL_00c2;
			}
		}

IL_00bf:
		{
			G_B14_0 = 2;
			goto IL_00c9;
		}

IL_00c2:
		{
			BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_26 = V_1;
			NullCheck(L_26);
			float L_27 = BoundingBox_get_Y_mE985B150AE0E2B6700175A096E1A44AC28536C21_inline(L_26, /*hidden argument*/NULL);
			G_B14_0 = (((int32_t)((int32_t)L_27)));
		}

IL_00c9:
		{
			V_3 = G_B14_0;
			// int x2 = (box.Width + x1) > textureSize.x ? (int)(textureSize.x) - 2 : (int)(box.Width + x1);
			BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_28 = V_1;
			NullCheck(L_28);
			float L_29 = BoundingBox_get_Width_m9F5893974844C8D811D4F1545FFF55EC1A3BE6FD_inline(L_28, /*hidden argument*/NULL);
			int32_t L_30 = V_2;
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_31 = __this->get_address_of_textureSize_4();
			float L_32 = L_31->get_x_0();
			if ((((float)((float)il2cpp_codegen_add((float)L_29, (float)(((float)((float)L_30)))))) > ((float)L_32)))
			{
				goto IL_00ec;
			}
		}

IL_00e0:
		{
			BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_33 = V_1;
			NullCheck(L_33);
			float L_34 = BoundingBox_get_Width_m9F5893974844C8D811D4F1545FFF55EC1A3BE6FD_inline(L_33, /*hidden argument*/NULL);
			int32_t L_35 = V_2;
			G_B17_0 = (((int32_t)((int32_t)((float)il2cpp_codegen_add((float)L_34, (float)(((float)((float)L_35))))))));
			goto IL_00fa;
		}

IL_00ec:
		{
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_36 = __this->get_address_of_textureSize_4();
			float L_37 = L_36->get_x_0();
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)L_37))), (int32_t)2));
		}

IL_00fa:
		{
			V_4 = G_B17_0;
			// int y2 = (box.Height + y1) > textureSize.y ? (int)(textureSize.y) - 2 : (int)(box.Height + y1);
			BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_38 = V_1;
			NullCheck(L_38);
			float L_39 = BoundingBox_get_Height_m44F20B7B98E0D1653AF681B3503AC63D95D473A8_inline(L_38, /*hidden argument*/NULL);
			int32_t L_40 = V_3;
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_41 = __this->get_address_of_textureSize_4();
			float L_42 = L_41->get_y_1();
			if ((((float)((float)il2cpp_codegen_add((float)L_39, (float)(((float)((float)L_40)))))) > ((float)L_42)))
			{
				goto IL_011e;
			}
		}

IL_0112:
		{
			BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_43 = V_1;
			NullCheck(L_43);
			float L_44 = BoundingBox_get_Height_m44F20B7B98E0D1653AF681B3503AC63D95D473A8_inline(L_43, /*hidden argument*/NULL);
			int32_t L_45 = V_3;
			G_B20_0 = (((int32_t)((int32_t)((float)il2cpp_codegen_add((float)L_44, (float)(((float)((float)L_45))))))));
			goto IL_012c;
		}

IL_011e:
		{
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_46 = __this->get_address_of_textureSize_4();
			float L_47 = L_46->get_y_1();
			G_B20_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)L_47))), (int32_t)2));
		}

IL_012c:
		{
			V_5 = G_B20_0;
			// x1 = (int)(textureSize.x * x1 / 416f);
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_48 = __this->get_address_of_textureSize_4();
			float L_49 = L_48->get_x_0();
			int32_t L_50 = V_2;
			V_2 = (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)L_49, (float)(((float)((float)L_50)))))/(float)(416.0f))))));
			// y1 = (int)(textureSize.y * y1 / 416f);
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_51 = __this->get_address_of_textureSize_4();
			float L_52 = L_51->get_y_1();
			int32_t L_53 = V_3;
			V_3 = (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)L_52, (float)(((float)((float)L_53)))))/(float)(416.0f))))));
			// x2 = (int)(textureSize.x * x2 / 416f);
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_54 = __this->get_address_of_textureSize_4();
			float L_55 = L_54->get_x_0();
			int32_t L_56 = V_4;
			V_4 = (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)L_55, (float)(((float)((float)L_56)))))/(float)(416.0f))))));
			// y2 = (int)(textureSize.y * y2 / 416f);
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_57 = __this->get_address_of_textureSize_4();
			float L_58 = L_57->get_y_1();
			int32_t L_59 = V_5;
			V_5 = (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)L_58, (float)(((float)((float)L_59)))))/(float)(416.0f))))));
			// var topLeft = new Vector2(x1, y1);
			int32_t L_60 = V_2;
			int32_t L_61 = V_3;
			Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_6), (((float)((float)L_60))), (((float)((float)L_61))), /*hidden argument*/NULL);
			// var bottomRight = new Vector2(x2, y2);
			int32_t L_62 = V_4;
			int32_t L_63 = V_5;
			Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_7), (((float)((float)L_62))), (((float)((float)L_63))), /*hidden argument*/NULL);
			// Debug.LogFormat("topLeft: {0}, {1}; bottomRight: {2}, {3}",
			//     topLeft.x, topLeft.y, bottomRight.x, bottomRight.y);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_64 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_65 = L_64;
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_66 = V_6;
			float L_67 = L_66.get_x_0();
			float L_68 = L_67;
			RuntimeObject * L_69 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_68);
			NullCheck(L_65);
			ArrayElementTypeCheck (L_65, L_69);
			(L_65)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_69);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_70 = L_65;
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_71 = V_6;
			float L_72 = L_71.get_y_1();
			float L_73 = L_72;
			RuntimeObject * L_74 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_73);
			NullCheck(L_70);
			ArrayElementTypeCheck (L_70, L_74);
			(L_70)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_74);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_75 = L_70;
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_76 = V_7;
			float L_77 = L_76.get_x_0();
			float L_78 = L_77;
			RuntimeObject * L_79 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_78);
			NullCheck(L_75);
			ArrayElementTypeCheck (L_75, L_79);
			(L_75)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_79);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_80 = L_75;
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_81 = V_7;
			float L_82 = L_81.get_y_1();
			float L_83 = L_82;
			RuntimeObject * L_84 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_83);
			NullCheck(L_80);
			ArrayElementTypeCheck (L_80, L_84);
			(L_80)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_84);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogFormat_mB23DDD2CD05B2E66F9CF8CA72ECA66C02DCC209E(_stringLiteral8F341727B14D9D10A0DCE4584A1D0C6E23DE2C4D, L_80, /*hidden argument*/NULL);
			// _texture = Texture2DExtension.Box(
			//     _texture,
			//     topLeft,
			//     bottomRight,
			//     Color.cyan);
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_85 = __this->get__texture_7();
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_86 = V_6;
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_87 = V_7;
			Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_88 = Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2(/*hidden argument*/NULL);
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_89 = Texture2DExtension_Box_m9D12FC71B72445631754346EF2E1BFB9D0568746(L_85, L_86, L_87, L_88, /*hidden argument*/NULL);
			__this->set__texture_7(L_89);
			// var xText = ((topLeft.x / textureSize.x) - 0.5f) + 0.01f;
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_90 = V_6;
			float L_91 = L_90.get_x_0();
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_92 = __this->get_address_of_textureSize_4();
			float L_93 = L_92->get_x_0();
			V_8 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)((float)L_91/(float)L_93)), (float)(0.5f))), (float)(0.01f)));
			// var yText = 0.5f - (1.0f - (topLeft.y / textureSize.y));
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_94 = V_6;
			float L_95 = L_94.get_y_1();
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_96 = __this->get_address_of_textureSize_4();
			float L_97 = L_96->get_y_1();
			V_9 = ((float)il2cpp_codegen_subtract((float)(0.5f), (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)((float)L_95/(float)L_97))))));
			// _thisBoundingBox = Instantiate(
			//     textBoxPrefab,
			//     Vector3.zero,
			//     Quaternion.identity,
			//     this.gameObject.transform) as GameObject;
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_98 = __this->get_textBoxPrefab_5();
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_99 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_100 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_101 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
			NullCheck(L_101);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_102 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_101, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_103 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m6895A7A231540279E01A537649EB42814FD2671B(L_98, L_99, L_100, L_102, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m6895A7A231540279E01A537649EB42814FD2671B_RuntimeMethod_var);
			__this->set__thisBoundingBox_8(L_103);
			// _thisBoundingBox.transform.localPosition = new Vector3(xText, yText, 0f);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_104 = __this->get__thisBoundingBox_8();
			NullCheck(L_104);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_105 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_104, /*hidden argument*/NULL);
			float L_106 = V_8;
			float L_107 = V_9;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_108;
			memset((&L_108), 0, sizeof(L_108));
			Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_108), L_106, L_107, (0.0f), /*hidden argument*/NULL);
			NullCheck(L_105);
			Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_105, L_108, /*hidden argument*/NULL);
			// var label = $"{box.Label}: {box.Confidence} ";
			BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_109 = V_1;
			NullCheck(L_109);
			String_t* L_110 = BoundingBox_get_Label_m788FE38136E283E055925F59A2B8DDC679A95102_inline(L_109, /*hidden argument*/NULL);
			BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_111 = V_1;
			NullCheck(L_111);
			float L_112 = BoundingBox_get_Confidence_m65994A5209CB19A6688665FFB42B4E2CDFCCD2AA_inline(L_111, /*hidden argument*/NULL);
			float L_113 = L_112;
			RuntimeObject * L_114 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_113);
			String_t* L_115 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralA7D2CDC2C8F8B6FF5B227F1E5310143E4C265E6B, L_110, L_114, /*hidden argument*/NULL);
			V_10 = L_115;
			// _thisBoundingBox.GetComponent<TextMesh>().text = label;
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_116 = __this->get__thisBoundingBox_8();
			NullCheck(L_116);
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_117 = GameObject_GetComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_m6548CB329DD537D824051D169084C7FB1CD251D8(L_116, /*hidden argument*/GameObject_GetComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_m6548CB329DD537D824051D169084C7FB1CD251D8_RuntimeMethod_var);
			String_t* L_118 = V_10;
			NullCheck(L_117);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_117, L_118, /*hidden argument*/NULL);
			// _thisBoundingBox.GetComponent<TextMesh>().color = Color.cyan;
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_119 = __this->get__thisBoundingBox_8();
			NullCheck(L_119);
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_120 = GameObject_GetComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_m6548CB329DD537D824051D169084C7FB1CD251D8(L_119, /*hidden argument*/GameObject_GetComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_m6548CB329DD537D824051D169084C7FB1CD251D8_RuntimeMethod_var);
			Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_121 = Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2(/*hidden argument*/NULL);
			NullCheck(L_120);
			TextMesh_set_color_mF86B9E8CD0F9FD387AF7D543337B5C14DFE67AF0(L_120, L_121, /*hidden argument*/NULL);
		}

IL_02d2:
		{
			// foreach (var box in boxes)
			bool L_122 = Enumerator_MoveNext_m813FB5877ED872791AF4DE4D36E12BC4CEC71FF8((Enumerator_t33CA2315FF3D74E9ADAD80F3BB4B3129553C76C1 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m813FB5877ED872791AF4DE4D36E12BC4CEC71FF8_RuntimeMethod_var);
			if (L_122)
			{
				goto IL_0072;
			}
		}

IL_02de:
		{
			IL2CPP_LEAVE(0x2EE, FINALLY_02e0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02e0;
	}

FINALLY_02e0:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m370D55FE9FF4E2AE42A6ABF701C630FFD51A5AE4((Enumerator_t33CA2315FF3D74E9ADAD80F3BB4B3129553C76C1 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m370D55FE9FF4E2AE42A6ABF701C630FFD51A5AE4_RuntimeMethod_var);
		IL2CPP_END_FINALLY(736)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(736)
	{
		IL2CPP_JUMP_TBL(0x2EE, IL_02ee)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_02ee:
	{
		// _texture.Apply();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_123 = __this->get__texture_7();
		NullCheck(L_123);
		Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA(L_123, /*hidden argument*/NULL);
		// _material.mainTexture = _texture;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_124 = __this->get__material_6();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_125 = __this->get__texture_7();
		NullCheck(L_124);
		Material_set_mainTexture_m0742CFF768E9701618DA07C71F009239AB31EB41(L_124, L_125, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DrawingUtils.DrawBoundingBoxes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawBoundingBoxes__ctor_m6F3B3B0AE3DAB87235B25CEF40D82ECA09D71CE6 (DrawBoundingBoxes_t5B83439701CBD420BEECFAE9F126E90FA1D08781 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// UnityEngine.Texture2D DrawingUtils.Texture2DExtension::Box(UnityEngine.Texture2D,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * Texture2DExtension_Box_m9D12FC71B72445631754346EF2E1BFB9D0568746 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___tex0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___tl1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___br2, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color3, const RuntimeMethod* method)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var tr = new Vector2(br.x, tl.y);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___br2;
		float L_1 = L_0.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___tl1;
		float L_3 = L_2.get_y_1();
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), L_1, L_3, /*hidden argument*/NULL);
		// tex = Line(tex, tl, tr, color);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_4 = ___tex0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = ___tl1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = V_0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_7 = ___color3;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_8 = Texture2DExtension_Line_mA1E0B540A88277013555C23E9B3355CEAE2CC96F(L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		___tex0 = L_8;
		// var bl = new Vector2(tl.x, br.y);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = ___tl1;
		float L_10 = L_9.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = ___br2;
		float L_12 = L_11.get_y_1();
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_1), L_10, L_12, /*hidden argument*/NULL);
		// tex = Line(tex, tl, bl, color);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_13 = ___tex0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = ___tl1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = V_1;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_16 = ___color3;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_17 = Texture2DExtension_Line_mA1E0B540A88277013555C23E9B3355CEAE2CC96F(L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		___tex0 = L_17;
		// tex = Line(tex, bl, br, color);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_18 = ___tex0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = ___br2;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_21 = ___color3;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_22 = Texture2DExtension_Line_mA1E0B540A88277013555C23E9B3355CEAE2CC96F(L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		___tex0 = L_22;
		// tex = Line(tex, br, tr, color);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_23 = ___tex0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_24 = ___br2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_25 = V_0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_26 = ___color3;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_27 = Texture2DExtension_Line_mA1E0B540A88277013555C23E9B3355CEAE2CC96F(L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
		___tex0 = L_27;
		// return tex;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_28 = ___tex0;
		return L_28;
	}
}
// UnityEngine.Texture2D DrawingUtils.Texture2DExtension::Line(UnityEngine.Texture2D,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * Texture2DExtension_Line_mA1E0B540A88277013555C23E9B3355CEAE2CC96F (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___tex0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___p11, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___p22, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2DExtension_Line_mA1E0B540A88277013555C23E9B3355CEAE2CC96F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// Vector2 t = p1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___p11;
		V_0 = L_0;
		// float frac = 1 / Mathf.Sqrt(Mathf.Pow(p2.x - p1.x, 2) + Mathf.Pow(p2.y - p1.y, 2));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___p22;
		float L_2 = L_1.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = ___p11;
		float L_4 = L_3.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_5 = powf(((float)il2cpp_codegen_subtract((float)L_2, (float)L_4)), (2.0f));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = ___p22;
		float L_7 = L_6.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = ___p11;
		float L_9 = L_8.get_y_1();
		float L_10 = powf(((float)il2cpp_codegen_subtract((float)L_7, (float)L_9)), (2.0f));
		float L_11 = sqrtf(((float)il2cpp_codegen_add((float)L_5, (float)L_10)));
		V_1 = ((float)((float)(1.0f)/(float)L_11));
		// float ctr = 0;
		V_2 = (0.0f);
		goto IL_0099;
	}

IL_0045:
	{
		// t = Vector2.Lerp(p1, p2, ctr);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = ___p11;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = ___p22;
		float L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = Vector2_Lerp_m85DD66409D128B4F175627F89FA9D8751B75589F(L_12, L_13, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		// ctr += frac;
		float L_16 = V_2;
		float L_17 = V_1;
		V_2 = ((float)il2cpp_codegen_add((float)L_16, (float)L_17));
		// tex.SetPixel((int)t.x - 1, (int)t.y - 1, color);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_18 = ___tex0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = V_0;
		float L_20 = L_19.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_21 = V_0;
		float L_22 = L_21.get_y_1();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_23 = ___color3;
		NullCheck(L_18);
		Texture2D_SetPixel_m8BE87C152447B812D06CB894B3570269CC2DE7C3(L_18, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)L_20))), (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)L_22))), (int32_t)1)), L_23, /*hidden argument*/NULL);
		// tex.SetPixel((int)t.x, (int)t.y, color);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_24 = ___tex0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_25 = V_0;
		float L_26 = L_25.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27 = V_0;
		float L_28 = L_27.get_y_1();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_29 = ___color3;
		NullCheck(L_24);
		Texture2D_SetPixel_m8BE87C152447B812D06CB894B3570269CC2DE7C3(L_24, (((int32_t)((int32_t)L_26))), (((int32_t)((int32_t)L_28))), L_29, /*hidden argument*/NULL);
		// tex.SetPixel((int)t.x + 1, (int)t.y + 1, color);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_30 = ___tex0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_31 = V_0;
		float L_32 = L_31.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_33 = V_0;
		float L_34 = L_33.get_y_1();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_35 = ___color3;
		NullCheck(L_30);
		Texture2D_SetPixel_m8BE87C152447B812D06CB894B3570269CC2DE7C3(L_30, ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)L_32))), (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)L_34))), (int32_t)1)), L_35, /*hidden argument*/NULL);
	}

IL_0099:
	{
		// while ((int)t.x != (int)p2.x || (int)t.y != (int)p2.y)
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_36 = V_0;
		float L_37 = L_36.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_38 = ___p22;
		float L_39 = L_38.get_x_0();
		if ((!(((uint32_t)(((int32_t)((int32_t)L_37)))) == ((uint32_t)(((int32_t)((int32_t)L_39)))))))
		{
			goto IL_0045;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_40 = V_0;
		float L_41 = L_40.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_42 = ___p22;
		float L_43 = L_42.get_y_1();
		if ((!(((uint32_t)(((int32_t)((int32_t)L_41)))) == ((uint32_t)(((int32_t)((int32_t)L_43)))))))
		{
			goto IL_0045;
		}
	}
	{
		// return tex;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_44 = ___tex0;
		return L_44;
	}
}
// UnityEngine.Texture2D DrawingUtils.Texture2DExtension::TransparentTexture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * Texture2DExtension_TransparentTexture_m69BD7C2533E5B64B8BB217DBCD5878F3D9D52F8C (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___tex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2DExtension_TransparentTexture_m69BD7C2533E5B64B8BB217DBCD5878F3D9D52F8C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Color fillColor = Color.clear;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = Color_get_clear_m419239BDAEB3D3C4B4291BF2C6EF09A7D7D81360(/*hidden argument*/NULL);
		V_0 = L_0;
		// Color[] fillPixels = new Color[tex.width * tex.height];
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_1 = ___tex0;
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_1);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_3 = ___tex0;
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_3);
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_5 = (ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)(ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)SZArrayNew(ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_4)));
		V_1 = L_5;
		// for (int i = 0; i < fillPixels.Length; i++)
		V_2 = 0;
		goto IL_0029;
	}

IL_001d:
	{
		// fillPixels[i] = fillColor;
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_6 = V_1;
		int32_t L_7 = V_2;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_8 = V_0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 )L_8);
		// for (int i = 0; i < fillPixels.Length; i++)
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0029:
	{
		// for (int i = 0; i < fillPixels.Length; i++)
		int32_t L_10 = V_2;
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))))
		{
			goto IL_001d;
		}
	}
	{
		// tex.SetPixels(fillPixels);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_12 = ___tex0;
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_13 = V_1;
		NullCheck(L_12);
		Texture2D_SetPixels_mDE50229135F49F323D265340C415D680CCB2FB92(L_12, L_13, /*hidden argument*/NULL);
		// return tex;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_14 = ___tex0;
		return L_14;
	}
}
// System.Void DrawingUtils.Texture2DExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2DExtension__ctor_m9FB36E0F9F39B15BDE1445322F120A298F8CF977 (Texture2DExtension_t20DB441D7A3C5B489A36107F966BF05CFF8F08BE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void YoloDetectionHoloLens.CvUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CvUtils__ctor_mC45B7515B719BB6225F3DE4E25B38A647109C199 (CvUtils_tDDE420F005D1E8CD9B8960D7885BA9F3C09624B4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void YoloDetectionHoloLens.YoloDetection::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YoloDetection_Start_m2213099EF893F1B0050F6CC12C9F4DD8383F6919 (YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YoloDetection_Start_m2213099EF893F1B0050F6CC12C9F4DD8383F6919_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_0 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086  L_1 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086_mE287B3539418CDDD25E13BCA833FC8A6B2F5A312((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086_mE287B3539418CDDD25E13BCA833FC8A6B2F5A312_RuntimeMethod_var);
		return;
	}
}
// System.Void YoloDetectionHoloLens.YoloDetection::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YoloDetection_OnApplicationQuit_m6A1736D565DEB45593ED0C16A19AE48A29A377F0 (YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YoloDetection_OnApplicationQuit_m6A1736D565DEB45593ED0C16A19AE48A29A377F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_0 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4  L_1 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4_m202E08614EAC7260259F7ED67E2CA5E8C6C5A2CB((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4_m202E08614EAC7260259F7ED67E2CA5E8C6C5A2CB_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.Task YoloDetectionHoloLens.YoloDetection::StartHoloLensMediaFrameSourceGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * YoloDetection_StartHoloLensMediaFrameSourceGroup_m6125D3DFC68D2683495149A91E4B5B2F28A305F7 (YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YoloDetection_StartHoloLensMediaFrameSourceGroup_m6125D3DFC68D2683495149A91E4B5B2F28A305F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_0 = AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E  L_1 = V_0;
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_Start_TisU3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E_mAF69801E94737358106A53C7E841690872A864AC((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)(&V_1), (U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E_mAF69801E94737358106A53C7E841690872A864AC_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_4 = AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Threading.Tasks.Task YoloDetectionHoloLens.YoloDetection::StopHoloLensMediaFrameSourceGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * YoloDetection_StopHoloLensMediaFrameSourceGroup_mD6B32FF012FC6FD8F3C3E35E12C2CBEF3FA6A933 (YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YoloDetection_StopHoloLensMediaFrameSourceGroup_mD6B32FF012FC6FD8F3C3E35E12C2CBEF3FA6A933_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_0 = AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E  L_1 = V_0;
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_Start_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E_mC2779327E38A70A4E5AFE04497E71D9E972229D7((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)(&V_1), (U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E_mC2779327E38A70A4E5AFE04497E71D9E972229D7_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_4 = AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Collections.IEnumerator YoloDetectionHoloLens.YoloDetection::ConnectSocket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YoloDetection_ConnectSocket_m7E8DFE7099ECBF475A8BC8D23322AD17674FA469 (YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YoloDetection_ConnectSocket_m7E8DFE7099ECBF475A8BC8D23322AD17674FA469_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CConnectSocketU3Ed__21_t99138AC9287719D80B4741681665A8EADE3A77D5 * L_0 = (U3CConnectSocketU3Ed__21_t99138AC9287719D80B4741681665A8EADE3A77D5 *)il2cpp_codegen_object_new(U3CConnectSocketU3Ed__21_t99138AC9287719D80B4741681665A8EADE3A77D5_il2cpp_TypeInfo_var);
		U3CConnectSocketU3Ed__21__ctor_m276D99A670D1D03AA65A899CC37FBCE7C628B8F7(L_0, 0, /*hidden argument*/NULL);
		U3CConnectSocketU3Ed__21_t99138AC9287719D80B4741681665A8EADE3A77D5 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void YoloDetectionHoloLens.YoloDetection::InitializeHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YoloDetection_InitializeHandler_m39D449D3810CE283420F77E7E0FD1605EFFA0673 (YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YoloDetection_InitializeHandler_m39D449D3810CE283420F77E7E0FD1605EFFA0673_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gestureRecognizer = new GestureRecognizer();
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_0 = (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE *)il2cpp_codegen_object_new(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_il2cpp_TypeInfo_var);
		GestureRecognizer__ctor_m4EC0013B225C0189D0ACB2DC77092C809764F1D5(L_0, /*hidden argument*/NULL);
		__this->set__gestureRecognizer_5(L_0);
		// _gestureRecognizer.SetRecognizableGestures(GestureSettings.DoubleTap);
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_1 = __this->get__gestureRecognizer_5();
		NullCheck(L_1);
		GestureRecognizer_SetRecognizableGestures_mF459BAE914B9B2E01E7B1652ACF23C5C2722DA68(L_1, 2, /*hidden argument*/NULL);
		// _gestureRecognizer.StartCapturingGestures();
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_2 = __this->get__gestureRecognizer_5();
		NullCheck(L_2);
		GestureRecognizer_StartCapturingGestures_mD02F289C8263C8EACB47B4593E55C8B767C524FA(L_2, /*hidden argument*/NULL);
		// _gestureRecognizer.Tapped += GestureRecognizer_Tapped;
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_3 = __this->get__gestureRecognizer_5();
		Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * L_4 = (Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 *)il2cpp_codegen_object_new(Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12_il2cpp_TypeInfo_var);
		Action_1__ctor_mC172C98F4F0CF247C0880F1F05D557C9005F0FF0(L_4, __this, (intptr_t)((intptr_t)YoloDetection_GestureRecognizer_Tapped_m36613AC9F634E60546F013B8E50AE989AFDD47C8_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC172C98F4F0CF247C0880F1F05D557C9005F0FF0_RuntimeMethod_var);
		NullCheck(L_3);
		GestureRecognizer_add_Tapped_mD5587B3F0115F9AC0599D555E2988E63136DA3EC(L_3, L_4, /*hidden argument*/NULL);
		// Debug.Log("Gesture recognizer initialized.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralDE4748660C68C578CE09DBF781372426E97DA31B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void YoloDetectionHoloLens.YoloDetection::GestureRecognizer_Tapped(UnityEngine.XR.WSA.Input.TappedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YoloDetection_GestureRecognizer_Tapped_m36613AC9F634E60546F013B8E50AE989AFDD47C8 (YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * __this, TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6  ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YoloDetection_GestureRecognizer_Tapped_m36613AC9F634E60546F013B8E50AE989AFDD47C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _tapCount += obj.tapCount;
		int32_t L_0 = __this->get__tapCount_10();
		int32_t L_1 = TappedEventArgs_get_tapCount_m5E131CC9B998A34BBD45C264538D982C7B31C291((TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6 *)(&___obj0), /*hidden argument*/NULL);
		__this->set__tapCount_10(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// Debug.LogFormat("OnTappedEvent: tapCount = {0}", _tapCount);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_2;
		int32_t L_4 = __this->get__tapCount_10();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogFormat_mB23DDD2CD05B2E66F9CF8CA72ECA66C02DCC209E(_stringLiteral3CDFC97974C6F1A3BAFF59D51C8CCE0DE6FE48F6, L_3, /*hidden argument*/NULL);
		// StartCoroutine(ConnectSocket());
		RuntimeObject* L_7 = YoloDetection_ConnectSocket_m7E8DFE7099ECBF475A8BC8D23322AD17674FA469(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void YoloDetectionHoloLens.YoloDetection::CloseHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YoloDetection_CloseHandler_m6341FB9F96C4353C4D846D88C029B7232371F752 (YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * __this, const RuntimeMethod* method)
{
	{
		// _gestureRecognizer.StopCapturingGestures();
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_0 = __this->get__gestureRecognizer_5();
		NullCheck(L_0);
		GestureRecognizer_StopCapturingGestures_mBA5D5DFFC507CE972150A242E9DFC59B06121D61(L_0, /*hidden argument*/NULL);
		// _gestureRecognizer.Dispose();
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_1 = __this->get__gestureRecognizer_5();
		NullCheck(L_1);
		GestureRecognizer_Dispose_mCDB9196736129DA85372020E13A8768175E9A97C(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void YoloDetectionHoloLens.YoloDetection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YoloDetection__ctor_m9A918BB846D7B59D28F1F51A24048E03014C9238 (YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YoloDetection__ctor_m9A918BB846D7B59D28F1F51A24048E03014C9238_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string ipAddressForConnect = "000.00.00.0";
		__this->set_ipAddressForConnect_7(_stringLiteral50F3E52D0FF41B3145D9217D4B5325645210B7BF);
		// public string hostId = "12345";
		__this->set_hostId_8(_stringLiteral8CB2237D0679CA88DB6464EAC60DA96345513964);
		// private string[] _labels = {
		//     "aeroplane", "bicycle", "bird", "boat", "bottle",
		//     "bus", "car", "cat", "chair", "cow",
		//     "diningtable", "dog", "horse", "motorbike", "person",
		//     "pottedplant", "sheep", "sofa", "train", "tvmonitor"
		// };
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral2488D2EC38A36283EC47A4FA993159300A16ABE7);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2488D2EC38A36283EC47A4FA993159300A16ABE7);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralA3E3318B0A3061F0557EEBF61E84AB99723AA21B);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA3E3318B0A3061F0557EEBF61E84AB99723AA21B);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralCD92815BF6273ACBAF834B9FAED277C722068291);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralCD92815BF6273ACBAF834B9FAED277C722068291);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral2A50DDF9299C2BC22E5EE7CAE8D46440A8639A1E);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2A50DDF9299C2BC22E5EE7CAE8D46440A8639A1E);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralAFCAC3549C932CB9C3E4BD4A62017327B7D7E039);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralAFCAC3549C932CB9C3E4BD4A62017327B7D7E039);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral32C70CEBF110EEDB8637B5E875A6C94F1EF6E8C5);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral32C70CEBF110EEDB8637B5E875A6C94F1EF6E8C5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral9E32521DD2F8B27B64FE869FDADFA53E7D976F56);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral9E32521DD2F8B27B64FE869FDADFA53E7D976F56);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral9D989E8D27DC9E0EC3389FC855F142C3D40F0C50);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral9D989E8D27DC9E0EC3389FC855F142C3D40F0C50);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral851E13A65333F91428701953BA315C36D27D71EB);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral851E13A65333F91428701953BA315C36D27D71EB);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral8BBDDB4A037421A7B1E1B1BDD6447B03097F0DF1);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral8BBDDB4A037421A7B1E1B1BDD6447B03097F0DF1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralF4B99F032C22B5BEC7A39B66BDC207F3390231A0);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralF4B99F032C22B5BEC7A39B66BDC207F3390231A0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralE49512524F47B4138D850C9D9D85972927281DA0);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralE49512524F47B4138D850C9D9D85972927281DA0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral091B5035885C00170FEC9ECF24224933E3DE3FCC);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral091B5035885C00170FEC9ECF24224933E3DE3FCC);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral1EE609382901A262FB16D7B7B19630F034B77F12);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral1EE609382901A262FB16D7B7B19630F034B77F12);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralD39A47507BBE27C2A7948861847F3607EDA8E1BE);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralD39A47507BBE27C2A7948861847F3607EDA8E1BE);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral65EA01F22804D2263DA97B976E79E83FC5768B3D);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral65EA01F22804D2263DA97B976E79E83FC5768B3D);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral6525F2E663E8D223C2F9041FEFDF2DBA6CA70D63);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteral6525F2E663E8D223C2F9041FEFDF2DBA6CA70D63);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral68E0DCE54A9E2E87FCB590EC7B7E61E1B73EE778);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)_stringLiteral68E0DCE54A9E2E87FCB590EC7B7E61E1B73EE778);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral94EFDD6F628EDA9C1AE893467C9652808443EF3E);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteral94EFDD6F628EDA9C1AE893467C9652808443EF3E);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralCA869464FCD7C463BB3078DEA53E273D9305656F);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)_stringLiteralCA869464FCD7C463BB3078DEA53E273D9305656F);
		__this->set__labels_11(L_20);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void YoloDetectionHoloLens.YoloDetection_<ConnectSocket>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectSocketU3Ed__21__ctor_m276D99A670D1D03AA65A899CC37FBCE7C628B8F7 (U3CConnectSocketU3Ed__21_t99138AC9287719D80B4741681665A8EADE3A77D5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void YoloDetectionHoloLens.YoloDetection_<ConnectSocket>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectSocketU3Ed__21_System_IDisposable_Dispose_m21442EA85C34A5CF524E82047DCF196D4B4C4800 (U3CConnectSocketU3Ed__21_t99138AC9287719D80B4741681665A8EADE3A77D5 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean YoloDetectionHoloLens.YoloDetection_<ConnectSocket>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CConnectSocketU3Ed__21_MoveNext_m12EF0E1B460131A7AE42DA343AE4D471DDDC6833 (U3CConnectSocketU3Ed__21_t99138AC9287719D80B4741681665A8EADE3A77D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CConnectSocketU3Ed__21_MoveNext_m12EF0E1B460131A7AE42DA343AE4D471DDDC6833_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * V_6 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0190;
			}
			case 2:
			{
				goto IL_0229;
			}
			case 3:
			{
				goto IL_023c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// myText.text = "Connecting to host socket.";
		YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_3 = V_1;
		NullCheck(L_3);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = L_3->get_myText_9();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral8AB5B342F3E264773622A8B0C6501A028824ADF2);
		// Debug.Log("Connecting to host socket.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral8AB5B342F3E264773622A8B0C6501A028824ADF2, /*hidden argument*/NULL);
		// InteropDeviceReceiver interopDeviceReceiver
		//     = new InteropDeviceReceiver();
		InteropDeviceReceiver_t8F7F4847F49139840744A5EF41D07048541E8056 * L_5 = (InteropDeviceReceiver_t8F7F4847F49139840744A5EF41D07048541E8056 *)il2cpp_codegen_object_new(InteropDeviceReceiver_t8F7F4847F49139840744A5EF41D07048541E8056_il2cpp_TypeInfo_var);
		InteropDeviceReceiver__ctor_m4A2282AAC923E5C05842DDF65DDA5CA19F8A18A0(L_5, /*hidden argument*/NULL);
		__this->set_U3CinteropDeviceReceiverU3E5__2_3(L_5);
		// interopDeviceReceiver.ConnectSocket_Click(ipAddressForConnect, hostId);
		InteropDeviceReceiver_t8F7F4847F49139840744A5EF41D07048541E8056 * L_6 = __this->get_U3CinteropDeviceReceiverU3E5__2_3();
		YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_ipAddressForConnect_7();
		YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10 = L_9->get_hostId_8();
		NullCheck(L_6);
		InteropDeviceReceiver_ConnectSocket_Click_m0B4955E4ECB1FBE4E3081CC3CE2DF0FBF0C0CC54(L_6, L_8, L_10, /*hidden argument*/NULL);
	}

IL_0069:
	{
		// var dataBuffer = interopDeviceReceiver.GetBoundingBoxResults();
		InteropDeviceReceiver_t8F7F4847F49139840744A5EF41D07048541E8056 * L_11 = __this->get_U3CinteropDeviceReceiverU3E5__2_3();
		NullCheck(L_11);
		RuntimeObject* L_12 = InteropDeviceReceiver_GetBoundingBoxResults_mEC3C7223049867407C2BB56D4F42F6BC1C0ECE54(L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		// List<BoundingBox> boundingBoxes =
		//     new List<BoundingBox>();
		List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 * L_13 = (List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 *)il2cpp_codegen_object_new(List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591_il2cpp_TypeInfo_var);
		List_1__ctor_m676738485DAF2EB7F8FCCCB098940619AAD1256A(L_13, /*hidden argument*/List_1__ctor_m676738485DAF2EB7F8FCCCB098940619AAD1256A_RuntimeMethod_var);
		V_3 = L_13;
		// var textString = "";
		__this->set_U3CtextStringU3E5__3_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// if (dataBuffer.Count != 0)
		RuntimeObject* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count() */, ICollection_1_t80AAA2E9B1A5ACE1A1B9B4E9708E673AC848FBF8_il2cpp_TypeInfo_var, L_14);
		if (!L_15)
		{
			goto IL_01a7;
		}
	}
	{
		// var numBoxes = (int)(dataBuffer.Count / (float)boxSize);
		RuntimeObject* L_16 = V_2;
		NullCheck(L_16);
		int32_t L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count() */, ICollection_1_t80AAA2E9B1A5ACE1A1B9B4E9708E673AC848FBF8_il2cpp_TypeInfo_var, L_16);
		V_4 = (((int32_t)((int32_t)((float)((float)(((float)((float)L_17)))/(float)(6.0f))))));
		// for (var boxCount = 0; boxCount < numBoxes; boxCount++)
		V_5 = 0;
		goto IL_0142;
	}

IL_00a9:
	{
		// BoundingBox box = new BoundingBox
		// {
		//     TopLabel = dataBuffer[(boxCount * boxSize) + 0], // TopLabel is int
		//     X = dataBuffer[(boxCount * boxSize) + 1],
		//     Y = dataBuffer[(boxCount * boxSize) + 2],
		// 
		//     Height = dataBuffer[(boxCount * boxSize) + 3],
		//     Width = dataBuffer[(boxCount * boxSize) + 4],
		// 
		//     Confidence = dataBuffer[(boxCount * boxSize) + 5]
		// };
		BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_18 = (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E *)il2cpp_codegen_object_new(BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E_il2cpp_TypeInfo_var);
		BoundingBox__ctor_mF91EB45114F7548B304C39AEE5856A3850C2FD65(L_18, /*hidden argument*/NULL);
		BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_19 = L_18;
		RuntimeObject* L_20 = V_2;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		uint8_t L_22 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Byte>::get_Item(System.Int32) */, IList_1_tC112D5EFC7DB01066BFD64B6EB0EAB4B2BA1DE10_il2cpp_TypeInfo_var, L_20, ((int32_t)il2cpp_codegen_multiply((int32_t)L_21, (int32_t)6)));
		NullCheck(L_19);
		BoundingBox_put_TopLabel_m60E903D13BDDC6DD044D1F332EA4EC9F265ED1C5_inline(L_19, L_22, /*hidden argument*/NULL);
		BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_23 = L_19;
		RuntimeObject* L_24 = V_2;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		uint8_t L_26 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Byte>::get_Item(System.Int32) */, IList_1_tC112D5EFC7DB01066BFD64B6EB0EAB4B2BA1DE10_il2cpp_TypeInfo_var, L_24, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)6)), (int32_t)1)));
		NullCheck(L_23);
		BoundingBox_put_X_m479D6E24443A7FD4AA0E8BCF67C2069D130FEBD2_inline(L_23, (((float)((float)L_26))), /*hidden argument*/NULL);
		BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_27 = L_23;
		RuntimeObject* L_28 = V_2;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		uint8_t L_30 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Byte>::get_Item(System.Int32) */, IList_1_tC112D5EFC7DB01066BFD64B6EB0EAB4B2BA1DE10_il2cpp_TypeInfo_var, L_28, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)6)), (int32_t)2)));
		NullCheck(L_27);
		BoundingBox_put_Y_mF04BCDDF71EADCB4A96387180129AC56F3993B6B_inline(L_27, (((float)((float)L_30))), /*hidden argument*/NULL);
		BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_31 = L_27;
		RuntimeObject* L_32 = V_2;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		uint8_t L_34 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Byte>::get_Item(System.Int32) */, IList_1_tC112D5EFC7DB01066BFD64B6EB0EAB4B2BA1DE10_il2cpp_TypeInfo_var, L_32, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_33, (int32_t)6)), (int32_t)3)));
		NullCheck(L_31);
		BoundingBox_put_Height_m38EB832CB2BDDE7A130B8C1C95C1A701B6423AAD_inline(L_31, (((float)((float)L_34))), /*hidden argument*/NULL);
		BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_35 = L_31;
		RuntimeObject* L_36 = V_2;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		uint8_t L_38 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Byte>::get_Item(System.Int32) */, IList_1_tC112D5EFC7DB01066BFD64B6EB0EAB4B2BA1DE10_il2cpp_TypeInfo_var, L_36, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_37, (int32_t)6)), (int32_t)4)));
		NullCheck(L_35);
		BoundingBox_put_Width_m13E3ECE097F5E74717FC250C0F8E1A004E3CD5EF_inline(L_35, (((float)((float)L_38))), /*hidden argument*/NULL);
		BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_39 = L_35;
		RuntimeObject* L_40 = V_2;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		uint8_t L_42 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Byte>::get_Item(System.Int32) */, IList_1_tC112D5EFC7DB01066BFD64B6EB0EAB4B2BA1DE10_il2cpp_TypeInfo_var, L_40, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_41, (int32_t)6)), (int32_t)5)));
		NullCheck(L_39);
		BoundingBox_put_Confidence_m92A5795FEBACE603B43ED5F1F1785662651AA1ED_inline(L_39, (((float)((float)L_42))), /*hidden argument*/NULL);
		V_6 = L_39;
		// box.Label = _labels[box.TopLabel];
		BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_43 = V_6;
		YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_44 = V_1;
		NullCheck(L_44);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_45 = L_44->get__labels_11();
		BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_46 = V_6;
		NullCheck(L_46);
		int32_t L_47 = BoundingBox_get_TopLabel_m96627B1BEACBCC7CAF1C47D692B101680E80CDA3_inline(L_46, /*hidden argument*/NULL);
		NullCheck(L_45);
		int32_t L_48 = L_47;
		String_t* L_49 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_43);
		BoundingBox_put_Label_mA3CF2637F14B4F08DF8B02FCBA0AD5A23DA3B843_inline(L_43, L_49, /*hidden argument*/NULL);
		// boundingBoxes.Add(box);
		List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 * L_50 = V_3;
		BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_51 = V_6;
		NullCheck(L_50);
		List_1_Add_m4A70F555579FEDB39DDCEDC6265FDFADAD4C774B(L_50, L_51, /*hidden argument*/List_1_Add_m4A70F555579FEDB39DDCEDC6265FDFADAD4C774B_RuntimeMethod_var);
		// for (var boxCount = 0; boxCount < numBoxes; boxCount++)
		int32_t L_52 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_0142:
	{
		// for (var boxCount = 0; boxCount < numBoxes; boxCount++)
		int32_t L_53 = V_5;
		int32_t L_54 = V_4;
		if ((((int32_t)L_53) < ((int32_t)L_54)))
		{
			goto IL_00a9;
		}
	}
	{
		// drawBoundingBoxes.DrawBoxes(boundingBoxes);
		YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_55 = V_1;
		NullCheck(L_55);
		DrawBoundingBoxes_t5B83439701CBD420BEECFAE9F126E90FA1D08781 * L_56 = L_55->get_drawBoundingBoxes_6();
		List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 * L_57 = V_3;
		NullCheck(L_56);
		DrawBoundingBoxes_DrawBoxes_mBF91D848C6332C38633F6E64F2D9864AAEE605AF(L_56, L_57, /*hidden argument*/NULL);
		// myText.text = $"Received {boundingBoxes.Count} bounding boxes.";
		YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_58 = V_1;
		NullCheck(L_58);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_59 = L_58->get_myText_9();
		List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 * L_60 = V_3;
		NullCheck(L_60);
		int32_t L_61 = List_1_get_Count_m779E2C8DA57F6D6C703A22EEC269AD1B308197E4_inline(L_60, /*hidden argument*/List_1_get_Count_m779E2C8DA57F6D6C703A22EEC269AD1B308197E4_RuntimeMethod_var);
		int32_t L_62 = L_61;
		RuntimeObject * L_63 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_62);
		String_t* L_64 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral26A2991396F6FE0B6C703B5F7CCF1D7AA06BA0AB, L_63, /*hidden argument*/NULL);
		NullCheck(L_59);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_59, L_64);
		// yield return new WaitForSeconds(0.05f);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_65 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_65, (0.05f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_65);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0190:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Debug.Log(textString);
		String_t* L_66 = __this->get_U3CtextStringU3E5__3_4();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_66, /*hidden argument*/NULL);
		// }
		goto IL_0230;
	}

IL_01a7:
	{
		// boundingBoxes.Add(new BoundingBox()
		// {
		//     Confidence = 0,
		//     Label = "",
		//     Height = 0,
		//     Width = 0,
		//     X = 0,
		//     Y = 0});
		List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 * L_67 = V_3;
		BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_68 = (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E *)il2cpp_codegen_object_new(BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E_il2cpp_TypeInfo_var);
		BoundingBox__ctor_mF91EB45114F7548B304C39AEE5856A3850C2FD65(L_68, /*hidden argument*/NULL);
		BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_69 = L_68;
		NullCheck(L_69);
		BoundingBox_put_Confidence_m92A5795FEBACE603B43ED5F1F1785662651AA1ED_inline(L_69, (0.0f), /*hidden argument*/NULL);
		BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_70 = L_69;
		NullCheck(L_70);
		BoundingBox_put_Label_mA3CF2637F14B4F08DF8B02FCBA0AD5A23DA3B843_inline(L_70, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_71 = L_70;
		NullCheck(L_71);
		BoundingBox_put_Height_m38EB832CB2BDDE7A130B8C1C95C1A701B6423AAD_inline(L_71, (0.0f), /*hidden argument*/NULL);
		BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_72 = L_71;
		NullCheck(L_72);
		BoundingBox_put_Width_m13E3ECE097F5E74717FC250C0F8E1A004E3CD5EF_inline(L_72, (0.0f), /*hidden argument*/NULL);
		BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_73 = L_72;
		NullCheck(L_73);
		BoundingBox_put_X_m479D6E24443A7FD4AA0E8BCF67C2069D130FEBD2_inline(L_73, (0.0f), /*hidden argument*/NULL);
		BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * L_74 = L_73;
		NullCheck(L_74);
		BoundingBox_put_Y_mF04BCDDF71EADCB4A96387180129AC56F3993B6B_inline(L_74, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_67);
		List_1_Add_m4A70F555579FEDB39DDCEDC6265FDFADAD4C774B(L_67, L_74, /*hidden argument*/List_1_Add_m4A70F555579FEDB39DDCEDC6265FDFADAD4C774B_RuntimeMethod_var);
		// drawBoundingBoxes.DrawBoxes(boundingBoxes);
		YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_75 = V_1;
		NullCheck(L_75);
		DrawBoundingBoxes_t5B83439701CBD420BEECFAE9F126E90FA1D08781 * L_76 = L_75->get_drawBoundingBoxes_6();
		List_1_t95BFE82BD451C857C62ABE468E525846A8DF3591 * L_77 = V_3;
		NullCheck(L_76);
		DrawBoundingBoxes_DrawBoxes_mBF91D848C6332C38633F6E64F2D9864AAEE605AF(L_76, L_77, /*hidden argument*/NULL);
		// myText.text = "No bounding boxes received.";
		YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_78 = V_1;
		NullCheck(L_78);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_79 = L_78->get_myText_9();
		NullCheck(L_79);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_79, _stringLiteralCCEB5663AFEC60D7FF60B0CCED845E69A6DB7373);
		// yield return new WaitForSeconds(0.05f);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_80 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_80, (0.05f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_80);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0229:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0230:
	{
		// }
		__this->set_U3CtextStringU3E5__3_4((String_t*)NULL);
		// while (true)
		goto IL_0069;
	}

IL_023c:
	{
		__this->set_U3CU3E1__state_0((-1));
		__this->set_U3CinteropDeviceReceiverU3E5__2_3((InteropDeviceReceiver_t8F7F4847F49139840744A5EF41D07048541E8056 *)NULL);
		return (bool)0;
	}
}
// System.Object YoloDetectionHoloLens.YoloDetection_<ConnectSocket>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CConnectSocketU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9BE38B2FA44364C7B9CB220399A7DBD1CBE4B759 (U3CConnectSocketU3Ed__21_t99138AC9287719D80B4741681665A8EADE3A77D5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void YoloDetectionHoloLens.YoloDetection_<ConnectSocket>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectSocketU3Ed__21_System_Collections_IEnumerator_Reset_mD7DEA717FC1342C98DD690FF8A91535C41D98E15 (U3CConnectSocketU3Ed__21_t99138AC9287719D80B4741681665A8EADE3A77D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CConnectSocketU3Ed__21_System_Collections_IEnumerator_Reset_mD7DEA717FC1342C98DD690FF8A91535C41D98E15_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CConnectSocketU3Ed__21_System_Collections_IEnumerator_Reset_mD7DEA717FC1342C98DD690FF8A91535C41D98E15_RuntimeMethod_var);
	}
}
// System.Object YoloDetectionHoloLens.YoloDetection_<ConnectSocket>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CConnectSocketU3Ed__21_System_Collections_IEnumerator_get_Current_m48CED55CCBEA8F4C3D8F1242FB0D6CA2F25A9ADE (U3CConnectSocketU3Ed__21_t99138AC9287719D80B4741681665A8EADE3A77D5 * __this, const RuntimeMethod* method)
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
// System.Void YoloDetectionHoloLens.YoloDetection_<OnApplicationQuit>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationQuitU3Ed__18_MoveNext_mBFA3020146C1436A0229EF0FD0BDB110A7209EBC (U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COnApplicationQuitU3Ed__18_MoveNext_mBFA3020146C1436A0229EF0FD0BDB110A7209EBC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * V_1 = NULL;
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0046;
			}
		}

IL_0011:
		{
			// await StopHoloLensMediaFrameSourceGroup();
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_3 = V_1;
			NullCheck(L_3);
			Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_4 = YoloDetection_StopHoloLensMediaFrameSourceGroup_mD6B32FF012FC6FD8F3C3E35E12C2CBEF3FA6A933(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_5 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_4, /*hidden argument*/NULL);
			V_2 = L_5;
			bool L_6 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_0062;
			}
		}

IL_0026:
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->set_U3CU3E1__state_0(L_7);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_8 = V_2;
			__this->set_U3CU3Eu__1_3(L_8);
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_9 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4_m3C8FE7472A29499FE76AF56F312CD295CEEA1FB2((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_9, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), (U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4_m3C8FE7472A29499FE76AF56F312CD295CEEA1FB2_RuntimeMethod_var);
			goto IL_0095;
		}

IL_0046:
		{
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_10 = __this->get_U3CU3Eu__1_3();
			V_2 = L_10;
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_11 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
		}

IL_0062:
		{
			TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			goto IL_0082;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_006b;
		throw e;
	}

CATCH_006b:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_13 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_14 = V_3;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_13, L_14, /*hidden argument*/NULL);
		goto IL_0095;
	} // end catch (depth: 1)

IL_0082:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_15 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_15, /*hidden argument*/NULL);
	}

IL_0095:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnApplicationQuitU3Ed__18_MoveNext_mBFA3020146C1436A0229EF0FD0BDB110A7209EBC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4 * _thisAdjusted = reinterpret_cast<U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4 *>(__this + _offset);
	U3COnApplicationQuitU3Ed__18_MoveNext_mBFA3020146C1436A0229EF0FD0BDB110A7209EBC(_thisAdjusted, method);
}
// System.Void YoloDetectionHoloLens.YoloDetection_<OnApplicationQuit>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationQuitU3Ed__18_SetStateMachine_mE70A78707B374E94BC8881F28E0DB1FE370FCD5B (U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnApplicationQuitU3Ed__18_SetStateMachine_mE70A78707B374E94BC8881F28E0DB1FE370FCD5B_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4 * _thisAdjusted = reinterpret_cast<U3COnApplicationQuitU3Ed__18_tF04BDAB61F2BDFE5D2C1EB04B4A05FABEEF1ECA4 *>(__this + _offset);
	U3COnApplicationQuitU3Ed__18_SetStateMachine_mE70A78707B374E94BC8881F28E0DB1FE370FCD5B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YoloDetectionHoloLens.YoloDetection_<Start>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__17_MoveNext_mEA3C34532E698E93497366121035D67C0FF078DA (U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__17_MoveNext_mEA3C34532E698E93497366121035D67C0FF078DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * V_1 = NULL;
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0057;
			}
		}

IL_0011:
		{
			// InitializeHandler();
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_3 = V_1;
			NullCheck(L_3);
			YoloDetection_InitializeHandler_m39D449D3810CE283420F77E7E0FD1605EFFA0673(L_3, /*hidden argument*/NULL);
			// drawBoundingBoxes.InitDrawBoundingBoxes();
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_4 = V_1;
			NullCheck(L_4);
			DrawBoundingBoxes_t5B83439701CBD420BEECFAE9F126E90FA1D08781 * L_5 = L_4->get_drawBoundingBoxes_6();
			NullCheck(L_5);
			DrawBoundingBoxes_InitDrawBoundingBoxes_m7E3B2FEE87F65F6D8022A27E2CAE6D5B68A996D2(L_5, /*hidden argument*/NULL);
			// await StartHoloLensMediaFrameSourceGroup();
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_6 = V_1;
			NullCheck(L_6);
			Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_7 = YoloDetection_StartHoloLensMediaFrameSourceGroup_m6125D3DFC68D2683495149A91E4B5B2F28A305F7(L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_8 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_7, /*hidden argument*/NULL);
			V_2 = L_8;
			bool L_9 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_0073;
			}
		}

IL_0037:
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_11 = V_2;
			__this->set_U3CU3Eu__1_3(L_11);
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_12 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086_mADDAB7C7E4CF02D2CE7DB7009E34332AB05D158B((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_12, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), (U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086_mADDAB7C7E4CF02D2CE7DB7009E34332AB05D158B_RuntimeMethod_var);
			goto IL_00a6;
		}

IL_0057:
		{
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_13 = __this->get_U3CU3Eu__1_3();
			V_2 = L_13;
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_14 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_14, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->set_U3CU3E1__state_0(L_15);
		}

IL_0073:
		{
			TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			goto IL_0093;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_007c;
		throw e;
	}

CATCH_007c:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_17 = V_3;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_16, L_17, /*hidden argument*/NULL);
		goto IL_00a6;
	} // end catch (depth: 1)

IL_0093:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_18, /*hidden argument*/NULL);
	}

IL_00a6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__17_MoveNext_mEA3C34532E698E93497366121035D67C0FF078DA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086 *>(__this + _offset);
	U3CStartU3Ed__17_MoveNext_mEA3C34532E698E93497366121035D67C0FF078DA(_thisAdjusted, method);
}
// System.Void YoloDetectionHoloLens.YoloDetection_<Start>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__17_SetStateMachine_m285A3AA2515F2545D5BEC354A70FD03C4E3CAD2B (U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__17_SetStateMachine_m285A3AA2515F2545D5BEC354A70FD03C4E3CAD2B_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__17_t953837A6DC4DC7A9E7178F3A7B7D8A7540325086 *>(__this + _offset);
	U3CStartU3Ed__17_SetStateMachine_m285A3AA2515F2545D5BEC354A70FD03C4E3CAD2B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YoloDetectionHoloLens.YoloDetection_<StartHoloLensMediaFrameSourceGroup>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_MoveNext_mC4742EC564E8BB4518A13B1EA7FF65C1103D915C (U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_MoveNext_mC4742EC564E8BB4518A13B1EA7FF65C1103D915C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * V_1 = NULL;
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00f9;
			}
		}

IL_0014:
		{
			// myText.text = "Initalizing MediaFrameSourceGroup.";
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_3 = V_1;
			NullCheck(L_3);
			Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = L_3->get_myText_9();
			NullCheck(L_4);
			VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral30A75E68757E475E31D449625A4F95F654CB74E1);
			// Debug.Log("YoloDetection.Detection.StartHoloLensMediaFrameSourceGroup: Setting up sensor frame streamer");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralC771FFED510957F9B9CC4A08666469848B90D663, /*hidden argument*/NULL);
			// _sensorType = (SensorType)sensorTypePv;
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_5 = V_1;
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_6 = V_1;
			NullCheck(L_6);
			int32_t L_7 = L_6->get_sensorTypePv_13();
			NullCheck(L_5);
			L_5->set__sensorType_19(L_7);
			// _sensorFrameStreamer = new SensorFrameStreamer();
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_8 = V_1;
			SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849 * L_9 = (SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849 *)il2cpp_codegen_object_new(SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849_il2cpp_TypeInfo_var);
			SensorFrameStreamer__ctor_m2A7FE63EE0D6B674FB9C840663B0EAFBF377C657(L_9, /*hidden argument*/NULL);
			NullCheck(L_8);
			L_8->set__sensorFrameStreamer_15(L_9);
			// _sensorFrameStreamer.Enable(_sensorType);
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_10 = V_1;
			NullCheck(L_10);
			SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849 * L_11 = L_10->get__sensorFrameStreamer_15();
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_12 = V_1;
			NullCheck(L_12);
			int32_t L_13 = L_12->get__sensorType_19();
			NullCheck(L_11);
			SensorFrameStreamer_Enable_m76FACD01E7F7662E5C8045742125D0D6494E82AD(L_11, L_13, /*hidden argument*/NULL);
			// Debug.Log("YoloDetection.Detection.StartHoloLensMediaFrameSourceGroup: Setting up spatial perception");
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral9AD4BD96F2FC22067DBFC1E696668766CE873FA0, /*hidden argument*/NULL);
			// _spatialPerception = new SpatialPerception();
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_14 = V_1;
			SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577 * L_15 = (SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577 *)il2cpp_codegen_object_new(SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577_il2cpp_TypeInfo_var);
			SpatialPerception__ctor_mEF5E6D7D5750DD1AF34E9F594E10846F1EB007D3(L_15, /*hidden argument*/NULL);
			NullCheck(L_14);
			L_14->set__spatialPerception_16(L_15);
			// Debug.Log("YoloDetection.Detection.StartHoloLensMediaFrameSourceGroup: Setting up the media frame source group");
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralC2B076BB0C995373D2FC212D6D2DEA8909EBE2FB, /*hidden argument*/NULL);
			// _deviceType = (HoloLensForCV.DeviceType)deviceType;
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_16 = V_1;
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_17 = V_1;
			NullCheck(L_17);
			int32_t L_18 = L_17->get_deviceType_4();
			NullCheck(L_16);
			L_16->set__deviceType_17(L_18);
			// _holoLensMediaFrameSourceGroup = new MediaFrameSourceGroup(
			//     _selectedMediaFrameSourceGroupType,
			//     _spatialPerception,
			//     _deviceType,
			//     _sensorFrameStreamer);
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_19 = V_1;
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_20 = V_1;
			NullCheck(L_20);
			int32_t L_21 = L_20->get__selectedMediaFrameSourceGroupType_14();
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_22 = V_1;
			NullCheck(L_22);
			SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577 * L_23 = L_22->get__spatialPerception_16();
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_24 = V_1;
			NullCheck(L_24);
			int32_t L_25 = L_24->get__deviceType_17();
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_26 = V_1;
			NullCheck(L_26);
			SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849 * L_27 = L_26->get__sensorFrameStreamer_15();
			MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * L_28 = (MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 *)il2cpp_codegen_object_new(MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8_il2cpp_TypeInfo_var);
			MediaFrameSourceGroup__ctor_m913D624E7537CDB301BB6FC480EA6C8D12FEA667(L_28, L_21, L_23, L_25, L_27, /*hidden argument*/NULL);
			NullCheck(L_19);
			L_19->set__holoLensMediaFrameSourceGroup_18(L_28);
			// _holoLensMediaFrameSourceGroup.Enable(_sensorType);
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_29 = V_1;
			NullCheck(L_29);
			MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * L_30 = L_29->get__holoLensMediaFrameSourceGroup_18();
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_31 = V_1;
			NullCheck(L_31);
			int32_t L_32 = L_31->get__sensorType_19();
			NullCheck(L_30);
			MediaFrameSourceGroup_Enable_mFB95B66C15BEAD3C5AC911DD021551BBE8692532(L_30, L_32, /*hidden argument*/NULL);
			// Debug.Log("YoloDetection.Detection.StartHoloLensMediaFrameSourceGroup: Starting the media frame source group");
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralF3AAC50A98CC3831289E85EEB8C2E630FFA7DB99, /*hidden argument*/NULL);
			// await _holoLensMediaFrameSourceGroup.StartAsync();
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_33 = V_1;
			NullCheck(L_33);
			MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * L_34 = L_33->get__holoLensMediaFrameSourceGroup_18();
			NullCheck(L_34);
			RuntimeObject* L_35 = MediaFrameSourceGroup_StartAsync_m526B5B8956EB089601E9B7CA2A9AFE318DD6490C(L_34, /*hidden argument*/NULL);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_36 = WindowsRuntimeSystemExtensions_GetAwaiter_m1E46B83D2D5BEE385305CFFD9496572784AB5D2C(L_35, /*hidden argument*/NULL);
			V_2 = L_36;
			bool L_37 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			if (L_37)
			{
				goto IL_0115;
			}
		}

IL_00d9:
		{
			int32_t L_38 = 0;
			V_0 = L_38;
			__this->set_U3CU3E1__state_0(L_38);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_39 = V_2;
			__this->set_U3CU3Eu__1_3(L_39);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_40 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E_mA46FD375C487157DF3D2B54C53AD801DE2E3CC1A((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_40, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), (U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E_mA46FD375C487157DF3D2B54C53AD801DE2E3CC1A_RuntimeMethod_var);
			goto IL_015f;
		}

IL_00f9:
		{
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_41 = __this->get_U3CU3Eu__1_3();
			V_2 = L_41;
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_42 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_42, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->set_U3CU3E1__state_0(L_43);
		}

IL_0115:
		{
			TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			// _holoLensMediaFrameSourceGroupStarted = true;
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_44 = V_1;
			NullCheck(L_44);
			L_44->set__holoLensMediaFrameSourceGroupStarted_12((bool)1);
			// myText.text = "MediaFrameSourceGroup started. Once desktop client is connected, double tap to connect to host socket.";
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_45 = V_1;
			NullCheck(L_45);
			Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_46 = L_45->get_myText_9();
			NullCheck(L_46);
			VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_46, _stringLiteral5E227C150AA398EA5700EC62889C8707116B879E);
			goto IL_014c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0135;
		throw e;
	}

CATCH_0135:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_47 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_48 = V_3;
		AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_47, L_48, /*hidden argument*/NULL);
		goto IL_015f;
	} // end catch (depth: 1)

IL_014c:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_49 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_49, /*hidden argument*/NULL);
	}

IL_015f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_MoveNext_mC4742EC564E8BB4518A13B1EA7FF65C1103D915C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E * _thisAdjusted = reinterpret_cast<U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E *>(__this + _offset);
	U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_MoveNext_mC4742EC564E8BB4518A13B1EA7FF65C1103D915C(_thisAdjusted, method);
}
// System.Void YoloDetectionHoloLens.YoloDetection_<StartHoloLensMediaFrameSourceGroup>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_SetStateMachine_mC949D4C5D8AC21F972D35E8480180973764B7DCD (U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_SetStateMachine_mC949D4C5D8AC21F972D35E8480180973764B7DCD_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E * _thisAdjusted = reinterpret_cast<U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_tF1C982341F694FF9656E82971CA602EDEE5D5A1E *>(__this + _offset);
	U3CStartHoloLensMediaFrameSourceGroupU3Ed__19_SetStateMachine_mC949D4C5D8AC21F972D35E8480180973764B7DCD(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YoloDetectionHoloLens.YoloDetection_<StopHoloLensMediaFrameSourceGroup>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_MoveNext_mAAA32F4E6D9099355B27C411F95A135A7F890BF2 (U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_MoveNext_mAAA32F4E6D9099355B27C411F95A135A7F890BF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * V_1 = NULL;
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0060;
			}
		}

IL_0011:
		{
			// if (_holoLensMediaFrameSourceGroup == null ||
			//     !_holoLensMediaFrameSourceGroupStarted)
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_3 = V_1;
			NullCheck(L_3);
			MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * L_4 = L_3->get__holoLensMediaFrameSourceGroup_18();
			if (!L_4)
			{
				goto IL_0021;
			}
		}

IL_0019:
		{
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_5 = V_1;
			NullCheck(L_5);
			bool L_6 = L_5->get__holoLensMediaFrameSourceGroupStarted_12();
			if (L_6)
			{
				goto IL_0026;
			}
		}

IL_0021:
		{
			// return;
			goto IL_00b1;
		}

IL_0026:
		{
			// await _holoLensMediaFrameSourceGroup.StopAsync();
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_7 = V_1;
			NullCheck(L_7);
			MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * L_8 = L_7->get__holoLensMediaFrameSourceGroup_18();
			NullCheck(L_8);
			RuntimeObject* L_9 = MediaFrameSourceGroup_StopAsync_m7BD719AB4F6251735FE4EAFA4A0C48794CD23368(L_8, /*hidden argument*/NULL);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_10 = WindowsRuntimeSystemExtensions_GetAwaiter_m1E46B83D2D5BEE385305CFFD9496572784AB5D2C(L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			bool L_11 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_007c;
			}
		}

IL_0040:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_13 = V_2;
			__this->set_U3CU3Eu__1_3(L_13);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E_mAFCC6580E0480601D0ADE975F6C8A4AA676C81B6((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_14, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), (U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E_mAFCC6580E0480601D0ADE975F6C8A4AA676C81B6_RuntimeMethod_var);
			goto IL_00c4;
		}

IL_0060:
		{
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_15 = __this->get_U3CU3Eu__1_3();
			V_2 = L_15;
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_16 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
		}

IL_007c:
		{
			TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			// _holoLensMediaFrameSourceGroup = null;
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_18 = V_1;
			NullCheck(L_18);
			L_18->set__holoLensMediaFrameSourceGroup_18((MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 *)NULL);
			// _sensorFrameStreamer = null;
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_19 = V_1;
			NullCheck(L_19);
			L_19->set__sensorFrameStreamer_15((SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849 *)NULL);
			// _holoLensMediaFrameSourceGroupStarted = false;
			YoloDetection_tFDEB51EA3E6E90C57BE99BEADB7D9D7962EBD170 * L_20 = V_1;
			NullCheck(L_20);
			L_20->set__holoLensMediaFrameSourceGroupStarted_12((bool)0);
			goto IL_00b1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_009a;
		throw e;
	}

CATCH_009a:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_22 = V_3;
		AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_21, L_22, /*hidden argument*/NULL);
		goto IL_00c4;
	} // end catch (depth: 1)

IL_00b1:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_23 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_23, /*hidden argument*/NULL);
	}

IL_00c4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_MoveNext_mAAA32F4E6D9099355B27C411F95A135A7F890BF2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E * _thisAdjusted = reinterpret_cast<U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E *>(__this + _offset);
	U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_MoveNext_mAAA32F4E6D9099355B27C411F95A135A7F890BF2(_thisAdjusted, method);
}
// System.Void YoloDetectionHoloLens.YoloDetection_<StopHoloLensMediaFrameSourceGroup>d__20::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_SetStateMachine_mE58BC5D2A6F7E89217F1587BC6529784DDD4BC01 (U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_SetStateMachine_mE58BC5D2A6F7E89217F1587BC6529784DDD4BC01_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E * _thisAdjusted = reinterpret_cast<U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_tC39FBEB336714AD3D9047AD3E018DF16C45C321E *>(__this + _offset);
	U3CStopHoloLensMediaFrameSourceGroupU3Ed__20_SetStateMachine_mE58BC5D2A6F7E89217F1587BC6529784DDD4BC01(_thisAdjusted, ___stateMachine0, method);
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float BoundingBox_get_Height_m44F20B7B98E0D1653AF681B3503AC63D95D473A8_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CHeightU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float BoundingBox_get_Width_m9F5893974844C8D811D4F1545FFF55EC1A3BE6FD_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CWidthU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float BoundingBox_get_X_m7361C188C25CE49269F2398540BBE36CED8076BB_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CXU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float BoundingBox_get_Y_mE985B150AE0E2B6700175A096E1A44AC28536C21_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CYU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* BoundingBox_get_Label_m788FE38136E283E055925F59A2B8DDC679A95102_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CLabelU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float BoundingBox_get_Confidence_m65994A5209CB19A6688665FFB42B4E2CDFCCD2AA_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CConfidenceU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BoundingBox_put_TopLabel_m60E903D13BDDC6DD044D1F332EA4EC9F265ED1C5_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTopLabelU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BoundingBox_put_X_m479D6E24443A7FD4AA0E8BCF67C2069D130FEBD2_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CXU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BoundingBox_put_Y_mF04BCDDF71EADCB4A96387180129AC56F3993B6B_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CYU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BoundingBox_put_Height_m38EB832CB2BDDE7A130B8C1C95C1A701B6423AAD_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CHeightU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BoundingBox_put_Width_m13E3ECE097F5E74717FC250C0F8E1A004E3CD5EF_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CWidthU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BoundingBox_put_Confidence_m92A5795FEBACE603B43ED5F1F1785662651AA1ED_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CConfidenceU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BoundingBox_get_TopLabel_m96627B1BEACBCC7CAF1C47D692B101680E80CDA3_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTopLabelU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BoundingBox_put_Label_mA3CF2637F14B4F08DF8B02FCBA0AD5A23DA3B843_inline (BoundingBox_t2E5DFF459EA3ECEDB5E8DE431C94FD6D7381676E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CLabelU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
