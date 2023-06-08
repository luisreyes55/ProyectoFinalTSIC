#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4)
	{
		void* params[4] = { p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_t9FDF6DF173D42030EFE70318BF2408968D3E65CA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t761440E218DEDDDF4267213CA0E8B1C52C858690;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_t2A3D445A0300FDC32D29761DDFBBBFC30426F013;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t5633AE56FD3D84C5E9E07AC717AF53435DA593C9;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_tA70AAFA2BD47CD0A094BCB586E2EA3E04C5F8916;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerMoveHandler>
struct EventFunction_1_t86320D8073B1F956C9EE0FB8749277DDE7C1DE06;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t048C55D455059C49F0AFD58FA503F7A552C3DB65;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_tD8870260CD9964C568C228D51BBD578A792137EA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_tEF0BF5C5A27323118905EB07330A8EF108FED92F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t297B5C47242D1B98BEC955E2804FA142B43E7927;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// A
struct A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// B
struct B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// C
struct C_t39E134027703E607475C15FB004AC0EA31005C06;
// CS
struct CS_tB3F30834155DDFF3EBD0C03178CF32376DAB3BC6;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraPointer
struct CameraPointer_t9BABD11B0AABF9D79F1E27604DF9018F1386C024;
// CameraPointerManager
struct CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467;
// CameraRotationLimit
struct CameraRotationLimit_t4770227C58670882C65DFB31CC67857577E6B0AB;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CardboardSimulator
struct CardboardSimulator_tBBD12AE85ABBB1C59C3C4508C2F8ED5C8031DD78;
// CardboardStartup
struct CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// D
struct D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DestroyAfterTime
struct DestroyAfterTime_tBA00CAADA7EEB313D838E4C5BDE8435E1537060E;
// DestroyOnCollision
struct DestroyOnCollision_tD9F55A5187479B6600B4574708E73264EFF6E350;
// E
struct E_tFB2BA780A2EE1D04415659DE32B992D9E5016CEC;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// F
struct F_t385FAE081BF632BF504ABC6C86D0DDD6F683B4FB;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// G
struct G_tBF221986460BEF3D5C20B893499C7DCD33CEC16E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// TS.GazeInteraction.GazeInteractable
struct GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1;
// TS.GazeInteraction.GazeInteractor
struct GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5;
// GazeManager
struct GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901;
// TS.GazeInteraction.GazeReticle
struct GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.EventSystems.IPointerClickHandler
struct IPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8;
// UnityEngine.EventSystems.IPointerDownHandler
struct IPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573;
// UnityEngine.EventSystems.IPointerUpHandler
struct IPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// Melody
struct Melody_tA563191F032A8E328715826A2794C74D0870F1B0;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// Note
struct Note_tA2285A184DB020998838A4973465183177E99DE1;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectController
struct ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Piano_Note
struct Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// TS.GazeInteraction.ResourcesManager
struct ResourcesManager_t66E50EDCE76784B2D12111BBD924E54373CE7CF9;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Score
struct Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIElementXR
struct UIElementXR_tAC83568DDD4A932BEE72EA39AFE2C9336290636D;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// VrModeController
struct VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41
struct U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D;
// TS.GazeInteraction.GazeInteractable/OnActivated
struct OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0;
// TS.GazeInteraction.GazeInteractable/OnEnter
struct OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD;
// TS.GazeInteraction.GazeInteractable/OnExit
struct OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE;
// TS.GazeInteraction.GazeInteractable/OnStay
struct OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Piano_Note/<MoveKey>d__11
struct U3CMoveKeyU3Ed__11_t71AC69CF43DB1D066547D5A8D9C42AEA4C07B024;
// Piano_Note/<PlayNoteSoft>d__12
struct U3CPlayNoteSoftU3Ed__12_tA38FE964F09E471318B4C85277438C271774D0E7;
// Piano_Note/<TransitionToPlayNoteSoft>d__13
struct U3CTransitionToPlayNoteSoftU3Ed__13_t126F14392E9B243EBDC4E29C4878B9A96131532C;
// VrModeController/<StartXR>d__10
struct U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveKeyU3Ed__11_t71AC69CF43DB1D066547D5A8D9C42AEA4C07B024_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPlayNoteSoftU3Ed__12_tA38FE964F09E471318B4C85277438C271774D0E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTransitionToPlayNoteSoftU3Ed__13_t126F14392E9B243EBDC4E29C4878B9A96131532C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____143EEA3E17AE0C938731951D6888D194010FEAC22BA18B9B61B4ADA0C690BDB1_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____6A7BB757331BA0A922AEBA771882F599E095B72846CD061A3C0C74F786D4F41E_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____6F422F7CCF53113036A798A1463EC33283FAE442831D721A80786CB2B1022A87_2_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02B4A80F948F576D3566F604ABE91E638D491D05;
IL2CPP_EXTERN_C String_t* _stringLiteral0A5F1D3BC267D198AAF1651C5523683E97C8E343;
IL2CPP_EXTERN_C String_t* _stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E;
IL2CPP_EXTERN_C String_t* _stringLiteral1008E601924423658D31F5689E0DFA1A15A5F478;
IL2CPP_EXTERN_C String_t* _stringLiteral156E0AF81F8E8561B36759338BAEE264FD07A676;
IL2CPP_EXTERN_C String_t* _stringLiteral1690F87675D46404DB6EEBA8A4B18F2A7FD4611D;
IL2CPP_EXTERN_C String_t* _stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979;
IL2CPP_EXTERN_C String_t* _stringLiteral2A7B630B7137FE0D9A770BC44B619CE324CB5173;
IL2CPP_EXTERN_C String_t* _stringLiteral2C94361C3CF0648D05679FC64B7AD666F8D704CA;
IL2CPP_EXTERN_C String_t* _stringLiteral3748EB91B2BDF019241C0FC4D8C75AD02258A8FA;
IL2CPP_EXTERN_C String_t* _stringLiteral38396B3F6667C28970D73F84E06D0DCE797FDEB8;
IL2CPP_EXTERN_C String_t* _stringLiteral3AC78158BEA3678C18136BDE138CDC1ABA9C7E74;
IL2CPP_EXTERN_C String_t* _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869;
IL2CPP_EXTERN_C String_t* _stringLiteral400891DC6D65E07F573EF485FF45CF5FC0310B67;
IL2CPP_EXTERN_C String_t* _stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650;
IL2CPP_EXTERN_C String_t* _stringLiteral442CCE935B9A27A2EFA460E6B789B47268CA5E80;
IL2CPP_EXTERN_C String_t* _stringLiteral5097894658013DC1EBE81F86D22D014E42099154;
IL2CPP_EXTERN_C String_t* _stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566;
IL2CPP_EXTERN_C String_t* _stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D;
IL2CPP_EXTERN_C String_t* _stringLiteral61CFB84C83B441479C0A89B64CDD931B45CCA6ED;
IL2CPP_EXTERN_C String_t* _stringLiteral6DCDB22B8B1FCE39C01F54580AC0EBD54208A92F;
IL2CPP_EXTERN_C String_t* _stringLiteral747530FAD2C7DF5B08668539364CCC2CD2B5AFC2;
IL2CPP_EXTERN_C String_t* _stringLiteral776029F0AF2443F61702EC69FEB62D9A8FC1FE34;
IL2CPP_EXTERN_C String_t* _stringLiteral7892A84274C1DC4A2351A49903EB298DEA99C240;
IL2CPP_EXTERN_C String_t* _stringLiteral7D4D88A779822785525151AA1029F2B89FDE9FAA;
IL2CPP_EXTERN_C String_t* _stringLiteral8576E226721B94DCC86DFC6FC6320D36885F97C0;
IL2CPP_EXTERN_C String_t* _stringLiteral8F06348C17138DE28EF5048E24131AA485EEAED2;
IL2CPP_EXTERN_C String_t* _stringLiteral912F28DEFEB349FE02B84196F29F1398A8F8352D;
IL2CPP_EXTERN_C String_t* _stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF;
IL2CPP_EXTERN_C String_t* _stringLiteral9B1958E6AE4057A73CD052F6EFFCC70AD0F447B4;
IL2CPP_EXTERN_C String_t* _stringLiteral9B55557D8650FA52E469A9E198C4C5DCB837CB5C;
IL2CPP_EXTERN_C String_t* _stringLiteral9CAD8BA31C5DCE648F115F43CB5AFE3D130E18E3;
IL2CPP_EXTERN_C String_t* _stringLiteral9E9CE875D749DC46B1A35C05263D2D4B11965F00;
IL2CPP_EXTERN_C String_t* _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158;
IL2CPP_EXTERN_C String_t* _stringLiteralA6746290AF01E8D88C1996D1E9CBBAB2712BA3AD;
IL2CPP_EXTERN_C String_t* _stringLiteralA8D71ADBC89206FCE4E3E3DD613C85605604641B;
IL2CPP_EXTERN_C String_t* _stringLiteralAAE090A77EF960E78DD561A7B27262B14F04C923;
IL2CPP_EXTERN_C String_t* _stringLiteralAAFF7066899E9E4F5C490BB1F89B3BF07BC0554D;
IL2CPP_EXTERN_C String_t* _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
IL2CPP_EXTERN_C String_t* _stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0;
IL2CPP_EXTERN_C String_t* _stringLiteralAF171607C5CF88EC109EFE87AEB48F82DFCE3449;
IL2CPP_EXTERN_C String_t* _stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A;
IL2CPP_EXTERN_C String_t* _stringLiteralB81A1EDFC9FCE7D754F9199BAED4FF1E125B0C7E;
IL2CPP_EXTERN_C String_t* _stringLiteralB94DCE9F12044F113BBC9A67446BA370BBF5A302;
IL2CPP_EXTERN_C String_t* _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC;
IL2CPP_EXTERN_C String_t* _stringLiteralC2A7B1E84542FBB145B153BC2B717A230BDDA98E;
IL2CPP_EXTERN_C String_t* _stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32;
IL2CPP_EXTERN_C String_t* _stringLiteralD2B8455076CC0C4C19622AD4DCFB50D0393921A4;
IL2CPP_EXTERN_C String_t* _stringLiteralD6EFEA28911C05150F90CA0C3A902792E8F9D73C;
IL2CPP_EXTERN_C String_t* _stringLiteralE457C11E9301CE78DF18C9A699A3FF6C58175271;
IL2CPP_EXTERN_C String_t* _stringLiteralE4D1D91E707649742B086EDB3E0F4EFA9754545A;
IL2CPP_EXTERN_C String_t* _stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5;
IL2CPP_EXTERN_C String_t* _stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC;
IL2CPP_EXTERN_C String_t* _stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003;
IL2CPP_EXTERN_C String_t* _stringLiteralFA7769D7043BA2846653AB41192F9AFBB4B3A05D;
IL2CPP_EXTERN_C String_t* _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E;
IL2CPP_EXTERN_C const RuntimeMethod* CameraPointerManager_GazeSelection_mA039246BE96F5637EA7BD76848D007C19702D3A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1_mA06A7082D6B71337A6408668B71D4E91151B1B87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m024FB23AA1DBB1B7A5E1935FA35A1E4FF57AC5F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mA6249F5DCCE2688148557BE5E086BAF5EA1FB1FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_mBB70745D5D17BF6402CABEFF0F52911F88C197A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0_mE360BA236620C175DE113B3B83EA56DC4BE70D69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0_m494BDE2B52CA4ADFF325B4087CF8634EF2E60E3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveKeyU3Ed__11_System_Collections_IEnumerator_Reset_mC67B99CDE15E565AD802594FDFB42C85E18A94CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPlayNoteSoftU3Ed__12_System_Collections_IEnumerator_Reset_mD7D7F3C388505D25B239AB9A67BAE0B7AA1F4BA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartXRU3Ed__10_System_Collections_IEnumerator_Reset_mD99AEFDB38CFAC11731CDB371647891816288600_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTransitionToPlayNoteSoftU3Ed__13_System_Collections_IEnumerator_Reset_mAAB0E7F95FC6542FE57C9E4F6704DB00FB0D579F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitToExit_CoroutineU3Ed__41_System_Collections_IEnumerator_Reset_m1AAA3753E6B7334B3F3FA01CE74EAAF67D5F040E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// UnityEngine.EventSystems.ExecuteEvents
struct ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41
struct U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D  : public RuntimeObject
{
	// System.Int32 TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TS.GazeInteraction.GazeInteractable TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41::<>4__this
	GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___U3CU3E4__this_2;
	// TS.GazeInteraction.GazeInteractor TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41::interactor
	GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___interactor_3;
};

// Piano_Note/<MoveKey>d__11
struct U3CMoveKeyU3Ed__11_t71AC69CF43DB1D066547D5A8D9C42AEA4C07B024  : public RuntimeObject
{
	// System.Int32 Piano_Note/<MoveKey>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Piano_Note/<MoveKey>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Piano_Note Piano_Note/<MoveKey>d__11::<>4__this
	Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* ___U3CU3E4__this_2;
	// System.Single Piano_Note/<MoveKey>d__11::<teta>5__2
	float ___U3CtetaU3E5__2_3;
};

// Piano_Note/<PlayNoteSoft>d__12
struct U3CPlayNoteSoftU3Ed__12_tA38FE964F09E471318B4C85277438C271774D0E7  : public RuntimeObject
{
	// System.Int32 Piano_Note/<PlayNoteSoft>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Piano_Note/<PlayNoteSoft>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Piano_Note Piano_Note/<PlayNoteSoft>d__12::<>4__this
	Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* ___U3CU3E4__this_2;
	// System.Single Piano_Note/<PlayNoteSoft>d__12::<t>5__2
	float ___U3CtU3E5__2_3;
};

// Piano_Note/<TransitionToPlayNoteSoft>d__13
struct U3CTransitionToPlayNoteSoftU3Ed__13_t126F14392E9B243EBDC4E29C4878B9A96131532C  : public RuntimeObject
{
	// System.Int32 Piano_Note/<TransitionToPlayNoteSoft>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Piano_Note/<TransitionToPlayNoteSoft>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Piano_Note Piano_Note/<TransitionToPlayNoteSoft>d__13::<>4__this
	Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* ___U3CU3E4__this_2;
	// System.Single Piano_Note/<TransitionToPlayNoteSoft>d__13::<t>5__2
	float ___U3CtU3E5__2_3;
};

// VrModeController/<StartXR>d__10
struct U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6  : public RuntimeObject
{
	// System.Int32 VrModeController/<StartXR>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VrModeController/<StartXR>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192
struct __StaticArrayInitTypeSizeU3D192_t9C5826CAF624F7B55A3AE5A9A271AA091D7AFBD2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D192_t9C5826CAF624F7B55A3AE5A9A271AA091D7AFBD2__padding[192];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88__padding[64];
	};
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
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
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupID
	int32_t ___sortingGroupID_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupOrder
	int32_t ___sortingGroupOrder_6;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_7;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_8;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// TS.GazeInteraction.GazeInteractable/OnActivated
struct OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0  : public MulticastDelegate_t
{
};

// TS.GazeInteraction.GazeInteractable/OnEnter
struct OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD  : public MulticastDelegate_t
{
};

// TS.GazeInteraction.GazeInteractable/OnExit
struct OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE  : public MulticastDelegate_t
{
};

// TS.GazeInteraction.GazeInteractable/OnStay
struct OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// A
struct A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas A::canv
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canv_4;
	// UnityEngine.GameObject A::note_prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___note_prefab_5;
	// UnityEngine.Transform A::DO3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO3_6;
	// UnityEngine.Transform A::RE3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RE3_7;
	// UnityEngine.Transform A::MI3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___MI3_8;
	// UnityEngine.Transform A::FA3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FA3_9;
	// UnityEngine.Transform A::SOL3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOL3_10;
	// UnityEngine.Transform A::LA3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LA3_11;
	// UnityEngine.Transform A::SI3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SI3_12;
	// UnityEngine.Transform A::DO4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO4_13;
	// UnityEngine.Transform A::RE4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RE4_14;
	// UnityEngine.Transform A::MI4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___MI4_15;
	// UnityEngine.Transform A::FA4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FA4_16;
	// UnityEngine.Transform A::SOL4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOL4_17;
	// UnityEngine.Transform A::LA4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LA4_18;
	// UnityEngine.Transform A::SI4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SI4_19;
	// UnityEngine.Transform A::DO5
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO5_20;
	// UnityEngine.Transform A::DOs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DOs3_21;
	// UnityEngine.Transform A::REs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___REs3_22;
	// UnityEngine.Transform A::FAs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FAs3_23;
	// UnityEngine.Transform A::SOLs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOLs3_24;
	// UnityEngine.Transform A::LAs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LAs3_25;
	// UnityEngine.Transform A::DOs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DOs4_26;
	// UnityEngine.Transform A::REs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___REs4_27;
	// UnityEngine.Transform A::FAs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FAs4_28;
	// UnityEngine.Transform A::SOLs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOLs4_29;
	// UnityEngine.Transform A::LAs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LAs4_30;
	// System.String[] A::melodyNotes
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___melodyNotes_31;
	// System.Single[] A::melodyDuration
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___melodyDuration_32;
	// System.Single A::partitureSpeed
	float ___partitureSpeed_33;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// B
struct B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas B::canv
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canv_4;
	// UnityEngine.GameObject B::note_prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___note_prefab_5;
	// UnityEngine.Transform B::DO3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO3_6;
	// UnityEngine.Transform B::RE3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RE3_7;
	// UnityEngine.Transform B::MI3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___MI3_8;
	// UnityEngine.Transform B::FA3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FA3_9;
	// UnityEngine.Transform B::SOL3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOL3_10;
	// UnityEngine.Transform B::LA3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LA3_11;
	// UnityEngine.Transform B::SI3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SI3_12;
	// UnityEngine.Transform B::DO4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO4_13;
	// UnityEngine.Transform B::RE4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RE4_14;
	// UnityEngine.Transform B::MI4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___MI4_15;
	// UnityEngine.Transform B::FA4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FA4_16;
	// UnityEngine.Transform B::SOL4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOL4_17;
	// UnityEngine.Transform B::LA4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LA4_18;
	// UnityEngine.Transform B::SI4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SI4_19;
	// UnityEngine.Transform B::DO5
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO5_20;
	// UnityEngine.Transform B::DOs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DOs3_21;
	// UnityEngine.Transform B::REs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___REs3_22;
	// UnityEngine.Transform B::FAs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FAs3_23;
	// UnityEngine.Transform B::SOLs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOLs3_24;
	// UnityEngine.Transform B::LAs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LAs3_25;
	// UnityEngine.Transform B::DOs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DOs4_26;
	// UnityEngine.Transform B::REs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___REs4_27;
	// UnityEngine.Transform B::FAs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FAs4_28;
	// UnityEngine.Transform B::SOLs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOLs4_29;
	// UnityEngine.Transform B::LAs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LAs4_30;
	// System.String[] B::melodyNotes
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___melodyNotes_31;
	// System.Single[] B::melodyDuration
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___melodyDuration_32;
	// System.Single B::partitureSpeed
	float ___partitureSpeed_33;
};

// C
struct C_t39E134027703E607475C15FB004AC0EA31005C06  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas C::canv
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canv_4;
	// UnityEngine.GameObject C::note_prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___note_prefab_5;
	// UnityEngine.Transform C::DO3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO3_6;
	// UnityEngine.Transform C::RE3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RE3_7;
	// UnityEngine.Transform C::MI3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___MI3_8;
	// UnityEngine.Transform C::FA3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FA3_9;
	// UnityEngine.Transform C::SOL3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOL3_10;
	// UnityEngine.Transform C::LA3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LA3_11;
	// UnityEngine.Transform C::SI3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SI3_12;
	// UnityEngine.Transform C::DO4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO4_13;
	// UnityEngine.Transform C::RE4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RE4_14;
	// UnityEngine.Transform C::MI4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___MI4_15;
	// UnityEngine.Transform C::FA4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FA4_16;
	// UnityEngine.Transform C::SOL4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOL4_17;
	// UnityEngine.Transform C::LA4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LA4_18;
	// UnityEngine.Transform C::SI4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SI4_19;
	// UnityEngine.Transform C::DO5
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO5_20;
	// UnityEngine.Transform C::DOs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DOs3_21;
	// UnityEngine.Transform C::REs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___REs3_22;
	// UnityEngine.Transform C::FAs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FAs3_23;
	// UnityEngine.Transform C::SOLs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOLs3_24;
	// UnityEngine.Transform C::LAs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LAs3_25;
	// UnityEngine.Transform C::DOs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DOs4_26;
	// UnityEngine.Transform C::REs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___REs4_27;
	// UnityEngine.Transform C::FAs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FAs4_28;
	// UnityEngine.Transform C::SOLs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOLs4_29;
	// UnityEngine.Transform C::LAs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LAs4_30;
	// System.String[] C::melodyNotes
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___melodyNotes_31;
	// System.Single[] C::melodyDuration
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___melodyDuration_32;
	// System.Single C::partitureSpeed
	float ___partitureSpeed_33;
};

// CS
struct CS_tB3F30834155DDFF3EBD0C03178CF32376DAB3BC6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas CS::canv
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canv_4;
	// UnityEngine.GameObject CS::note_prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___note_prefab_5;
	// UnityEngine.Transform CS::DO3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO3_6;
	// UnityEngine.Transform CS::RE3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RE3_7;
	// UnityEngine.Transform CS::MI3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___MI3_8;
	// UnityEngine.Transform CS::FA3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FA3_9;
	// UnityEngine.Transform CS::SOL3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOL3_10;
	// UnityEngine.Transform CS::LA3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LA3_11;
	// UnityEngine.Transform CS::SI3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SI3_12;
	// UnityEngine.Transform CS::DO4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO4_13;
	// UnityEngine.Transform CS::RE4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RE4_14;
	// UnityEngine.Transform CS::MI4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___MI4_15;
	// UnityEngine.Transform CS::FA4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FA4_16;
	// UnityEngine.Transform CS::SOL4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOL4_17;
	// UnityEngine.Transform CS::LA4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LA4_18;
	// UnityEngine.Transform CS::SI4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SI4_19;
	// UnityEngine.Transform CS::DO5
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO5_20;
	// UnityEngine.Transform CS::DOs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DOs3_21;
	// UnityEngine.Transform CS::REs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___REs3_22;
	// UnityEngine.Transform CS::FAs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FAs3_23;
	// UnityEngine.Transform CS::SOLs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOLs3_24;
	// UnityEngine.Transform CS::LAs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LAs3_25;
	// UnityEngine.Transform CS::DOs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DOs4_26;
	// UnityEngine.Transform CS::REs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___REs4_27;
	// UnityEngine.Transform CS::FAs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FAs4_28;
	// UnityEngine.Transform CS::SOLs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOLs4_29;
	// UnityEngine.Transform CS::LAs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LAs4_30;
	// System.String[] CS::melodyNotes
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___melodyNotes_31;
	// System.Single[] CS::melodyDuration
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___melodyDuration_32;
	// System.Single CS::partitureSpeed
	float ___partitureSpeed_33;
};

// CameraPointer
struct CameraPointer_t9BABD11B0AABF9D79F1E27604DF9018F1386C024  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CameraPointer::_gazedAtObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gazedAtObject_5;
};

// CameraPointerManager
struct CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CameraPointerManager::pointer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointer_5;
	// System.Single CameraPointerManager::maxDistancePointer
	float ___maxDistancePointer_6;
	// System.Single CameraPointerManager::disPointerObject
	float ___disPointerObject_7;
	// UnityEngine.GameObject CameraPointerManager::_gazedAtObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gazedAtObject_9;
	// System.String CameraPointerManager::interactableTag
	String_t* ___interactableTag_10;
	// System.Single CameraPointerManager::scaleSize
	float ___scaleSize_11;
	// UnityEngine.Vector3 CameraPointerManager::hitPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___hitPoint_12;
};

// CameraRotationLimit
struct CameraRotationLimit_t4770227C58670882C65DFB31CC67857577E6B0AB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CameraRotationLimit::maxXRotation
	float ___maxXRotation_4;
	// System.Single CameraRotationLimit::minXRotation
	float ___minXRotation_5;
	// System.Single CameraRotationLimit::maxYRotation
	float ___maxYRotation_6;
	// System.Single CameraRotationLimit::minYRotation
	float ___minYRotation_7;
};

// CardboardSimulator
struct CardboardSimulator_tBBD12AE85ABBB1C59C3C4508C2F8ED5C8031DD78  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean CardboardSimulator::UseCardboardSimulator
	bool ___UseCardboardSimulator_4;
	// System.Single CardboardSimulator::horizontalSpeed
	float ___horizontalSpeed_5;
	// System.Single CardboardSimulator::verticalSpeed
	float ___verticalSpeed_6;
	// System.Single CardboardSimulator::rotationX
	float ___rotationX_7;
	// System.Single CardboardSimulator::rotationY
	float ___rotationY_8;
	// UnityEngine.Camera CardboardSimulator::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_9;
};

// CardboardStartup
struct CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// D
struct D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas D::canv
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canv_4;
	// UnityEngine.GameObject D::note_prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___note_prefab_5;
	// UnityEngine.Transform D::DO3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO3_6;
	// UnityEngine.Transform D::RE3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RE3_7;
	// UnityEngine.Transform D::MI3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___MI3_8;
	// UnityEngine.Transform D::FA3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FA3_9;
	// UnityEngine.Transform D::SOL3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOL3_10;
	// UnityEngine.Transform D::LA3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LA3_11;
	// UnityEngine.Transform D::SI3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SI3_12;
	// UnityEngine.Transform D::DO4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO4_13;
	// UnityEngine.Transform D::RE4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RE4_14;
	// UnityEngine.Transform D::MI4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___MI4_15;
	// UnityEngine.Transform D::FA4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FA4_16;
	// UnityEngine.Transform D::SOL4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOL4_17;
	// UnityEngine.Transform D::LA4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LA4_18;
	// UnityEngine.Transform D::SI4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SI4_19;
	// UnityEngine.Transform D::DO5
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO5_20;
	// UnityEngine.Transform D::DOs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DOs3_21;
	// UnityEngine.Transform D::REs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___REs3_22;
	// UnityEngine.Transform D::FAs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FAs3_23;
	// UnityEngine.Transform D::SOLs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOLs3_24;
	// UnityEngine.Transform D::LAs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LAs3_25;
	// UnityEngine.Transform D::DOs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DOs4_26;
	// UnityEngine.Transform D::REs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___REs4_27;
	// UnityEngine.Transform D::FAs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FAs4_28;
	// UnityEngine.Transform D::SOLs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOLs4_29;
	// UnityEngine.Transform D::LAs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LAs4_30;
	// System.String[] D::melodyNotes
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___melodyNotes_31;
	// System.Single[] D::melodyDuration
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___melodyDuration_32;
	// System.Single D::partitureSpeed
	float ___partitureSpeed_33;
};

// DestroyAfterTime
struct DestroyAfterTime_tBA00CAADA7EEB313D838E4C5BDE8435E1537060E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single DestroyAfterTime::dTime
	float ___dTime_4;
};

// DestroyOnCollision
struct DestroyOnCollision_tD9F55A5187479B6600B4574708E73264EFF6E350  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// E
struct E_tFB2BA780A2EE1D04415659DE32B992D9E5016CEC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas E::canv
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canv_4;
	// UnityEngine.GameObject E::note_prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___note_prefab_5;
	// UnityEngine.Transform E::DO3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO3_6;
	// UnityEngine.Transform E::RE3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RE3_7;
	// UnityEngine.Transform E::MI3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___MI3_8;
	// UnityEngine.Transform E::FA3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FA3_9;
	// UnityEngine.Transform E::SOL3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOL3_10;
	// UnityEngine.Transform E::LA3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LA3_11;
	// UnityEngine.Transform E::SI3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SI3_12;
	// UnityEngine.Transform E::DO4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO4_13;
	// UnityEngine.Transform E::RE4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RE4_14;
	// UnityEngine.Transform E::MI4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___MI4_15;
	// UnityEngine.Transform E::FA4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FA4_16;
	// UnityEngine.Transform E::SOL4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOL4_17;
	// UnityEngine.Transform E::LA4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LA4_18;
	// UnityEngine.Transform E::SI4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SI4_19;
	// UnityEngine.Transform E::DO5
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO5_20;
	// UnityEngine.Transform E::DOs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DOs3_21;
	// UnityEngine.Transform E::REs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___REs3_22;
	// UnityEngine.Transform E::FAs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FAs3_23;
	// UnityEngine.Transform E::SOLs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOLs3_24;
	// UnityEngine.Transform E::LAs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LAs3_25;
	// UnityEngine.Transform E::DOs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DOs4_26;
	// UnityEngine.Transform E::REs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___REs4_27;
	// UnityEngine.Transform E::FAs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FAs4_28;
	// UnityEngine.Transform E::SOLs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOLs4_29;
	// UnityEngine.Transform E::LAs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LAs4_30;
	// System.String[] E::melodyNotes
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___melodyNotes_31;
	// System.Single[] E::melodyDuration
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___melodyDuration_32;
	// System.Single E::partitureSpeed
	float ___partitureSpeed_33;
};

// F
struct F_t385FAE081BF632BF504ABC6C86D0DDD6F683B4FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas F::canv
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canv_4;
	// UnityEngine.GameObject F::note_prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___note_prefab_5;
	// UnityEngine.Transform F::DO3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO3_6;
	// UnityEngine.Transform F::RE3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RE3_7;
	// UnityEngine.Transform F::MI3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___MI3_8;
	// UnityEngine.Transform F::FA3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FA3_9;
	// UnityEngine.Transform F::SOL3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOL3_10;
	// UnityEngine.Transform F::LA3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LA3_11;
	// UnityEngine.Transform F::SI3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SI3_12;
	// UnityEngine.Transform F::DO4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO4_13;
	// UnityEngine.Transform F::RE4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RE4_14;
	// UnityEngine.Transform F::MI4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___MI4_15;
	// UnityEngine.Transform F::FA4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FA4_16;
	// UnityEngine.Transform F::SOL4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOL4_17;
	// UnityEngine.Transform F::LA4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LA4_18;
	// UnityEngine.Transform F::SI4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SI4_19;
	// UnityEngine.Transform F::DO5
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO5_20;
	// UnityEngine.Transform F::DOs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DOs3_21;
	// UnityEngine.Transform F::REs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___REs3_22;
	// UnityEngine.Transform F::FAs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FAs3_23;
	// UnityEngine.Transform F::SOLs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOLs3_24;
	// UnityEngine.Transform F::LAs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LAs3_25;
	// UnityEngine.Transform F::DOs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DOs4_26;
	// UnityEngine.Transform F::REs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___REs4_27;
	// UnityEngine.Transform F::FAs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FAs4_28;
	// UnityEngine.Transform F::SOLs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOLs4_29;
	// UnityEngine.Transform F::LAs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LAs4_30;
	// System.String[] F::melodyNotes
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___melodyNotes_31;
	// System.Single[] F::melodyDuration
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___melodyDuration_32;
	// System.Single F::partitureSpeed
	float ___partitureSpeed_33;
};

// G
struct G_tBF221986460BEF3D5C20B893499C7DCD33CEC16E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas G::canv
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canv_4;
	// UnityEngine.GameObject G::note_prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___note_prefab_5;
	// UnityEngine.Transform G::DO3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO3_6;
	// UnityEngine.Transform G::RE3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RE3_7;
	// UnityEngine.Transform G::MI3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___MI3_8;
	// UnityEngine.Transform G::FA3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FA3_9;
	// UnityEngine.Transform G::SOL3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOL3_10;
	// UnityEngine.Transform G::LA3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LA3_11;
	// UnityEngine.Transform G::SI3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SI3_12;
	// UnityEngine.Transform G::DO4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO4_13;
	// UnityEngine.Transform G::RE4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RE4_14;
	// UnityEngine.Transform G::MI4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___MI4_15;
	// UnityEngine.Transform G::FA4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FA4_16;
	// UnityEngine.Transform G::SOL4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOL4_17;
	// UnityEngine.Transform G::LA4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LA4_18;
	// UnityEngine.Transform G::SI4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SI4_19;
	// UnityEngine.Transform G::DO5
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO5_20;
	// UnityEngine.Transform G::DOs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DOs3_21;
	// UnityEngine.Transform G::REs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___REs3_22;
	// UnityEngine.Transform G::FAs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FAs3_23;
	// UnityEngine.Transform G::SOLs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOLs3_24;
	// UnityEngine.Transform G::LAs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LAs3_25;
	// UnityEngine.Transform G::DOs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DOs4_26;
	// UnityEngine.Transform G::REs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___REs4_27;
	// UnityEngine.Transform G::FAs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FAs4_28;
	// UnityEngine.Transform G::SOLs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOLs4_29;
	// UnityEngine.Transform G::LAs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LAs4_30;
	// System.String[] G::melodyNotes
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___melodyNotes_31;
	// System.Single[] G::melodyDuration
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___melodyDuration_32;
	// System.Single G::partitureSpeed
	float ___partitureSpeed_33;
};

// TS.GazeInteraction.GazeInteractable
struct GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TS.GazeInteraction.GazeInteractable/OnEnter TS.GazeInteraction.GazeInteractable::Enter
	OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* ___Enter_5;
	// TS.GazeInteraction.GazeInteractable/OnStay TS.GazeInteraction.GazeInteractable::Stay
	OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* ___Stay_6;
	// TS.GazeInteraction.GazeInteractable/OnExit TS.GazeInteraction.GazeInteractable::Exit
	OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* ___Exit_7;
	// TS.GazeInteraction.GazeInteractable/OnActivated TS.GazeInteraction.GazeInteractable::Activated
	OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* ___Activated_8;
	// System.Boolean TS.GazeInteraction.GazeInteractable::_isActivable
	bool ____isActivable_9;
	// System.Single TS.GazeInteraction.GazeInteractable::_exitDelay
	float ____exitDelay_10;
	// UnityEngine.Events.UnityEvent TS.GazeInteraction.GazeInteractable::OnGazeEnter
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnGazeEnter_11;
	// UnityEngine.Events.UnityEvent TS.GazeInteraction.GazeInteractable::OnGazeStay
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnGazeStay_12;
	// UnityEngine.Events.UnityEvent TS.GazeInteraction.GazeInteractable::OnGazeExit
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnGazeExit_13;
	// UnityEngine.Events.UnityEvent TS.GazeInteraction.GazeInteractable::OnGazeActivated
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnGazeActivated_14;
	// UnityEngine.Events.UnityEvent`1<System.Boolean> TS.GazeInteraction.GazeInteractable::OnGazeToggle
	UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* ___OnGazeToggle_15;
	// System.Boolean TS.GazeInteraction.GazeInteractable::<IsActivated>k__BackingField
	bool ___U3CIsActivatedU3Ek__BackingField_16;
	// UnityEngine.Collider TS.GazeInteraction.GazeInteractable::_collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ____collider_17;
};

// TS.GazeInteraction.GazeInteractor
struct GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TS.GazeInteraction.GazeInteractor::_maxDetectionDistance
	float ____maxDetectionDistance_4;
	// System.Single TS.GazeInteraction.GazeInteractor::_minDetectionDistance
	float ____minDetectionDistance_5;
	// System.Single TS.GazeInteraction.GazeInteractor::_timeToActivate
	float ____timeToActivate_6;
	// UnityEngine.LayerMask TS.GazeInteraction.GazeInteractor::_layerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ____layerMask_7;
	// UnityEngine.Ray TS.GazeInteraction.GazeInteractor::_ray
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ____ray_8;
	// UnityEngine.RaycastHit TS.GazeInteraction.GazeInteractor::_hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ____hit_9;
	// TS.GazeInteraction.GazeReticle TS.GazeInteraction.GazeInteractor::_reticle
	GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* ____reticle_10;
	// TS.GazeInteraction.GazeInteractable TS.GazeInteraction.GazeInteractor::_interactable
	GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ____interactable_11;
	// System.Single TS.GazeInteraction.GazeInteractor::_enterStartTime
	float ____enterStartTime_12;
};

// GazeManager
struct GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action GazeManager::OnGazeSelection
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnGazeSelection_4;
	// UnityEngine.GameObject GazeManager::gazeBarCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gazeBarCanvas_6;
	// UnityEngine.UI.Image GazeManager::fillIndicator
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___fillIndicator_7;
	// System.Single GazeManager::timeForSelection
	float ___timeForSelection_8;
	// System.Single GazeManager::timeCounter
	float ___timeCounter_9;
	// System.Single GazeManager::timeProggres
	float ___timeProggres_10;
	// System.Boolean GazeManager::runTimer
	bool ___runTimer_11;
};

// TS.GazeInteraction.GazeReticle
struct GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas TS.GazeInteraction.GazeReticle::_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ____canvas_4;
	// UnityEngine.UI.Image TS.GazeInteraction.GazeReticle::_imageProgress
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____imageProgress_5;
	// System.Single TS.GazeInteraction.GazeReticle::_scale
	float ____scale_6;
	// System.Single TS.GazeInteraction.GazeReticle::_offsetFromHit
	float ____offsetFromHit_7;
	// TS.GazeInteraction.GazeInteractor TS.GazeInteraction.GazeReticle::_interactor
	GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ____interactor_8;
};

// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MainMenu::objectToActivate
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectToActivate_4;
};

// Melody
struct Melody_tA563191F032A8E328715826A2794C74D0870F1B0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas Melody::canv
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canv_4;
	// UnityEngine.GameObject Melody::note_prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___note_prefab_5;
	// UnityEngine.Transform Melody::DO3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO3_6;
	// UnityEngine.Transform Melody::RE3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RE3_7;
	// UnityEngine.Transform Melody::MI3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___MI3_8;
	// UnityEngine.Transform Melody::FA3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FA3_9;
	// UnityEngine.Transform Melody::SOL3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOL3_10;
	// UnityEngine.Transform Melody::LA3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LA3_11;
	// UnityEngine.Transform Melody::SI3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SI3_12;
	// UnityEngine.Transform Melody::DO4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO4_13;
	// UnityEngine.Transform Melody::RE4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RE4_14;
	// UnityEngine.Transform Melody::MI4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___MI4_15;
	// UnityEngine.Transform Melody::FA4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FA4_16;
	// UnityEngine.Transform Melody::SOL4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOL4_17;
	// UnityEngine.Transform Melody::LA4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LA4_18;
	// UnityEngine.Transform Melody::SI4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SI4_19;
	// UnityEngine.Transform Melody::DO5
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DO5_20;
	// UnityEngine.Transform Melody::DOs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DOs3_21;
	// UnityEngine.Transform Melody::REs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___REs3_22;
	// UnityEngine.Transform Melody::FAs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FAs3_23;
	// UnityEngine.Transform Melody::SOLs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOLs3_24;
	// UnityEngine.Transform Melody::LAs3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LAs3_25;
	// UnityEngine.Transform Melody::DOs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DOs4_26;
	// UnityEngine.Transform Melody::REs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___REs4_27;
	// UnityEngine.Transform Melody::FAs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FAs4_28;
	// UnityEngine.Transform Melody::SOLs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SOLs4_29;
	// UnityEngine.Transform Melody::LAs4
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LAs4_30;
	// System.String[] Melody::melodyNotes
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___melodyNotes_31;
	// System.Single[] Melody::melodyDuration
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___melodyDuration_32;
	// System.Single Melody::partitureSpeed
	float ___partitureSpeed_33;
};

// Note
struct Note_tA2285A184DB020998838A4973465183177E99DE1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Note::speed
	float ___speed_4;
	// System.String Note::_name
	String_t* ____name_5;
	// UnityEngine.GameObject Note::destroyParticles
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___destroyParticles_6;
};

// ObjectController
struct ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material ObjectController::InactiveMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___InactiveMaterial_4;
	// UnityEngine.Material ObjectController::GazedAtMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___GazedAtMaterial_5;
	// UnityEngine.Renderer ObjectController::_myRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____myRenderer_10;
	// UnityEngine.Vector3 ObjectController::_startingPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____startingPosition_11;
};

// Piano_Note
struct Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource Piano_Note::audioS
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioS_4;
	// System.Single Piano_Note::delay
	float ___delay_5;
	// UnityEngine.Vector3 Piano_Note::posInit
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posInit_6;
	// System.Single Piano_Note::distKey
	float ___distKey_7;
	// System.String Piano_Note::_name
	String_t* ____name_8;
	// System.Single Piano_Note::softFactorTrans
	float ___softFactorTrans_9;
	// System.Single Piano_Note::softFactor
	float ___softFactor_10;
	// Score Piano_Note::sc
	Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* ___sc_11;
};

// TS.GazeInteraction.ResourcesManager
struct ResourcesManager_t66E50EDCE76784B2D12111BBD924E54373CE7CF9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Score
struct Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Score::score
	float ___score_4;
	// UnityEngine.UI.Text Score::scoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___scoreText_5;
	// System.Single Score::d
	float ___d_6;
	// UnityEngine.Transform Score::scoringLine
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___scoringLine_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIElementXR
struct UIElementXR_tAC83568DDD4A932BEE72EA39AFE2C9336290636D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent UIElementXR::OnXRPointerEnter
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnXRPointerEnter_4;
	// UnityEngine.Events.UnityEvent UIElementXR::OnXRPointerExit
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnXRPointerExit_5;
	// UnityEngine.Camera UIElementXR::xRCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___xRCamera_6;
};

// VrModeController
struct VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera VrModeController::_mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____mainCamera_5;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// UnityEngine.EventSystems.ExecuteEvents
struct ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields
{
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerMoveHandler
	EventFunction_1_t86320D8073B1F956C9EE0FB8749277DDE7C1DE06* ___s_PointerMoveHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerEnterHandler
	EventFunction_1_t5633AE56FD3D84C5E9E07AC717AF53435DA593C9* ___s_PointerEnterHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerExitHandler
	EventFunction_1_tA70AAFA2BD47CD0A094BCB586E2EA3E04C5F8916* ___s_PointerExitHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerDownHandler
	EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* ___s_PointerDownHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerUpHandler
	EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* ___s_PointerUpHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerClickHandler
	EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* ___s_PointerClickHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_InitializePotentialDragHandler
	EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD* ___s_InitializePotentialDragHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_BeginDragHandler
	EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403* ___s_BeginDragHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_DragHandler
	EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E* ___s_DragHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_EndDragHandler
	EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C* ___s_EndDragHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::s_DropHandler
	EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733* ___s_DropHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::s_ScrollHandler
	EventFunction_1_t048C55D455059C49F0AFD58FA503F7A552C3DB65* ___s_ScrollHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::s_UpdateSelectedHandler
	EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678* ___s_UpdateSelectedHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::s_SelectHandler
	EventFunction_1_tD8870260CD9964C568C228D51BBD578A792137EA* ___s_SelectHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::s_DeselectHandler
	EventFunction_1_t761440E218DEDDDF4267213CA0E8B1C52C858690* ___s_DeselectHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_MoveHandler
	EventFunction_1_t2A3D445A0300FDC32D29761DDFBBBFC30426F013* ___s_MoveHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::s_SubmitHandler
	EventFunction_1_tEF0BF5C5A27323118905EB07330A8EF108FED92F* ___s_SubmitHandler_16;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::s_CancelHandler
	EventFunction_1_t9FDF6DF173D42030EFE70318BF2408968D3E65CA* ___s_CancelHandler_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.EventSystems.ExecuteEvents::s_InternalTransformList
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___s_InternalTransformList_18;
};

// UnityEngine.EventSystems.ExecuteEvents

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41

// TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41

// Piano_Note/<MoveKey>d__11

// Piano_Note/<MoveKey>d__11

// Piano_Note/<PlayNoteSoft>d__12

// Piano_Note/<PlayNoteSoft>d__12

// Piano_Note/<TransitionToPlayNoteSoft>d__13

// Piano_Note/<TransitionToPlayNoteSoft>d__13

// VrModeController/<StartXR>d__10

// VrModeController/<StartXR>d__10

// UnityEngine.Events.UnityEvent`1<System.Boolean>

// UnityEngine.Events.UnityEvent`1<System.Boolean>

// UnityEngine.EventSystems.BaseEventData

// UnityEngine.EventSystems.BaseEventData

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::143EEA3E17AE0C938731951D6888D194010FEAC22BA18B9B61B4ADA0C690BDB1
	__StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88 ___143EEA3E17AE0C938731951D6888D194010FEAC22BA18B9B61B4ADA0C690BDB1_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::6A7BB757331BA0A922AEBA771882F599E095B72846CD061A3C0C74F786D4F41E
	__StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88 ___6A7BB757331BA0A922AEBA771882F599E095B72846CD061A3C0C74F786D4F41E_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192 <PrivateImplementationDetails>::6F422F7CCF53113036A798A1463EC33283FAE442831D721A80786CB2B1022A87
	__StaticArrayInitTypeSizeU3D192_t9C5826CAF624F7B55A3AE5A9A271AA091D7AFBD2 ___6F422F7CCF53113036A798A1463EC33283FAE442831D721A80786CB2B1022A87_2;
};

// <PrivateImplementationDetails>

// UnityEngine.Collision

// UnityEngine.Collision

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// UnityEngine.Touch

// UnityEngine.Touch

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// System.IndexOutOfRangeException

// System.IndexOutOfRangeException

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRGeneralSettings

// UnityEngine.XR.Management.XRLoader

// UnityEngine.XR.Management.XRLoader

// UnityEngine.XR.Management.XRManagerSettings

// UnityEngine.XR.Management.XRManagerSettings

// TS.GazeInteraction.GazeInteractable/OnActivated

// TS.GazeInteraction.GazeInteractable/OnActivated

// TS.GazeInteraction.GazeInteractable/OnEnter

// TS.GazeInteraction.GazeInteractable/OnEnter

// TS.GazeInteraction.GazeInteractable/OnExit

// TS.GazeInteraction.GazeInteractable/OnExit

// TS.GazeInteraction.GazeInteractable/OnStay

// TS.GazeInteraction.GazeInteractable/OnStay

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// A

// A

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// B

// B

// C

// C

// CS

// CS

// CameraPointer

// CameraPointer

// CameraPointerManager
struct CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467_StaticFields
{
	// CameraPointerManager CameraPointerManager::Instance
	CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467* ___Instance_4;
};

// CameraPointerManager

// CameraRotationLimit

// CameraRotationLimit

// CardboardSimulator

// CardboardSimulator

// CardboardStartup

// CardboardStartup

// D

// D

// DestroyAfterTime

// DestroyAfterTime

// DestroyOnCollision

// DestroyOnCollision

// E

// E

// F

// F

// G

// G

// TS.GazeInteraction.GazeInteractable

// TS.GazeInteraction.GazeInteractable

// TS.GazeInteraction.GazeInteractor

// TS.GazeInteraction.GazeInteractor

// GazeManager
struct GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_StaticFields
{
	// GazeManager GazeManager::Instance
	GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* ___Instance_5;
};

// GazeManager

// TS.GazeInteraction.GazeReticle

// TS.GazeInteraction.GazeReticle

// MainMenu

// MainMenu

// Melody

// Melody

// Note

// Note

// ObjectController

// ObjectController

// Piano_Note

// Piano_Note

// TS.GazeInteraction.ResourcesManager

// TS.GazeInteraction.ResourcesManager

// Score

// Score

// UIElementXR

// UIElementXR

// VrModeController

// VrModeController

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.EventSystems.EventSystem

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, EventFunction_1_t297B5C47242D1B98BEC955E2804FA142B43E7927* ___2_functor, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___0_arg0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Single GazeManager::Normalise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GazeManager_Normalise_m180FBAEE68E4D5DF49914667D04318AF15ED8172 (GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void GazeManager::AddValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeManager_AddValue_mFC91A2DABBE1C117A02FE1604149F37B44BC2B03 (GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* __this, float ___0_val, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, float ___1_t, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// T UnityEngine.GameObject::GetComponent<Note>()
inline Note_tA2285A184DB020998838A4973465183177E99DE1* GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Note_tA2285A184DB020998838A4973465183177E99DE1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Piano_Note::TransitionToPlayNoteSoft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Piano_Note_TransitionToPlayNoteSoft_m499085343DE9B77BCB34D01DBDE7038D85AEC867 (Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Piano_Note::PlayNoteSoft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Piano_Note_PlayNoteSoft_mDA2163296F7BEC4AEED65031C5CBA0A69C8BA716 (Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Piano_Note::MoveKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Piano_Note_MoveKey_m1B84DBD4A6EFD6629C799A60F168F1F2B0BF20E0 (Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* __this, const RuntimeMethod* method) ;
// System.Void Piano_Note::CheckNotePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Piano_Note_CheckNotePosition_mE078E64FE1ABA0AC639D47F855CDBF53F146CACA (Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* __this, const RuntimeMethod* method) ;
// System.Void Piano_Note/<MoveKey>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveKeyU3Ed__11__ctor_m2EA5CA51EE30F1437FE6B7A07127EAEA0A4BDCB7 (U3CMoveKeyU3Ed__11_t71AC69CF43DB1D066547D5A8D9C42AEA4C07B024* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Piano_Note/<PlayNoteSoft>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayNoteSoftU3Ed__12__ctor_m6801BEFD0C8A7FED560ED65132694344F83BBA29 (U3CPlayNoteSoftU3Ed__12_tA38FE964F09E471318B4C85277438C271774D0E7* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Piano_Note/<TransitionToPlayNoteSoft>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransitionToPlayNoteSoftU3Ed__13__ctor_m2B020D7EB6916364DBB75EC2EBE2D76D626FE7FD (U3CTransitionToPlayNoteSoftU3Ed__13_t126F14392E9B243EBDC4E29C4878B9A96131532C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3 (String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 Piano_Note::CalculateScore(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Piano_Note_CalculateScore_m1F08E54D725280730F13E3E037D947A2E7BEF0F7 (Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* __this, float ___0_x, float ___1_r, const RuntimeMethod* method) ;
// System.Void Note::Particles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Note_Particles_mF6D7A66F4DBC1DCB102C2679A796B173D489CB6E (Note_tA2285A184DB020998838A4973465183177E99DE1* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___2_hitInfo, float ___3_maxDistance, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_methodName, const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsTriggerPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsTriggerPressed_mE2356D33F433C078FB257D788BD9B3B219FA920E (const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_brightness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_brightness_m0EE16AC1CB4F674B178C75F8180E6A675A3CD8F7 (float ___0_value, const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::HasDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_HasDeviceParams_m7158915814477F6D8C085ED748F12215F2F3F578 (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::ScanDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17 (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsGearButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsGearButtonPressed_m922BF1A99A8B035D565441F96824AE9F0925156A (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsCloseButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsCloseButtonPressed_m4B0EDA79280273FDD21B841B7E4765D90F978F43 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsTriggerHeldPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsTriggerHeldPressed_m24BDCFD056C57E371E827EB59F09C9DD7F42191F (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::Recenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_Recenter_m0668D49BC62C4DEDCE1A50C78F9E5016D01280C0 (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::HasNewDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_HasNewDeviceParams_m8CF6742A64A20B00D8FFE2F229628D1DB54831C5 (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::ReloadDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_ReloadDeviceParams_mBACF68BBC935329B23B19CB08A9CF0D5A6AB8F04 (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::UpdateScreenParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_UpdateScreenParams_mC3CED586D588F397D1B53DAAEE0697DA5FDADB03 (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ObjectController::SetMaterial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, bool ___0_gazedAt, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::GetSiblingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Void ObjectController::TeleportRandomly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_TeleportRandomly_m45F23374832369044CBD4F60F4F976D33C97C181 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::get_isInitializationComplete()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Boolean VrModeController::get__isVrModeEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isVrModeEnabled_m8D8D68536E09FF2DEAD3795AF30A57BA6DF7C95F (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Void VrModeController::ExitVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_ExitVR_m1FF25DFE5B3BC15CEDE5C42F56CC399693867397 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Boolean VrModeController::get__isScreenTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isScreenTouched_mD72F14326F1D19F3AC970FD0ED9D0C5CD5C6CFB5 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Void VrModeController::EnterVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_EnterVR_m5FD79BF38C6AF621AF9992378BC5C3618FDE5EFB (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator VrModeController::StartXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VrModeController_StartXR_m57D80B4AD6B28A7C4E36052563B6227E824CDDB4 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Void VrModeController::StopXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_StopXR_m0338E8D8035C06E1A46F17C16BBC7933EE9CAA3A (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Void VrModeController/<StartXR>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10__ctor_mDA431E1365B30DA2F64F1E7875CD387F2231E138 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::StopSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::DeinitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::ResetAspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_ResetAspect_mAC248F92A2CAC44E2D33EFC3D08AACA9BC3DCEBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.XR.Management.XRManagerSettings::InitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_InitializeLoader_m563761BAF04C04AC931D738AD9E4EBF7FD87E62B (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::StartSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void GazeManager::add_OnGazeSelection(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeManager_add_OnGazeSelection_m4FE6E1A4B46C2F4AFB2CDFAEEF7A86E170F4BF83 (GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m452B3418BE240EC79550C15E1F2EAE61488F06DF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_methodName, RuntimeObject* ___1_value, int32_t ___2_options, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void GazeManager::StartGazeSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeManager_StartGazeSelection_mC5D9D2AF4FCF5A41344E6F8E1F385B1AE1356AD9 (GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Void CameraPointerManager::PointerOnGaze(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPointerManager_PointerOnGaze_mFE71E28BFB2362755041E34394638EBD9CAF0735 (CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_hitPoint, const RuntimeMethod* method) ;
// System.Void CameraPointerManager::PointerOutGaze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPointerManager_PointerOutGaze_mBA0047E8AEC716F7A0F44FA956F33022FB94539E (CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CameraPointerManager::CalculatePointerPosition(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraPointerManager_CalculatePointerPosition_m4ACA12A1EC9DD2EA04C2D81178361A3D2F81FA38 (CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_p1, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void GazeManager::CancelGazeSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeManager_CancelGazeSelection_mFF4A662611E9B9BEDA19AA9D2E32D68F9E381DE9 (GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.EventSystems.PointerEventData UIElementXR::PlacePointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* UIElementXR_PlacePointer_m4D0EA27E7034B499CB5FE945AA5708089E842122 (UIElementXR_tAC83568DDD4A932BEE72EA39AFE2C9336290636D* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerClickHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* ExecuteEvents_get_pointerClickHandler_m0017F9D1EAF7C02CDDB4C148C92D6685D88EA8D5_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m024FB23AA1DBB1B7A5E1935FA35A1E4FF57AC5F6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* ___2_functor, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___0_target, ___1_eventData, ___2_functor, method);
}
// System.Void GazeManager::SetUpGaze(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GazeManager_SetUpGaze_m20F443A1C4F8101005C2AC8FFC583ADE44B512F0_inline (GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* __this, float ___0_timeForSelection, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerDownHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* ExecuteEvents_get_pointerDownHandler_mA67CE33D32540939A273DB88D6456C7FE43C13EF_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerDownHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mA6249F5DCCE2688148557BE5E086BAF5EA1FB1FD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* ___2_functor, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___0_target, ___1_eventData, ___2_functor, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerUpHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* ExecuteEvents_get_pointerUpHandler_m51B83B4AD7498D6F7A2CBD5F2331E91A37AE4CF2_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerUpHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_mBB70745D5D17BF6402CABEFF0F52911F88C197A6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* ___2_functor, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___0_target, ___1_eventData, ___2_functor, method);
}
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___0_eventSystem, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeInteractable::set_IsActivated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GazeInteractable_set_IsActivated_mA1EAF7098117352BFE0EDF4CBC67650C59777D9A_inline (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeInteractable/OnActivated::Invoke(TS.GazeInteraction.GazeInteractable)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_inline (OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeInteractable/OnEnter::Invoke(TS.GazeInteraction.GazeInteractable,TS.GazeInteraction.GazeInteractor,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_inline (OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
inline void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, bool, const RuntimeMethod*))UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared)(__this, ___0_arg0, method);
}
// System.Void TS.GazeInteraction.GazeInteractable/OnStay::Invoke(TS.GazeInteraction.GazeInteractable,TS.GazeInteraction.GazeInteractor,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_inline (OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_mD754B72714F15210DDA429A096D853852FF437AB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeInteractable::InvokeExit(TS.GazeInteraction.GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_InvokeExit_m8BC5D779C8F0F530BC606CD21821574A6F3E760E (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___0_interactor, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToExit_CoroutineU3Ed__41__ctor_mFE5105AACC120AF952CE22A725FC85EBA486FB75 (U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeInteractable/OnExit::Invoke(TS.GazeInteraction.GazeInteractable,TS.GazeInteraction.GazeInteractor)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_inline (OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// UnityEngine.GameObject TS.GazeInteraction.ResourcesManager::GetPrefab(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ResourcesManager_GetPrefab_m2F4AEB9796080F97AA31F851B2762958AA0EC25B (String_t* ___0_file, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TS.GazeInteraction.GazeReticle>()
inline GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* GameObject_GetComponent_TisGazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0_mE360BA236620C175DE113B3B83EA56DC4BE70D69 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Object::Instantiate<TS.GazeInteraction.GazeReticle>(T)
inline GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* Object_Instantiate_TisGazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0_m494BDE2B52CA4ADFF325B4087CF8634EF2E60E3C (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* ___0_original, const RuntimeMethod* method)
{
	return ((  GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* (*) (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// System.Void TS.GazeInteraction.GazeReticle::SetInteractor(TS.GazeInteraction.GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_SetInteractor_mF2DCD925F1F9E4B9A6DC4238387168ECEFFDD82E (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* __this, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___0_interactor, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, float ___2_maxDistance, int32_t ___3_layerMask, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeReticle::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_Enable_mCCCDBC5776CCE29CC7ADF3A8A3209ADE570046EF (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* __this, bool ___0_enable, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeInteractor::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractor_Reset_m8300513E17E232E10C9080A9501FE89BA17309D7 (GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* __this, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeReticle::SetTarget(UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_SetTarget_m8EC62A7D1E4174C5737B1C7AA83DF8FBE9661C38 (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_hit, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TS.GazeInteraction.GazeInteractable>()
inline GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* Component_GetComponent_TisGazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1_mA06A7082D6B71337A6408668B71D4E91151B1B87 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeInteractable::GazeEnter(TS.GazeInteraction.GazeInteractor,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_GazeEnter_mE8E8AA2F8ACA4F84641D830529C2D8141A6948AF (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___0_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeInteractable::GazeStay(TS.GazeInteraction.GazeInteractor,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_GazeStay_mA37D7E56B454B93ADD03AB8FC22253D200894B94 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___0_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// System.Boolean TS.GazeInteraction.GazeInteractable::get_IsActivable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GazeInteractable_get_IsActivable_mA496B0244E2D125983932C92265ECF4178E64435_inline (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) ;
// System.Boolean TS.GazeInteraction.GazeInteractable::get_IsActivated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GazeInteractable_get_IsActivated_mAA24799C2F0ADD578D73AE3062AA13E2F5880632_inline (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeReticle::SetProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_SetProgress_m30FE62EB08375FCDAC365E8B464250DF594B2634 (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* __this, float ___0_progress, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeInteractable::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_Activate_mD2439F7B8FB4F5D769BA8ECEE8CBFB0A00E11FCA (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeInteractable::GazeExit(TS.GazeInteraction.GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_GazeExit_mBD5BAD2578FD581D4680993E4DD76BC759C54939 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___0_interactor, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_fromDirection, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_toDirection, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.GameObject>(System.String)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
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
// System.Void CardboardSimulator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardSimulator_Start_m59E87C36C597BA224762458482EBA9E0980B900B (CardboardSimulator_tBBD12AE85ABBB1C59C3C4508C2F8ED5C8031DD78* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CardboardSimulator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardSimulator_Update_mBC76CD75232FB6BE70F92EA93FED3F28138A6D85 (CardboardSimulator_tBBD12AE85ABBB1C59C3C4508C2F8ED5C8031DD78* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CardboardSimulator::UpdatePlayerPositonSimulator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardSimulator_UpdatePlayerPositonSimulator_mEFA8682992BE7A90F5458D5A2C2F894FF91C8955 (CardboardSimulator_tBBD12AE85ABBB1C59C3C4508C2F8ED5C8031DD78* __this, const RuntimeMethod* method) 
{
	{
		// rotationX = 0;
		__this->___rotationX_7 = (0.0f);
		// rotationY = cam.transform.localEulerAngles.y;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___cam_9;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_1, NULL);
		float L_3 = L_2.___y_3;
		__this->___rotationY_8 = L_3;
		// }
		return;
	}
}
// System.Void CardboardSimulator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardSimulator__ctor_mB010568C122188A4869F5AC98CA710622C6AA473 (CardboardSimulator_tBBD12AE85ABBB1C59C3C4508C2F8ED5C8031DD78* __this, const RuntimeMethod* method) 
{
	{
		// public bool UseCardboardSimulator = true;
		__this->___UseCardboardSimulator_4 = (bool)1;
		// [SerializeField] private float horizontalSpeed = 0.5f;
		__this->___horizontalSpeed_5 = (0.5f);
		// [SerializeField] private float verticalSpeed = 0.5f;
		__this->___verticalSpeed_6 = (0.5f);
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
// System.Void GazeManager::add_OnGazeSelection(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeManager_add_OnGazeSelection_m4FE6E1A4B46C2F4AFB2CDFAEEF7A86E170F4BF83 (GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnGazeSelection_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnGazeSelection_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GazeManager::remove_OnGazeSelection(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeManager_remove_OnGazeSelection_m88976A5029C54D067690761876933266756DFF4D (GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnGazeSelection_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnGazeSelection_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GazeManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeManager_Awake_mB0ADECD4655A8D39674036BC8487F8AAB38CA15F (GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance != null && Instance != this)
		GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* L_0 = ((GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_StaticFields*)il2cpp_codegen_static_fields_for(GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_il2cpp_TypeInfo_var))->___Instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* L_2 = ((GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_StaticFields*)il2cpp_codegen_static_fields_for(GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_il2cpp_TypeInfo_var))->___Instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		return;
	}

IL_0026:
	{
		// Instance = this;
		((GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_StaticFields*)il2cpp_codegen_static_fields_for(GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_il2cpp_TypeInfo_var))->___Instance_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_StaticFields*)il2cpp_codegen_static_fields_for(GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_il2cpp_TypeInfo_var))->___Instance_5), (void*)__this);
		// }
		return;
	}
}
// System.Void GazeManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeManager_Start_mBB0451FC782741DCEC60CAE87E458B11D960438D (GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* __this, const RuntimeMethod* method) 
{
	{
		// gazeBarCanvas.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gazeBarCanvas_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// fillIndicator.fillAmount = Normalise();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___fillIndicator_7;
		float L_2;
		L_2 = GazeManager_Normalise_m180FBAEE68E4D5DF49914667D04318AF15ED8172(__this, NULL);
		NullCheck(L_1);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void GazeManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeManager_Update_m4D2AD8803A4C5DAA846E8F3CAF19B235BA274C23 (GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* __this, const RuntimeMethod* method) 
{
	{
		// if (runTimer)
		bool L_0 = __this->___runTimer_11;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// timeProggres += Time.deltaTime;
		float L_1 = __this->___timeProggres_10;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timeProggres_10 = ((float)il2cpp_codegen_add(L_1, L_2));
		// AddValue(timeProggres);
		float L_3 = __this->___timeProggres_10;
		GazeManager_AddValue_mFC91A2DABBE1C117A02FE1604149F37B44BC2B03(__this, L_3, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void GazeManager::SetUpGaze(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeManager_SetUpGaze_m20F443A1C4F8101005C2AC8FFC583ADE44B512F0 (GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* __this, float ___0_timeForSelection, const RuntimeMethod* method) 
{
	{
		// this.timeForSelection = timeForSelection;
		float L_0 = ___0_timeForSelection;
		__this->___timeForSelection_8 = L_0;
		// }
		return;
	}
}
// System.Void GazeManager::StartGazeSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeManager_StartGazeSelection_mC5D9D2AF4FCF5A41344E6F8E1F385B1AE1356AD9 (GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* __this, const RuntimeMethod* method) 
{
	{
		// gazeBarCanvas.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gazeBarCanvas_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// runTimer = true;
		__this->___runTimer_11 = (bool)1;
		// timeProggres = 0;
		__this->___timeProggres_10 = (0.0f);
		// }
		return;
	}
}
// System.Void GazeManager::CancelGazeSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeManager_CancelGazeSelection_mFF4A662611E9B9BEDA19AA9D2E32D68F9E381DE9 (GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* __this, const RuntimeMethod* method) 
{
	{
		// gazeBarCanvas.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gazeBarCanvas_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// runTimer = false;
		__this->___runTimer_11 = (bool)0;
		// timeProggres = 0;
		__this->___timeProggres_10 = (0.0f);
		// timeCounter = 0;
		__this->___timeCounter_9 = (0.0f);
		// }
		return;
	}
}
// System.Void GazeManager::AddValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeManager_AddValue_mFC91A2DABBE1C117A02FE1604149F37B44BC2B03 (GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* __this, float ___0_val, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	{
		// timeCounter = val;
		float L_0 = ___0_val;
		__this->___timeCounter_9 = L_0;
		// if (timeCounter >= timeForSelection)
		float L_1 = __this->___timeCounter_9;
		float L_2 = __this->___timeForSelection_8;
		if ((!(((float)L_1) >= ((float)L_2))))
		{
			goto IL_0038;
		}
	}
	{
		// timeCounter = 0;
		__this->___timeCounter_9 = (0.0f);
		// runTimer = false;
		__this->___runTimer_11 = (bool)0;
		// OnGazeSelection?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnGazeSelection_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_0033;
		}
	}
	{
		goto IL_0038;
	}

IL_0033:
	{
		NullCheck(G_B3_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B3_0, NULL);
	}

IL_0038:
	{
		// fillIndicator.fillAmount = Normalise();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___fillIndicator_7;
		float L_6;
		L_6 = GazeManager_Normalise_m180FBAEE68E4D5DF49914667D04318AF15ED8172(__this, NULL);
		NullCheck(L_5);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Single GazeManager::Normalise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GazeManager_Normalise_m180FBAEE68E4D5DF49914667D04318AF15ED8172 (GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* __this, const RuntimeMethod* method) 
{
	{
		// return (float)timeCounter / timeForSelection;
		float L_0 = __this->___timeCounter_9;
		float L_1 = __this->___timeForSelection_8;
		return ((float)(((float)L_0)/L_1));
	}
}
// System.Void GazeManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeManager__ctor_m303874569EB6816C0A1BD4CEFE8A27B7EB6C1BA1 (GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public float timeForSelection =2.5f;
		__this->___timeForSelection_8 = (2.5f);
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
// System.Void DestroyAfterTime::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyAfterTime_Start_mFB94BF6E2DD6FE658BB62E7CB7D55B0916EC6990 (DestroyAfterTime_tBA00CAADA7EEB313D838E4C5BDE8435E1537060E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject,dTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		float L_1 = __this->___dTime_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void DestroyAfterTime::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyAfterTime_Update_m0E4947DF385A3F32357BEC648EE3A03F3F93731D (DestroyAfterTime_tBA00CAADA7EEB313D838E4C5BDE8435E1537060E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DestroyAfterTime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyAfterTime__ctor_m08889FB4B66902F3C09C173A148FFFB1A6E723B0 (DestroyAfterTime_tBA00CAADA7EEB313D838E4C5BDE8435E1537060E* __this, const RuntimeMethod* method) 
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
// System.Void DestroyOnCollision::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyOnCollision_Start_mFC7719758D4242FE14BB03FAD77F8BD7A267544E (DestroyOnCollision_tD9F55A5187479B6600B4574708E73264EFF6E350* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DestroyOnCollision::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyOnCollision_Update_mF5C7305AB0D1947ACAE034F2AA4CA3791A57F1ED (DestroyOnCollision_tD9F55A5187479B6600B4574708E73264EFF6E350* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DestroyOnCollision::OnCollisionStay(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyOnCollision_OnCollisionStay_m34C1D23273F9903CBA88E432DEFAE7C8F64DF530 (DestroyOnCollision_tD9F55A5187479B6600B4574708E73264EFF6E350* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(collision.gameObject);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		// }
		return;
	}
}
// System.Void DestroyOnCollision::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyOnCollision__ctor_m1BD310BA8008F9C8C0244F548EA08F127D783DB3 (DestroyOnCollision_tD9F55A5187479B6600B4574708E73264EFF6E350* __this, const RuntimeMethod* method) 
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
// System.Void Melody::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Melody_Start_m18120450AD98148E42C9F36E28ABAF8056A8D749 (Melody_tA563191F032A8E328715826A2794C74D0870F1B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____6F422F7CCF53113036A798A1463EC33283FAE442831D721A80786CB2B1022A87_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DCDB22B8B1FCE39C01F54580AC0EBD54208A92F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB94DCE9F12044F113BBC9A67446BA370BBF5A302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// melodyNotes = new string[] { "SOL4", "FA4", "MI4", "DO4", "DO4", "SOL3", "DO4","DO4", "MI4", "DO4", "MI4", "SOL4", "FA4", "MI4", "FA4", "RE4", "RE4", "LA3", "RE4", "RE4", "FA4", "RE4", "FA4", "LA4", "SOL4", "FA4", "MI4", "RE4", "DO4", "SOL3", "DO4", "DO4", "MI4", "DO4", "MI4", "SOL4", "FA4", "MI4", "FA4", "MI4", "FA4", "RE4", "SOL4", "FA4", "MI4", "DO4", "DO4", "DO4"};
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)48));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral6DCDB22B8B1FCE39C01F54580AC0EBD54208A92F);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral6DCDB22B8B1FCE39C01F54580AC0EBD54208A92F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral6DCDB22B8B1FCE39C01F54580AC0EBD54208A92F);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral6DCDB22B8B1FCE39C01F54580AC0EBD54208A92F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)_stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)_stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)_stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)_stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)_stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteralB94DCE9F12044F113BBC9A67446BA370BBF5A302);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)_stringLiteralB94DCE9F12044F113BBC9A67446BA370BBF5A302);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral6DCDB22B8B1FCE39C01F54580AC0EBD54208A92F);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (String_t*)_stringLiteral6DCDB22B8B1FCE39C01F54580AC0EBD54208A92F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (String_t*)_stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (String_t*)_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (String_t*)_stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_28;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (String_t*)_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (String_t*)_stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (String_t*)_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_31;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (String_t*)_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (String_t*)_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (String_t*)_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (String_t*)_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_35;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteral6DCDB22B8B1FCE39C01F54580AC0EBD54208A92F);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (String_t*)_stringLiteral6DCDB22B8B1FCE39C01F54580AC0EBD54208A92F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_36;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (String_t*)_stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)37)), (String_t*)_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_38;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)38)), (String_t*)_stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)39)), (String_t*)_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_40;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)40)), (String_t*)_stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_41;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)41)), (String_t*)_stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_42;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteral6DCDB22B8B1FCE39C01F54580AC0EBD54208A92F);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)42)), (String_t*)_stringLiteral6DCDB22B8B1FCE39C01F54580AC0EBD54208A92F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_43;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, _stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)43)), (String_t*)_stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = L_44;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, _stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)44)), (String_t*)_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_45;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, _stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)45)), (String_t*)_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = L_46;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, _stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)46)), (String_t*)_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = L_47;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, _stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)47)), (String_t*)_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		__this->___melodyNotes_31 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___melodyNotes_31), (void*)L_48);
		// melodyDuration = new float[] {  0.5f , 0.25f, 0.5f , 0.5f , 0.5f ,  1.0f, 0.5f, 0.5f, 1.0f, 0.5f, 1.0f , 1.0f ,  0.5f, 0.25f, 0.5f , 0.5f , 0.5f , 1.0f , 0.5f , 0.5f , 1.0f , 0.5f  , 1.0f ,  1.0f, 0.5f, 0.25f, 0.5f, 0.5f, 0.5f, 1.0f, 0.5f, 0.5f, 1.0f, 0.5f, 1.0f, 1.0f, 0.5f, 0.25f, 0.5f, 0.5f, 0.5f, 1.0f, 0.5f, 0.5f, 1.0f, 0.5f, 1.0f, 1.0f };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_49 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)48));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = L_49;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_51 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____6F422F7CCF53113036A798A1463EC33283FAE442831D721A80786CB2B1022A87_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_50, L_51, NULL);
		__this->___melodyDuration_32 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___melodyDuration_32), (void*)L_50);
		// float cumulativeTime =0.0f;
		V_0 = (0.0f);
		// for (int i=0; i<melodyNotes.Length;i++)
		V_1 = 0;
		goto IL_026b;
	}

IL_01d9:
	{
		// GameObject keyRef=GameObject.Find(melodyNotes[i]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = __this->___melodyNotes_31;
		int32_t L_53 = V_1;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		String_t* L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56;
		L_56 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(L_55, NULL);
		V_2 = L_56;
		// GameObject note= GameObject.Instantiate(note_prefab,keyRef.transform.position+new Vector3(0,500+cumulativeTime*partitureSpeed,0),Quaternion.Euler(0,0,0));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = __this->___note_prefab_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = V_2;
		NullCheck(L_58);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_58, NULL);
		NullCheck(L_59);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_59, NULL);
		float L_61 = V_0;
		float L_62 = __this->___partitureSpeed_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_63), (0.0f), ((float)il2cpp_codegen_add((500.0f), ((float)il2cpp_codegen_multiply(L_61, L_62)))), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_60, L_63, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65;
		L_65 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66;
		L_66 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_57, L_64, L_65, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// note.GetComponent<Note>()._name = melodyNotes[i];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = L_66;
		NullCheck(L_67);
		Note_tA2285A184DB020998838A4973465183177E99DE1* L_68;
		L_68 = GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA(L_67, GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_69 = __this->___melodyNotes_31;
		int32_t L_70 = V_1;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		String_t* L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_68);
		L_68->____name_5 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&L_68->____name_5), (void*)L_72);
		// note.transform.SetParent(canv.transform);
		NullCheck(L_67);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73;
		L_73 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_67, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_74 = __this->___canv_4;
		NullCheck(L_74);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75;
		L_75 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_74, NULL);
		NullCheck(L_73);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_73, L_75, NULL);
		// cumulativeTime += (float)melodyDuration[i];
		float L_76 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_77 = __this->___melodyDuration_32;
		int32_t L_78 = V_1;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		float L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_0 = ((float)il2cpp_codegen_add(L_76, ((float)L_80)));
		// for (int i=0; i<melodyNotes.Length;i++)
		int32_t L_81 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_026b:
	{
		// for (int i=0; i<melodyNotes.Length;i++)
		int32_t L_82 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = __this->___melodyNotes_31;
		NullCheck(L_83);
		if ((((int32_t)L_82) < ((int32_t)((int32_t)(((RuntimeArray*)L_83)->max_length)))))
		{
			goto IL_01d9;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Melody::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Melody_FixedUpdate_mB32697382C1EEDA76EE9357D901A453DC7D00931 (Melody_tA563191F032A8E328715826A2794C74D0870F1B0* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Melody::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Melody__ctor_m8B7EF26CF26EF0198D31B7548ED2C0486CDEF50C (Melody_tA563191F032A8E328715826A2794C74D0870F1B0* __this, const RuntimeMethod* method) 
{
	{
		// public float partitureSpeed=25;
		__this->___partitureSpeed_33 = (25.0f);
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
// System.Void Note::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Note_Start_m14184A0832F0A37C2A9E857E157B3DADDA526ECF (Note_tA2285A184DB020998838A4973465183177E99DE1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Note::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Note_FixedUpdate_mE7584E167579B46B2367856862CB353B3BFE7686 (Note_tA2285A184DB020998838A4973465183177E99DE1* __this, const RuntimeMethod* method) 
{
	{
		// transform.position -=new Vector3(0,speed*Time.fixedDeltaTime,0) ;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = __this->___speed_4;
		float L_4;
		L_4 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (0.0f), ((float)il2cpp_codegen_multiply(L_3, L_4)), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_5, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_6, NULL);
		// }
		return;
	}
}
// System.Void Note::Particles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Note_Particles_mF6D7A66F4DBC1DCB102C2679A796B173D489CB6E (Note_tA2285A184DB020998838A4973465183177E99DE1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject.Instantiate(destroyParticles,transform.position,transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___destroyParticles_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_2, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Note::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Note__ctor_m604E0FF46514DBA4F0DDAB63C417950327839F44 (Note_tA2285A184DB020998838A4973465183177E99DE1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string _name="DO4";
		__this->____name_5 = _stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____name_5), (void*)_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
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
// System.Void Piano_Note::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Piano_Note_Start_m654616337CD36E05384B1ACDA6A5620F4EDF2669 (Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioS = transform.GetComponent<AudioSource>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(L_0, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioS_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioS_4), (void*)L_1);
		// posInit = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		__this->___posInit_6 = L_3;
		// _name = transform.gameObject.name;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		__this->____name_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____name_8), (void*)L_6);
		// }
		return;
	}
}
// System.Void Piano_Note::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Piano_Note_Update_m0CB7755241160CFD42BB6A420DA105068044620A (Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Piano_Note::playTone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Piano_Note_playTone_m08D6BD257ED71300F800C405B9398CBDA5178022 (Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* __this, const RuntimeMethod* method) 
{
	{
		// if (audioS.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioS_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_0, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// StartCoroutine(TransitionToPlayNoteSoft());
		RuntimeObject* L_2;
		L_2 = Piano_Note_TransitionToPlayNoteSoft_m499085343DE9B77BCB34D01DBDE7038D85AEC867(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		goto IL_002f;
	}

IL_0022:
	{
		// StartCoroutine(PlayNoteSoft());
		RuntimeObject* L_4;
		L_4 = Piano_Note_PlayNoteSoft_mDA2163296F7BEC4AEED65031C5CBA0A69C8BA716(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
	}

IL_002f:
	{
		// StartCoroutine(MoveKey());
		RuntimeObject* L_6;
		L_6 = Piano_Note_MoveKey_m1B84DBD4A6EFD6629C799A60F168F1F2B0BF20E0(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// CheckNotePosition();
		Piano_Note_CheckNotePosition_mE078E64FE1ABA0AC639D47F855CDBF53F146CACA(__this, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Piano_Note::MoveKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Piano_Note_MoveKey_m1B84DBD4A6EFD6629C799A60F168F1F2B0BF20E0 (Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveKeyU3Ed__11_t71AC69CF43DB1D066547D5A8D9C42AEA4C07B024_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveKeyU3Ed__11_t71AC69CF43DB1D066547D5A8D9C42AEA4C07B024* L_0 = (U3CMoveKeyU3Ed__11_t71AC69CF43DB1D066547D5A8D9C42AEA4C07B024*)il2cpp_codegen_object_new(U3CMoveKeyU3Ed__11_t71AC69CF43DB1D066547D5A8D9C42AEA4C07B024_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMoveKeyU3Ed__11__ctor_m2EA5CA51EE30F1437FE6B7A07127EAEA0A4BDCB7(L_0, 0, NULL);
		U3CMoveKeyU3Ed__11_t71AC69CF43DB1D066547D5A8D9C42AEA4C07B024* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Piano_Note::PlayNoteSoft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Piano_Note_PlayNoteSoft_mDA2163296F7BEC4AEED65031C5CBA0A69C8BA716 (Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPlayNoteSoftU3Ed__12_tA38FE964F09E471318B4C85277438C271774D0E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPlayNoteSoftU3Ed__12_tA38FE964F09E471318B4C85277438C271774D0E7* L_0 = (U3CPlayNoteSoftU3Ed__12_tA38FE964F09E471318B4C85277438C271774D0E7*)il2cpp_codegen_object_new(U3CPlayNoteSoftU3Ed__12_tA38FE964F09E471318B4C85277438C271774D0E7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPlayNoteSoftU3Ed__12__ctor_m6801BEFD0C8A7FED560ED65132694344F83BBA29(L_0, 0, NULL);
		U3CPlayNoteSoftU3Ed__12_tA38FE964F09E471318B4C85277438C271774D0E7* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Piano_Note::TransitionToPlayNoteSoft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Piano_Note_TransitionToPlayNoteSoft_m499085343DE9B77BCB34D01DBDE7038D85AEC867 (Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTransitionToPlayNoteSoftU3Ed__13_t126F14392E9B243EBDC4E29C4878B9A96131532C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTransitionToPlayNoteSoftU3Ed__13_t126F14392E9B243EBDC4E29C4878B9A96131532C* L_0 = (U3CTransitionToPlayNoteSoftU3Ed__13_t126F14392E9B243EBDC4E29C4878B9A96131532C*)il2cpp_codegen_object_new(U3CTransitionToPlayNoteSoftU3Ed__13_t126F14392E9B243EBDC4E29C4878B9A96131532C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTransitionToPlayNoteSoftU3Ed__13__ctor_m2B020D7EB6916364DBB75EC2EBE2D76D626FE7FD(L_0, 0, NULL);
		U3CTransitionToPlayNoteSoftU3Ed__13_t126F14392E9B243EBDC4E29C4878B9A96131532C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Piano_Note::CheckNotePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Piano_Note_CheckNotePosition_mE078E64FE1ABA0AC639D47F855CDBF53F146CACA (Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral776029F0AF2443F61702EC69FEB62D9A8FC1FE34);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// GameObject[] go = GameObject.FindGameObjectsWithTag("note");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral776029F0AF2443F61702EC69FEB62D9A8FC1FE34, NULL);
		V_0 = L_0;
		// for (int ii=0;ii<go.Length;ii++)
		V_1 = 0;
		goto IL_009b;
	}

IL_0012:
	{
		// if (go[ii] != null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0097;
		}
	}
	{
		// if (go[ii].GetComponent<Note>()._name == _name)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Note_tA2285A184DB020998838A4973465183177E99DE1* L_10;
		L_10 = GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA(L_9, GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		NullCheck(L_10);
		String_t* L_11 = L_10->____name_5;
		String_t* L_12 = __this->____name_8;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0097;
		}
	}
	{
		// int scr = CalculateScore(go[ii].transform.position[1], sc.scoringLine.position[1]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		V_3 = L_19;
		float L_20;
		L_20 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&V_3), 1, NULL);
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_21 = __this->___sc_11;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = L_21->___scoringLine_7;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		V_3 = L_23;
		float L_24;
		L_24 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&V_3), 1, NULL);
		int32_t L_25;
		L_25 = Piano_Note_CalculateScore_m1F08E54D725280730F13E3E037D947A2E7BEF0F7(__this, L_20, L_24, NULL);
		V_2 = L_25;
		// sc.score += scr;
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_26 = __this->___sc_11;
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_27 = L_26;
		NullCheck(L_27);
		float L_28 = L_27->___score_4;
		int32_t L_29 = V_2;
		NullCheck(L_27);
		L_27->___score_4 = ((float)il2cpp_codegen_add(L_28, ((float)L_29)));
		// go[ii].GetComponent<Note>().Particles();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_30 = V_0;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		Note_tA2285A184DB020998838A4973465183177E99DE1* L_34;
		L_34 = GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA(L_33, GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		NullCheck(L_34);
		Note_Particles_mF6D7A66F4DBC1DCB102C2679A796B173D489CB6E(L_34, NULL);
		// Destroy(go[ii]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_35 = V_0;
		int32_t L_36 = V_1;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_38, NULL);
		// return;
		return;
	}

IL_0097:
	{
		// for (int ii=0;ii<go.Length;ii++)
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_009b:
	{
		// for (int ii=0;ii<go.Length;ii++)
		int32_t L_40 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_41 = V_0;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 Piano_Note::CalculateScore(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Piano_Note_CalculateScore_m1F08E54D725280730F13E3E037D947A2E7BEF0F7 (Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* __this, float ___0_x, float ___1_r, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int scr = 0;
		V_0 = 0;
		// if(x-r>0 && x-r<=sc.d)
		float L_0 = ___0_x;
		float L_1 = ___1_r;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_0, L_1))) > ((float)(0.0f)))))
		{
			goto IL_004d;
		}
	}
	{
		float L_2 = ___0_x;
		float L_3 = ___1_r;
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_4 = __this->___sc_11;
		NullCheck(L_4);
		float L_5 = L_4->___d_6;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_2, L_3))) <= ((float)L_5))))
		{
			goto IL_004d;
		}
	}
	{
		// scr = (int) (-10 / sc.d *x +10+10 / sc.d *r);
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_6 = __this->___sc_11;
		NullCheck(L_6);
		float L_7 = L_6->___d_6;
		float L_8 = ___0_x;
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_9 = __this->___sc_11;
		NullCheck(L_9);
		float L_10 = L_9->___d_6;
		float L_11 = ___1_r;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)((-10.0f)/L_7)), L_8)), (10.0f))), ((float)il2cpp_codegen_multiply(((float)((10.0f)/L_10)), L_11)))));
		goto IL_0097;
	}

IL_004d:
	{
		// else if (x - r < 0 && x-r >= -sc.d)
		float L_12 = ___0_x;
		float L_13 = ___1_r;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_12, L_13))) < ((float)(0.0f)))))
		{
			goto IL_0097;
		}
	}
	{
		float L_14 = ___0_x;
		float L_15 = ___1_r;
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_16 = __this->___sc_11;
		NullCheck(L_16);
		float L_17 = L_16->___d_6;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_14, L_15))) >= ((float)((-L_17))))))
		{
			goto IL_0097;
		}
	}
	{
		// scr = (int)(10 / sc.d * x +10- 10 / sc.d * r);
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_18 = __this->___sc_11;
		NullCheck(L_18);
		float L_19 = L_18->___d_6;
		float L_20 = ___0_x;
		Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* L_21 = __this->___sc_11;
		NullCheck(L_21);
		float L_22 = L_21->___d_6;
		float L_23 = ___1_r;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)((10.0f)/L_19)), L_20)), (10.0f))), ((float)il2cpp_codegen_multiply(((float)((10.0f)/L_22)), L_23)))));
	}

IL_0097:
	{
		// return scr;
		int32_t L_24 = V_0;
		return L_24;
	}
}
// System.Void Piano_Note::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Piano_Note__ctor_m1C5AF552783AEB044E90CAA99AA54E5B74FAB4FE (Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* __this, const RuntimeMethod* method) 
{
	{
		// public float delay=0.1f;
		__this->___delay_5 = (0.100000001f);
		// public float distKey = 50;
		__this->___distKey_7 = (50.0f);
		// private float softFactorTrans = 0.05f;
		__this->___softFactorTrans_9 = (0.0500000007f);
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
// System.Void Piano_Note/<MoveKey>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveKeyU3Ed__11__ctor_m2EA5CA51EE30F1437FE6B7A07127EAEA0A4BDCB7 (U3CMoveKeyU3Ed__11_t71AC69CF43DB1D066547D5A8D9C42AEA4C07B024* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Piano_Note/<MoveKey>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveKeyU3Ed__11_System_IDisposable_Dispose_m971AE37B029AB493EB313660BD75E90BD25ACDDF (U3CMoveKeyU3Ed__11_t71AC69CF43DB1D066547D5A8D9C42AEA4C07B024* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Piano_Note/<MoveKey>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveKeyU3Ed__11_MoveNext_m5DC3C3654B9E47B558BDA2BD2053CDD6E834B41B (U3CMoveKeyU3Ed__11_t71AC69CF43DB1D066547D5A8D9C42AEA4C07B024* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0082;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (float teta=0;teta<=Mathf.PI; teta+=Mathf.PI/10)
		__this->___U3CtetaU3E5__2_3 = (0.0f);
		goto IL_009b;
	}

IL_002b:
	{
		// transform.localPosition = new Vector3(posInit[0], posInit[1]- distKey*Mathf.Sin(teta), posInit[2]);
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_4 = V_1;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_6 = V_1;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&L_6->___posInit_6);
		float L_8;
		L_8 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_7, 0, NULL);
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_9 = V_1;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&L_9->___posInit_6);
		float L_11;
		L_11 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_10, 1, NULL);
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->___distKey_7;
		float L_14 = __this->___U3CtetaU3E5__2_3;
		float L_15;
		L_15 = sinf(L_14);
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_16 = V_1;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = (&L_16->___posInit_6);
		float L_18;
		L_18 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_17, 2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), L_8, ((float)il2cpp_codegen_subtract(L_11, ((float)il2cpp_codegen_multiply(L_13, L_15)))), L_18, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_19, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0082:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (float teta=0;teta<=Mathf.PI; teta+=Mathf.PI/10)
		float L_20 = __this->___U3CtetaU3E5__2_3;
		__this->___U3CtetaU3E5__2_3 = ((float)il2cpp_codegen_add(L_20, (0.314159274f)));
	}

IL_009b:
	{
		// for (float teta=0;teta<=Mathf.PI; teta+=Mathf.PI/10)
		float L_21 = __this->___U3CtetaU3E5__2_3;
		if ((((float)L_21) <= ((float)(3.14159274f))))
		{
			goto IL_002b;
		}
	}
	{
		// transform.localPosition = posInit;
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_22 = V_1;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_24 = V_1;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = L_24->___posInit_6;
		NullCheck(L_23);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_23, L_25, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Piano_Note/<MoveKey>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveKeyU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6E11F396C987342351F230B35F1FB14F2008AC7A (U3CMoveKeyU3Ed__11_t71AC69CF43DB1D066547D5A8D9C42AEA4C07B024* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Piano_Note/<MoveKey>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveKeyU3Ed__11_System_Collections_IEnumerator_Reset_mC67B99CDE15E565AD802594FDFB42C85E18A94CD (U3CMoveKeyU3Ed__11_t71AC69CF43DB1D066547D5A8D9C42AEA4C07B024* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveKeyU3Ed__11_System_Collections_IEnumerator_Reset_mC67B99CDE15E565AD802594FDFB42C85E18A94CD_RuntimeMethod_var)));
	}
}
// System.Object Piano_Note/<MoveKey>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveKeyU3Ed__11_System_Collections_IEnumerator_get_Current_m9889139FD2757D422305D927A9172330755D8FD3 (U3CMoveKeyU3Ed__11_t71AC69CF43DB1D066547D5A8D9C42AEA4C07B024* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Piano_Note/<PlayNoteSoft>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayNoteSoftU3Ed__12__ctor_m6801BEFD0C8A7FED560ED65132694344F83BBA29 (U3CPlayNoteSoftU3Ed__12_tA38FE964F09E471318B4C85277438C271774D0E7* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Piano_Note/<PlayNoteSoft>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayNoteSoftU3Ed__12_System_IDisposable_Dispose_m31AF3F20EB3A2F2BAC509308B022E67000732799 (U3CPlayNoteSoftU3Ed__12_tA38FE964F09E471318B4C85277438C271774D0E7* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Piano_Note/<PlayNoteSoft>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPlayNoteSoftU3Ed__12_MoveNext_m8368FE7874B8438C0DC515198F42CAECB08E4112 (U3CPlayNoteSoftU3Ed__12_tA38FE964F09E471318B4C85277438C271774D0E7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0081;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// audioS.time = delay;
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_4 = V_1;
		NullCheck(L_4);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = L_4->___audioS_4;
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___delay_5;
		NullCheck(L_5);
		AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204(L_5, L_7, NULL);
		// audioS.Play();
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_8 = V_1;
		NullCheck(L_8);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = L_8->___audioS_4;
		NullCheck(L_9);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_9, NULL);
		// float t = 0;
		__this->___U3CtU3E5__2_3 = (0.0f);
		goto IL_0088;
	}

IL_0047:
	{
		// audioS.volume = t / softFactor;
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_10 = V_1;
		NullCheck(L_10);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = L_10->___audioS_4;
		float L_12 = __this->___U3CtU3E5__2_3;
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->___softFactor_10;
		NullCheck(L_11);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_11, ((float)(L_12/L_14)), NULL);
		// t += Time.deltaTime;
		float L_15 = __this->___U3CtU3E5__2_3;
		float L_16;
		L_16 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtU3E5__2_3 = ((float)il2cpp_codegen_add(L_15, L_16));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0081:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0088:
	{
		// while (t < softFactor)
		float L_17 = __this->___U3CtU3E5__2_3;
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_18 = V_1;
		NullCheck(L_18);
		float L_19 = L_18->___softFactor_10;
		if ((((float)L_17) < ((float)L_19)))
		{
			goto IL_0047;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Piano_Note/<PlayNoteSoft>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPlayNoteSoftU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAB0E400008A72CD8BFDCDB547E973CBAB0B933D0 (U3CPlayNoteSoftU3Ed__12_tA38FE964F09E471318B4C85277438C271774D0E7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Piano_Note/<PlayNoteSoft>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayNoteSoftU3Ed__12_System_Collections_IEnumerator_Reset_mD7D7F3C388505D25B239AB9A67BAE0B7AA1F4BA6 (U3CPlayNoteSoftU3Ed__12_tA38FE964F09E471318B4C85277438C271774D0E7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPlayNoteSoftU3Ed__12_System_Collections_IEnumerator_Reset_mD7D7F3C388505D25B239AB9A67BAE0B7AA1F4BA6_RuntimeMethod_var)));
	}
}
// System.Object Piano_Note/<PlayNoteSoft>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPlayNoteSoftU3Ed__12_System_Collections_IEnumerator_get_Current_mD8F5DE5EF4F2286913469DA1F4E0CB28F080CD40 (U3CPlayNoteSoftU3Ed__12_tA38FE964F09E471318B4C85277438C271774D0E7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Piano_Note/<TransitionToPlayNoteSoft>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransitionToPlayNoteSoftU3Ed__13__ctor_m2B020D7EB6916364DBB75EC2EBE2D76D626FE7FD (U3CTransitionToPlayNoteSoftU3Ed__13_t126F14392E9B243EBDC4E29C4878B9A96131532C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Piano_Note/<TransitionToPlayNoteSoft>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransitionToPlayNoteSoftU3Ed__13_System_IDisposable_Dispose_m0C510979DA21FB4500E0B337B04B232626196AD9 (U3CTransitionToPlayNoteSoftU3Ed__13_t126F14392E9B243EBDC4E29C4878B9A96131532C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Piano_Note/<TransitionToPlayNoteSoft>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTransitionToPlayNoteSoftU3Ed__13_MoveNext_m51E7CB1A14BC5760411A34DFC1B2FD08ED88FE5B (U3CTransitionToPlayNoteSoftU3Ed__13_t126F14392E9B243EBDC4E29C4878B9A96131532C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_007e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float t = (1-audioS.volume)*softFactorTrans;
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_4 = V_1;
		NullCheck(L_4);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = L_4->___audioS_4;
		NullCheck(L_5);
		float L_6;
		L_6 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_5, NULL);
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->___softFactorTrans_9;
		__this->___U3CtU3E5__2_3 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_6)), L_8));
		goto IL_0085;
	}

IL_003e:
	{
		// audioS.volume = 1-t / softFactorTrans;
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_9 = V_1;
		NullCheck(L_9);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = L_9->___audioS_4;
		float L_11 = __this->___U3CtU3E5__2_3;
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->___softFactorTrans_9;
		NullCheck(L_10);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_10, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_11/L_13)))), NULL);
		// t += Time.deltaTime;
		float L_14 = __this->___U3CtU3E5__2_3;
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtU3E5__2_3 = ((float)il2cpp_codegen_add(L_14, L_15));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007e:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0085:
	{
		// while (t < softFactorTrans)
		float L_16 = __this->___U3CtU3E5__2_3;
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_17 = V_1;
		NullCheck(L_17);
		float L_18 = L_17->___softFactorTrans_9;
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_003e;
		}
	}
	{
		// audioS.volume = 1;
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_19 = V_1;
		NullCheck(L_19);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_20 = L_19->___audioS_4;
		NullCheck(L_20);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_20, (1.0f), NULL);
		// audioS.time = delay;
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_21 = V_1;
		NullCheck(L_21);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_22 = L_21->___audioS_4;
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_23 = V_1;
		NullCheck(L_23);
		float L_24 = L_23->___delay_5;
		NullCheck(L_22);
		AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204(L_22, L_24, NULL);
		// audioS.Play();
		Piano_Note_tDF162ADFD44C7FCB758A9AC82514BECCC06C3A5E* L_25 = V_1;
		NullCheck(L_25);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_26 = L_25->___audioS_4;
		NullCheck(L_26);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_26, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Piano_Note/<TransitionToPlayNoteSoft>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTransitionToPlayNoteSoftU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBA5F8016A905A420675A70EA2DCF9C10522EC86B (U3CTransitionToPlayNoteSoftU3Ed__13_t126F14392E9B243EBDC4E29C4878B9A96131532C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Piano_Note/<TransitionToPlayNoteSoft>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransitionToPlayNoteSoftU3Ed__13_System_Collections_IEnumerator_Reset_mAAB0E7F95FC6542FE57C9E4F6704DB00FB0D579F (U3CTransitionToPlayNoteSoftU3Ed__13_t126F14392E9B243EBDC4E29C4878B9A96131532C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTransitionToPlayNoteSoftU3Ed__13_System_Collections_IEnumerator_Reset_mAAB0E7F95FC6542FE57C9E4F6704DB00FB0D579F_RuntimeMethod_var)));
	}
}
// System.Object Piano_Note/<TransitionToPlayNoteSoft>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTransitionToPlayNoteSoftU3Ed__13_System_Collections_IEnumerator_get_Current_m539BA49FD45B77E393B2BC3792325B404C52C693 (U3CTransitionToPlayNoteSoftU3Ed__13_t126F14392E9B243EBDC4E29C4878B9A96131532C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Score::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Start_m9851EAC634456AE4AD4D1163695A64EB3E4AA8FF (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Score::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Update_m8F6F1768AC5316A30F5A79813D72B20EC6796E5A (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AC78158BEA3678C18136BDE138CDC1ABA9C7E74);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreText.text ="SCORE\n"+score ;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___scoreText_5;
		float* L_1 = (&__this->___score_4);
		String_t* L_2;
		L_2 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3AC78158BEA3678C18136BDE138CDC1ABA9C7E74, L_2, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void Score::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mDEDBA72E1F38C2F7CFF4E6C6556103C5D62C1670 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
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
// System.Void CameraPointer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPointer_Update_mF19D284A593E4627CD4F22A58C11FB87B6627FF4 (CameraPointer_t9BABD11B0AABF9D79F1E27604DF9018F1386C024* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7892A84274C1DC4A2351A49903EB298DEA99C240);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB81A1EDFC9FCE7D754F9199BAED4FF1E125B0C7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4D1D91E707649742B086EDB3E0F4EFA9754545A);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B8_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B7_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B13_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B12_0 = NULL;
	{
		// if (Physics.Raycast(transform.position, transform.forward, out hit, _maxDistance))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		bool L_4;
		L_4 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_1, L_3, (&V_0), (10.0f), NULL);
		if (!L_4)
		{
			goto IL_0077;
		}
	}
	{
		// if (_gazedAtObject != hit.transform.gameObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->____gazedAtObject_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0094;
		}
	}
	{
		// _gazedAtObject?.SendMessage("OnPointerExit");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->____gazedAtObject_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9;
		G_B3_0 = L_10;
		if (L_10)
		{
			G_B4_0 = L_10;
			goto IL_0049;
		}
	}
	{
		goto IL_0053;
	}

IL_0049:
	{
		NullCheck(G_B4_0);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(G_B4_0, _stringLiteralB81A1EDFC9FCE7D754F9199BAED4FF1E125B0C7E, NULL);
	}

IL_0053:
	{
		// _gazedAtObject = hit.transform.gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		__this->____gazedAtObject_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gazedAtObject_5), (void*)L_12);
		// _gazedAtObject.SendMessage("OnPointerEnter");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->____gazedAtObject_5;
		NullCheck(L_13);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(L_13, _stringLiteral7892A84274C1DC4A2351A49903EB298DEA99C240, NULL);
		goto IL_0094;
	}

IL_0077:
	{
		// _gazedAtObject?.SendMessage("OnPointerExit");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->____gazedAtObject_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = L_14;
		G_B7_0 = L_15;
		if (L_15)
		{
			G_B8_0 = L_15;
			goto IL_0083;
		}
	}
	{
		goto IL_008d;
	}

IL_0083:
	{
		NullCheck(G_B8_0);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(G_B8_0, _stringLiteralB81A1EDFC9FCE7D754F9199BAED4FF1E125B0C7E, NULL);
	}

IL_008d:
	{
		// _gazedAtObject = null;
		__this->____gazedAtObject_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gazedAtObject_5), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_0094:
	{
		// if (Google.XR.Cardboard.Api.IsTriggerPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Api_get_IsTriggerPressed_mE2356D33F433C078FB257D788BD9B3B219FA920E(NULL);
		if (!L_16)
		{
			goto IL_00b0;
		}
	}
	{
		// _gazedAtObject?.SendMessage("OnPointerClick");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->____gazedAtObject_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_17;
		G_B12_0 = L_18;
		if (L_18)
		{
			G_B13_0 = L_18;
			goto IL_00a6;
		}
	}
	{
		return;
	}

IL_00a6:
	{
		NullCheck(G_B13_0);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(G_B13_0, _stringLiteralE4D1D91E707649742B086EDB3E0F4EFA9754545A, NULL);
	}

IL_00b0:
	{
		// }
		return;
	}
}
// System.Void CameraPointer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPointer__ctor_m5C4B443EB7C8A518306BF27BD947D938FDF5162D (CameraPointer_t9BABD11B0AABF9D79F1E27604DF9018F1386C024* __this, const RuntimeMethod* method) 
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
// System.Void CardboardStartup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_Start_m35E3138C09D62411C4C8503DD4D47DA2AF9BF6E2 (CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A((-1), NULL);
		// Screen.brightness = 1.0f;
		Screen_set_brightness_m0EE16AC1CB4F674B178C75F8180E6A675A3CD8F7((1.0f), NULL);
		// if (!Api.HasDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Api_HasDeviceParams_m7158915814477F6D8C085ED748F12215F2F3F578(NULL);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17(NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void CardboardStartup::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_Update_m4D4D770B4F4BA807AB64DB40B6730226BB821883 (CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Api.IsGearButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Api_get_IsGearButtonPressed_m922BF1A99A8B035D565441F96824AE9F0925156A(NULL);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17(NULL);
	}

IL_000c:
	{
		// if (Api.IsCloseButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Api_get_IsCloseButtonPressed_m4B0EDA79280273FDD21B841B7E4765D90F978F43(NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
	}

IL_0018:
	{
		// if (Api.IsTriggerHeldPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_get_IsTriggerHeldPressed_m24BDCFD056C57E371E827EB59F09C9DD7F42191F(NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// Api.Recenter();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_Recenter_m0668D49BC62C4DEDCE1A50C78F9E5016D01280C0(NULL);
	}

IL_0024:
	{
		// if (Api.HasNewDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Api_HasNewDeviceParams_m8CF6742A64A20B00D8FFE2F229628D1DB54831C5(NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// Api.ReloadDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ReloadDeviceParams_mBACF68BBC935329B23B19CB08A9CF0D5A6AB8F04(NULL);
	}

IL_0030:
	{
		// Api.UpdateScreenParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_UpdateScreenParams_mC3CED586D588F397D1B53DAAEE0697DA5FDADB03(NULL);
		// }
		return;
	}
}
// System.Void CardboardStartup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup__ctor_m4C459294D28BDCFC64FECC657FB860844F52D9F7 (CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41* __this, const RuntimeMethod* method) 
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
// System.Void ObjectController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_Start_m50CBBCE72AB6C2A5C8BC1977D520CF3856A91E89 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _startingPosition = transform.parent.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		__this->____startingPosition_11 = L_2;
		// _myRenderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->____myRenderer_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____myRenderer_10), (void*)L_3);
		// SetMaterial(false);
		ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::TeleportRandomly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_TeleportRandomly_m45F23374832369044CBD4F60F4F976D33C97C181 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// int sibIdx = transform.GetSiblingIndex();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_0, NULL);
		V_0 = L_1;
		// int numSibs = transform.parent.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_3, NULL);
		V_1 = L_4;
		// sibIdx = (sibIdx + Random.Range(1, numSibs)) % numSibs;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, L_6, NULL);
		int32_t L_8 = V_1;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_5, L_7))%L_8));
		// GameObject randomSib = transform.parent.GetChild(sibIdx).gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_9, NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_10, L_11, NULL);
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		// float angle = Random.Range(-Mathf.PI, Mathf.PI);
		float L_14;
		L_14 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-3.14159274f), (3.14159274f), NULL);
		V_2 = L_14;
		// float distance = Random.Range(_minObjectDistance, _maxObjectDistance);
		float L_15;
		L_15 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((2.5f), (3.5f), NULL);
		V_3 = L_15;
		// float height = Random.Range(_minObjectHeight, _maxObjectHeight);
		float L_16;
		L_16 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.5f), (3.5f), NULL);
		V_4 = L_16;
		// Vector3 newPos = new Vector3(Mathf.Cos(angle) * distance, height,
		//                              Mathf.Sin(angle) * distance);
		float L_17 = V_2;
		float L_18;
		L_18 = cosf(L_17);
		float L_19 = V_3;
		float L_20 = V_4;
		float L_21 = V_2;
		float L_22;
		L_22 = sinf(L_21);
		float L_23 = V_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_5), ((float)il2cpp_codegen_multiply(L_18, L_19)), L_20, ((float)il2cpp_codegen_multiply(L_22, L_23)), NULL);
		// transform.parent.localPosition = newPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_5;
		NullCheck(L_25);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_25, L_26, NULL);
		// randomSib.SetActive(true);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
		// SetMaterial(false);
		ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::OnPointerEnterXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_OnPointerEnterXR_mD7AAB98DFCC9AE5C6B5E6CD237E9B66560E8ABCD (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	{
		// SetMaterial(true);
		ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::OnPointerExitXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_OnPointerExitXR_mF4571559C42F5F0E8D743B7F29EF4E8CB021E515 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	{
		// SetMaterial(false);
		ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::OnPointerClickXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_OnPointerClickXR_mE8361BFCC40C7CEAB37A9501EF3737F214BAFD67 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	{
		// TeleportRandomly();
		ObjectController_TeleportRandomly_m45F23374832369044CBD4F60F4F976D33C97C181(__this, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::SetMaterial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, bool ___0_gazedAt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B4_0 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B3_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B5_0 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B5_1 = NULL;
	{
		// if (InactiveMaterial != null && GazedAtMaterial != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___InactiveMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___GazedAtMaterial_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// _myRenderer.material = gazedAt ? GazedAtMaterial : InactiveMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = __this->____myRenderer_10;
		bool L_5 = ___0_gazedAt;
		G_B3_0 = L_4;
		if (L_5)
		{
			G_B4_0 = L_4;
			goto IL_002d;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___InactiveMaterial_4;
		G_B5_0 = L_6;
		G_B5_1 = G_B3_0;
		goto IL_0033;
	}

IL_002d:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___GazedAtMaterial_5;
		G_B5_0 = L_7;
		G_B5_1 = G_B4_0;
	}

IL_0033:
	{
		NullCheck(G_B5_1);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(G_B5_1, G_B5_0, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void ObjectController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController__ctor_mA008C8DFDEF1B6A05926338921FE1FD30BCEA9BC (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
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
// System.Boolean VrModeController::get__isScreenTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isScreenTouched_mD72F14326F1D19F3AC970FD0ED9D0C5CD5C6CFB5 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began;
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Boolean VrModeController::get__isVrModeEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isVrModeEnabled_m8D8D68536E09FF2DEAD3795AF30A57BA6DF7C95F (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return XRGeneralSettings.Instance.Manager.isInitializationComplete;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_inline(L_1, NULL);
		return L_2;
	}
}
// System.Void VrModeController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_Start_m10BF77FE8B825D9640800D5DF7EF791A391FA49B (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _mainCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->____mainCamera_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mainCamera_5), (void*)L_0);
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A((-1), NULL);
		// Screen.brightness = 1.0f;
		Screen_set_brightness_m0EE16AC1CB4F674B178C75F8180E6A675A3CD8F7((1.0f), NULL);
		// if (!Api.HasDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Api_HasDeviceParams_m7158915814477F6D8C085ED748F12215F2F3F578(NULL);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17(NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void VrModeController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_Update_m43F984D5BF13F2C545B508D93645C1C3AC9262D5 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isVrModeEnabled)
		bool L_0;
		L_0 = VrModeController_get__isVrModeEnabled_m8D8D68536E09FF2DEAD3795AF30A57BA6DF7C95F(__this, NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// if (Api.IsCloseButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Api_get_IsCloseButtonPressed_m4B0EDA79280273FDD21B841B7E4765D90F978F43(NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// ExitVR();
		VrModeController_ExitVR_m1FF25DFE5B3BC15CEDE5C42F56CC399693867397(__this, NULL);
	}

IL_0015:
	{
		// if (Api.IsGearButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_get_IsGearButtonPressed_m922BF1A99A8B035D565441F96824AE9F0925156A(NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17(NULL);
	}

IL_0021:
	{
		// Api.UpdateScreenParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_UpdateScreenParams_mC3CED586D588F397D1B53DAAEE0697DA5FDADB03(NULL);
		return;
	}

IL_0027:
	{
		// if (_isScreenTouched)
		bool L_3;
		L_3 = VrModeController_get__isScreenTouched_mD72F14326F1D19F3AC970FD0ED9D0C5CD5C6CFB5(__this, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// EnterVR();
		VrModeController_EnterVR_m5FD79BF38C6AF621AF9992378BC5C3618FDE5EFB(__this, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void VrModeController::EnterVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_EnterVR_m5FD79BF38C6AF621AF9992378BC5C3618FDE5EFB (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(StartXR());
		RuntimeObject* L_0;
		L_0 = VrModeController_StartXR_m57D80B4AD6B28A7C4E36052563B6227E824CDDB4(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// if (Api.HasNewDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_HasNewDeviceParams_m8CF6742A64A20B00D8FFE2F229628D1DB54831C5(NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// Api.ReloadDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ReloadDeviceParams_mBACF68BBC935329B23B19CB08A9CF0D5A6AB8F04(NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void VrModeController::ExitVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_ExitVR_m1FF25DFE5B3BC15CEDE5C42F56CC399693867397 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	{
		// StopXR();
		VrModeController_StopXR_m0338E8D8035C06E1A46F17C16BBC7933EE9CAA3A(__this, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator VrModeController::StartXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VrModeController_StartXR_m57D80B4AD6B28A7C4E36052563B6227E824CDDB4 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* L_0 = (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6*)il2cpp_codegen_object_new(U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartXRU3Ed__10__ctor_mDA431E1365B30DA2F64F1E7875CD387F2231E138(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void VrModeController::StopXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_StopXR_m0338E8D8035C06E1A46F17C16BBC7933EE9CAA3A (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A7B630B7137FE0D9A770BC44B619CE324CB5173);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C94361C3CF0648D05679FC64B7AD666F8D704CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B1958E6AE4057A73CD052F6EFFCC70AD0F447B4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Stopping XR...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF, NULL);
		// XRGeneralSettings.Instance.Manager.StopSubsystems();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_0, NULL);
		NullCheck(L_1);
		XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4(L_1, NULL);
		// Debug.Log("XR stopped.");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2A7B630B7137FE0D9A770BC44B619CE324CB5173, NULL);
		// Debug.Log("Deinitializing XR...");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9B1958E6AE4057A73CD052F6EFFCC70AD0F447B4, NULL);
		// XRGeneralSettings.Instance.Manager.DeinitializeLoader();
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_2;
		L_2 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_2);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_3;
		L_3 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_2, NULL);
		NullCheck(L_3);
		XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB(L_3, NULL);
		// Debug.Log("XR deinitialized.");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2C94361C3CF0648D05679FC64B7AD666F8D704CA, NULL);
		// _mainCamera.ResetAspect();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->____mainCamera_5;
		NullCheck(L_4);
		Camera_ResetAspect_mAC248F92A2CAC44E2D33EFC3D08AACA9BC3DCEBB(L_4, NULL);
		// _mainCamera.fieldOfView = _defaultFieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->____mainCamera_5;
		NullCheck(L_5);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_5, (60.0f), NULL);
		// }
		return;
	}
}
// System.Void VrModeController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController__ctor_m94505259847FB7C54346D7CF02AD85793393D141 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
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
// System.Void VrModeController/<StartXR>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10__ctor_mDA431E1365B30DA2F64F1E7875CD387F2231E138 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void VrModeController/<StartXR>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10_System_IDisposable_Dispose_m3DC1735AA5EC0D61A72803BB3B33B9499A373336 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean VrModeController/<StartXR>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartXRU3Ed__10_MoveNext_m9A6340456306ACFADD0D458946C82448A862E68B (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1690F87675D46404DB6EEBA8A4B18F2A7FD4611D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38396B3F6667C28970D73F84E06D0DCE797FDEB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CFB84C83B441479C0A89B64CDD931B45CCA6ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral747530FAD2C7DF5B08668539364CCC2CD2B5AFC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF171607C5CF88EC109EFE87AEB48F82DFCE3449);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("Initializing XR...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1690F87675D46404DB6EEBA8A4B18F2A7FD4611D, NULL);
		// yield return XRGeneralSettings.Instance.Manager.InitializeLoader();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_3;
		L_3 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_3);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_4;
		L_4 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_3, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = XRManagerSettings_InitializeLoader_m563761BAF04C04AC931D738AD9E4EBF7FD87E62B(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (XRGeneralSettings.Instance.Manager.activeLoader == null)
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_6;
		L_6 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_6);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_7;
		L_7 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_6, NULL);
		NullCheck(L_7);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_8;
		L_8 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		// Debug.LogError("Initializing XR Failed.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral747530FAD2C7DF5B08668539364CCC2CD2B5AFC2, NULL);
		goto IL_0096;
	}

IL_0069:
	{
		// Debug.Log("XR initialized.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral38396B3F6667C28970D73F84E06D0DCE797FDEB8, NULL);
		// Debug.Log("Starting XR...");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralAF171607C5CF88EC109EFE87AEB48F82DFCE3449, NULL);
		// XRGeneralSettings.Instance.Manager.StartSubsystems();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_10;
		L_10 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_10);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_11;
		L_11 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_10, NULL);
		NullCheck(L_11);
		XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC(L_11, NULL);
		// Debug.Log("XR started.");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral61CFB84C83B441479C0A89B64CDD931B45CCA6ED, NULL);
	}

IL_0096:
	{
		// }
		return (bool)0;
	}
}
// System.Object VrModeController/<StartXR>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartXRU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD0B4CE8CBE980FD132B19F40FF2172502B1D0566 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VrModeController/<StartXR>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10_System_Collections_IEnumerator_Reset_mD99AEFDB38CFAC11731CDB371647891816288600 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartXRU3Ed__10_System_Collections_IEnumerator_Reset_mD99AEFDB38CFAC11731CDB371647891816288600_RuntimeMethod_var)));
	}
}
// System.Object VrModeController/<StartXR>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartXRU3Ed__10_System_Collections_IEnumerator_get_Current_mD84D9ACDB0A04C619509BA51590975DB84C30B0F (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void A::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void A_Start_m14CE10AED5813F4E74019AD9FFC59D56255EF534 (A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____6A7BB757331BA0A922AEBA771882F599E095B72846CD061A3C0C74F786D4F41E_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F06348C17138DE28EF5048E24131AA485EEAED2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAFF7066899E9E4F5C490BB1F89B3BF07BC0554D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB94DCE9F12044F113BBC9A67446BA370BBF5A302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// melodyNotes = new string[] { "LA3","SI3", "DOs4", "RE4", "MI4", "FAs4", "SOLs4", "LA4", "LA4", "SOLs4", "FAs4", "MI4", "RE4", "DOs4", "SI3","LA3"};
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral8F06348C17138DE28EF5048E24131AA485EEAED2);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral8F06348C17138DE28EF5048E24131AA485EEAED2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralAAFF7066899E9E4F5C490BB1F89B3BF07BC0554D);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralAAFF7066899E9E4F5C490BB1F89B3BF07BC0554D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralB94DCE9F12044F113BBC9A67446BA370BBF5A302);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralB94DCE9F12044F113BBC9A67446BA370BBF5A302);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralB94DCE9F12044F113BBC9A67446BA370BBF5A302);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralB94DCE9F12044F113BBC9A67446BA370BBF5A302);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralAAFF7066899E9E4F5C490BB1F89B3BF07BC0554D);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralAAFF7066899E9E4F5C490BB1F89B3BF07BC0554D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral8F06348C17138DE28EF5048E24131AA485EEAED2);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral8F06348C17138DE28EF5048E24131AA485EEAED2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		__this->___melodyNotes_31 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___melodyNotes_31), (void*)L_16);
		// melodyDuration = new float[] { 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f};
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = L_17;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_19 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____6A7BB757331BA0A922AEBA771882F599E095B72846CD061A3C0C74F786D4F41E_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_18, L_19, NULL);
		__this->___melodyDuration_32 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___melodyDuration_32), (void*)L_18);
		// float cumulativeTime = 0.0f;
		V_0 = (0.0f);
		// for (int i = 0; i < melodyNotes.Length; i++)
		V_1 = 0;
		goto IL_014b;
	}

IL_00b9:
	{
		// GameObject keyRef = GameObject.Find(melodyNotes[i]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = __this->___melodyNotes_31;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(L_23, NULL);
		V_2 = L_24;
		// GameObject note = GameObject.Instantiate(note_prefab, keyRef.transform.position + new Vector3(0, 500 + cumulativeTime * partitureSpeed, 0), Quaternion.Euler(0, 0, 0));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___note_prefab_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_2;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = V_0;
		float L_30 = __this->___partitureSpeed_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), (0.0f), ((float)il2cpp_codegen_add((500.0f), ((float)il2cpp_codegen_multiply(L_29, L_30)))), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_28, L_31, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_25, L_32, L_33, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// note.GetComponent<Note>()._name = melodyNotes[i];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = L_34;
		NullCheck(L_35);
		Note_tA2285A184DB020998838A4973465183177E99DE1* L_36;
		L_36 = GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA(L_35, GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = __this->___melodyNotes_31;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		String_t* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_36);
		L_36->____name_5 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->____name_5), (void*)L_40);
		// note.transform.SetParent(canv.transform);
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_42 = __this->___canv_4;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_42, NULL);
		NullCheck(L_41);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_41, L_43, NULL);
		// cumulativeTime += (float)melodyDuration[i];
		float L_44 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = __this->___melodyDuration_32;
		int32_t L_46 = V_1;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		float L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((float)il2cpp_codegen_add(L_44, ((float)L_48)));
		// for (int i = 0; i < melodyNotes.Length; i++)
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_014b:
	{
		// for (int i = 0; i < melodyNotes.Length; i++)
		int32_t L_50 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = __this->___melodyNotes_31;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_00b9;
		}
	}
	{
		// }
		return;
	}
}
// System.Void A::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void A_FixedUpdate_m755F28C317E56DE5D28329106C86B57260CF77AA (A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void A::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void A__ctor_mDEAF5CC565A48E0BBF37B638E29C5276390AD968 (A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441* __this, const RuntimeMethod* method) 
{
	{
		// public float partitureSpeed = 25;
		__this->___partitureSpeed_33 = (25.0f);
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
// System.Void B::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void B_Start_m527B04B874E37AE934EC3C9DADD601D2A3720E39 (B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____143EEA3E17AE0C938731951D6888D194010FEAC22BA18B9B61B4ADA0C690BDB1_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D4D88A779822785525151AA1029F2B89FDE9FAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F06348C17138DE28EF5048E24131AA485EEAED2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAFF7066899E9E4F5C490BB1F89B3BF07BC0554D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2A7B1E84542FBB145B153BC2B717A230BDDA98E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA7769D7043BA2846653AB41192F9AFBB4B3A05D);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// melodyNotes = new string[] { "SI3","DOs4", "REs4", "MI4", "FAs4", "SOLs4", "LAs4", "SI4", "SI4", "LAs4", "SOLs4", "FAs4", "MI4", "REs4", "DOs4","SI3" };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralFA7769D7043BA2846653AB41192F9AFBB4B3A05D);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralFA7769D7043BA2846653AB41192F9AFBB4B3A05D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral8F06348C17138DE28EF5048E24131AA485EEAED2);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral8F06348C17138DE28EF5048E24131AA485EEAED2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralAAFF7066899E9E4F5C490BB1F89B3BF07BC0554D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralAAFF7066899E9E4F5C490BB1F89B3BF07BC0554D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral7D4D88A779822785525151AA1029F2B89FDE9FAA);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral7D4D88A779822785525151AA1029F2B89FDE9FAA);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralC2A7B1E84542FBB145B153BC2B717A230BDDA98E);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralC2A7B1E84542FBB145B153BC2B717A230BDDA98E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralC2A7B1E84542FBB145B153BC2B717A230BDDA98E);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralC2A7B1E84542FBB145B153BC2B717A230BDDA98E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral7D4D88A779822785525151AA1029F2B89FDE9FAA);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral7D4D88A779822785525151AA1029F2B89FDE9FAA);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralAAFF7066899E9E4F5C490BB1F89B3BF07BC0554D);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralAAFF7066899E9E4F5C490BB1F89B3BF07BC0554D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral8F06348C17138DE28EF5048E24131AA485EEAED2);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral8F06348C17138DE28EF5048E24131AA485EEAED2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralFA7769D7043BA2846653AB41192F9AFBB4B3A05D);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteralFA7769D7043BA2846653AB41192F9AFBB4B3A05D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		__this->___melodyNotes_31 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___melodyNotes_31), (void*)L_16);
		// melodyDuration = new float[] { 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = L_17;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_19 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____143EEA3E17AE0C938731951D6888D194010FEAC22BA18B9B61B4ADA0C690BDB1_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_18, L_19, NULL);
		__this->___melodyDuration_32 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___melodyDuration_32), (void*)L_18);
		// float cumulativeTime = 0.0f;
		V_0 = (0.0f);
		// for (int i = 0; i < melodyNotes.Length; i++)
		V_1 = 0;
		goto IL_014b;
	}

IL_00b9:
	{
		// GameObject keyRef = GameObject.Find(melodyNotes[i]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = __this->___melodyNotes_31;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(L_23, NULL);
		V_2 = L_24;
		// GameObject note = GameObject.Instantiate(note_prefab, keyRef.transform.position + new Vector3(0, 500 + cumulativeTime * partitureSpeed, 0), Quaternion.Euler(0, 0, 0));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___note_prefab_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_2;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = V_0;
		float L_30 = __this->___partitureSpeed_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), (0.0f), ((float)il2cpp_codegen_add((500.0f), ((float)il2cpp_codegen_multiply(L_29, L_30)))), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_28, L_31, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_25, L_32, L_33, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// note.GetComponent<Note>()._name = melodyNotes[i];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = L_34;
		NullCheck(L_35);
		Note_tA2285A184DB020998838A4973465183177E99DE1* L_36;
		L_36 = GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA(L_35, GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = __this->___melodyNotes_31;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		String_t* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_36);
		L_36->____name_5 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->____name_5), (void*)L_40);
		// note.transform.SetParent(canv.transform);
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_42 = __this->___canv_4;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_42, NULL);
		NullCheck(L_41);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_41, L_43, NULL);
		// cumulativeTime += (float)melodyDuration[i];
		float L_44 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = __this->___melodyDuration_32;
		int32_t L_46 = V_1;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		float L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((float)il2cpp_codegen_add(L_44, ((float)L_48)));
		// for (int i = 0; i < melodyNotes.Length; i++)
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_014b:
	{
		// for (int i = 0; i < melodyNotes.Length; i++)
		int32_t L_50 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = __this->___melodyNotes_31;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_00b9;
		}
	}
	{
		// }
		return;
	}
}
// System.Void B::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void B_FixedUpdate_m01044081400B12241C590DF5BB55678A85D0E1C3 (B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void B::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void B__ctor_m288BDABF1B897D8C0529C6E1FE86191ED2477B16 (B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9* __this, const RuntimeMethod* method) 
{
	{
		// public float partitureSpeed = 25;
		__this->___partitureSpeed_33 = (25.0f);
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
// System.Void C::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Start_m1FD0A536BA6CB7009CDB62C16003929F3BC0DE1C (C_t39E134027703E607475C15FB004AC0EA31005C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____143EEA3E17AE0C938731951D6888D194010FEAC22BA18B9B61B4ADA0C690BDB1_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02B4A80F948F576D3566F604ABE91E638D491D05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8576E226721B94DCC86DFC6FC6320D36885F97C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral912F28DEFEB349FE02B84196F29F1398A8F8352D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE457C11E9301CE78DF18C9A699A3FF6C58175271);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// melodyNotes = new string[] {"DO3","RE3","MI3","FA3","SOL3","LA3","SI3","DO4","DO4","SI3","LA3","SOL3","FA3","MI3","RE3","DO3"};
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralE457C11E9301CE78DF18C9A699A3FF6C58175271);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralE457C11E9301CE78DF18C9A699A3FF6C58175271);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral912F28DEFEB349FE02B84196F29F1398A8F8352D);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral912F28DEFEB349FE02B84196F29F1398A8F8352D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral02B4A80F948F576D3566F604ABE91E638D491D05);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral02B4A80F948F576D3566F604ABE91E638D491D05);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral8576E226721B94DCC86DFC6FC6320D36885F97C0);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral8576E226721B94DCC86DFC6FC6320D36885F97C0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral8576E226721B94DCC86DFC6FC6320D36885F97C0);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral8576E226721B94DCC86DFC6FC6320D36885F97C0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral02B4A80F948F576D3566F604ABE91E638D491D05);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral02B4A80F948F576D3566F604ABE91E638D491D05);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral912F28DEFEB349FE02B84196F29F1398A8F8352D);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral912F28DEFEB349FE02B84196F29F1398A8F8352D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralE457C11E9301CE78DF18C9A699A3FF6C58175271);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteralE457C11E9301CE78DF18C9A699A3FF6C58175271);
		__this->___melodyNotes_31 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___melodyNotes_31), (void*)L_16);
		// melodyDuration = new float[] { 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f};
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = L_17;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_19 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____143EEA3E17AE0C938731951D6888D194010FEAC22BA18B9B61B4ADA0C690BDB1_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_18, L_19, NULL);
		__this->___melodyDuration_32 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___melodyDuration_32), (void*)L_18);
		// float cumulativeTime = 0.0f;
		V_0 = (0.0f);
		// for (int i = 0; i < melodyNotes.Length; i++)
		V_1 = 0;
		goto IL_014b;
	}

IL_00b9:
	{
		// GameObject keyRef = GameObject.Find(melodyNotes[i]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = __this->___melodyNotes_31;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(L_23, NULL);
		V_2 = L_24;
		// GameObject note = GameObject.Instantiate(note_prefab, keyRef.transform.position + new Vector3(0, 500 + cumulativeTime * partitureSpeed, 0), Quaternion.Euler(0, 0, 0));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___note_prefab_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_2;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = V_0;
		float L_30 = __this->___partitureSpeed_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), (0.0f), ((float)il2cpp_codegen_add((500.0f), ((float)il2cpp_codegen_multiply(L_29, L_30)))), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_28, L_31, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_25, L_32, L_33, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// note.GetComponent<Note>()._name = melodyNotes[i];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = L_34;
		NullCheck(L_35);
		Note_tA2285A184DB020998838A4973465183177E99DE1* L_36;
		L_36 = GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA(L_35, GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = __this->___melodyNotes_31;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		String_t* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_36);
		L_36->____name_5 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->____name_5), (void*)L_40);
		// note.transform.SetParent(canv.transform);
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_42 = __this->___canv_4;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_42, NULL);
		NullCheck(L_41);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_41, L_43, NULL);
		// cumulativeTime += (float)melodyDuration[i];
		float L_44 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = __this->___melodyDuration_32;
		int32_t L_46 = V_1;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		float L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((float)il2cpp_codegen_add(L_44, ((float)L_48)));
		// for (int i = 0; i < melodyNotes.Length; i++)
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_014b:
	{
		// for (int i = 0; i < melodyNotes.Length; i++)
		int32_t L_50 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = __this->___melodyNotes_31;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_00b9;
		}
	}
	{
		// }
		return;
	}
}
// System.Void C::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_FixedUpdate_m958AE394B3B27E63CF70427C69A493547FFC000D (C_t39E134027703E607475C15FB004AC0EA31005C06* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void C::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C__ctor_mD5D5DDB5F47DD05F1C5345D3FF113008F2CCE970 (C_t39E134027703E607475C15FB004AC0EA31005C06* __this, const RuntimeMethod* method) 
{
	{
		// public float partitureSpeed = 25;
		__this->___partitureSpeed_33 = (25.0f);
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
// System.Void CameraPointerManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPointerManager_Awake_m7689ECECCCF126FF05E5F1263D7BD7912A7A5850 (CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance != null && Instance != this)
		CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467* L_0 = ((CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467_StaticFields*)il2cpp_codegen_static_fields_for(CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467* L_2 = ((CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467_StaticFields*)il2cpp_codegen_static_fields_for(CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		return;
	}

IL_0026:
	{
		// Instance = this;
		((CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467_StaticFields*)il2cpp_codegen_static_fields_for(CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467_StaticFields*)il2cpp_codegen_static_fields_for(CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void CameraPointerManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPointerManager_Start_mD7AF198D08B9BF90DDF91F6CD878D6B8797BE31F (CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraPointerManager_GazeSelection_mA039246BE96F5637EA7BD76848D007C19702D3A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GazeManager.Instance.OnGazeSelection += GazeSelection;
		GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* L_0 = ((GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_StaticFields*)il2cpp_codegen_static_fields_for(GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_il2cpp_TypeInfo_var))->___Instance_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)CameraPointerManager_GazeSelection_mA039246BE96F5637EA7BD76848D007C19702D3A4_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		GazeManager_add_OnGazeSelection_m4FE6E1A4B46C2F4AFB2CDFAEEF7A86E170F4BF83(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CameraPointerManager::GazeSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPointerManager_GazeSelection_mA039246BE96F5637EA7BD76848D007C19702D3A4 (CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1008E601924423658D31F5689E0DFA1A15A5F478);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	{
		// _gazedAtObject?.SendMessage("OnPointerClickXR", null, SendMessageOptions.DontRequireReceiver);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____gazedAtObject_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		GameObject_SendMessage_m452B3418BE240EC79550C15E1F2EAE61488F06DF(G_B2_0, _stringLiteral1008E601924423658D31F5689E0DFA1A15A5F478, NULL, 1, NULL);
		// }
		return;
	}
}
// System.Void CameraPointerManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPointerManager_Update_mC8047619A5CDDFEBDF2E9B7EC93407DF4D4AED7A (CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1008E601924423658D31F5689E0DFA1A15A5F478);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442CCE935B9A27A2EFA460E6B789B47268CA5E80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8D71ADBC89206FCE4E3E3DD613C85605604641B);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B11_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B10_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B16_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B15_0 = NULL;
	{
		// if (Physics.Raycast(transform.position, transform.forward, out hit, _maxDistance))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		bool L_4;
		L_4 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_1, L_3, (&V_0), (10.0f), NULL);
		if (!L_4)
		{
			goto IL_00be;
		}
	}
	{
		// hitPoint = hit.point;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		__this->___hitPoint_12 = L_5;
		// if (_gazedAtObject != hit.transform.gameObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->____gazedAtObject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0093;
		}
	}
	{
		// _gazedAtObject?.SendMessage("OnPointerExitXR", null, SendMessageOptions.DontRequireReceiver);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->____gazedAtObject_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10;
		G_B3_0 = L_11;
		if (L_11)
		{
			G_B4_0 = L_11;
			goto IL_0059;
		}
	}
	{
		goto IL_0065;
	}

IL_0059:
	{
		NullCheck(G_B4_0);
		GameObject_SendMessage_m452B3418BE240EC79550C15E1F2EAE61488F06DF(G_B4_0, _stringLiteralA8D71ADBC89206FCE4E3E3DD613C85605604641B, NULL, 1, NULL);
	}

IL_0065:
	{
		// _gazedAtObject = hit.transform.gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		__this->____gazedAtObject_9 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gazedAtObject_9), (void*)L_13);
		// _gazedAtObject.SendMessage("OnPointerEnterXR", null, SendMessageOptions.DontRequireReceiver);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->____gazedAtObject_9;
		NullCheck(L_14);
		GameObject_SendMessage_m452B3418BE240EC79550C15E1F2EAE61488F06DF(L_14, _stringLiteral442CCE935B9A27A2EFA460E6B789B47268CA5E80, NULL, 1, NULL);
		// GazeManager.Instance.StartGazeSelection();
		GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* L_15 = ((GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_StaticFields*)il2cpp_codegen_static_fields_for(GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_il2cpp_TypeInfo_var))->___Instance_5;
		NullCheck(L_15);
		GazeManager_StartGazeSelection_mC5D9D2AF4FCF5A41344E6F8E1F385B1AE1356AD9(L_15, NULL);
	}

IL_0093:
	{
		// if (hit.transform.CompareTag(interactableTag))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		String_t* L_17 = __this->___interactableTag_10;
		NullCheck(L_16);
		bool L_18;
		L_18 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_00b6;
		}
	}
	{
		// PointerOnGaze(hit.point);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		CameraPointerManager_PointerOnGaze_mFE71E28BFB2362755041E34394638EBD9CAF0735(__this, L_19, NULL);
		goto IL_00dd;
	}

IL_00b6:
	{
		// PointerOutGaze();
		CameraPointerManager_PointerOutGaze_mBA0047E8AEC716F7A0F44FA956F33022FB94539E(__this, NULL);
		goto IL_00dd;
	}

IL_00be:
	{
		// _gazedAtObject?.SendMessage("OnPointerExitXR", null, SendMessageOptions.DontRequireReceiver);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->____gazedAtObject_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = L_20;
		G_B10_0 = L_21;
		if (L_21)
		{
			G_B11_0 = L_21;
			goto IL_00ca;
		}
	}
	{
		goto IL_00d6;
	}

IL_00ca:
	{
		NullCheck(G_B11_0);
		GameObject_SendMessage_m452B3418BE240EC79550C15E1F2EAE61488F06DF(G_B11_0, _stringLiteralA8D71ADBC89206FCE4E3E3DD613C85605604641B, NULL, 1, NULL);
	}

IL_00d6:
	{
		// _gazedAtObject = null;
		__this->____gazedAtObject_9 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gazedAtObject_9), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_00dd:
	{
		// if (Google.XR.Cardboard.Api.IsTriggerPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Api_get_IsTriggerPressed_mE2356D33F433C078FB257D788BD9B3B219FA920E(NULL);
		if (!L_22)
		{
			goto IL_00fb;
		}
	}
	{
		// _gazedAtObject?.SendMessage("OnPointerClickXR", null, SendMessageOptions.DontRequireReceiver);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->____gazedAtObject_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = L_23;
		G_B15_0 = L_24;
		if (L_24)
		{
			G_B16_0 = L_24;
			goto IL_00ef;
		}
	}
	{
		return;
	}

IL_00ef:
	{
		NullCheck(G_B16_0);
		GameObject_SendMessage_m452B3418BE240EC79550C15E1F2EAE61488F06DF(G_B16_0, _stringLiteral1008E601924423658D31F5689E0DFA1A15A5F478, NULL, 1, NULL);
	}

IL_00fb:
	{
		// }
		return;
	}
}
// System.Void CameraPointerManager::PointerOnGaze(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPointerManager_PointerOnGaze_mFE71E28BFB2362755041E34394638EBD9CAF0735 (CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_hitPoint, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float scaleFactor = scaleSize * Vector3.Distance(transform.position, hitPoint);
		float L_0 = __this->___scaleSize_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_hitPoint;
		float L_4;
		L_4 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_2, L_3, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_4));
		// pointer.transform.localScale = Vector3.one * scaleFactor;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___pointer_5;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		NullCheck(L_6);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_6, L_9, NULL);
		// pointer.transform.parent.position = CalculatePointerPosition(transform.position, hitPoint, disPointerObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___pointer_5;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___0_hitPoint;
		float L_16 = __this->___disPointerObject_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = CameraPointerManager_CalculatePointerPosition_m4ACA12A1EC9DD2EA04C2D81178361A3D2F81FA38(__this, L_14, L_15, L_16, NULL);
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_17, NULL);
		// }
		return;
	}
}
// System.Void CameraPointerManager::PointerOutGaze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPointerManager_PointerOutGaze_mBA0047E8AEC716F7A0F44FA956F33022FB94539E (CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pointer.transform.localScale = Vector3.one * 0.1f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pointer_5;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, (0.100000001f), NULL);
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_3, NULL);
		// pointer.transform.parent.transform.localPosition = new Vector3(0,0,maxDistancePointer);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___pointer_5;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_5, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		float L_8 = __this->___maxDistancePointer_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (0.0f), (0.0f), L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_7, L_9, NULL);
		// pointer.transform.parent.parent.transform.rotation = transform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___pointer_5;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_11, NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_12, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_15, NULL);
		NullCheck(L_14);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_14, L_16, NULL);
		// GazeManager.Instance.CancelGazeSelection();
		GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* L_17 = ((GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_StaticFields*)il2cpp_codegen_static_fields_for(GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_il2cpp_TypeInfo_var))->___Instance_5;
		NullCheck(L_17);
		GazeManager_CancelGazeSelection_mFF4A662611E9B9BEDA19AA9D2E32D68F9E381DE9(L_17, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 CameraPointerManager::CalculatePointerPosition(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraPointerManager_CalculatePointerPosition_m4ACA12A1EC9DD2EA04C2D81178361A3D2F81FA38 (CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_p1, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float x = p0.x * t * (p1.x - p0.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_p0;
		float L_1 = L_0.___x_2;
		float L_2 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_p1;
		float L_4 = L_3.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_p0;
		float L_6 = L_5.___x_2;
		// float y = p0.y * t * (p1.y - p0.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_p0;
		float L_8 = L_7.___y_3;
		float L_9 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_p1;
		float L_11 = L_10.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_p0;
		float L_13 = L_12.___y_3;
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_subtract(L_11, L_13))));
		// float z = p0.z * t * (p1.z - p0.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___0_p0;
		float L_15 = L_14.___z_4;
		float L_16 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___1_p1;
		float L_18 = L_17.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___0_p0;
		float L_20 = L_19.___z_4;
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_15, L_16)), ((float)il2cpp_codegen_subtract(L_18, L_20))));
		// return new Vector3(x,y,z);
		float L_21 = V_0;
		float L_22 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_subtract(L_4, L_6)))), L_21, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Void CameraPointerManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPointerManager__ctor_m68A4F11BDE622417A9BF6A679D308B541E3056A3 (CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral400891DC6D65E07F573EF485FF45CF5FC0310B67);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float maxDistancePointer = 4.5f;
		__this->___maxDistancePointer_6 = (4.5f);
		// [SerializeField] private float disPointerObject = 0.95f;
		__this->___disPointerObject_7 = (0.949999988f);
		// private readonly string interactableTag = "interactable";
		__this->___interactableTag_10 = _stringLiteral400891DC6D65E07F573EF485FF45CF5FC0310B67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interactableTag_10), (void*)_stringLiteral400891DC6D65E07F573EF485FF45CF5FC0310B67);
		// private float scaleSize = 0.030f;
		__this->___scaleSize_11 = (0.0299999993f);
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
// System.Void CameraRotationLimit::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRotationLimit_LateUpdate_m2E18820EC66E3CC5ED40FFD2C61FE3504CCB0B78 (CameraRotationLimit_t4770227C58670882C65DFB31CC67857577E6B0AB* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float currentXRotation = transform.rotation.eulerAngles.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		V_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_2), NULL);
		float L_3 = L_2.___x_2;
		V_0 = L_3;
		// float currentYRotation = transform.rotation.eulerAngles.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		V_2 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_2), NULL);
		float L_7 = L_6.___y_3;
		V_1 = L_7;
		// if (currentXRotation > 180f)
		float L_8 = V_0;
		if ((!(((float)L_8) > ((float)(180.0f)))))
		{
			goto IL_0042;
		}
	}
	{
		// currentXRotation -= 360f;
		float L_9 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_9, (360.0f)));
	}

IL_0042:
	{
		// currentXRotation = Mathf.Clamp(currentXRotation, minXRotation, maxXRotation);
		float L_10 = V_0;
		float L_11 = __this->___minXRotation_5;
		float L_12 = __this->___maxXRotation_4;
		float L_13;
		L_13 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_10, L_11, L_12, NULL);
		V_0 = L_13;
		// if (currentYRotation > 180f)
		float L_14 = V_1;
		if ((!(((float)L_14) > ((float)(180.0f)))))
		{
			goto IL_0065;
		}
	}
	{
		// currentYRotation -= 360f;
		float L_15 = V_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_15, (360.0f)));
	}

IL_0065:
	{
		// currentYRotation = Mathf.Clamp(currentYRotation, minYRotation, maxYRotation);
		float L_16 = V_1;
		float L_17 = __this->___minYRotation_7;
		float L_18 = __this->___maxYRotation_6;
		float L_19;
		L_19 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_16, L_17, L_18, NULL);
		V_1 = L_19;
		// transform.rotation = Quaternion.Euler(currentXRotation, currentYRotation, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_21 = V_0;
		float L_22 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_21, L_22, (0.0f), NULL);
		NullCheck(L_20);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_20, L_23, NULL);
		// }
		return;
	}
}
// System.Void CameraRotationLimit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRotationLimit__ctor_m4DA389496E42D29B72FFF535C2E04E477F11ABE4 (CameraRotationLimit_t4770227C58670882C65DFB31CC67857577E6B0AB* __this, const RuntimeMethod* method) 
{
	{
		// public float maxXRotation = 0.95f; // L?mite m?ximo de rotaci?n en el eje X
		__this->___maxXRotation_4 = (0.949999988f);
		// public float minXRotation = -0.55f; // L?mite m?nimo de rotaci?n en el eje X
		__this->___minXRotation_5 = (-0.550000012f);
		// public float maxYRotation = 0.275f; // L?mite m?ximo de rotaci?n en el eje Y
		__this->___maxYRotation_6 = (0.275000006f);
		// public float minYRotation = 0.2f; // L?mite m?nimo de rotaci?n en el eje Y
		__this->___minYRotation_7 = (0.200000003f);
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
// System.Void CS::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CS_Start_m4D68CEDD9972102B8DFD29AEAD70D5AFB06A9F54 (CS_tB3F30834155DDFF3EBD0C03178CF32376DAB3BC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____143EEA3E17AE0C938731951D6888D194010FEAC22BA18B9B61B4ADA0C690BDB1_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A5F1D3BC267D198AAF1651C5523683E97C8E343);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8576E226721B94DCC86DFC6FC6320D36885F97C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B55557D8650FA52E469A9E198C4C5DCB837CB5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CAD8BA31C5DCE648F115F43CB5AFE3D130E18E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E9CE875D749DC46B1A35C05263D2D4B11965F00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6746290AF01E8D88C1996D1E9CBBAB2712BA3AD);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// melodyNotes = new string[] { "DOs3", "REs3", "FA3", "FAs3", "SOLs3", "LAs3", "DO4", "DOs4", "DOs4", "DO4", "LAs3", "SOLs3", "FAs3", "FA3", "REs3", "DOs3" };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral9CAD8BA31C5DCE648F115F43CB5AFE3D130E18E3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9CAD8BA31C5DCE648F115F43CB5AFE3D130E18E3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral9E9CE875D749DC46B1A35C05263D2D4B11965F00);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral9E9CE875D749DC46B1A35C05263D2D4B11965F00);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral8576E226721B94DCC86DFC6FC6320D36885F97C0);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral8576E226721B94DCC86DFC6FC6320D36885F97C0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral0A5F1D3BC267D198AAF1651C5523683E97C8E343);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral0A5F1D3BC267D198AAF1651C5523683E97C8E343);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralA6746290AF01E8D88C1996D1E9CBBAB2712BA3AD);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA6746290AF01E8D88C1996D1E9CBBAB2712BA3AD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral9B55557D8650FA52E469A9E198C4C5DCB837CB5C);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral9B55557D8650FA52E469A9E198C4C5DCB837CB5C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral9B55557D8650FA52E469A9E198C4C5DCB837CB5C);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral9B55557D8650FA52E469A9E198C4C5DCB837CB5C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralA6746290AF01E8D88C1996D1E9CBBAB2712BA3AD);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralA6746290AF01E8D88C1996D1E9CBBAB2712BA3AD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral0A5F1D3BC267D198AAF1651C5523683E97C8E343);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral0A5F1D3BC267D198AAF1651C5523683E97C8E343);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral8576E226721B94DCC86DFC6FC6320D36885F97C0);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral8576E226721B94DCC86DFC6FC6320D36885F97C0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral9E9CE875D749DC46B1A35C05263D2D4B11965F00);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral9E9CE875D749DC46B1A35C05263D2D4B11965F00);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral9CAD8BA31C5DCE648F115F43CB5AFE3D130E18E3);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral9CAD8BA31C5DCE648F115F43CB5AFE3D130E18E3);
		__this->___melodyNotes_31 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___melodyNotes_31), (void*)L_16);
		// melodyDuration = new float[] { 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f, 2.5f };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = L_17;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_19 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____143EEA3E17AE0C938731951D6888D194010FEAC22BA18B9B61B4ADA0C690BDB1_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_18, L_19, NULL);
		__this->___melodyDuration_32 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___melodyDuration_32), (void*)L_18);
		// float cumulativeTime = 0.0f;
		V_0 = (0.0f);
		// for (int i = 0; i < melodyNotes.Length; i++)
		V_1 = 0;
		goto IL_014b;
	}

IL_00b9:
	{
		// GameObject keyRef = GameObject.Find(melodyNotes[i]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = __this->___melodyNotes_31;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(L_23, NULL);
		V_2 = L_24;
		// GameObject note = GameObject.Instantiate(note_prefab, keyRef.transform.position + new Vector3(0, 500 + cumulativeTime * partitureSpeed, 0), Quaternion.Euler(0, 0, 0));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___note_prefab_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_2;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = V_0;
		float L_30 = __this->___partitureSpeed_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), (0.0f), ((float)il2cpp_codegen_add((500.0f), ((float)il2cpp_codegen_multiply(L_29, L_30)))), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_28, L_31, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_25, L_32, L_33, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// note.GetComponent<Note>()._name = melodyNotes[i];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = L_34;
		NullCheck(L_35);
		Note_tA2285A184DB020998838A4973465183177E99DE1* L_36;
		L_36 = GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA(L_35, GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = __this->___melodyNotes_31;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		String_t* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_36);
		L_36->____name_5 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->____name_5), (void*)L_40);
		// note.transform.SetParent(canv.transform);
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_42 = __this->___canv_4;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_42, NULL);
		NullCheck(L_41);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_41, L_43, NULL);
		// cumulativeTime += (float)melodyDuration[i];
		float L_44 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = __this->___melodyDuration_32;
		int32_t L_46 = V_1;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		float L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((float)il2cpp_codegen_add(L_44, ((float)L_48)));
		// for (int i = 0; i < melodyNotes.Length; i++)
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_014b:
	{
		// for (int i = 0; i < melodyNotes.Length; i++)
		int32_t L_50 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = __this->___melodyNotes_31;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_00b9;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CS::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CS_FixedUpdate_m3DC41593A31314F58A4C653A1B9C2C35F6316A32 (CS_tB3F30834155DDFF3EBD0C03178CF32376DAB3BC6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CS__ctor_mF1AB592D805FD5355561DC6E707CF2976FAE1DB3 (CS_tB3F30834155DDFF3EBD0C03178CF32376DAB3BC6* __this, const RuntimeMethod* method) 
{
	{
		// public float partitureSpeed = 25;
		__this->___partitureSpeed_33 = (25.0f);
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
// System.Void D::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void D_Start_m2FEC3FF309A47A5561A7B1BF374C7BF49A16C4C6 (D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____6A7BB757331BA0A922AEBA771882F599E095B72846CD061A3C0C74F786D4F41E_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02B4A80F948F576D3566F604ABE91E638D491D05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A5F1D3BC267D198AAF1651C5523683E97C8E343);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral912F28DEFEB349FE02B84196F29F1398A8F8352D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// melodyNotes = new string[] { "RE3","MI3", "FAs3", "SOL3", "LA3", "SI3", "DOs4", "RE4", "RE4", "DOs4", "SI3", "LA3", "SOL3", "FAs3", "MI3","RE3" };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral912F28DEFEB349FE02B84196F29F1398A8F8352D);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral912F28DEFEB349FE02B84196F29F1398A8F8352D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral02B4A80F948F576D3566F604ABE91E638D491D05);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral02B4A80F948F576D3566F604ABE91E638D491D05);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral0A5F1D3BC267D198AAF1651C5523683E97C8E343);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral0A5F1D3BC267D198AAF1651C5523683E97C8E343);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral0A5F1D3BC267D198AAF1651C5523683E97C8E343);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral0A5F1D3BC267D198AAF1651C5523683E97C8E343);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral02B4A80F948F576D3566F604ABE91E638D491D05);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral02B4A80F948F576D3566F604ABE91E638D491D05);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral912F28DEFEB349FE02B84196F29F1398A8F8352D);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral912F28DEFEB349FE02B84196F29F1398A8F8352D);
		__this->___melodyNotes_31 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___melodyNotes_31), (void*)L_16);
		// melodyDuration = new float[] { 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = L_17;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_19 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____6A7BB757331BA0A922AEBA771882F599E095B72846CD061A3C0C74F786D4F41E_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_18, L_19, NULL);
		__this->___melodyDuration_32 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___melodyDuration_32), (void*)L_18);
		// float cumulativeTime = 0.0f;
		V_0 = (0.0f);
		// for (int i = 0; i < melodyNotes.Length; i++)
		V_1 = 0;
		goto IL_014b;
	}

IL_00b9:
	{
		// GameObject keyRef = GameObject.Find(melodyNotes[i]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = __this->___melodyNotes_31;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(L_23, NULL);
		V_2 = L_24;
		// GameObject note = GameObject.Instantiate(note_prefab, keyRef.transform.position + new Vector3(0, 500 + cumulativeTime * partitureSpeed, 0), Quaternion.Euler(0, 0, 0));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___note_prefab_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_2;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = V_0;
		float L_30 = __this->___partitureSpeed_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), (0.0f), ((float)il2cpp_codegen_add((500.0f), ((float)il2cpp_codegen_multiply(L_29, L_30)))), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_28, L_31, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_25, L_32, L_33, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// note.GetComponent<Note>()._name = melodyNotes[i];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = L_34;
		NullCheck(L_35);
		Note_tA2285A184DB020998838A4973465183177E99DE1* L_36;
		L_36 = GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA(L_35, GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = __this->___melodyNotes_31;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		String_t* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_36);
		L_36->____name_5 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->____name_5), (void*)L_40);
		// note.transform.SetParent(canv.transform);
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_42 = __this->___canv_4;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_42, NULL);
		NullCheck(L_41);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_41, L_43, NULL);
		// cumulativeTime += (float)melodyDuration[i];
		float L_44 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = __this->___melodyDuration_32;
		int32_t L_46 = V_1;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		float L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((float)il2cpp_codegen_add(L_44, ((float)L_48)));
		// for (int i = 0; i < melodyNotes.Length; i++)
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_014b:
	{
		// for (int i = 0; i < melodyNotes.Length; i++)
		int32_t L_50 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = __this->___melodyNotes_31;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_00b9;
		}
	}
	{
		// }
		return;
	}
}
// System.Void D::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void D_FixedUpdate_m777CA2855960606A40752333062787A673B38B91 (D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void D__ctor_m26E02FDD049B7E1CA6A89B8C45E20C0BC26B2731 (D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3* __this, const RuntimeMethod* method) 
{
	{
		// public float partitureSpeed = 25;
		__this->___partitureSpeed_33 = (25.0f);
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
// System.Void E::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void E_Start_mAC9F28FECBA673484F0B130F8F9E53FD361DFF25 (E_tFB2BA780A2EE1D04415659DE32B992D9E5016CEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____6A7BB757331BA0A922AEBA771882F599E095B72846CD061A3C0C74F786D4F41E_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02B4A80F948F576D3566F604ABE91E638D491D05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A5F1D3BC267D198AAF1651C5523683E97C8E343);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6746290AF01E8D88C1996D1E9CBBAB2712BA3AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA7769D7043BA2846653AB41192F9AFBB4B3A05D);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// melodyNotes = new string[] { "MI3","FAs3", "SOLs3", "LA3", "SI3", "DOs4", "REs4", "MI4", "MI4", "REs4", "DOs4", "SI3", "LA3", "SOLs3", "FAs3", "MI3" };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral02B4A80F948F576D3566F604ABE91E638D491D05);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral02B4A80F948F576D3566F604ABE91E638D491D05);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral0A5F1D3BC267D198AAF1651C5523683E97C8E343);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral0A5F1D3BC267D198AAF1651C5523683E97C8E343);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralA6746290AF01E8D88C1996D1E9CBBAB2712BA3AD);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA6746290AF01E8D88C1996D1E9CBBAB2712BA3AD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralFA7769D7043BA2846653AB41192F9AFBB4B3A05D);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralFA7769D7043BA2846653AB41192F9AFBB4B3A05D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralFA7769D7043BA2846653AB41192F9AFBB4B3A05D);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralFA7769D7043BA2846653AB41192F9AFBB4B3A05D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral0E0004FBCC40D6B88895163917A601AF1453FA0E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralA6746290AF01E8D88C1996D1E9CBBAB2712BA3AD);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteralA6746290AF01E8D88C1996D1E9CBBAB2712BA3AD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral0A5F1D3BC267D198AAF1651C5523683E97C8E343);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral0A5F1D3BC267D198AAF1651C5523683E97C8E343);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral02B4A80F948F576D3566F604ABE91E638D491D05);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral02B4A80F948F576D3566F604ABE91E638D491D05);
		__this->___melodyNotes_31 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___melodyNotes_31), (void*)L_16);
		// melodyDuration = new float[] { 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = L_17;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_19 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____6A7BB757331BA0A922AEBA771882F599E095B72846CD061A3C0C74F786D4F41E_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_18, L_19, NULL);
		__this->___melodyDuration_32 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___melodyDuration_32), (void*)L_18);
		// float cumulativeTime = 0.0f;
		V_0 = (0.0f);
		// for (int i = 0; i < melodyNotes.Length; i++)
		V_1 = 0;
		goto IL_014b;
	}

IL_00b9:
	{
		// GameObject keyRef = GameObject.Find(melodyNotes[i]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = __this->___melodyNotes_31;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(L_23, NULL);
		V_2 = L_24;
		// GameObject note = GameObject.Instantiate(note_prefab, keyRef.transform.position + new Vector3(0, 500 + cumulativeTime * partitureSpeed, 0), Quaternion.Euler(0, 0, 0));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___note_prefab_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_2;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = V_0;
		float L_30 = __this->___partitureSpeed_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), (0.0f), ((float)il2cpp_codegen_add((500.0f), ((float)il2cpp_codegen_multiply(L_29, L_30)))), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_28, L_31, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_25, L_32, L_33, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// note.GetComponent<Note>()._name = melodyNotes[i];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = L_34;
		NullCheck(L_35);
		Note_tA2285A184DB020998838A4973465183177E99DE1* L_36;
		L_36 = GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA(L_35, GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = __this->___melodyNotes_31;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		String_t* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_36);
		L_36->____name_5 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->____name_5), (void*)L_40);
		// note.transform.SetParent(canv.transform);
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_42 = __this->___canv_4;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_42, NULL);
		NullCheck(L_41);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_41, L_43, NULL);
		// cumulativeTime += (float)melodyDuration[i];
		float L_44 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = __this->___melodyDuration_32;
		int32_t L_46 = V_1;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		float L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((float)il2cpp_codegen_add(L_44, ((float)L_48)));
		// for (int i = 0; i < melodyNotes.Length; i++)
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_014b:
	{
		// for (int i = 0; i < melodyNotes.Length; i++)
		int32_t L_50 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = __this->___melodyNotes_31;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_00b9;
		}
	}
	{
		// }
		return;
	}
}
// System.Void E::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void E_FixedUpdate_mF847FAEB23CC8E053BACC8E09E66BC0B50D2347A (E_tFB2BA780A2EE1D04415659DE32B992D9E5016CEC* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void E::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void E__ctor_m552046DFF061123FE6A8B456865D9BEE8F3C404C (E_tFB2BA780A2EE1D04415659DE32B992D9E5016CEC* __this, const RuntimeMethod* method) 
{
	{
		// public float partitureSpeed = 25;
		__this->___partitureSpeed_33 = (25.0f);
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
// System.Void F::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void F_Start_mAFAFBF6E5A28E39C018DB2ABFAF986C9969F074B (F_t385FAE081BF632BF504ABC6C86D0DDD6F683B4FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____6A7BB757331BA0A922AEBA771882F599E095B72846CD061A3C0C74F786D4F41E_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8576E226721B94DCC86DFC6FC6320D36885F97C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B55557D8650FA52E469A9E198C4C5DCB837CB5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// melodyNotes = new string[] { "FA3","SOL3", "LA3", "LAs3", "DO4", "RE4", "MI4", "FA4","FA4", "MI4", "RE4", "DO4", "LAs3", "LA3", "SOL3","FA3" };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral8576E226721B94DCC86DFC6FC6320D36885F97C0);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral8576E226721B94DCC86DFC6FC6320D36885F97C0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral9B55557D8650FA52E469A9E198C4C5DCB837CB5C);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral9B55557D8650FA52E469A9E198C4C5DCB837CB5C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralEBAC491F5E4DB6047DC694D964B747739CE202B5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral9B55557D8650FA52E469A9E198C4C5DCB837CB5C);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral9B55557D8650FA52E469A9E198C4C5DCB837CB5C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral8576E226721B94DCC86DFC6FC6320D36885F97C0);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral8576E226721B94DCC86DFC6FC6320D36885F97C0);
		__this->___melodyNotes_31 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___melodyNotes_31), (void*)L_16);
		// melodyDuration = new float[] { 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = L_17;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_19 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____6A7BB757331BA0A922AEBA771882F599E095B72846CD061A3C0C74F786D4F41E_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_18, L_19, NULL);
		__this->___melodyDuration_32 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___melodyDuration_32), (void*)L_18);
		// float cumulativeTime = 0.0f;
		V_0 = (0.0f);
		// for (int i = 0; i < melodyNotes.Length; i++)
		V_1 = 0;
		goto IL_014b;
	}

IL_00b9:
	{
		// GameObject keyRef = GameObject.Find(melodyNotes[i]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = __this->___melodyNotes_31;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(L_23, NULL);
		V_2 = L_24;
		// GameObject note = GameObject.Instantiate(note_prefab, keyRef.transform.position + new Vector3(0, 500 + cumulativeTime * partitureSpeed, 0), Quaternion.Euler(0, 0, 0));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___note_prefab_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_2;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = V_0;
		float L_30 = __this->___partitureSpeed_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), (0.0f), ((float)il2cpp_codegen_add((500.0f), ((float)il2cpp_codegen_multiply(L_29, L_30)))), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_28, L_31, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_25, L_32, L_33, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// note.GetComponent<Note>()._name = melodyNotes[i];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = L_34;
		NullCheck(L_35);
		Note_tA2285A184DB020998838A4973465183177E99DE1* L_36;
		L_36 = GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA(L_35, GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = __this->___melodyNotes_31;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		String_t* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_36);
		L_36->____name_5 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->____name_5), (void*)L_40);
		// note.transform.SetParent(canv.transform);
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_42 = __this->___canv_4;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_42, NULL);
		NullCheck(L_41);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_41, L_43, NULL);
		// cumulativeTime += (float)melodyDuration[i];
		float L_44 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = __this->___melodyDuration_32;
		int32_t L_46 = V_1;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		float L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((float)il2cpp_codegen_add(L_44, ((float)L_48)));
		// for (int i = 0; i < melodyNotes.Length; i++)
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_014b:
	{
		// for (int i = 0; i < melodyNotes.Length; i++)
		int32_t L_50 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = __this->___melodyNotes_31;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_00b9;
		}
	}
	{
		// }
		return;
	}
}
// System.Void F::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void F_FixedUpdate_mC83559D7CA0FB1DC476C9DC993B9BA2894F94639 (F_t385FAE081BF632BF504ABC6C86D0DDD6F683B4FB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void F::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void F__ctor_mE23C83DFDF06CB5909E109BD70326404064FCE58 (F_t385FAE081BF632BF504ABC6C86D0DDD6F683B4FB* __this, const RuntimeMethod* method) 
{
	{
		// public float partitureSpeed = 25;
		__this->___partitureSpeed_33 = (25.0f);
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
// System.Void G::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G_Start_mAB41FA62BF806C7584558B4C9EA358528BE06B72 (G_tBF221986460BEF3D5C20B893499C7DCD33CEC16E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____6A7BB757331BA0A922AEBA771882F599E095B72846CD061A3C0C74F786D4F41E_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DCDB22B8B1FCE39C01F54580AC0EBD54208A92F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F06348C17138DE28EF5048E24131AA485EEAED2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// melodyNotes = new string[] { "SOL3","LA3", "SI3", "DO4", "RE4", "MI4", "FAs4", "SOL4", "SOL4","FAs4", "MI4", "RE4", "DO4", "SI3", "LA3","SOL3", };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral8F06348C17138DE28EF5048E24131AA485EEAED2);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral8F06348C17138DE28EF5048E24131AA485EEAED2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral6DCDB22B8B1FCE39C01F54580AC0EBD54208A92F);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral6DCDB22B8B1FCE39C01F54580AC0EBD54208A92F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral6DCDB22B8B1FCE39C01F54580AC0EBD54208A92F);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral6DCDB22B8B1FCE39C01F54580AC0EBD54208A92F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral8F06348C17138DE28EF5048E24131AA485EEAED2);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral8F06348C17138DE28EF5048E24131AA485EEAED2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralB662456A8DB3350051BFDF7C3B84EAD3B793B31A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralEF1CF60ECC576BDE39D49C7ADB3F8C6BCD1A4CDC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral431702101E04BFEE2EABA5396E6A7FA4B3061650);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteralAE6DA45F2C34EF6A4C5EC6E300231BCAF66250D0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralCE4ACFBA215A76F8663DDC298F9EDB6386F4CE32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral515A77BE28AF3DCA6F0A3BCAD6B9DD7215145566);
		__this->___melodyNotes_31 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___melodyNotes_31), (void*)L_16);
		// melodyDuration = new float[] { 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = L_17;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_19 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____6A7BB757331BA0A922AEBA771882F599E095B72846CD061A3C0C74F786D4F41E_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_18, L_19, NULL);
		__this->___melodyDuration_32 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___melodyDuration_32), (void*)L_18);
		// float cumulativeTime = 0.0f;
		V_0 = (0.0f);
		// for (int i = 0; i < melodyNotes.Length; i++)
		V_1 = 0;
		goto IL_014b;
	}

IL_00b9:
	{
		// GameObject keyRef = GameObject.Find(melodyNotes[i]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = __this->___melodyNotes_31;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(L_23, NULL);
		V_2 = L_24;
		// GameObject note = GameObject.Instantiate(note_prefab, keyRef.transform.position + new Vector3(0, 500 + cumulativeTime * partitureSpeed, 0), Quaternion.Euler(0, 0, 0));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___note_prefab_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_2;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = V_0;
		float L_30 = __this->___partitureSpeed_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), (0.0f), ((float)il2cpp_codegen_add((500.0f), ((float)il2cpp_codegen_multiply(L_29, L_30)))), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_28, L_31, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_25, L_32, L_33, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// note.GetComponent<Note>()._name = melodyNotes[i];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = L_34;
		NullCheck(L_35);
		Note_tA2285A184DB020998838A4973465183177E99DE1* L_36;
		L_36 = GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA(L_35, GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = __this->___melodyNotes_31;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		String_t* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_36);
		L_36->____name_5 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->____name_5), (void*)L_40);
		// note.transform.SetParent(canv.transform);
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_42 = __this->___canv_4;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_42, NULL);
		NullCheck(L_41);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_41, L_43, NULL);
		// cumulativeTime += (float)melodyDuration[i];
		float L_44 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = __this->___melodyDuration_32;
		int32_t L_46 = V_1;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		float L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((float)il2cpp_codegen_add(L_44, ((float)L_48)));
		// for (int i = 0; i < melodyNotes.Length; i++)
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_014b:
	{
		// for (int i = 0; i < melodyNotes.Length; i++)
		int32_t L_50 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = __this->___melodyNotes_31;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_00b9;
		}
	}
	{
		// }
		return;
	}
}
// System.Void G::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G_FixedUpdate_mC8589DF72A718A6F51839A54F9B8052A832CA087 (G_tBF221986460BEF3D5C20B893499C7DCD33CEC16E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void G::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G__ctor_mB368CE5FFDF1D716AE1F9418011B593C0902639B (G_tBF221986460BEF3D5C20B893499C7DCD33CEC16E* __this, const RuntimeMethod* method) 
{
	{
		// public float partitureSpeed = 25;
		__this->___partitureSpeed_33 = (25.0f);
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
// System.Void MainMenu::ActivateObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_ActivateObject_mAF75A661ECE9347D39A4C16ADA7DC85D3B99C353 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// objectToActivate.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___objectToActivate_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::DisableObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_DisableObject_m71DF87DDE2BCAE13F40BCDA8E088654E3FC184AC (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// objectToActivate.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___objectToActivate_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::EscenaJuego()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_EscenaJuego_m3930224886824BC22D345534F8E5080CEA85AC4F (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAE090A77EF960E78DD561A7B27262B14F04C923);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("HouseMusic");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralAAE090A77EF960E78DD561A7B27262B14F04C923, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::EscenaC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_EscenaC_mEA9CFEA1D6E13B9047C31E04FE8DA9D001882787 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("C");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::EscenaD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_EscenaD_m79AE856CC06D9D5CA7DEC8E756D325C45F1922CD (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("D");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::EscenaE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_EscenaE_m5286E668AD2271803ADA5EE5D012C3A1117EB13E (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("E");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::EscenaF()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_EscenaF_m54E878F5EB7BEBCCB364DA1845D28EBF91892331 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("F");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::EscenaG()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_EscenaG_m28039A343285A64129765DDC42FB8E2AB9AC6F62 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("G");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::EscenaA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_EscenaA_mD6566E31BF0431494C7E2EE2DF3BC815A46E96ED (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("A");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::EscenaB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_EscenaB_m816BADFEBC9F58621E2E94699937ACE63F5A0541 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("B");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::EscenaCS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_EscenaCS_mF81158B92C6616F7A36344302B0A62B2728A454E (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6EFEA28911C05150F90CA0C3A902792E8F9D73C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("C#");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralD6EFEA28911C05150F90CA0C3A902792E8F9D73C, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::EscenaMelody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_EscenaMelody_m004368A069ECBB09E014B83CE345AB67AB50D5BD (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5097894658013DC1EBE81F86D22D014E42099154);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Melody");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral5097894658013DC1EBE81F86D22D014E42099154, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m8209CEC1D907C87A96D777961F4D0536E6E948DD (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
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
// System.Void UIElementXR::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementXR_Start_m1ABE856E47D5FED92FA01B1A774356AC63545BA9 (UIElementXR_tAC83568DDD4A932BEE72EA39AFE2C9336290636D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// xRCamera = CameraPointerManager.Instance.gameObject.GetComponent<Camera>();
		CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467* L_0 = ((CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467_StaticFields*)il2cpp_codegen_static_fields_for(CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_1, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		__this->___xRCamera_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xRCamera_6), (void*)L_2);
		// }
		return;
	}
}
// System.Void UIElementXR::OnPointerClickXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementXR_OnPointerClickXR_mAFF76BFD6E87C20CED154238F7788A4D287AAE98 (UIElementXR_tAC83568DDD4A932BEE72EA39AFE2C9336290636D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m024FB23AA1DBB1B7A5E1935FA35A1E4FF57AC5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	{
		// PointerEventData pointerEvent = PlacePointer();
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0;
		L_0 = UIElementXR_PlacePointer_m4D0EA27E7034B499CB5FE945AA5708089E842122(__this, NULL);
		V_0 = L_0;
		// ExecuteEvents.Execute(this.gameObject, pointerEvent, ExecuteEvents.pointerClickHandler);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* L_3;
		L_3 = ExecuteEvents_get_pointerClickHandler_m0017F9D1EAF7C02CDDB4C148C92D6685D88EA8D5_inline(NULL);
		bool L_4;
		L_4 = ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m024FB23AA1DBB1B7A5E1935FA35A1E4FF57AC5F6(L_1, L_2, L_3, ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m024FB23AA1DBB1B7A5E1935FA35A1E4FF57AC5F6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIElementXR::OnPointerEnterXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementXR_OnPointerEnterXR_mA7074938755DFCB7EC2974905CB17A95BE1658DB (UIElementXR_tAC83568DDD4A932BEE72EA39AFE2C9336290636D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mA6249F5DCCE2688148557BE5E086BAF5EA1FB1FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// GazeManager.Instance.SetUpGaze(1.5f);
		GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* L_0 = ((GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_StaticFields*)il2cpp_codegen_static_fields_for(GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_il2cpp_TypeInfo_var))->___Instance_5;
		NullCheck(L_0);
		GazeManager_SetUpGaze_m20F443A1C4F8101005C2AC8FFC583ADE44B512F0_inline(L_0, (1.5f), NULL);
		// OnXRPointerEnter?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = __this->___OnXRPointerEnter_4;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001b;
		}
	}
	{
		goto IL_0020;
	}

IL_001b:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
	}

IL_0020:
	{
		// PointerEventData pointerEvent = PlacePointer();
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3;
		L_3 = UIElementXR_PlacePointer_m4D0EA27E7034B499CB5FE945AA5708089E842122(__this, NULL);
		V_0 = L_3;
		// ExecuteEvents.Execute(this.gameObject, pointerEvent, ExecuteEvents.pointerDownHandler);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* L_6;
		L_6 = ExecuteEvents_get_pointerDownHandler_mA67CE33D32540939A273DB88D6456C7FE43C13EF_inline(NULL);
		bool L_7;
		L_7 = ExecuteEvents_Execute_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mA6249F5DCCE2688148557BE5E086BAF5EA1FB1FD(L_4, L_5, L_6, ExecuteEvents_Execute_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mA6249F5DCCE2688148557BE5E086BAF5EA1FB1FD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIElementXR::OnPointerExitXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementXR_OnPointerExitXR_mD931A60FFAB4F0B6F900658E088C319086489A3A (UIElementXR_tAC83568DDD4A932BEE72EA39AFE2C9336290636D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_mBB70745D5D17BF6402CABEFF0F52911F88C197A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// GazeManager.Instance.SetUpGaze(2.5f);
		GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* L_0 = ((GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_StaticFields*)il2cpp_codegen_static_fields_for(GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901_il2cpp_TypeInfo_var))->___Instance_5;
		NullCheck(L_0);
		GazeManager_SetUpGaze_m20F443A1C4F8101005C2AC8FFC583ADE44B512F0_inline(L_0, (2.5f), NULL);
		// OnXRPointerExit?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = __this->___OnXRPointerExit_5;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001b;
		}
	}
	{
		goto IL_0020;
	}

IL_001b:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
	}

IL_0020:
	{
		// PointerEventData pointerEvent = PlacePointer();
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3;
		L_3 = UIElementXR_PlacePointer_m4D0EA27E7034B499CB5FE945AA5708089E842122(__this, NULL);
		V_0 = L_3;
		// ExecuteEvents.Execute(this.gameObject, pointerEvent, ExecuteEvents.pointerUpHandler);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* L_6;
		L_6 = ExecuteEvents_get_pointerUpHandler_m51B83B4AD7498D6F7A2CBD5F2331E91A37AE4CF2_inline(NULL);
		bool L_7;
		L_7 = ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_mBB70745D5D17BF6402CABEFF0F52911F88C197A6(L_4, L_5, L_6, ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_mBB70745D5D17BF6402CABEFF0F52911F88C197A6_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.EventSystems.PointerEventData UIElementXR::PlacePointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* UIElementXR_PlacePointer_m4D0EA27E7034B499CB5FE945AA5708089E842122 (UIElementXR_tAC83568DDD4A932BEE72EA39AFE2C9336290636D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 screenPos = xRCamera.WorldToScreenPoint(CameraPointerManager.Instance.hitPoint);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___xRCamera_6;
		CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467* L_1 = ((CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467_StaticFields*)il2cpp_codegen_static_fields_for(CameraPointerManager_t4FC61220F2974C8FE51CE7D27550FE2B9E1EB467_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___hitPoint_12;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_0, L_2, NULL);
		V_0 = L_3;
		// var pointer = new PointerEventData(EventSystem.current);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_4;
		L_4 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)il2cpp_codegen_object_new(PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C(L_5, L_4, NULL);
		// pointer.position = new Vector2(screenPos.x,screenPos.y);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = L_7.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10 = L_9.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), L_8, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_6, L_11, NULL);
		// return pointer;
		return L_6;
	}
}
// System.Void UIElementXR::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementXR__ctor_m6DFE0D82A7F6DE1B4ABAB9C6A964463F771CDEA4 (UIElementXR_tAC83568DDD4A932BEE72EA39AFE2C9336290636D* __this, const RuntimeMethod* method) 
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
// System.Void TS.GazeInteraction.GazeInteractable::add_Enter(TS.GazeInteraction.GazeInteractable/OnEnter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_add_Enter_mB3370B15241518A0C24A472D6242AC4700734AF7 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* V_0 = NULL;
	OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* V_1 = NULL;
	OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* V_2 = NULL;
	{
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_0 = __this->___Enter_5;
		V_0 = L_0;
	}

IL_0007:
	{
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_1 = V_0;
		V_1 = L_1;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_2 = V_1;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD*)CastclassSealed((RuntimeObject*)L_4, OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD_il2cpp_TypeInfo_var));
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD** L_5 = (&__this->___Enter_5);
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_6 = V_2;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_7 = V_1;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_9 = V_0;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD*)L_9) == ((RuntimeObject*)(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::remove_Enter(TS.GazeInteraction.GazeInteractable/OnEnter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_remove_Enter_mF0D8AD70866AC7C4AA2F01A2C2C98B8A166FC209 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* V_0 = NULL;
	OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* V_1 = NULL;
	OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* V_2 = NULL;
	{
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_0 = __this->___Enter_5;
		V_0 = L_0;
	}

IL_0007:
	{
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_1 = V_0;
		V_1 = L_1;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_2 = V_1;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD*)CastclassSealed((RuntimeObject*)L_4, OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD_il2cpp_TypeInfo_var));
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD** L_5 = (&__this->___Enter_5);
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_6 = V_2;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_7 = V_1;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_9 = V_0;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD*)L_9) == ((RuntimeObject*)(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::add_Stay(TS.GazeInteraction.GazeInteractable/OnStay)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_add_Stay_m27062BD82655D41E48962A59C622FC4E1858A001 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* V_0 = NULL;
	OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* V_1 = NULL;
	OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* V_2 = NULL;
	{
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_0 = __this->___Stay_6;
		V_0 = L_0;
	}

IL_0007:
	{
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_1 = V_0;
		V_1 = L_1;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_2 = V_1;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF*)CastclassSealed((RuntimeObject*)L_4, OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF_il2cpp_TypeInfo_var));
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF** L_5 = (&__this->___Stay_6);
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_6 = V_2;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_7 = V_1;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_9 = V_0;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF*)L_9) == ((RuntimeObject*)(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::remove_Stay(TS.GazeInteraction.GazeInteractable/OnStay)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_remove_Stay_m18BE19D5B85D648439B3747F6561B5CEB733EB68 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* V_0 = NULL;
	OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* V_1 = NULL;
	OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* V_2 = NULL;
	{
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_0 = __this->___Stay_6;
		V_0 = L_0;
	}

IL_0007:
	{
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_1 = V_0;
		V_1 = L_1;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_2 = V_1;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF*)CastclassSealed((RuntimeObject*)L_4, OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF_il2cpp_TypeInfo_var));
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF** L_5 = (&__this->___Stay_6);
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_6 = V_2;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_7 = V_1;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_9 = V_0;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF*)L_9) == ((RuntimeObject*)(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::add_Exit(TS.GazeInteraction.GazeInteractable/OnExit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_add_Exit_m685F118DE9CD35EE826F0C1C29DA7219C802CC06 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* V_0 = NULL;
	OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* V_1 = NULL;
	OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* V_2 = NULL;
	{
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_0 = __this->___Exit_7;
		V_0 = L_0;
	}

IL_0007:
	{
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_1 = V_0;
		V_1 = L_1;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_2 = V_1;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE*)CastclassSealed((RuntimeObject*)L_4, OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE_il2cpp_TypeInfo_var));
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE** L_5 = (&__this->___Exit_7);
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_6 = V_2;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_7 = V_1;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_9 = V_0;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE*)L_9) == ((RuntimeObject*)(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::remove_Exit(TS.GazeInteraction.GazeInteractable/OnExit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_remove_Exit_m65984778C59A59BDEA70C3F934A974456B26ED49 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* V_0 = NULL;
	OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* V_1 = NULL;
	OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* V_2 = NULL;
	{
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_0 = __this->___Exit_7;
		V_0 = L_0;
	}

IL_0007:
	{
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_1 = V_0;
		V_1 = L_1;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_2 = V_1;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE*)CastclassSealed((RuntimeObject*)L_4, OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE_il2cpp_TypeInfo_var));
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE** L_5 = (&__this->___Exit_7);
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_6 = V_2;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_7 = V_1;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_9 = V_0;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE*)L_9) == ((RuntimeObject*)(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::add_Activated(TS.GazeInteraction.GazeInteractable/OnActivated)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_add_Activated_m8EB47ECDAA56F7DB146C58479F1553E521F712F3 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* V_0 = NULL;
	OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* V_1 = NULL;
	OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* V_2 = NULL;
	{
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_0 = __this->___Activated_8;
		V_0 = L_0;
	}

IL_0007:
	{
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_1 = V_0;
		V_1 = L_1;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_2 = V_1;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0*)CastclassSealed((RuntimeObject*)L_4, OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0_il2cpp_TypeInfo_var));
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0** L_5 = (&__this->___Activated_8);
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_6 = V_2;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_7 = V_1;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_9 = V_0;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0*)L_9) == ((RuntimeObject*)(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::remove_Activated(TS.GazeInteraction.GazeInteractable/OnActivated)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_remove_Activated_m7AEA8A4152F9D8E0AA50A7E9D353FF48F4B48C05 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* V_0 = NULL;
	OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* V_1 = NULL;
	OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* V_2 = NULL;
	{
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_0 = __this->___Activated_8;
		V_0 = L_0;
	}

IL_0007:
	{
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_1 = V_0;
		V_1 = L_1;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_2 = V_1;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0*)CastclassSealed((RuntimeObject*)L_4, OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0_il2cpp_TypeInfo_var));
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0** L_5 = (&__this->___Activated_8);
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_6 = V_2;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_7 = V_1;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_9 = V_0;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0*)L_9) == ((RuntimeObject*)(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean TS.GazeInteraction.GazeInteractable::get_IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeInteractable_get_IsEnabled_m0C9466B10C867D3BEADA929CD39FD770C5F3C236 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) 
{
	{
		// get { return _collider.enabled; }
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->____collider_17;
		NullCheck(L_0);
		bool L_1;
		L_1 = Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B(L_0, NULL);
		return L_1;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::set_IsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_set_IsEnabled_mC465D574393EC44400B31318D0C764BE13BAEE1B (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { _collider.enabled = value; }
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->____collider_17;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_0, L_1, NULL);
		// set { _collider.enabled = value; }
		return;
	}
}
// System.Boolean TS.GazeInteraction.GazeInteractable::get_IsActivable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeInteractable_get_IsActivable_mA496B0244E2D125983932C92265ECF4178E64435 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) 
{
	{
		// get { return _isActivable; }
		bool L_0 = __this->____isActivable_9;
		return L_0;
	}
}
// System.Boolean TS.GazeInteraction.GazeInteractable::get_IsActivated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeInteractable_get_IsActivated_mAA24799C2F0ADD578D73AE3062AA13E2F5880632 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsActivated { get; private set; }
		bool L_0 = __this->___U3CIsActivatedU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::set_IsActivated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_set_IsActivated_mA1EAF7098117352BFE0EDF4CBC67650C59777D9A (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsActivated { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsActivatedU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_Awake_mFA3FEC12AE6FC6123B515ED2E6AFC68F717CDED6 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _collider = GetComponent<Collider>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0;
		L_0 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		__this->____collider_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____collider_17), (void*)L_0);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_Start_mED72FB00D11BF406171D6CA2D58D3C79A3B06BFB (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) 
{
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_Enable_m903532D16706811089FADE2F9A41F504CC002652 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, bool ___0_enable, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(enable);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1 = ___0_enable;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_Activate_mD2439F7B8FB4F5D769BA8ECEE8CBFB0A00E11FCA (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) 
{
	OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* G_B2_0 = NULL;
	OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* G_B1_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B5_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B4_0 = NULL;
	{
		// IsActivated = true;
		GazeInteractable_set_IsActivated_mA1EAF7098117352BFE0EDF4CBC67650C59777D9A_inline(__this, (bool)1, NULL);
		// Activated?.Invoke(this);
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_0 = __this->___Activated_8;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0013;
		}
	}
	{
		goto IL_0019;
	}

IL_0013:
	{
		NullCheck(G_B2_0);
		OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_inline(G_B2_0, __this, NULL);
	}

IL_0019:
	{
		// OnGazeActivated?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = __this->___OnGazeActivated_14;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0024:
	{
		NullCheck(G_B5_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B5_0, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::GazeEnter(TS.GazeInteraction.GazeInteractor,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_GazeEnter_mE8E8AA2F8ACA4F84641D830529C2D8141A6948AF (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___0_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2B8455076CC0C4C19622AD4DCFB50D0393921A4);
		s_Il2CppMethodInitialized = true;
	}
	OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* G_B2_0 = NULL;
	OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* G_B1_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B5_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B4_0 = NULL;
	UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* G_B8_0 = NULL;
	UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* G_B7_0 = NULL;
	{
		// StopCoroutine(WAIT_TO_EXIT_COROUTINE);
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(__this, _stringLiteralD2B8455076CC0C4C19622AD4DCFB50D0393921A4, NULL);
		// Enter?.Invoke(this, interactor, point);
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_0 = __this->___Enter_5;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		goto IL_001f;
	}

IL_0017:
	{
		GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* L_2 = ___0_interactor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_point;
		NullCheck(G_B2_0);
		OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_inline(G_B2_0, __this, L_2, L_3, NULL);
	}

IL_001f:
	{
		// OnGazeEnter?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = __this->___OnGazeEnter_11;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_002b;
		}
	}
	{
		goto IL_0030;
	}

IL_002b:
	{
		NullCheck(G_B5_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B5_0, NULL);
	}

IL_0030:
	{
		// OnGazeToggle?.Invoke(true);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_6 = __this->___OnGazeToggle_15;
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_7 = L_6;
		G_B7_0 = L_7;
		if (L_7)
		{
			G_B8_0 = L_7;
			goto IL_003b;
		}
	}
	{
		return;
	}

IL_003b:
	{
		NullCheck(G_B8_0);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(G_B8_0, (bool)1, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::GazeStay(TS.GazeInteraction.GazeInteractor,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_GazeStay_mA37D7E56B454B93ADD03AB8FC22253D200894B94 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___0_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) 
{
	OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* G_B2_0 = NULL;
	OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* G_B1_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B5_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B4_0 = NULL;
	{
		// Stay?.Invoke(this, interactor, point);
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_0 = __this->___Stay_6;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0014;
	}

IL_000c:
	{
		GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* L_2 = ___0_interactor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_point;
		NullCheck(G_B2_0);
		OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_inline(G_B2_0, __this, L_2, L_3, NULL);
	}

IL_0014:
	{
		// OnGazeStay?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = __this->___OnGazeStay_12;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		NullCheck(G_B5_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B5_0, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::GazeExit(TS.GazeInteraction.GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_GazeExit_mBD5BAD2578FD581D4680993E4DD76BC759C54939 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___0_interactor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2B8455076CC0C4C19622AD4DCFB50D0393921A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(gameObject.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// StartCoroutine(WAIT_TO_EXIT_COROUTINE, interactor);
		GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* L_2 = ___0_interactor;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_mD754B72714F15210DDA429A096D853852FF437AB(__this, _stringLiteralD2B8455076CC0C4C19622AD4DCFB50D0393921A4, L_2, NULL);
		return;
	}

IL_001b:
	{
		// InvokeExit(interactor);
		GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* L_4 = ___0_interactor;
		GazeInteractable_InvokeExit_m8BC5D779C8F0F530BC606CD21821574A6F3E760E(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TS.GazeInteraction.GazeInteractable::WaitToExit_Coroutine(TS.GazeInteraction.GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GazeInteractable_WaitToExit_Coroutine_mFCF4FB565D72314858DC8A129D6A965E6244D9A0 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___0_interactor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D* L_0 = (U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D*)il2cpp_codegen_object_new(U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitToExit_CoroutineU3Ed__41__ctor_mFE5105AACC120AF952CE22A725FC85EBA486FB75(L_0, 0, NULL);
		U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D* L_2 = L_1;
		GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* L_3 = ___0_interactor;
		NullCheck(L_2);
		L_2->___interactor_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___interactor_3), (void*)L_3);
		return L_2;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::InvokeExit(TS.GazeInteraction.GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_InvokeExit_m8BC5D779C8F0F530BC606CD21821574A6F3E760E (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___0_interactor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* G_B2_0 = NULL;
	OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* G_B1_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B5_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B4_0 = NULL;
	UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* G_B8_0 = NULL;
	UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* G_B7_0 = NULL;
	{
		// Exit?.Invoke(this, interactor);
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_0 = __this->___Exit_7;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* L_2 = ___0_interactor;
		NullCheck(G_B2_0);
		OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_inline(G_B2_0, __this, L_2, NULL);
	}

IL_0013:
	{
		// OnGazeExit?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = __this->___OnGazeExit_13;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001f;
		}
	}
	{
		goto IL_0024;
	}

IL_001f:
	{
		NullCheck(G_B5_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B5_0, NULL);
	}

IL_0024:
	{
		// OnGazeToggle?.Invoke(false);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_5 = __this->___OnGazeToggle_15;
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_6 = L_5;
		G_B7_0 = L_6;
		if (L_6)
		{
			G_B8_0 = L_6;
			goto IL_0030;
		}
	}
	{
		goto IL_0036;
	}

IL_0030:
	{
		NullCheck(G_B8_0);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(G_B8_0, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
	}

IL_0036:
	{
		// IsActivated = false;
		GazeInteractable_set_IsActivated_mA1EAF7098117352BFE0EDF4CBC67650C59777D9A_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable__ctor_m7342050DC4F23D802E3530F656346F822189ADD4 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) 
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
void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_Multicast(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* currentDelegate = reinterpret_cast<OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_interactable, ___1_interactor, ___2_point, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenInst(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	typedef void (*FunctionPointerType) (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_interactable, ___1_interactor, ___2_point, method);
}
void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenStatic(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_interactable, ___1_interactor, ___2_point, method);
}
void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenStaticInvoker(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	InvokerActionInvoker3< GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, ___0_interactable, ___1_interactor, ___2_point);
}
void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_ClosedStaticInvoker(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_interactable, ___1_interactor, ___2_point);
}
void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenVirtual(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	VirtualActionInvoker2< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_interactable, ___1_interactor, ___2_point);
}
void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenInterface(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	InterfaceActionInvoker2< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_interactable, ___1_interactor, ___2_point);
}
void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenGenericVirtual(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	GenericVirtualActionInvoker2< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(method, ___0_interactable, ___1_interactor, ___2_point);
}
void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenGenericInterface(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	GenericInterfaceActionInvoker2< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(method, ___0_interactable, ___1_interactor, ___2_point);
}
// System.Void TS.GazeInteraction.GazeInteractable/OnEnter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnEnter__ctor_mB95013F6D3403917ED3049EB1C34E81C2B837105 (OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_Multicast;
}
// System.Void TS.GazeInteraction.GazeInteractable/OnEnter::Invoke(TS.GazeInteraction.GazeInteractable,TS.GazeInteraction.GazeInteractor,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3 (OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_interactable, ___1_interactor, ___2_point, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TS.GazeInteraction.GazeInteractable/OnEnter::BeginInvoke(TS.GazeInteraction.GazeInteractable,TS.GazeInteraction.GazeInteractor,UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnEnter_BeginInvoke_m6C748443CF45C3959C42018E0A36BA748BEBB3C7 (OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_interactable;
	__d_args[1] = ___1_interactor;
	__d_args[2] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___2_point);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void TS.GazeInteraction.GazeInteractable/OnEnter::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnEnter_EndInvoke_m37301AA93FFEAB7515071E5F77020A7355D25F20 (OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_Multicast(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* currentDelegate = reinterpret_cast<OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_interactable, ___1_interactor, ___2_point, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenInst(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	typedef void (*FunctionPointerType) (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_interactable, ___1_interactor, ___2_point, method);
}
void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenStatic(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_interactable, ___1_interactor, ___2_point, method);
}
void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenStaticInvoker(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	InvokerActionInvoker3< GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, ___0_interactable, ___1_interactor, ___2_point);
}
void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_ClosedStaticInvoker(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_interactable, ___1_interactor, ___2_point);
}
void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenVirtual(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	VirtualActionInvoker2< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_interactable, ___1_interactor, ___2_point);
}
void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenInterface(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	InterfaceActionInvoker2< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_interactable, ___1_interactor, ___2_point);
}
void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenGenericVirtual(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	GenericVirtualActionInvoker2< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(method, ___0_interactable, ___1_interactor, ___2_point);
}
void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenGenericInterface(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	GenericInterfaceActionInvoker2< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(method, ___0_interactable, ___1_interactor, ___2_point);
}
// System.Void TS.GazeInteraction.GazeInteractable/OnStay::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStay__ctor_mEB2494CF53465635484D6E3394237F06D33D75D8 (OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_Multicast;
}
// System.Void TS.GazeInteraction.GazeInteractable/OnStay::Invoke(TS.GazeInteraction.GazeInteractable,TS.GazeInteraction.GazeInteractor,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D (OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_interactable, ___1_interactor, ___2_point, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TS.GazeInteraction.GazeInteractable/OnStay::BeginInvoke(TS.GazeInteraction.GazeInteractable,TS.GazeInteraction.GazeInteractor,UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnStay_BeginInvoke_mEF955DA4518B24B99766A4F2D20353FE75F0DB9E (OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_interactable;
	__d_args[1] = ___1_interactor;
	__d_args[2] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___2_point);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void TS.GazeInteraction.GazeInteractable/OnStay::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStay_EndInvoke_mC1CFDD87D67C287B301B753E81D48A87636FFEC3 (OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_Multicast(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* currentDelegate = reinterpret_cast<OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_interactable, ___1_interactor, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenInst(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	typedef void (*FunctionPointerType) (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_interactable, ___1_interactor, method);
}
void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenStatic(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_interactable, ___1_interactor, method);
}
void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenStaticInvoker(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method)
{
	InvokerActionInvoker2< GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_interactable, ___1_interactor);
}
void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_ClosedStaticInvoker(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_interactable, ___1_interactor);
}
void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenVirtual(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	VirtualActionInvoker1< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_interactable, ___1_interactor);
}
void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenInterface(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	InterfaceActionInvoker1< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_interactable, ___1_interactor);
}
void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenGenericVirtual(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	GenericVirtualActionInvoker1< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* >::Invoke(method, ___0_interactable, ___1_interactor);
}
void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenGenericInterface(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	GenericInterfaceActionInvoker1< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* >::Invoke(method, ___0_interactable, ___1_interactor);
}
// System.Void TS.GazeInteraction.GazeInteractable/OnExit::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnExit__ctor_mF3647D7CC6ECBB6FA7C2F1EEBE4B0B72368550F9 (OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_Multicast;
}
// System.Void TS.GazeInteraction.GazeInteractable/OnExit::Invoke(TS.GazeInteraction.GazeInteractable,TS.GazeInteraction.GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369 (OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_interactable, ___1_interactor, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TS.GazeInteraction.GazeInteractable/OnExit::BeginInvoke(TS.GazeInteraction.GazeInteractable,TS.GazeInteraction.GazeInteractor,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnExit_BeginInvoke_m4AD2ABFB62430A40262B6BA360EB44605144250F (OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_interactable;
	__d_args[1] = ___1_interactor;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void TS.GazeInteraction.GazeInteractable/OnExit::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnExit_EndInvoke_m75A32B86E891DD5A595C015EA989323A7FA123C8 (OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_Multicast(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* currentDelegate = reinterpret_cast<OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_interactable, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenInst(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	typedef void (*FunctionPointerType) (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_interactable, method);
}
void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenStatic(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_interactable, method);
}
void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenStaticInvoker(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method)
{
	InvokerActionInvoker1< GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_interactable);
}
void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_ClosedStaticInvoker(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_interactable);
}
void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenVirtual(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_interactable);
}
void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenInterface(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_interactable);
}
void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenGenericVirtual(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	GenericVirtualActionInvoker0::Invoke(method, ___0_interactable);
}
void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenGenericInterface(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_interactable);
}
// System.Void TS.GazeInteraction.GazeInteractable/OnActivated::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnActivated__ctor_m8E5BC52038E30A07F8D5402E41BE9DDB04B33AB9 (OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_Multicast;
}
// System.Void TS.GazeInteraction.GazeInteractable/OnActivated::Invoke(TS.GazeInteraction.GazeInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0 (OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_interactable, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TS.GazeInteraction.GazeInteractable/OnActivated::BeginInvoke(TS.GazeInteraction.GazeInteractable,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnActivated_BeginInvoke_m0E97B47537CEF2DB370E7E643D079F8E9371B091 (OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_interactable;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void TS.GazeInteraction.GazeInteractable/OnActivated::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnActivated_EndInvoke_mFE48433AABD7A80F0958B9B617487D242FE50C2A (OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToExit_CoroutineU3Ed__41__ctor_mFE5105AACC120AF952CE22A725FC85EBA486FB75 (U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToExit_CoroutineU3Ed__41_System_IDisposable_Dispose_mBF95145EE8D4C052EAFD641F82C821A8FDEE816A (U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitToExit_CoroutineU3Ed__41_MoveNext_m8F265D02FC9341B07890EE7BEE935D0A9769B14B (U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(_exitDelay);
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->____exitDelay_10;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// InvokeExit(interactor);
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_7 = V_1;
		GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* L_8 = __this->___interactor_3;
		NullCheck(L_7);
		GazeInteractable_InvokeExit_m8BC5D779C8F0F530BC606CD21821574A6F3E760E(L_7, L_8, NULL);
		// }
		return (bool)0;
	}
}
// System.Object TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitToExit_CoroutineU3Ed__41_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m57B7EA448E52907D59711CEE2DD81BA11699908F (U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToExit_CoroutineU3Ed__41_System_Collections_IEnumerator_Reset_m1AAA3753E6B7334B3F3FA01CE74EAAF67D5F040E (U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitToExit_CoroutineU3Ed__41_System_Collections_IEnumerator_Reset_m1AAA3753E6B7334B3F3FA01CE74EAAF67D5F040E_RuntimeMethod_var)));
	}
}
// System.Object TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitToExit_CoroutineU3Ed__41_System_Collections_IEnumerator_get_Current_m5E67FFFEC50FF52164CEC01835908EEB9418489B (U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void TS.GazeInteraction.GazeInteractor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractor_Start_m9E4B01B3509FFD72A31013105BA553EA42D25BD9 (GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0_mE360BA236620C175DE113B3B83EA56DC4BE70D69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0_m494BDE2B52CA4ADFF325B4087CF8634EF2E60E3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral156E0AF81F8E8561B36759338BAEE264FD07A676);
		s_Il2CppMethodInitialized = true;
	}
	GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* V_0 = NULL;
	{
		// var instance = ResourcesManager.GetPrefab(ResourcesManager.FILE_PREFAB_RETICLE);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = ResourcesManager_GetPrefab_m2F4AEB9796080F97AA31F851B2762958AA0EC25B(_stringLiteral156E0AF81F8E8561B36759338BAEE264FD07A676, NULL);
		// var reticle = instance.GetComponent<GazeReticle>();
		NullCheck(L_0);
		GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* L_1;
		L_1 = GameObject_GetComponent_TisGazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0_mE360BA236620C175DE113B3B83EA56DC4BE70D69(L_0, GameObject_GetComponent_TisGazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0_mE360BA236620C175DE113B3B83EA56DC4BE70D69_RuntimeMethod_var);
		V_0 = L_1;
		// _reticle = Instantiate(reticle);
		GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* L_3;
		L_3 = Object_Instantiate_TisGazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0_m494BDE2B52CA4ADFF325B4087CF8634EF2E60E3C(L_2, Object_Instantiate_TisGazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0_m494BDE2B52CA4ADFF325B4087CF8634EF2E60E3C_RuntimeMethod_var);
		__this->____reticle_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reticle_10), (void*)L_3);
		// _reticle.SetInteractor(this);
		GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* L_4 = __this->____reticle_10;
		NullCheck(L_4);
		GazeReticle_SetInteractor_mF2DCD925F1F9E4B9A6DC4238387168ECEFFDD82E(L_4, __this, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractor_Update_mDAA001E0A0CEDF3B68056F346DD6D0A76BDD8043 (GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1_mA06A7082D6B71337A6408668B71D4E91151B1B87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// _ray = new Ray(transform.position, transform.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_4), L_1, L_3, /*hidden argument*/NULL);
		__this->____ray_8 = L_4;
		// if (Physics.Raycast(_ray, out _hit, _maxDetectionDistance, _layerMask))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_5 = __this->____ray_8;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_6 = (&__this->____hit_9);
		float L_7 = __this->____maxDetectionDistance_4;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_8 = __this->____layerMask_7;
		int32_t L_9;
		L_9 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_8, NULL);
		bool L_10;
		L_10 = Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025(L_5, L_6, L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0194;
		}
	}
	{
		// var distance = Vector3.Distance(transform.position, _hit.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_13 = (&__this->____hit_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16;
		L_16 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_12, L_15, NULL);
		// if (distance < _minDetectionDistance)
		float L_17 = __this->____minDetectionDistance_5;
		if ((!(((float)L_16) < ((float)L_17))))
		{
			goto IL_0083;
		}
	}
	{
		// _reticle.Enable(false);
		GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* L_18 = __this->____reticle_10;
		NullCheck(L_18);
		GazeReticle_Enable_mCCCDBC5776CCE29CC7ADF3A8A3209ADE570046EF(L_18, (bool)0, NULL);
		// Reset();
		GazeInteractor_Reset_m8300513E17E232E10C9080A9501FE89BA17309D7(__this, NULL);
		// return;
		return;
	}

IL_0083:
	{
		// _reticle.SetTarget(_hit);
		GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* L_19 = __this->____reticle_10;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_20 = __this->____hit_9;
		NullCheck(L_19);
		GazeReticle_SetTarget_m8EC62A7D1E4174C5737B1C7AA83DF8FBE9661C38(L_19, L_20, NULL);
		// _reticle.Enable(true);
		GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* L_21 = __this->____reticle_10;
		NullCheck(L_21);
		GazeReticle_Enable_mCCCDBC5776CCE29CC7ADF3A8A3209ADE570046EF(L_21, (bool)1, NULL);
		// var interactable = _hit.collider.transform.GetComponent<GazeInteractable>();
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_22 = (&__this->____hit_9);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_23;
		L_23 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_22, NULL);
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(L_24);
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_25;
		L_25 = Component_GetComponent_TisGazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1_mA06A7082D6B71337A6408668B71D4E91151B1B87(L_24, Component_GetComponent_TisGazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1_mA06A7082D6B71337A6408668B71D4E91151B1B87_RuntimeMethod_var);
		V_0 = L_25;
		// if(interactable == null)
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_26 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_00c6;
		}
	}
	{
		// Reset();
		GazeInteractor_Reset_m8300513E17E232E10C9080A9501FE89BA17309D7(__this, NULL);
		// return;
		return;
	}

IL_00c6:
	{
		// if (interactable != _interactable)
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_28 = V_0;
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_29 = __this->____interactable_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_28, L_29, NULL);
		if (!L_30)
		{
			goto IL_0103;
		}
	}
	{
		// Reset();
		GazeInteractor_Reset_m8300513E17E232E10C9080A9501FE89BA17309D7(__this, NULL);
		// _enterStartTime = Time.time;
		float L_31;
		L_31 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->____enterStartTime_12 = L_31;
		// _interactable = interactable;
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_32 = V_0;
		__this->____interactable_11 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interactable_11), (void*)L_32);
		// _interactable.GazeEnter(this, _hit.point);
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_33 = __this->____interactable_11;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_34 = (&__this->____hit_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_34, NULL);
		NullCheck(L_33);
		GazeInteractable_GazeEnter_mE8E8AA2F8ACA4F84641D830529C2D8141A6948AF(L_33, __this, L_35, NULL);
	}

IL_0103:
	{
		// _interactable.GazeStay(this, _hit.point);
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_36 = __this->____interactable_11;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_37 = (&__this->____hit_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_37, NULL);
		NullCheck(L_36);
		GazeInteractable_GazeStay_mA37D7E56B454B93ADD03AB8FC22253D200894B94(L_36, __this, L_38, NULL);
		// if (_interactable.IsActivable && !_interactable.IsActivated)
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_39 = __this->____interactable_11;
		NullCheck(L_39);
		bool L_40;
		L_40 = GazeInteractable_get_IsActivable_mA496B0244E2D125983932C92265ECF4178E64435_inline(L_39, NULL);
		if (!L_40)
		{
			goto IL_0193;
		}
	}
	{
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_41 = __this->____interactable_11;
		NullCheck(L_41);
		bool L_42;
		L_42 = GazeInteractable_get_IsActivated_mAA24799C2F0ADD578D73AE3062AA13E2F5880632_inline(L_41, NULL);
		if (L_42)
		{
			goto IL_0193;
		}
	}
	{
		// var timeToActivate = (_enterStartTime + _timeToActivate) - Time.time;
		float L_43 = __this->____enterStartTime_12;
		float L_44 = __this->____timeToActivate_6;
		float L_45;
		L_45 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		V_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_43, L_44)), L_45));
		// var progress = 1 - (timeToActivate / _timeToActivate);
		float L_46 = V_1;
		float L_47 = __this->____timeToActivate_6;
		V_2 = ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_46/L_47))));
		// progress = Mathf.Clamp(progress, 0, 1);
		float L_48 = V_2;
		float L_49;
		L_49 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_48, (0.0f), (1.0f), NULL);
		V_2 = L_49;
		// _reticle.SetProgress(progress);
		GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* L_50 = __this->____reticle_10;
		float L_51 = V_2;
		NullCheck(L_50);
		GazeReticle_SetProgress_m30FE62EB08375FCDAC365E8B464250DF594B2634(L_50, L_51, NULL);
		// if (progress == 1)
		float L_52 = V_2;
		if ((!(((float)L_52) == ((float)(1.0f)))))
		{
			goto IL_0193;
		}
	}
	{
		// _reticle.Enable(false);
		GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* L_53 = __this->____reticle_10;
		NullCheck(L_53);
		GazeReticle_Enable_mCCCDBC5776CCE29CC7ADF3A8A3209ADE570046EF(L_53, (bool)0, NULL);
		// _interactable.Activate();
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_54 = __this->____interactable_11;
		NullCheck(L_54);
		GazeInteractable_Activate_mD2439F7B8FB4F5D769BA8ECEE8CBFB0A00E11FCA(L_54, NULL);
	}

IL_0193:
	{
		// return;
		return;
	}

IL_0194:
	{
		// _reticle.Enable(false);
		GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* L_55 = __this->____reticle_10;
		NullCheck(L_55);
		GazeReticle_Enable_mCCCDBC5776CCE29CC7ADF3A8A3209ADE570046EF(L_55, (bool)0, NULL);
		// Reset();
		GazeInteractor_Reset_m8300513E17E232E10C9080A9501FE89BA17309D7(__this, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractor::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractor_Reset_m8300513E17E232E10C9080A9501FE89BA17309D7 (GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _reticle.SetProgress(0);
		GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* L_0 = __this->____reticle_10;
		NullCheck(L_0);
		GazeReticle_SetProgress_m30FE62EB08375FCDAC365E8B464250DF594B2634(L_0, (0.0f), NULL);
		// if(_interactable == null) { return; }
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_1 = __this->____interactable_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// if(_interactable == null) { return; }
		return;
	}

IL_001f:
	{
		// _interactable.GazeExit(this);
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_3 = __this->____interactable_11;
		NullCheck(L_3);
		GazeInteractable_GazeExit_mBD5BAD2578FD581D4680993E4DD76BC759C54939(L_3, __this, NULL);
		// _interactable = null;
		__this->____interactable_11 = (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interactable_11), (void*)(GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*)NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractor__ctor_m753237651AEEC9152DC625F3B54949333DC6D8C8 (GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float _timeToActivate = 1.0f;
		__this->____timeToActivate_6 = (1.0f);
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
// System.Void TS.GazeInteraction.GazeReticle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_Start_mEBC5FCEB1EA058D4E8507696E7329D3DF5DB8581 (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* __this, const RuntimeMethod* method) 
{
	{
		// _canvas.transform.localScale = Vector3.one * _scale;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->____canvas_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_3 = __this->____scale_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeReticle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_Update_mF984C91FC922229A875B1393D67AB345B2A9AABE (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if(_interactor == null) { return; }
		GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* L_0 = __this->____interactor_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if(_interactor == null) { return; }
		return;
	}

IL_000f:
	{
		// var distance = Vector3.Distance(_interactor.transform.position, transform.position);
		GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* L_2 = __this->____interactor_8;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7;
		L_7 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_4, L_6, NULL);
		// var scale = distance * _scale;
		float L_8 = __this->____scale_6;
		V_0 = ((float)il2cpp_codegen_multiply(L_7, L_8));
		// scale = Mathf.Clamp(scale, _scale, scale);
		float L_9 = V_0;
		float L_10 = __this->____scale_6;
		float L_11 = V_0;
		float L_12;
		L_12 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_9, L_10, L_11, NULL);
		V_0 = L_12;
		// _canvas.transform.localScale = Vector3.one * scale;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_13 = __this->____canvas_4;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		NullCheck(L_14);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_14, L_17, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeReticle::SetInteractor(TS.GazeInteraction.GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_SetInteractor_mF2DCD925F1F9E4B9A6DC4238387168ECEFFDD82E (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* __this, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___0_interactor, const RuntimeMethod* method) 
{
	{
		// _interactor = interactor;
		GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* L_0 = ___0_interactor;
		__this->____interactor_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interactor_8), (void*)L_0);
		// enabled = true;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeReticle::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_Enable_mCCCDBC5776CCE29CC7ADF3A8A3209ADE570046EF (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* __this, bool ___0_enable, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(enable);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1 = ___0_enable;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeReticle::SetTarget(UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_SetTarget_m8EC62A7D1E4174C5737B1C7AA83DF8FBE9661C38 (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_hit, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var direction = _interactor.transform.position - hit.point;
		GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* L_0 = __this->____interactor_8;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&___0_hit), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_3, NULL);
		V_0 = L_4;
		// var rotation = Quaternion.FromToRotation(Vector3.forward, direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_5, L_6, NULL);
		V_1 = L_7;
		// var position = hit.point + transform.forward * _offsetFromHit;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&___0_hit), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_9, NULL);
		float L_11 = __this->____offsetFromHit_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_12, NULL);
		V_2 = L_13;
		// transform.SetPositionAndRotation(position, rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = V_1;
		NullCheck(L_14);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_14, L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeReticle::SetProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_SetProgress_m30FE62EB08375FCDAC365E8B464250DF594B2634 (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* __this, float ___0_progress, const RuntimeMethod* method) 
{
	{
		// _imageProgress.fillAmount = progress;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->____imageProgress_5;
		float L_1 = ___0_progress;
		NullCheck(L_0);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeReticle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle__ctor_m6227CEEA57E856AEB0FDBF31DB353954D7E7940A (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float _scale = 0.0015f;
		__this->____scale_6 = (0.00150000001f);
		// [SerializeField] private float _offsetFromHit = 0.1f;
		__this->____offsetFromHit_7 = (0.100000001f);
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
// UnityEngine.GameObject TS.GazeInteraction.ResourcesManager::GetPrefab(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ResourcesManager_GetPrefab_m2F4AEB9796080F97AA31F851B2762958AA0EC25B (String_t* ___0_file, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3748EB91B2BDF019241C0FC4D8C75AD02258A8FA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Resources.Load<GameObject>(string.Format(DIRECTORY_PREFABS_FORMAT, file));
		String_t* L_0 = ___0_file;
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral3748EB91B2BDF019241C0FC4D8C75AD02258A8FA, L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A(L_1, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void TS.GazeInteraction.ResourcesManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourcesManager__ctor_m66E26D5CF0A485CF8E8F531348A4CC22337F4B72 (ResourcesManager_t66E50EDCE76784B2D12111BBD924E54373CE7CF9* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___0_index;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0019:
	{
		float L_3 = __this->___x_2;
		V_2 = L_3;
		goto IL_003f;
	}

IL_0022:
	{
		float L_4 = __this->___y_3;
		V_2 = L_4;
		goto IL_003f;
	}

IL_002b:
	{
		float L_5 = __this->___z_4;
		V_2 = L_5;
		goto IL_003f;
	}

IL_0034:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_RuntimeMethod_var)));
	}

IL_003f:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0 = ((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_LoaderManagerInstance_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_InitializationComplete; }
		bool L_0 = __this->___m_InitializationComplete_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = __this->___U3CactiveLoaderU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* ExecuteEvents_get_pointerClickHandler_m0017F9D1EAF7C02CDDB4C148C92D6685D88EA8D5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_PointerClickHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_PointerClickHandler_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GazeManager_SetUpGaze_m20F443A1C4F8101005C2AC8FFC583ADE44B512F0_inline (GazeManager_tC7FF9B1B79E5807EEBF275A2A849A84DE25B0901* __this, float ___0_timeForSelection, const RuntimeMethod* method) 
{
	{
		// this.timeForSelection = timeForSelection;
		float L_0 = ___0_timeForSelection;
		__this->___timeForSelection_8 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* ExecuteEvents_get_pointerDownHandler_mA67CE33D32540939A273DB88D6456C7FE43C13EF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_PointerDownHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_PointerDownHandler_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* ExecuteEvents_get_pointerUpHandler_m51B83B4AD7498D6F7A2CBD5F2331E91A37AE4CF2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_PointerUpHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_PointerUpHandler_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CpositionU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GazeInteractable_set_IsActivated_mA1EAF7098117352BFE0EDF4CBC67650C59777D9A_inline (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsActivated { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsActivatedU3Ek__BackingField_16 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_inline (OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_interactable, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_inline (OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_interactable, ___1_interactor, ___2_point, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_inline (OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_interactable, ___1_interactor, ___2_point, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_inline (OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_interactable, ___1_interactor, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GazeInteractable_get_IsActivable_mA496B0244E2D125983932C92265ECF4178E64435_inline (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) 
{
	{
		// get { return _isActivable; }
		bool L_0 = __this->____isActivable_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GazeInteractable_get_IsActivated_mAA24799C2F0ADD578D73AE3062AA13E2F5880632_inline (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsActivated { get; private set; }
		bool L_0 = __this->___U3CIsActivatedU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
