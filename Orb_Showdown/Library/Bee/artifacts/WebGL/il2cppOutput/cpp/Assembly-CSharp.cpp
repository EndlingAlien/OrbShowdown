#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// EnemyController[]
struct EnemyControllerU5BU5D_t5743735DA1FD023E0413A9DADCF4DF86EA642781;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// AudioPlayer
struct AudioPlayer_tB8610995483B0D47636473026A32C5916B855803;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// BodyguardEnemy
struct BodyguardEnemy_t2CB01EEB1490EF7205DC391C3CE1AA19A022F6A5;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DeathHandler
struct DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B;
// EnemyCollisionDetection
struct EnemyCollisionDetection_t1BC70DA0EF964D2A73273BB25A2DDE939B13CBE0;
// EnemyController
struct EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// PickUps
struct PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6;
// PlayerCollisionDetection
struct PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// Rockets
struct Rockets_t76F3FB82907F55BCF3B172612C762644775CFF9A;
// RotateCamera
struct RotateCamera_t53F504AA88DED82ADEEFFBDF7388D4FF3EFF133F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SpawnManager
struct SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIController
struct UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// GameManager/<ActivateIsPlaying>d__19
struct U3CActivateIsPlayingU3Ed__19_t26DD7876248C590F90E9BEC4FF9257E35D8D5879;
// GameManager/<ActivateSpawn>d__18
struct U3CActivateSpawnU3Ed__18_tDD768E9C842BE4E71348BCD9CBEB3E166A771ECB;
// GameManager/<DisplayPlayPrompt>d__16
struct U3CDisplayPlayPromptU3Ed__16_t2208EC95A468422D595505B0ECA415C73284F171;
// GameManager/<StartGame>d__17
struct U3CStartGameU3Ed__17_t3EDDEC5A47FA39399648C51E6C80C3C82D8177E9;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PickUps/<BluePotionCountdown>d__44
struct U3CBluePotionCountdownU3Ed__44_t9E00762245013CCB346B4CB5BB04A5B296140323;
// PickUps/<FireCountdown>d__46
struct U3CFireCountdownU3Ed__46_t5DB496252598DF02459B5DB66D519E0B4243C9C5;
// PickUps/<LightningCountdown>d__45
struct U3CLightningCountdownU3Ed__45_t5EFD45A868B1A55538A9C719F54F63E061E137F3;
// PickUps/<RadiationCountdown>d__43
struct U3CRadiationCountdownU3Ed__43_t776668B70ADAA9189511B0E1A88B1E117C4441EE;
// PickUps/<RedPotionCountdown>d__42
struct U3CRedPotionCountdownU3Ed__42_tF8A531693BD6D40BE0FFFB2234381B75DDE47124;
// PickUps/<RocketSpawnCoroutine>d__47
struct U3CRocketSpawnCoroutineU3Ed__47_tDD89450AC6367BA4A838B2D8F4BD93081FF139ED;
// PickUps/<StarCountdown>d__41
struct U3CStarCountdownU3Ed__41_t6158CBF29312C22A7539E28F374FA8916CD42296;
// PlayerController/<ResetTrigger>d__17
struct U3CResetTriggerU3Ed__17_t20DE2E10459ACE80F6A8663DD9496BFA6DCBFB15;
// Rockets/<SelfDestructAfterDelay>d__10
struct U3CSelfDestructAfterDelayU3Ed__10_t1F021E9748DCF49F960FBC510B7E26DDA8B794AA;
// SpawnManager/<DeleteEnemiesRoutine>d__53
struct U3CDeleteEnemiesRoutineU3Ed__53_tF205C174FEE4ED8E612A7A9A803A37C5C6D5AA97;
// SpawnManager/<UpdateRound>d__39
struct U3CUpdateRoundU3Ed__39_t2A7B0383C0335B7107070CBBB3FB128FDCD56343;
// UIController/<ChangeMenuValue>d__17
struct U3CChangeMenuValueU3Ed__17_t1DCB5A37881CA3921679B62F64D339D81F65AF05;
// UIController/<ResumeGame>d__16
struct U3CResumeGameU3Ed__16_tAF9B4A81B44C1B9E8124D6F7B65CAAF9DCBB9345;
// UIController/<WaitForAnimAndReload>d__21
struct U3CWaitForAnimAndReloadU3Ed__21_t7F5BDC0F783D890ED3EA46E3C78C75421424DFFC;

IL2CPP_EXTERN_C RuntimeClass* AudioPlayer_tB8610995483B0D47636473026A32C5916B855803_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CActivateIsPlayingU3Ed__19_t26DD7876248C590F90E9BEC4FF9257E35D8D5879_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CActivateSpawnU3Ed__18_tDD768E9C842BE4E71348BCD9CBEB3E166A771ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBluePotionCountdownU3Ed__44_t9E00762245013CCB346B4CB5BB04A5B296140323_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CChangeMenuValueU3Ed__17_t1DCB5A37881CA3921679B62F64D339D81F65AF05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDeleteEnemiesRoutineU3Ed__53_tF205C174FEE4ED8E612A7A9A803A37C5C6D5AA97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDisplayPlayPromptU3Ed__16_t2208EC95A468422D595505B0ECA415C73284F171_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFireCountdownU3Ed__46_t5DB496252598DF02459B5DB66D519E0B4243C9C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLightningCountdownU3Ed__45_t5EFD45A868B1A55538A9C719F54F63E061E137F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRadiationCountdownU3Ed__43_t776668B70ADAA9189511B0E1A88B1E117C4441EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRedPotionCountdownU3Ed__42_tF8A531693BD6D40BE0FFFB2234381B75DDE47124_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CResetTriggerU3Ed__17_t20DE2E10459ACE80F6A8663DD9496BFA6DCBFB15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CResumeGameU3Ed__16_tAF9B4A81B44C1B9E8124D6F7B65CAAF9DCBB9345_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRocketSpawnCoroutineU3Ed__47_tDD89450AC6367BA4A838B2D8F4BD93081FF139ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSelfDestructAfterDelayU3Ed__10_t1F021E9748DCF49F960FBC510B7E26DDA8B794AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStarCountdownU3Ed__41_t6158CBF29312C22A7539E28F374FA8916CD42296_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartGameU3Ed__17_t3EDDEC5A47FA39399648C51E6C80C3C82D8177E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdateRoundU3Ed__39_t2A7B0383C0335B7107070CBBB3FB128FDCD56343_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForAnimAndReloadU3Ed__21_t7F5BDC0F783D890ED3EA46E3C78C75421424DFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09A0933DB6540A74731BCA5013EB37EAC90DFF23;
IL2CPP_EXTERN_C String_t* _stringLiteral1A9C53836E6520534923D48D3D756F63096DC981;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral27C60FAA9427B448DB11F89B3DBF242D13518BBF;
IL2CPP_EXTERN_C String_t* _stringLiteral2BE29DB26B2CF6E7EB4AB83D313C8B59C6443ADA;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral33BE6E3D894D623FF7A3E2E3ACF63A2678A5F10E;
IL2CPP_EXTERN_C String_t* _stringLiteral33DD02ECC10D12861E681D3B752496F2FD2875C9;
IL2CPP_EXTERN_C String_t* _stringLiteral3C1E039C237DF540A11C9225178A491B151B3BFA;
IL2CPP_EXTERN_C String_t* _stringLiteral3C2FF485AD7B6CD6C51427A42D39DDA2B9E7B4BC;
IL2CPP_EXTERN_C String_t* _stringLiteral7189CE9E2255CE4BB0CE6A23A3A5499DD741BAEF;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral843925972CA28BE97E74F8A0726E18011A4391B5;
IL2CPP_EXTERN_C String_t* _stringLiteral8A54FE38859DF608F9CFE187432566ADE9F3F415;
IL2CPP_EXTERN_C String_t* _stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2;
IL2CPP_EXTERN_C String_t* _stringLiteral9C59C4DCE47B143E77D92BB627A542E038CD0A77;
IL2CPP_EXTERN_C String_t* _stringLiteral9C5D7A493A2CDED94D4FC81797213DF9DC84EF8D;
IL2CPP_EXTERN_C String_t* _stringLiteralB3989B163590020DC999FB654F9D035CB6830D95;
IL2CPP_EXTERN_C String_t* _stringLiteralBA0481D621FB3F8F2FF7434F93ABEBDF2F908FE8;
IL2CPP_EXTERN_C String_t* _stringLiteralC578BB9477F0A6CAFF47507A8A3BCE35B086768D;
IL2CPP_EXTERN_C String_t* _stringLiteralC5D4BCF7E80D55D1CBAEB00EBC12CCD347B1624A;
IL2CPP_EXTERN_C String_t* _stringLiteralC8762414CA43D56C3DBDB89C25574593F04C38CD;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8;
IL2CPP_EXTERN_C String_t* _stringLiteralD6FE3223698BD8EA6AA20626D83A5CA03724D24E;
IL2CPP_EXTERN_C String_t* _stringLiteralE7094430547E03C78278153540CA2EF9B26CA54C;
IL2CPP_EXTERN_C String_t* _stringLiteralF9F8B091F0021350F2D9225E0897163EC5DC28EF;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyCollisionDetection_t1BC70DA0EF964D2A73273BB25A2DDE939B13CBE0_m5C9FDA9FE859B512074D83F2B90ECC022E0004D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A_m21C089667D86A61C343003CF090C7E6D355AE728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1_m978B5068A2ED632F3075D9B38BF830A9E439A3DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRotateCamera_t53F504AA88DED82ADEEFFBDF7388D4FF3EFF133F_mE3AE5319D640FDCB2E5EBCB818FEEFD169AFFDA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisDeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B_m04580D75F057F82AB38D94F59616798DDE147ABD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6_m944CA52B730ADF61BE424836579FB4F4B2B629DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_m1DB5C5E1929C3A8C2124F9B79F1F90AA47BAD2E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisSpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_m4CB133EB15CE850B95FBEFC772E2333908B51DAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisUIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_mAC0AAC10F1B403FC3FAF0DF9338BFB3886D58D7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisEnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A_mF3854313BF9CF3291BF5D67FDA931DD508587AFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Contains_m3ABAE00CC43C9B6561CE5F94724ED2FCD962BD64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CActivateIsPlayingU3Ed__19_System_Collections_IEnumerator_Reset_m34898A6C827F9F1B05060C34FBB80A424677DF20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CActivateSpawnU3Ed__18_System_Collections_IEnumerator_Reset_m918C60C411C232E6D926F315CCF11F83B82D3C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBluePotionCountdownU3Ed__44_System_Collections_IEnumerator_Reset_m9F23BEF669C962A08B04661BF499A52975206395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CChangeMenuValueU3Ed__17_System_Collections_IEnumerator_Reset_m469B4A76A67F0E3D25FE0654653B4BC5B48F2EC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDeleteEnemiesRoutineU3Ed__53_System_Collections_IEnumerator_Reset_m3D410FDD44D0E15611483A317F6035D4065163E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDisplayPlayPromptU3Ed__16_System_Collections_IEnumerator_Reset_mEAE3CCA8D36BE440CE409FA6A1B1AD76326713F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFireCountdownU3Ed__46_System_Collections_IEnumerator_Reset_mB83D8314BE09F5D69F1170E75F71B75E1B44D2FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLightningCountdownU3Ed__45_System_Collections_IEnumerator_Reset_m9F30A8B1EB69FA009B620D5B386877B5F526C76C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRadiationCountdownU3Ed__43_System_Collections_IEnumerator_Reset_mC844392567D1FFE149A48CC794AB79608B1EBD0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRedPotionCountdownU3Ed__42_System_Collections_IEnumerator_Reset_mEAAC7A4ED938EA55233802B55CE4391FD7BE9436_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CResetTriggerU3Ed__17_System_Collections_IEnumerator_Reset_mC80747CE247359AEAC78421E951C46E057C21085_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CResumeGameU3Ed__16_System_Collections_IEnumerator_Reset_mF91725B01A3CE48788915D777E3CC87246FC22E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRocketSpawnCoroutineU3Ed__47_System_Collections_IEnumerator_Reset_m8348F5FBD19E77C1EC13DF4E729FE21DEC4D7968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSelfDestructAfterDelayU3Ed__10_System_Collections_IEnumerator_Reset_m81D5B401505847CB2E64568F86B3BAC4DBD6B06E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStarCountdownU3Ed__41_System_Collections_IEnumerator_Reset_mED6A68C69B8D9CFDF635D748DD019492612FAB8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartGameU3Ed__17_System_Collections_IEnumerator_Reset_m6F8BA3D534ADAB5A827ACC29CAE59D409FCFDB51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateRoundU3Ed__39_System_Collections_IEnumerator_Reset_m00ACF723EF7F373C72827A578CD322379F4C57FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForAnimAndReloadU3Ed__21_System_Collections_IEnumerator_Reset_mD08B91BE6B5190627C8603846EB2E83C25E25B0F_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EnemyControllerU5BU5D_t5743735DA1FD023E0413A9DADCF4DF86EA642781;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

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

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

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

// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
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

// GameManager/<ActivateIsPlaying>d__19
struct U3CActivateIsPlayingU3Ed__19_t26DD7876248C590F90E9BEC4FF9257E35D8D5879  : public RuntimeObject
{
	// System.Int32 GameManager/<ActivateIsPlaying>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<ActivateIsPlaying>d__19::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<ActivateIsPlaying>d__19::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// GameManager/<ActivateSpawn>d__18
struct U3CActivateSpawnU3Ed__18_tDD768E9C842BE4E71348BCD9CBEB3E166A771ECB  : public RuntimeObject
{
	// System.Int32 GameManager/<ActivateSpawn>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<ActivateSpawn>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<ActivateSpawn>d__18::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// GameManager/<DisplayPlayPrompt>d__16
struct U3CDisplayPlayPromptU3Ed__16_t2208EC95A468422D595505B0ECA415C73284F171  : public RuntimeObject
{
	// System.Int32 GameManager/<DisplayPlayPrompt>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<DisplayPlayPrompt>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<DisplayPlayPrompt>d__16::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// GameManager/<StartGame>d__17
struct U3CStartGameU3Ed__17_t3EDDEC5A47FA39399648C51E6C80C3C82D8177E9  : public RuntimeObject
{
	// System.Int32 GameManager/<StartGame>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<StartGame>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<StartGame>d__17::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// PickUps/<BluePotionCountdown>d__44
struct U3CBluePotionCountdownU3Ed__44_t9E00762245013CCB346B4CB5BB04A5B296140323  : public RuntimeObject
{
	// System.Int32 PickUps/<BluePotionCountdown>d__44::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PickUps/<BluePotionCountdown>d__44::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PickUps PickUps/<BluePotionCountdown>d__44::<>4__this
	PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* ___U3CU3E4__this_2;
	// System.String PickUps/<BluePotionCountdown>d__44::name
	String_t* ___name_3;
};

// PickUps/<FireCountdown>d__46
struct U3CFireCountdownU3Ed__46_t5DB496252598DF02459B5DB66D519E0B4243C9C5  : public RuntimeObject
{
	// System.Int32 PickUps/<FireCountdown>d__46::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PickUps/<FireCountdown>d__46::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PickUps PickUps/<FireCountdown>d__46::<>4__this
	PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* ___U3CU3E4__this_2;
	// System.String PickUps/<FireCountdown>d__46::name
	String_t* ___name_3;
};

// PickUps/<LightningCountdown>d__45
struct U3CLightningCountdownU3Ed__45_t5EFD45A868B1A55538A9C719F54F63E061E137F3  : public RuntimeObject
{
	// System.Int32 PickUps/<LightningCountdown>d__45::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PickUps/<LightningCountdown>d__45::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PickUps PickUps/<LightningCountdown>d__45::<>4__this
	PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* ___U3CU3E4__this_2;
	// System.String PickUps/<LightningCountdown>d__45::name
	String_t* ___name_3;
};

// PickUps/<RadiationCountdown>d__43
struct U3CRadiationCountdownU3Ed__43_t776668B70ADAA9189511B0E1A88B1E117C4441EE  : public RuntimeObject
{
	// System.Int32 PickUps/<RadiationCountdown>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PickUps/<RadiationCountdown>d__43::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PickUps PickUps/<RadiationCountdown>d__43::<>4__this
	PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* ___U3CU3E4__this_2;
	// System.String PickUps/<RadiationCountdown>d__43::name
	String_t* ___name_3;
};

// PickUps/<RedPotionCountdown>d__42
struct U3CRedPotionCountdownU3Ed__42_tF8A531693BD6D40BE0FFFB2234381B75DDE47124  : public RuntimeObject
{
	// System.Int32 PickUps/<RedPotionCountdown>d__42::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PickUps/<RedPotionCountdown>d__42::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PickUps PickUps/<RedPotionCountdown>d__42::<>4__this
	PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* ___U3CU3E4__this_2;
	// System.String PickUps/<RedPotionCountdown>d__42::name
	String_t* ___name_3;
};

// PickUps/<RocketSpawnCoroutine>d__47
struct U3CRocketSpawnCoroutineU3Ed__47_tDD89450AC6367BA4A838B2D8F4BD93081FF139ED  : public RuntimeObject
{
	// System.Int32 PickUps/<RocketSpawnCoroutine>d__47::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PickUps/<RocketSpawnCoroutine>d__47::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PickUps PickUps/<RocketSpawnCoroutine>d__47::<>4__this
	PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* ___U3CU3E4__this_2;
};

// PickUps/<StarCountdown>d__41
struct U3CStarCountdownU3Ed__41_t6158CBF29312C22A7539E28F374FA8916CD42296  : public RuntimeObject
{
	// System.Int32 PickUps/<StarCountdown>d__41::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PickUps/<StarCountdown>d__41::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PickUps PickUps/<StarCountdown>d__41::<>4__this
	PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* ___U3CU3E4__this_2;
	// System.String PickUps/<StarCountdown>d__41::name
	String_t* ___name_3;
};

// PlayerController/<ResetTrigger>d__17
struct U3CResetTriggerU3Ed__17_t20DE2E10459ACE80F6A8663DD9496BFA6DCBFB15  : public RuntimeObject
{
	// System.Int32 PlayerController/<ResetTrigger>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<ResetTrigger>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerController PlayerController/<ResetTrigger>d__17::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_2;
	// System.String PlayerController/<ResetTrigger>d__17::name
	String_t* ___name_3;
};

// Rockets/<SelfDestructAfterDelay>d__10
struct U3CSelfDestructAfterDelayU3Ed__10_t1F021E9748DCF49F960FBC510B7E26DDA8B794AA  : public RuntimeObject
{
	// System.Int32 Rockets/<SelfDestructAfterDelay>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Rockets/<SelfDestructAfterDelay>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Rockets Rockets/<SelfDestructAfterDelay>d__10::<>4__this
	Rockets_t76F3FB82907F55BCF3B172612C762644775CFF9A* ___U3CU3E4__this_2;
};

// SpawnManager/<DeleteEnemiesRoutine>d__53
struct U3CDeleteEnemiesRoutineU3Ed__53_tF205C174FEE4ED8E612A7A9A803A37C5C6D5AA97  : public RuntimeObject
{
	// System.Int32 SpawnManager/<DeleteEnemiesRoutine>d__53::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SpawnManager/<DeleteEnemiesRoutine>d__53::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SpawnManager SpawnManager/<DeleteEnemiesRoutine>d__53::<>4__this
	SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* ___U3CU3E4__this_2;
};

// SpawnManager/<UpdateRound>d__39
struct U3CUpdateRoundU3Ed__39_t2A7B0383C0335B7107070CBBB3FB128FDCD56343  : public RuntimeObject
{
	// System.Int32 SpawnManager/<UpdateRound>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SpawnManager/<UpdateRound>d__39::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SpawnManager SpawnManager/<UpdateRound>d__39::<>4__this
	SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* ___U3CU3E4__this_2;
};

// UIController/<ChangeMenuValue>d__17
struct U3CChangeMenuValueU3Ed__17_t1DCB5A37881CA3921679B62F64D339D81F65AF05  : public RuntimeObject
{
	// System.Int32 UIController/<ChangeMenuValue>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UIController/<ChangeMenuValue>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UIController UIController/<ChangeMenuValue>d__17::<>4__this
	UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* ___U3CU3E4__this_2;
};

// UIController/<ResumeGame>d__16
struct U3CResumeGameU3Ed__16_tAF9B4A81B44C1B9E8124D6F7B65CAAF9DCBB9345  : public RuntimeObject
{
	// System.Int32 UIController/<ResumeGame>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UIController/<ResumeGame>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UIController UIController/<ResumeGame>d__16::<>4__this
	UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* ___U3CU3E4__this_2;
};

// UIController/<WaitForAnimAndReload>d__21
struct U3CWaitForAnimAndReloadU3Ed__21_t7F5BDC0F783D890ED3EA46E3C78C75421424DFFC  : public RuntimeObject
{
	// System.Int32 UIController/<WaitForAnimAndReload>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UIController/<WaitForAnimAndReload>d__21::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
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

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.ParticleSystem/MinMaxGradient
struct MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 
{
	// UnityEngine.ParticleSystemGradientMode UnityEngine.ParticleSystem/MinMaxGradient::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMin
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMin_1;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMax
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMax_2;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMin
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMin_3;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMax
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMax_4;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AudioPlayer
struct AudioPlayer_tB8610995483B0D47636473026A32C5916B855803  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource AudioPlayer::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_5;
};

// BodyguardEnemy
struct BodyguardEnemy_t2CB01EEB1490EF7205DC391C3CE1AA19A022F6A5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform BodyguardEnemy::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
	// System.Single BodyguardEnemy::maxDistance
	float ___maxDistance_5;
};

// DeathHandler
struct DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.ParticleSystem DeathHandler::islandFog
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___islandFog_4;
	// SpawnManager DeathHandler::spawnManager
	SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* ___spawnManager_5;
	// UIController DeathHandler::uIController
	UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* ___uIController_6;
};

// EnemyCollisionDetection
struct EnemyCollisionDetection_t1BC70DA0EF964D2A73273BB25A2DDE939B13CBE0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EnemyCollisionDetection::pushForce
	float ___pushForce_4;
};

// EnemyController
struct EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EnemyController::moveSpeed
	float ___moveSpeed_4;
	// System.Boolean EnemyController::hasTurned
	bool ___hasTurned_5;
	// UnityEngine.Vector3 EnemyController::lookDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookDirection_6;
	// UnityEngine.Transform EnemyController::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_7;
	// UnityEngine.Rigidbody EnemyController::enemyRb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___enemyRb_8;
	// UnityEngine.Animator EnemyController::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_9;
	// UnityEngine.GameObject EnemyController::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_10;
	// PickUps EnemyController::pickUps
	PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* ___pickUps_11;
	// SpawnManager EnemyController::spawnManager
	SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* ___spawnManager_12;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator GameManager::playPrompt
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___playPrompt_4;
	// UnityEngine.GameObject GameManager::howToOverlay
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___howToOverlay_5;
	// UnityEngine.Canvas GameManager::gameCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___gameCanvas_6;
	// Rockets GameManager::rocketScript
	Rockets_t76F3FB82907F55BCF3B172612C762644775CFF9A* ___rocketScript_7;
	// System.Boolean GameManager::isPlaying
	bool ___isPlaying_8;
	// System.Boolean GameManager::canEnterGame
	bool ___canEnterGame_9;
	// UnityEngine.GameObject GameManager::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_10;
	// UnityEngine.GameObject GameManager::focalPoint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___focalPoint_11;
	// SpawnManager GameManager::spawnManager
	SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* ___spawnManager_12;
	// PickUps GameManager::pickUps
	PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* ___pickUps_13;
};

// PickUps
struct PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PickUps::rocketPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rocketPrefab_4;
	// UnityEngine.GameObject PickUps::lightningParticlePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lightningParticlePrefab_5;
	// EnemyController PickUps::enemy
	EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* ___enemy_6;
	// System.Single PickUps::redPotionForce
	float ___redPotionForce_7;
	// System.Single PickUps::radDuration
	float ___radDuration_8;
	// System.Single PickUps::starDuration
	float ___starDuration_9;
	// System.Boolean PickUps::hasPickup
	bool ___hasPickup_10;
	// System.Boolean PickUps::radActive
	bool ___radActive_11;
	// System.Single PickUps::starForce
	float ___starForce_12;
	// System.Single PickUps::oldPushForce
	float ___oldPushForce_13;
	// System.Single PickUps::oldMoveSpeed
	float ___oldMoveSpeed_14;
	// UnityEngine.Vector3 PickUps::indicatorPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___indicatorPos_15;
	// System.Single PickUps::indicatorHeight
	float ___indicatorHeight_16;
	// System.Boolean PickUps::rocketsActive
	bool ___rocketsActive_17;
	// UnityEngine.Coroutine PickUps::rocketsCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___rocketsCoroutine_18;
	// UnityEngine.GameObject PickUps::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_19;
	// PlayerCollisionDetection PickUps::playerCollision
	PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1* ___playerCollision_20;
	// PlayerController PickUps::playerController
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___playerController_21;
	// SpawnManager PickUps::spawnManager
	SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* ___spawnManager_22;
};

// PlayerCollisionDetection
struct PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlayerCollisionDetection::pushForce
	float ___pushForce_4;
	// System.Single PlayerCollisionDetection::oldPushForce
	float ___oldPushForce_5;
	// System.String PlayerCollisionDetection::pickUpName
	String_t* ___pickUpName_6;
	// PickUps PlayerCollisionDetection::pickUps
	PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* ___pickUps_7;
	// UnityEngine.Rigidbody PlayerCollisionDetection::enemyRb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___enemyRb_8;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlayerController::speed
	float ___speed_4;
	// System.Boolean PlayerController::isBlue
	bool ___isBlue_5;
	// UnityEngine.Vector3 PlayerController::oldScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oldScale_6;
	// UnityEngine.Rigidbody PlayerController::playerRB
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___playerRB_7;
	// UnityEngine.GameObject PlayerController::focalPoint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___focalPoint_8;
	// UnityEngine.Animator PlayerController::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_9;
	// DeathHandler PlayerController::death
	DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* ___death_10;
};

// Rockets
struct Rockets_t76F3FB82907F55BCF3B172612C762644775CFF9A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Rockets::moveSpeed
	float ___moveSpeed_4;
	// UnityEngine.Rigidbody Rockets::rocketRb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rocketRb_5;
	// UnityEngine.Transform Rockets::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_6;
	// PickUps Rockets::pickUps
	PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* ___pickUps_7;
};

// RotateCamera
struct RotateCamera_t53F504AA88DED82ADEEFFBDF7388D4FF3EFF133F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single RotateCamera::rotationSpeed
	float ___rotationSpeed_4;
};

// SpawnManager
struct SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SpawnManager::bodyguardPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bodyguardPrefab_4;
	// UnityEngine.GameObject SpawnManager::bossPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bossPrefab_5;
	// UnityEngine.GameObject SpawnManager::brutePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___brutePrefab_6;
	// UnityEngine.GameObject SpawnManager::henchmanPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___henchmanPrefab_7;
	// UnityEngine.GameObject SpawnManager::miniBossPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___miniBossPrefab_8;
	// UnityEngine.GameObject SpawnManager::minionPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___minionPrefab_9;
	// UnityEngine.GameObject[] SpawnManager::commonPickUps
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___commonPickUps_10;
	// UnityEngine.GameObject[] SpawnManager::uncommonPickUps
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___uncommonPickUps_11;
	// UnityEngine.GameObject[] SpawnManager::rarePickUps
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___rarePickUps_12;
	// System.Boolean SpawnManager::playerChoosingPowerup
	bool ___playerChoosingPowerup_13;
	// System.Boolean SpawnManager::playerDied
	bool ___playerDied_14;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnManager::activeEnemies
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___activeEnemies_15;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnManager::activePickup
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___activePickup_16;
	// UIController SpawnManager::uiController
	UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* ___uiController_17;
	// GameManager SpawnManager::gameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___gameManager_18;
	// PlayerController SpawnManager::playerController
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___playerController_19;
	// PickUps SpawnManager::pickups
	PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* ___pickups_20;
	// System.Int32 SpawnManager::overallRoundNum
	int32_t ___overallRoundNum_21;
	// System.Int32 SpawnManager::bruteRoundNum
	int32_t ___bruteRoundNum_22;
	// System.Int32 SpawnManager::bossRoundNum
	int32_t ___bossRoundNum_23;
	// System.Int32 SpawnManager::miniBossRoundNum
	int32_t ___miniBossRoundNum_24;
	// System.Single SpawnManager::spawnRange
	float ___spawnRange_25;
	// UnityEngine.GameObject SpawnManager::newPickUp
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___newPickUp_26;
	// System.Boolean SpawnManager::pauseTime
	bool ___pauseTime_27;
	// System.Single SpawnManager::timeSinceLastPickupSpawn
	float ___timeSinceLastPickupSpawn_28;
	// System.Int32 SpawnManager::randomNum
	int32_t ___randomNum_29;
	// System.Int32 SpawnManager::randomIndex
	int32_t ___randomIndex_30;
	// System.Collections.Generic.Queue`1<System.Int32> SpawnManager::pickupHistory
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ___pickupHistory_31;
	// System.Int32 SpawnManager::maxHistoryLength
	int32_t ___maxHistoryLength_32;
	// System.Int32 SpawnManager::previousIndex
	int32_t ___previousIndex_33;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIController
struct UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject UIController::powerupCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___powerupCanvas_4;
	// UnityEngine.GameObject UIController::powerAndPickupCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___powerAndPickupCanvas_5;
	// UnityEngine.GameObject UIController::deathCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___deathCanvas_6;
	// UnityEngine.GameObject UIController::deathOverlay
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___deathOverlay_7;
	// UnityEngine.GameObject UIController::gameCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameCanvas_8;
	// UnityEngine.Animator UIController::roundTextAnim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___roundTextAnim_9;
	// TMPro.TextMeshProUGUI UIController::roundText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___roundText_10;
	// System.Boolean UIController::playerInMenu
	bool ___playerInMenu_11;
	// System.Int32 UIController::roundNum
	int32_t ___roundNum_12;
	// SpawnManager UIController::spawnManager
	SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* ___spawnManager_13;
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

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.Queue`1<System.Int32>

// System.Collections.Generic.Queue`1<System.Int32>

// <PrivateImplementationDetails>

// <PrivateImplementationDetails>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// GameManager/<ActivateIsPlaying>d__19

// GameManager/<ActivateIsPlaying>d__19

// GameManager/<ActivateSpawn>d__18

// GameManager/<ActivateSpawn>d__18

// GameManager/<DisplayPlayPrompt>d__16

// GameManager/<DisplayPlayPrompt>d__16

// GameManager/<StartGame>d__17

// GameManager/<StartGame>d__17

// PickUps/<BluePotionCountdown>d__44

// PickUps/<BluePotionCountdown>d__44

// PickUps/<FireCountdown>d__46

// PickUps/<FireCountdown>d__46

// PickUps/<LightningCountdown>d__45

// PickUps/<LightningCountdown>d__45

// PickUps/<RadiationCountdown>d__43

// PickUps/<RadiationCountdown>d__43

// PickUps/<RedPotionCountdown>d__42

// PickUps/<RedPotionCountdown>d__42

// PickUps/<RocketSpawnCoroutine>d__47

// PickUps/<RocketSpawnCoroutine>d__47

// PickUps/<StarCountdown>d__41

// PickUps/<StarCountdown>d__41

// PlayerController/<ResetTrigger>d__17

// PlayerController/<ResetTrigger>d__17

// Rockets/<SelfDestructAfterDelay>d__10

// Rockets/<SelfDestructAfterDelay>d__10

// SpawnManager/<DeleteEnemiesRoutine>d__53

// SpawnManager/<DeleteEnemiesRoutine>d__53

// SpawnManager/<UpdateRound>d__39

// SpawnManager/<UpdateRound>d__39

// UIController/<ChangeMenuValue>d__17

// UIController/<ChangeMenuValue>d__17

// UIController/<ResumeGame>d__16

// UIController/<ResumeGame>d__16

// UIController/<WaitForAnimAndReload>d__21

// UIController/<WaitForAnimAndReload>d__21

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

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

// TMPro.MaterialReference

// TMPro.MaterialReference

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// TMPro.TMP_FontStyleStack

// TMPro.TMP_FontStyleStack

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// TMPro.TMP_Offset

// System.UInt32

// System.UInt32

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

// UnityEngine.Vector4
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

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.ParticleSystem/MainModule

// UnityEngine.ParticleSystem/MainModule

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// UnityEngine.Collision

// UnityEngine.Collision

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.Extents

// TMPro.HighlightState

// TMPro.HighlightState

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Unity.Profiling.ProfilerMarker

// Unity.Profiling.ProfilerMarker

// TMPro.VertexGradient

// TMPro.VertexGradient

// UnityEngine.ParticleSystem/MinMaxGradient

// UnityEngine.ParticleSystem/MinMaxGradient

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.SystemException

// System.SystemException

// TMPro.TMP_LineInfo

// TMPro.TMP_LineInfo

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.ParticleSystem

// UnityEngine.ParticleSystem

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// TMPro.WordWrapState

// TMPro.WordWrapState

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// UnityEngine.Animator

// UnityEngine.Animator

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

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// AudioPlayer
struct AudioPlayer_tB8610995483B0D47636473026A32C5916B855803_StaticFields
{
	// AudioPlayer AudioPlayer::Instance
	AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* ___Instance_4;
};

// AudioPlayer

// BodyguardEnemy

// BodyguardEnemy

// DeathHandler

// DeathHandler

// EnemyCollisionDetection

// EnemyCollisionDetection

// EnemyController

// EnemyController

// GameManager

// GameManager

// PickUps

// PickUps

// PlayerCollisionDetection

// PlayerCollisionDetection

// PlayerController

// PlayerController

// Rockets

// Rockets

// RotateCamera

// RotateCamera

// SpawnManager

// SpawnManager

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UIController

// UIController

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// EnemyController[]
struct EnemyControllerU5BU5D_t5743735DA1FD023E0413A9DADCF4DF86EA642781  : public RuntimeArray
{
	ALIGN_FIELD (8) EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* m_Items[1];

	inline EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
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
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Queue`1<System.Int32>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m3ABAE00CC43C9B6561CE5F94724ED2FCD962BD64_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_gshared_inline (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Int32>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void SpawnManager::PlayerDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_PlayerDeath_m64214F1FDCC1945C1903140294FF4BF159992574 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) ;
// System.Void UIController::PlayerDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_PlayerDeath_mEC2D52744924842D07394843903F159A69986FBB (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxGradient UnityEngine.ParticleSystem/MinMaxGradient::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 MinMaxGradient_op_Implicit_mAA6154D6644E72BBA49EB34DC957538EE929DE02 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startColor(UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startColor_m504911284CAC53A7C1B97B5D01BBDD2FA67D0E7A (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3 (String_t* ___0_tag, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, int32_t ___1_mode, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<PickUps>()
inline PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* Object_FindObjectOfType_TisPickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6_m944CA52B730ADF61BE424836579FB4F4B2B629DA (const RuntimeMethod* method)
{
	return ((  PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<SpawnManager>()
inline SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* Object_FindObjectOfType_TisSpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_m4CB133EB15CE850B95FBEFC772E2333908B51DAD (const RuntimeMethod* method)
{
	return ((  SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void EnemyController::ActivateAnimation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_ActivateAnimation_mF02FE47547B81D6F6855ABEB2DEBDB23EAF1E0F8 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean PickUps::get_RadActive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PickUps_get_RadActive_m6325CB917383BF874E8D15339811DC6291107CC2_inline (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) ;
// System.Void EnemyController::FindClosestEnemyOrRun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_FindClosestEnemyOrRun_mBF2C4273975D58A08CFFFD9B21F5B699A92D7B32 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) ;
// System.Void EnemyController::LookAtPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_LookAtPlayer_m634E1B7F25AD450EE78994926485A30408F50497 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) ;
// System.Void EnemyController::KillEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_KillEnemy_m18F2D627E0D61972CE169A2455BAED9459B0768C (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, const RuntimeMethod* method) ;
// System.Void SpawnManager::RemoveEnemyFromList(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_RemoveEnemyFromList_mB3EFC8A265085AD5FEAACA9BAED6F8AD4983A778 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_enemyToRemove, const RuntimeMethod* method) ;
// System.Void GameManager::SetDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetDefaults_mFB9B5C19CEC4AA879074319B29559EF1A008F470 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<PlayerController>()
inline PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<RotateCamera>()
inline RotateCamera_t53F504AA88DED82ADEEFFBDF7388D4FF3EFF133F* GameObject_GetComponent_TisRotateCamera_t53F504AA88DED82ADEEFFBDF7388D4FF3EFF133F_mE3AE5319D640FDCB2E5EBCB818FEEFD169AFFDA3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RotateCamera_t53F504AA88DED82ADEEFFBDF7388D4FF3EFF133F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::get_anyKeyDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_anyKeyDown_m9B8D98B5574A2AA63CEED98FBF0E2A1D946BCA71 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_StartGame_mB859F5583B04BDB6E22C0D4FEA4E622EB41FAFF7 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::DisplayPlayPrompt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_DisplayPlayPrompt_mF5B502A1FDAC28DF197CCDEEC89E3D5681E5B5D0 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager/<DisplayPlayPrompt>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayPlayPromptU3Ed__16__ctor_m7E549C7AAAE736679F628E864D2A611B78EC3392 (U3CDisplayPlayPromptU3Ed__16_t2208EC95A468422D595505B0ECA415C73284F171* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void GameManager/<StartGame>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameU3Ed__17__ctor_mCA2C9CBAB4C2395CAC3A3BEE8A443519D3B06087 (U3CStartGameU3Ed__17_t3EDDEC5A47FA39399648C51E6C80C3C82D8177E9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void GameManager/<ActivateSpawn>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActivateSpawnU3Ed__18__ctor_mFB9731370C5AB3058773007A50AB174524009848 (U3CActivateSpawnU3Ed__18_tDD768E9C842BE4E71348BCD9CBEB3E166A771ECB* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void GameManager/<ActivateIsPlaying>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActivateIsPlayingU3Ed__19__ctor_m8F421CCA538BA2D933C4F69CE0A3D9A5317FEE61 (U3CActivateIsPlayingU3Ed__19_t26DD7876248C590F90E9BEC4FF9257E35D8D5879* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<PlayerCollisionDetection>()
inline PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1* GameObject_GetComponent_TisPlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1_m978B5068A2ED632F3075D9B38BF830A9E439A3DF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single PlayerCollisionDetection::get_PushForce()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerCollisionDetection_get_PushForce_m44201AC23745EC82C39CA7E5BCC4D3025DFC0E04_inline (PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1* __this, const RuntimeMethod* method) ;
// System.Void PlayerCollisionDetection::set_PushForce(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerCollisionDetection_set_PushForce_mC1BF1E88F8AEEC1D713EE6A97E29382706BECCB3_inline (PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single PlayerController::get_Speed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerController_get_Speed_mCE7012C761D33FBF6703F7EF81533D6758886269_inline (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::set_Speed(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerController_set_Speed_mB072C37579ADBC4230B5363CFD32FAA43901FE5B_inline (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single PickUps::get_StarDuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PickUps_get_StarDuration_mE84C32698EC37DEAB14A5D6ED25A1B52FA665FD4_inline (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) ;
// System.Void PickUps::set_StarDuration(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PickUps_set_StarDuration_mE6B7CEC675A6B586F67B407D8DD1232D280A7EBF_inline (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single PickUps::get_RedPotionForce()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PickUps_get_RedPotionForce_m1772768ECB8FA89102B70C9B424B1F420D9200C2_inline (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) ;
// System.Void PickUps::set_RedPotionForce(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PickUps_set_RedPotionForce_mDD00C277EA7D96D349C9AA67ACFDC724405EB44B_inline (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single PickUps::get_RadDuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PickUps_get_RadDuration_m80FEB2912FBD919F0C264F9E3C74FBE7B7348D97_inline (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) ;
// System.Void PickUps::set_RadDuration(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PickUps_set_RadDuration_m1D2EEC71D96E744EC4AD78FC6EE019A93D9901F3_inline (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single Rockets::get_MoveSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rockets_get_MoveSpeed_m155EA453EBB496E26DCD6837F358728DB6EAA92B_inline (Rockets_t76F3FB82907F55BCF3B172612C762644775CFF9A* __this, const RuntimeMethod* method) ;
// System.Void Rockets::set_MoveSpeed(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Rockets_set_MoveSpeed_m4801CF710AF6AD3247196ECEB379D6AAEBD2B5DE_inline (Rockets_t76F3FB82907F55BCF3B172612C762644775CFF9A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::ActivateSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_ActivateSpawn_m8B867E0E504EDF7CAC296E75DB3BAE4B9F37D69D (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void SpawnManager::set_PlayerChoosingPowerup(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpawnManager_set_PlayerChoosingPowerup_m5971DB24BE2533A302565DEA5750DDF556437541_inline (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::ActivateIsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_ActivateIsPlaying_m6160659E22EECCA9B0E4EAE9C2B9AC719AEBBD4B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void PickUps::SetDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUps_SetDefaults_m143F7FD37B94BED3466CF2F2B8BF192DD10A679A (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PickUps::RocketSpawnCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PickUps_RocketSpawnCoroutine_m8B214A718F1E5C9A8178A40CF3BE3B5F1A55ABBF (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void SpawnManager::StartDeletingEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_StartDeletingEnemies_m2DCE193CFD97F2E290C4019FDCC4BD8B2DE4606F (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PickUps::StarCountdown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PickUps_StarCountdown_m7D81541D9698902469C53AD4D1F2CE471AA47042 (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PickUps::BluePotionCountdown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PickUps_BluePotionCountdown_mA9C840913685D32524906F64B55DD271A910105C (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PickUps::RedPotionCountdown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PickUps_RedPotionCountdown_m1DFF23CA0BA9C224197D5AFD2958B3123E50EAAA (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PickUps::RadiationCountdown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PickUps_RadiationCountdown_mEF01A51AEDA05AE0B0C9DB304163874AE3998703 (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PickUps::LightningCountdown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PickUps_LightningCountdown_m411F4600317AD24424714187D6994142FEC0C802 (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PickUps::FireCountdown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PickUps_FireCountdown_m953A5BDDB4D48BDFE673085D89972F0828C3556B (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void PickUps/<StarCountdown>d__41::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStarCountdownU3Ed__41__ctor_mDF9A7829287E2E6C005D876A1639311CBCD8F267 (U3CStarCountdownU3Ed__41_t6158CBF29312C22A7539E28F374FA8916CD42296* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void PickUps/<RedPotionCountdown>d__42::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRedPotionCountdownU3Ed__42__ctor_mE620D20F25075F66D8A49F57545E3DEFD90046A1 (U3CRedPotionCountdownU3Ed__42_tF8A531693BD6D40BE0FFFB2234381B75DDE47124* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void PickUps/<RadiationCountdown>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRadiationCountdownU3Ed__43__ctor_m37AFB73D388847C2E647BB572E936AF98F21097D (U3CRadiationCountdownU3Ed__43_t776668B70ADAA9189511B0E1A88B1E117C4441EE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void PickUps/<BluePotionCountdown>d__44::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBluePotionCountdownU3Ed__44__ctor_mF789FC2B331A20E2B46E72ED267C6DEF0DCFC9C2 (U3CBluePotionCountdownU3Ed__44_t9E00762245013CCB346B4CB5BB04A5B296140323* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void PickUps/<LightningCountdown>d__45::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLightningCountdownU3Ed__45__ctor_m587710A1FC16E2213AFE6E6C8CBA7630A9D05A76 (U3CLightningCountdownU3Ed__45_t5EFD45A868B1A55538A9C719F54F63E061E137F3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void PickUps/<FireCountdown>d__46::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireCountdownU3Ed__46__ctor_mB508622E295029240438E56FED905618C866DA37 (U3CFireCountdownU3Ed__46_t5DB496252598DF02459B5DB66D519E0B4243C9C5* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void PickUps/<RocketSpawnCoroutine>d__47::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRocketSpawnCoroutineU3Ed__47__ctor_mEB7854EBEEE6B0D49D9253EC92CA2670A6442111 (U3CRocketSpawnCoroutineU3Ed__47_tDD89450AC6367BA4A838B2D8F4BD93081FF139ED* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<EnemyController>()
inline EnemyControllerU5BU5D_t5743735DA1FD023E0413A9DADCF4DF86EA642781* Object_FindObjectsOfType_TisEnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A_mF3854313BF9CF3291BF5D67FDA931DD508587AFF (const RuntimeMethod* method)
{
	return ((  EnemyControllerU5BU5D_t5743735DA1FD023E0413A9DADCF4DF86EA642781* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void EnemyController::set_MoveSpeed(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnemyController_set_MoveSpeed_mAF1084EEBE69866A6DD6D0454277628BBB373C33_inline (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void PickUps::FindCorrectIndicator(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUps_FindCorrectIndicator_mC163D6B88C6D46344048150E6DED4EA94534E060 (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, String_t* ___0_name, bool ___1_active, const RuntimeMethod* method) ;
// System.Single PlayerCollisionDetection::get_OldPushForce()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerCollisionDetection_get_OldPushForce_m23BE1D297FD5E46E3459C1A5045A1886590B0F24_inline (PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1* __this, const RuntimeMethod* method) ;
// System.Void PickUps::StoreAndSetPushForce(System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUps_StoreAndSetPushForce_m9772940AFEDC33D2F940AB725B2EFBB71C2AAE9F (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, float ___0_oldForce, float ___1_newForce, bool ___2_changeValue, const RuntimeMethod* method) ;
// System.Void PlayerController::ActivatePickupEffect(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ActivatePickupEffect_m44D7EC7A780EA4FD0D189238715A6D776E5229A3 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, String_t* ___0_whichOne, bool ___1_activate, const RuntimeMethod* method) ;
// System.Void PickUps::CreateLightning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUps_CreateLightning_m86361C805E40B27C30419A4CC505D29D7A5F4A69 (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) ;
// System.Single EnemyController::get_MoveSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EnemyController_get_MoveSpeed_m4BE7C6B24F0E4D4755D37A549AF246B66353EC16_inline (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) ;
// System.Void PickUps::StoreAndSetMoveSpeed(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUps_StoreAndSetMoveSpeed_m1C72680DDA9F045CB47AEF57DDDCB349DEC6BB19 (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, float ___0_oldSpeed, bool ___1_changeValue, const RuntimeMethod* method) ;
// System.Boolean PickUps::get_HasPickup()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PickUps_get_HasPickup_m238E0FFF76160889729E37B98F06D0A64F4B748E_inline (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void PickUps::ActivateCorrectPickUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUps_ActivateCorrectPickUp_m1A88A118808F4E4569440E9968109334DF7DA43D (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<EnemyController>()
inline EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* GameObject_GetComponent_TisEnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A_m21C089667D86A61C343003CF090C7E6D355AE728 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void EnemyController::set_HasTurned(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnemyController_set_HasTurned_m77E5F1E08E47C7C3F2FBF87DFBBBB860BADB9F03_inline (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<DeathHandler>()
inline DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* Object_FindObjectOfType_TisDeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B_m04580D75F057F82AB38D94F59616798DDE147ABD (const RuntimeMethod* method)
{
	return ((  DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::CheckIfBlue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_CheckIfBlue_m2E0E0A6D179BCD2384BD1492A116E068B5D57D65 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Move_m68BFC8B882D42955A212B23E7D1DDD56CC87DB09 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::KillPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_KillPlayer_m9B3C9E534298B12DB1675EEC00473D9B70D6E4C3 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void DeathHandler::PlayerHasDied()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathHandler_PlayerHasDied_mD5B3C36F1CE70E867522907F5F7BF44C7F183997 (DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerController::ResetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_ResetTrigger_m9030DB1BFC87B451B746FA1AE5E2CDD0EA2E16F9 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void PlayerController/<ResetTrigger>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetTriggerU3Ed__17__ctor_m5BAF8EA05DA40C881960800ADA4FA7DDE030A2AD (U3CResetTriggerU3Ed__17_t20DE2E10459ACE80F6A8663DD9496BFA6DCBFB15* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_axis, float ___1_angle, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Rockets::SelfDestructAfterDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Rockets_SelfDestructAfterDelay_m8F8A3C568EDCD97158DEB9378748A055617FCF48 (Rockets_t76F3FB82907F55BCF3B172612C762644775CFF9A* __this, const RuntimeMethod* method) ;
// System.Void Rockets::SelfDestruct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rockets_SelfDestruct_m592D26DB76E9EB429270680856F084DA846F684D (Rockets_t76F3FB82907F55BCF3B172612C762644775CFF9A* __this, const RuntimeMethod* method) ;
// System.Void PickUps::set_RocketsActive(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PickUps_set_RocketsActive_m350FF558ED7FE515F7F2770C3067533514F1C036_inline (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Rockets/<SelfDestructAfterDelay>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelfDestructAfterDelayU3Ed__10__ctor_m4C536DACEE71807D823663230BB9A524922C0836 (U3CSelfDestructAfterDelayU3Ed__10_t1F021E9748DCF49F960FBC510B7E26DDA8B794AA* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<GameManager>()
inline GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40 (const RuntimeMethod* method)
{
	return ((  GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<UIController>()
inline UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* Object_FindObjectOfType_TisUIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_mAC0AAC10F1B403FC3FAF0DF9338BFB3886D58D7D (const RuntimeMethod* method)
{
	return ((  UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<PlayerController>()
inline PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* Object_FindObjectOfType_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_m1DB5C5E1929C3A8C2124F9B79F1F90AA47BAD2E9 (const RuntimeMethod* method)
{
	return ((  PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean GameManager::get_IsPlaying()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameManager_get_IsPlaying_m2FCB423637D8FE01E5EF3CE1FF8A3D0887750786_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::ResetPlayerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ResetPlayerPosition_mFF37C94BD042F36000650CE40C0C77702D8EBF2A (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void SpawnManager::ShowCorrectCanvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_ShowCorrectCanvas_m5182C3353EAAD6B06D80A99749A757DBE02EF447 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) ;
// System.Void SpawnManager::PickupTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_PickupTimer_mDA6C93B17307689793D1E9D4770872FE88DAFA66 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) ;
// System.Void SpawnManager::InstantiateCorrectEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_InstantiateCorrectEnemy_m08BF14585A32AA34611658CE79ECB949D3FDF301 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) ;
// System.Void SpawnManager::CheckForActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_CheckForActive_m6EC7718EE89EB4A7C8339A078C238882A507B785 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) ;
// System.Boolean UIController::get_PlayerInMenu()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UIController_get_PlayerInMenu_mC5FDF020D7A7D4DFF8D7C8AD931E885B450959EE_inline (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Void UIController::ActivateCorrectCanvas(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_ActivateCorrectCanvas_m48A9A563EC670DA362E4D0FA643096F3F92C7AFC (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, int32_t ___0_choice, bool ___1_value, const RuntimeMethod* method) ;
// System.Void SpawnManager::PickUpProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_PickUpProbability_mA27B32308ECABA2067739A3869C77455835E377A (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SpawnManager::UpdateRound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnManager_UpdateRound_m47F7D502D2127D4F7A8D5FA44B9637D7CFCE52AC (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) ;
// System.Void SpawnManager/<UpdateRound>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateRoundU3Ed__39__ctor_mE12FA52C59BCDEB29EDE02EADA70BE05ED4E1B4D (U3CUpdateRoundU3Ed__39_t2A7B0383C0335B7107070CBBB3FB128FDCD56343* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void SpawnManager::SpawnEnemyWave(System.Int32,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_SpawnEnemyWave_m6609FA4A29FE60DF9176EC8D4BE6471F1449560B (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, int32_t ___0_enemiesToSpawn, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_prefab, const RuntimeMethod* method) ;
// UnityEngine.Vector3 SpawnManager::GenerateSpawnPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SpawnManager_GenerateSpawnPos_m2C3AF7C670BBE22D7C82185225176EF11AD5933B (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T UnityEngine.GameObject::GetComponent<EnemyCollisionDetection>()
inline EnemyCollisionDetection_t1BC70DA0EF964D2A73273BB25A2DDE939B13CBE0* GameObject_GetComponent_TisEnemyCollisionDetection_t1BC70DA0EF964D2A73273BB25A2DDE939B13CBE0_m5C9FDA9FE859B512074D83F2B90ECC022E0004D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EnemyCollisionDetection_t1BC70DA0EF964D2A73273BB25A2DDE939B13CBE0* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void EnemyCollisionDetection::set_PushForce(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnemyCollisionDetection_set_PushForce_m62A1773C0E1B7E15D9E14C6BA02EE3150D329570_inline (EnemyCollisionDetection_t1BC70DA0EF964D2A73273BB25A2DDE939B13CBE0* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Void SpawnManager::SpawnPickUp(UnityEngine.GameObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_SpawnPickUp_m243AB6625FBACD2ADD8159CA7323B436621A1474 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___0_pickupList, const RuntimeMethod* method) ;
// System.Void SpawnManager::RemovePickUpFromList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_RemovePickUpFromList_m21CAAA1DE4EF038D465A0982C5F3A8605DC196D3 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) ;
// System.Void SpawnManager::AvoidRepetitiveChoice(UnityEngine.GameObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_AvoidRepetitiveChoice_m02260000134E1C6455C2567E36FE2C0E66BFB148 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___0_pickupList, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Queue`1<System.Int32>::Contains(T)
inline bool Queue_1_Contains_m3ABAE00CC43C9B6561CE5F94724ED2FCD962BD64 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, int32_t, const RuntimeMethod*))Queue_1_Contains_m3ABAE00CC43C9B6561CE5F94724ED2FCD962BD64_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Enqueue(T)
inline void Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, int32_t, const RuntimeMethod*))Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_gshared)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count()
inline int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<System.Int32>::Dequeue()
inline int32_t Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Clear()
inline void Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(T)
inline bool List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SpawnManager::DeleteEnemiesRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnManager_DeleteEnemiesRoutine_mC8C57808882F5C765F4E725B5C135A7C03B05B86 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) ;
// System.Void SpawnManager/<DeleteEnemiesRoutine>d__53::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteEnemiesRoutineU3Ed__53__ctor_m6A828107B844E213316199C2C59C8E07EFF436E4 (U3CDeleteEnemiesRoutineU3Ed__53_tF205C174FEE4ED8E612A7A9A803A37C5C6D5AA97* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor()
inline void Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_gshared)(__this, method);
}
// System.Void UIController::UpdateRoundNum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_UpdateRoundNum_mDCB5E2E267C1D64AC9EC596F6E4100EDC7C6432D (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, int32_t ___0_num, const RuntimeMethod* method) ;
// System.Void SpawnManager::ActivateBossFight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_ActivateBossFight_m91C374AD905288C8A0EC7C3E3545DDDEEFB4638A (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) ;
// System.Void SpawnManager::ActivateMiniBossFight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_ActivateMiniBossFight_m08E0E548A19D2C263F23D07DC027EED9BEA91BDD (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) ;
// System.Void SpawnManager::ActivateBruteEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_ActivateBruteEnemy_m3747D233AC589DBC149413AB4BABF9AE0161ED2F (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) ;
// System.Void SpawnManager::KillOne()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_KillOne_mB6F177F538F1BDC2BEC8DFA30671FDA49C846EE8 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) ;
// System.Void PickUps::set_HasPickup(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PickUps_set_HasPickup_mDF578A1788A76DE70CDB35A2DD3F981D8C6E11FA_inline (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UIController::ResumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIController_ResumeGame_m2E6F8A3C84ADC71489238AA03666A7DACA82ED46 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UIController::ChangeMenuValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIController_ChangeMenuValue_m5952CAFE50FA0BD2133C7D8485DD6AE5CA26D5E8 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Void UIController/<ResumeGame>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResumeGameU3Ed__16__ctor_m3C5525EB4E369BDD3B61974A41672CD635751C60 (U3CResumeGameU3Ed__16_tAF9B4A81B44C1B9E8124D6F7B65CAAF9DCBB9345* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UIController/<ChangeMenuValue>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeMenuValueU3Ed__17__ctor_mE087B212C9A930B8D6CEFCAC735D2737012C5306 (U3CChangeMenuValueU3Ed__17_t1DCB5A37881CA3921679B62F64D339D81F65AF05* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Collections.IEnumerator UIController::WaitForAnimAndReload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIController_WaitForAnimAndReload_m32D4447A0A672EF859FB5EE8429A969CEEFDF623 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Void UIController/<WaitForAnimAndReload>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForAnimAndReloadU3Ed__21__ctor_mD67BA2664949A2746A91DEA1C39F91EDED99AB30 (U3CWaitForAnimAndReloadU3Ed__21_t7F5BDC0F783D890ED3EA46E3C78C75421424DFFC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
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
// System.Void AudioPlayer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer_Awake_m615F99ABFFBBFD26A12C48C680CA5387527B1430 (AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioPlayer_tB8610995483B0D47636473026A32C5916B855803_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* L_0 = ((AudioPlayer_tB8610995483B0D47636473026A32C5916B855803_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayer_tB8610995483B0D47636473026A32C5916B855803_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Instance = this;
		((AudioPlayer_tB8610995483B0D47636473026A32C5916B855803_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayer_tB8610995483B0D47636473026A32C5916B855803_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioPlayer_tB8610995483B0D47636473026A32C5916B855803_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayer_tB8610995483B0D47636473026A32C5916B855803_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		return;
	}

IL_001f:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// }
		return;
	}
}
// System.Void AudioPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer__ctor_m3F81E1F07C97F2ECE2A837B3FB918ECBBCA14B17 (AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* __this, const RuntimeMethod* method) 
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
// System.Void DeathHandler::PlayerHasDied()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathHandler_PlayerHasDied_mD5B3C36F1CE70E867522907F5F7BF44C7F183997 (DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* __this, const RuntimeMethod* method) 
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// spawnManager.PlayerDeath();
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_0 = __this->___spawnManager_5;
		SpawnManager_PlayerDeath_m64214F1FDCC1945C1903140294FF4BF159992574(L_0, NULL);
		// uIController.PlayerDeath();
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_1 = __this->___uIController_6;
		UIController_PlayerDeath_mEC2D52744924842D07394843903F159A69986FBB(L_1, NULL);
		// var module = islandFog.main;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_2 = __this->___islandFog_4;
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_3;
		L_3 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_2, NULL);
		V_0 = L_3;
		// module.startColor = new Color(0.7169f, 0.1849f, 0, 1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_4), (0.716899991f), (0.184900001f), (0.0f), (1.0f), /*hidden argument*/NULL);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_5;
		L_5 = MinMaxGradient_op_Implicit_mAA6154D6644E72BBA49EB34DC957538EE929DE02(L_4, NULL);
		MainModule_set_startColor_m504911284CAC53A7C1B97B5D01BBDD2FA67D0E7A((&V_0), L_5, NULL);
		// }
		return;
	}
}
// System.Void DeathHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathHandler__ctor_m0F684AF4DE15E36093370421B471144DD0AD48BA (DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* __this, const RuntimeMethod* method) 
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
// System.Void BodyguardEnemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyguardEnemy_Start_mD1EC3A12D845610F856CFD902513AE91E380AC41 (BodyguardEnemy_t2CB01EEB1490EF7205DC391C3CE1AA19A022F6A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	float V_1 = 0.0f;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_2 = NULL;
	int32_t V_3 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// GameObject[] bosses = GameObject.FindGameObjectsWithTag("Boss");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2, NULL);
		V_0 = L_0;
		// if (bosses.Length > 0)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_00cb;
		}
	}
	{
		// float minDistance = Mathf.Infinity;
		V_1 = (std::numeric_limits<float>::infinity());
		// foreach (GameObject boss in bosses)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_005a;
	}

IL_001e:
	{
		// foreach (GameObject boss in bosses)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = V_2;
		int32_t L_4 = V_3;
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_4 = L_6;
		// float distance = Vector3.Distance(transform.position, boss.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12;
		L_12 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_8, L_11, NULL);
		V_5 = L_12;
		// if (distance < minDistance)
		float L_13 = V_5;
		float L_14 = V_1;
		if ((!(((float)L_13) < ((float)L_14))))
		{
			goto IL_0056;
		}
	}
	{
		// minDistance = distance;
		float L_15 = V_5;
		V_1 = L_15;
		// target = boss.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		__this->___target_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_4), (void*)L_17);
	}

IL_0056:
	{
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_005a:
	{
		// foreach (GameObject boss in bosses)
		int32_t L_19 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = V_2;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		// if (target != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		// Vector3 offset = transform.position - target.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_24, L_26, NULL);
		V_6 = L_27;
		// float currentDistance = offset.magnitude;
		float L_28;
		L_28 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_6), NULL);
		// if (currentDistance > maxDistance)
		float L_29 = __this->___maxDistance_5;
		if ((!(((float)L_28) > ((float)L_29))))
		{
			goto IL_00cb;
		}
	}
	{
		// Vector3 direction = offset.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_6), NULL);
		V_7 = L_30;
		// transform.position = target.position + direction * maxDistance;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_7;
		float L_35 = __this->___maxDistance_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_34, L_35, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_33, L_36, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_31, L_37, NULL);
	}

IL_00cb:
	{
		// }
		return;
	}
}
// System.Void BodyguardEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyguardEnemy__ctor_m07986449D50EC208FB35D4360C71DBB018608D03 (BodyguardEnemy_t2CB01EEB1490EF7205DC391C3CE1AA19A022F6A5* __this, const RuntimeMethod* method) 
{
	{
		// float maxDistance = 4;
		__this->___maxDistance_5 = (4.0f);
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
// System.Single EnemyCollisionDetection::get_PushForce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnemyCollisionDetection_get_PushForce_m4753E6421624E7CB39B356DB5703DCE242F7E722 (EnemyCollisionDetection_t1BC70DA0EF964D2A73273BB25A2DDE939B13CBE0* __this, const RuntimeMethod* method) 
{
	{
		// public float PushForce { get { return pushForce; } set { pushForce = value; } }
		float L_0 = __this->___pushForce_4;
		return L_0;
	}
}
// System.Void EnemyCollisionDetection::set_PushForce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCollisionDetection_set_PushForce_m62A1773C0E1B7E15D9E14C6BA02EE3150D329570 (EnemyCollisionDetection_t1BC70DA0EF964D2A73273BB25A2DDE939B13CBE0* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float PushForce { get { return pushForce; } set { pushForce = value; } }
		float L_0 = ___0_value;
		__this->___pushForce_4 = L_0;
		// public float PushForce { get { return pushForce; } set { pushForce = value; } }
		return;
	}
}
// System.Void EnemyCollisionDetection::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCollisionDetection_OnCollisionEnter_mAACCB4CA7A7CBDABDA0C3CE523A45EDE809AA038 (EnemyCollisionDetection_t1BC70DA0EF964D2A73273BB25A2DDE939B13CBE0* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (collision.gameObject.CompareTag("Player"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		// Rigidbody enemyRb = collision.gameObject.GetComponent<Rigidbody>();
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_3 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_3, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5;
		L_5 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_4, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		// Vector3 playerPushForce = collision.gameObject.transform.position - transform.position;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_6 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_9, L_11, NULL);
		V_0 = L_12;
		// enemyRb.AddForce(playerPushForce * pushForce, ForceMode.Impulse);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14 = __this->___pushForce_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, L_14, NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_5, L_15, 1, NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void EnemyCollisionDetection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCollisionDetection__ctor_mD4B1F70332088EAEBA15834EC83356FADE6C19B8 (EnemyCollisionDetection_t1BC70DA0EF964D2A73273BB25A2DDE939B13CBE0* __this, const RuntimeMethod* method) 
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
// System.Single EnemyController::get_MoveSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnemyController_get_MoveSpeed_m4BE7C6B24F0E4D4755D37A549AF246B66353EC16 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveSpeed { get { return moveSpeed; } set { moveSpeed = value; } }
		float L_0 = __this->___moveSpeed_4;
		return L_0;
	}
}
// System.Void EnemyController::set_MoveSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_set_MoveSpeed_mAF1084EEBE69866A6DD6D0454277628BBB373C33 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MoveSpeed { get { return moveSpeed; } set { moveSpeed = value; } }
		float L_0 = ___0_value;
		__this->___moveSpeed_4 = L_0;
		// public float MoveSpeed { get { return moveSpeed; } set { moveSpeed = value; } }
		return;
	}
}
// System.Void EnemyController::set_HasTurned(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_set_HasTurned_m77E5F1E08E47C7C3F2FBF87DFBBBB860BADB9F03 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool HasTurned { set { hasTurned = value; } }
		bool L_0 = ___0_value;
		__this->___hasTurned_5 = L_0;
		// public bool HasTurned { set { hasTurned = value; } }
		return;
	}
}
// System.Void EnemyController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Start_mD47FA99710AFEDA91637E73B4109FC0125032604 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6_m944CA52B730ADF61BE424836579FB4F4B2B629DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_m4CB133EB15CE850B95FBEFC772E2333908B51DAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemyRb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___enemyRb_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyRb_8), (void*)L_0);
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_9), (void*)L_1);
		// player = GameObject.Find("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___player_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_10), (void*)L_2);
		// pickUps = FindObjectOfType<PickUps>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_3;
		L_3 = Object_FindObjectOfType_TisPickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6_m944CA52B730ADF61BE424836579FB4F4B2B629DA(Object_FindObjectOfType_TisPickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6_m944CA52B730ADF61BE424836579FB4F4B2B629DA_RuntimeMethod_var);
		__this->___pickUps_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pickUps_11), (void*)L_3);
		// spawnManager = FindObjectOfType<SpawnManager>();
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_4;
		L_4 = Object_FindObjectOfType_TisSpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_m4CB133EB15CE850B95FBEFC772E2333908B51DAD(Object_FindObjectOfType_TisSpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_m4CB133EB15CE850B95FBEFC772E2333908B51DAD_RuntimeMethod_var);
		__this->___spawnManager_12 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnManager_12), (void*)L_4);
		// }
		return;
	}
}
// System.Void EnemyController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Update_mD4EAAD97042453D8F3F5D623882F24366451F7ED (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
{
	{
		// ActivateAnimation(hasTurned);
		bool L_0 = __this->___hasTurned_5;
		EnemyController_ActivateAnimation_mF02FE47547B81D6F6855ABEB2DEBDB23EAF1E0F8(__this, L_0, NULL);
		// if (hasTurned && pickUps.RadActive)
		bool L_1 = __this->___hasTurned_5;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_2 = __this->___pickUps_11;
		bool L_3;
		L_3 = PickUps_get_RadActive_m6325CB917383BF874E8D15339811DC6291107CC2_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// FindClosestEnemyOrRun();
		EnemyController_FindClosestEnemyOrRun_mBF2C4273975D58A08CFFFD9B21F5B699A92D7B32(__this, NULL);
		goto IL_0036;
	}

IL_0029:
	{
		// hasTurned = false;
		__this->___hasTurned_5 = (bool)0;
		// LookAtPlayer();
		EnemyController_LookAtPlayer_m634E1B7F25AD450EE78994926485A30408F50497(__this, NULL);
	}

IL_0036:
	{
		// KillEnemy();
		EnemyController_KillEnemy_m18F2D627E0D61972CE169A2455BAED9459B0768C(__this, NULL);
		// }
		return;
	}
}
// System.Void EnemyController::ActivateAnimation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_ActivateAnimation_mF02FE47547B81D6F6855ABEB2DEBDB23EAF1E0F8 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BE29DB26B2CF6E7EB4AB83D313C8B59C6443ADA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A54FE38859DF608F9CFE187432566ADE9F3F415);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (animator == null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (!pickUps.RadActive)
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_2 = __this->___pickUps_11;
		bool L_3;
		L_3 = PickUps_get_RadActive_m6325CB917383BF874E8D15339811DC6291107CC2_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_003e;
		}
	}
	{
		// animator.SetBool("hasTurned", value);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___animator_9;
		bool L_5 = ___0_value;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, _stringLiteral8A54FE38859DF608F9CFE187432566ADE9F3F415, L_5, NULL);
		// gameObject.tag = "Enemy";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_6, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		return;
	}

IL_003e:
	{
		// else if (pickUps.RadActive && hasTurned)
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_7 = __this->___pickUps_11;
		bool L_8;
		L_8 = PickUps_get_RadActive_m6325CB917383BF874E8D15339811DC6291107CC2_inline(L_7, NULL);
		if (!L_8)
		{
			goto IL_0074;
		}
	}
	{
		bool L_9 = __this->___hasTurned_5;
		if (!L_9)
		{
			goto IL_0074;
		}
	}
	{
		// animator.SetBool("hasTurned", value);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___animator_9;
		bool L_11 = ___0_value;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_10, _stringLiteral8A54FE38859DF608F9CFE187432566ADE9F3F415, L_11, NULL);
		// gameObject.tag = "TurnedEnemy";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_12, _stringLiteral2BE29DB26B2CF6E7EB4AB83D313C8B59C6443ADA, NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void EnemyController::FindClosestEnemyOrRun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_FindClosestEnemyOrRun_mBF2C4273975D58A08CFFFD9B21F5B699A92D7B32 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7189CE9E2255CE4BB0CE6A23A3A5499DD741BAEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_1 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_2 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_3 = NULL;
	float V_4 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_5 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_6 = NULL;
	int32_t V_7 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_8 = NULL;
	float V_9 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		// GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		V_0 = L_0;
		// GameObject[] bosses = GameObject.FindGameObjectsWithTag("Boss");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2, NULL);
		V_1 = L_1;
		// GameObject[] miniBoss = GameObject.FindGameObjectsWithTag("MiniBoss");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2;
		L_2 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral7189CE9E2255CE4BB0CE6A23A3A5499DD741BAEF, NULL);
		V_2 = L_2;
		// GameObject[] allEnemies = new GameObject[enemies.Length + bosses.Length + miniBoss.Length];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_3)->max_length)), ((int32_t)(((RuntimeArray*)L_4)->max_length)))), ((int32_t)(((RuntimeArray*)L_5)->max_length)))));
		V_3 = L_6;
		// enemies.CopyTo(allEnemies, 0);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = V_3;
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
		// bosses.CopyTo(allEnemies, enemies.Length);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = V_0;
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_9, (RuntimeArray*)L_10, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		// miniBoss.CopyTo(allEnemies, enemies.Length + bosses.Length);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = V_1;
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_12, (RuntimeArray*)L_13, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_14)->max_length)), ((int32_t)(((RuntimeArray*)L_15)->max_length)))), NULL);
		// if (allEnemies.Length >= 1)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = V_3;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))) < ((int32_t)1)))
		{
			goto IL_0110;
		}
	}
	{
		// float maxDistance = Mathf.Infinity;
		V_4 = (std::numeric_limits<float>::infinity());
		// Transform closestTarget = null;
		V_5 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		// foreach (GameObject enemy in allEnemies)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = V_3;
		V_6 = L_17;
		V_7 = 0;
		goto IL_00ab;
	}

IL_006d:
	{
		// foreach (GameObject enemy in allEnemies)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = V_6;
		int32_t L_19 = V_7;
		int32_t L_20 = L_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		V_8 = L_21;
		// float targetDistance = Vector3.Distance(transform.position, enemy.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		float L_27;
		L_27 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_23, L_26, NULL);
		V_9 = L_27;
		// if (targetDistance < maxDistance)
		float L_28 = V_9;
		float L_29 = V_4;
		if ((!(((float)L_28) < ((float)L_29))))
		{
			goto IL_00a5;
		}
	}
	{
		// closestTarget = enemy.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = V_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		V_5 = L_31;
		// maxDistance = targetDistance;
		float L_32 = V_9;
		V_4 = L_32;
	}

IL_00a5:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00ab:
	{
		// foreach (GameObject enemy in allEnemies)
		int32_t L_34 = V_7;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_006d;
		}
	}
	{
		// if (closestTarget != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_36, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_37)
		{
			goto IL_0141;
		}
	}
	{
		// target = closestTarget;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38 = V_5;
		__this->___target_7 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_7), (void*)L_38);
		// lookDirection = (target.position - transform.position).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = __this->___target_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_40, L_42, NULL);
		V_10 = L_43;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_10), NULL);
		__this->___lookDirection_6 = L_44;
		// enemyRb.AddForce(lookDirection * moveSpeed, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_45 = __this->___enemyRb_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = __this->___lookDirection_6;
		float L_47 = __this->___moveSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_46, L_47, NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_45, L_48, 1, NULL);
		return;
	}

IL_0110:
	{
		// lookDirection = new Vector3(15, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_49), (15.0f), (0.0f), /*hidden argument*/NULL);
		__this->___lookDirection_6 = L_49;
		// enemyRb.AddForce(lookDirection * moveSpeed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_50 = __this->___enemyRb_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = __this->___lookDirection_6;
		float L_52 = __this->___moveSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_51, L_52, NULL);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_50, L_53, NULL);
	}

IL_0141:
	{
		// }
		return;
	}
}
// System.Void EnemyController::LookAtPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_LookAtPlayer_m634E1B7F25AD450EE78994926485A30408F50497 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// target = player.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___target_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_7), (void*)L_1);
		// lookDirection = (target.position - transform.position).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___target_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_5, NULL);
		V_0 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		__this->___lookDirection_6 = L_7;
		// enemyRb.AddForce(lookDirection * moveSpeed, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = __this->___enemyRb_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___lookDirection_6;
		float L_10 = __this->___moveSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_8, L_11, 1, NULL);
		// }
		return;
	}
}
// System.Void EnemyController::KillEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_KillEnemy_m18F2D627E0D61972CE169A2455BAED9459B0768C (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transform.position.y < -10)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		if ((!(((float)L_2) < ((float)(-10.0f)))))
		{
			goto IL_0033;
		}
	}
	{
		// spawnManager.RemoveEnemyFromList(gameObject);
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_3 = __this->___spawnManager_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		SpawnManager_RemoveEnemyFromList_mB3EFC8A265085AD5FEAACA9BAED6F8AD4983A778(L_3, L_4, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void EnemyController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController__ctor_m984FF7EBF9BF2923A09FA943862B8941E9FFECCD (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
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
// System.Boolean GameManager::get_IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_get_IsPlaying_m2FCB423637D8FE01E5EF3CE1FF8A3D0887750786 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPlaying { get { return isPlaying; } }
		bool L_0 = __this->___isPlaying_8;
		return L_0;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6_m944CA52B730ADF61BE424836579FB4F4B2B629DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_m4CB133EB15CE850B95FBEFC772E2333908B51DAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3989B163590020DC999FB654F9D035CB6830D95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.Find("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___player_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_10), (void*)L_0);
		// focalPoint = GameObject.Find("Focal Point");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralB3989B163590020DC999FB654F9D035CB6830D95, NULL);
		__this->___focalPoint_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___focalPoint_11), (void*)L_1);
		// spawnManager = FindObjectOfType<SpawnManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_2;
		L_2 = Object_FindObjectOfType_TisSpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_m4CB133EB15CE850B95FBEFC772E2333908B51DAD(Object_FindObjectOfType_TisSpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_m4CB133EB15CE850B95FBEFC772E2333908B51DAD_RuntimeMethod_var);
		__this->___spawnManager_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnManager_12), (void*)L_2);
		// pickUps = FindObjectOfType<PickUps>();
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_3;
		L_3 = Object_FindObjectOfType_TisPickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6_m944CA52B730ADF61BE424836579FB4F4B2B629DA(Object_FindObjectOfType_TisPickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6_m944CA52B730ADF61BE424836579FB4F4B2B629DA_RuntimeMethod_var);
		__this->___pickUps_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pickUps_13), (void*)L_3);
		// SetDefaults();
		GameManager_SetDefaults_mFB9B5C19CEC4AA879074319B29559EF1A008F470(__this, NULL);
		// }
		return;
	}
}
// System.Void GameManager::SetDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetDefaults_mFB9B5C19CEC4AA879074319B29559EF1A008F470 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRotateCamera_t53F504AA88DED82ADEEFFBDF7388D4FF3EFF133F_mE3AE5319D640FDCB2E5EBCB818FEEFD169AFFDA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player.GetComponent<PlayerController>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_10;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1;
		L_1 = GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A(L_0, GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// player.GetComponent<MeshRenderer>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___player_10;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_3;
		L_3 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_2, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)0, NULL);
		// focalPoint.GetComponent<RotateCamera>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___focalPoint_11;
		RotateCamera_t53F504AA88DED82ADEEFFBDF7388D4FF3EFF133F* L_5;
		L_5 = GameObject_GetComponent_TisRotateCamera_t53F504AA88DED82ADEEFFBDF7388D4FF3EFF133F_mE3AE5319D640FDCB2E5EBCB818FEEFD169AFFDA3(L_4, GameObject_GetComponent_TisRotateCamera_t53F504AA88DED82ADEEFFBDF7388D4FF3EFF133F_mE3AE5319D640FDCB2E5EBCB818FEEFD169AFFDA3_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
		// canEnterGame = false;
		__this->___canEnterGame_9 = (bool)0;
		// isPlaying = false;
		__this->___isPlaying_8 = (bool)0;
		// gameCanvas.enabled = false;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_6 = __this->___gameCanvas_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// if (canEnterGame)
		bool L_0 = __this->___canEnterGame_9;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// if (Input.anyKeyDown)
		bool L_1;
		L_1 = Input_get_anyKeyDown_m9B8D98B5574A2AA63CEED98FBF0E2A1D946BCA71(NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// StartCoroutine(StartGame());
		RuntimeObject* L_2;
		L_2 = GameManager_StartGame_mB859F5583B04BDB6E22C0D4FEA4E622EB41FAFF7(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void GameManager::PressedPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_PressedPlay_m945D916630BFC9BCC535097E272939B10DE5B14C (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(DisplayPlayPrompt());
		RuntimeObject* L_0;
		L_0 = GameManager_DisplayPlayPrompt_mF5B502A1FDAC28DF197CCDEEC89E3D5681E5B5D0(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::DisplayPlayPrompt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_DisplayPlayPrompt_mF5B502A1FDAC28DF197CCDEEC89E3D5681E5B5D0 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDisplayPlayPromptU3Ed__16_t2208EC95A468422D595505B0ECA415C73284F171_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDisplayPlayPromptU3Ed__16_t2208EC95A468422D595505B0ECA415C73284F171* L_0 = (U3CDisplayPlayPromptU3Ed__16_t2208EC95A468422D595505B0ECA415C73284F171*)il2cpp_codegen_object_new(U3CDisplayPlayPromptU3Ed__16_t2208EC95A468422D595505B0ECA415C73284F171_il2cpp_TypeInfo_var);
		U3CDisplayPlayPromptU3Ed__16__ctor_m7E549C7AAAE736679F628E864D2A611B78EC3392(L_0, 0, NULL);
		U3CDisplayPlayPromptU3Ed__16_t2208EC95A468422D595505B0ECA415C73284F171* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GameManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_StartGame_mB859F5583B04BDB6E22C0D4FEA4E622EB41FAFF7 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartGameU3Ed__17_t3EDDEC5A47FA39399648C51E6C80C3C82D8177E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartGameU3Ed__17_t3EDDEC5A47FA39399648C51E6C80C3C82D8177E9* L_0 = (U3CStartGameU3Ed__17_t3EDDEC5A47FA39399648C51E6C80C3C82D8177E9*)il2cpp_codegen_object_new(U3CStartGameU3Ed__17_t3EDDEC5A47FA39399648C51E6C80C3C82D8177E9_il2cpp_TypeInfo_var);
		U3CStartGameU3Ed__17__ctor_mCA2C9CBAB4C2395CAC3A3BEE8A443519D3B06087(L_0, 0, NULL);
		U3CStartGameU3Ed__17_t3EDDEC5A47FA39399648C51E6C80C3C82D8177E9* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GameManager::ActivateSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_ActivateSpawn_m8B867E0E504EDF7CAC296E75DB3BAE4B9F37D69D (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CActivateSpawnU3Ed__18_tDD768E9C842BE4E71348BCD9CBEB3E166A771ECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CActivateSpawnU3Ed__18_tDD768E9C842BE4E71348BCD9CBEB3E166A771ECB* L_0 = (U3CActivateSpawnU3Ed__18_tDD768E9C842BE4E71348BCD9CBEB3E166A771ECB*)il2cpp_codegen_object_new(U3CActivateSpawnU3Ed__18_tDD768E9C842BE4E71348BCD9CBEB3E166A771ECB_il2cpp_TypeInfo_var);
		U3CActivateSpawnU3Ed__18__ctor_mFB9731370C5AB3058773007A50AB174524009848(L_0, 0, NULL);
		U3CActivateSpawnU3Ed__18_tDD768E9C842BE4E71348BCD9CBEB3E166A771ECB* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GameManager::ActivateIsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_ActivateIsPlaying_m6160659E22EECCA9B0E4EAE9C2B9AC719AEBBD4B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CActivateIsPlayingU3Ed__19_t26DD7876248C590F90E9BEC4FF9257E35D8D5879_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CActivateIsPlayingU3Ed__19_t26DD7876248C590F90E9BEC4FF9257E35D8D5879* L_0 = (U3CActivateIsPlayingU3Ed__19_t26DD7876248C590F90E9BEC4FF9257E35D8D5879*)il2cpp_codegen_object_new(U3CActivateIsPlayingU3Ed__19_t26DD7876248C590F90E9BEC4FF9257E35D8D5879_il2cpp_TypeInfo_var);
		U3CActivateIsPlayingU3Ed__19__ctor_m8F421CCA538BA2D933C4F69CE0A3D9A5317FEE61(L_0, 0, NULL);
		U3CActivateIsPlayingU3Ed__19_t26DD7876248C590F90E9BEC4FF9257E35D8D5879* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameManager::PlayerStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_PlayerStrength_mB9B3BB661D22D263AD7E8D2706A431D456A9522A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1_m978B5068A2ED632F3075D9B38BF830A9E439A3DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player.GetComponent<PlayerCollisionDetection>().PushForce += 0.5f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_10;
		PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1* L_1;
		L_1 = GameObject_GetComponent_TisPlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1_m978B5068A2ED632F3075D9B38BF830A9E439A3DF(L_0, GameObject_GetComponent_TisPlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1_m978B5068A2ED632F3075D9B38BF830A9E439A3DF_RuntimeMethod_var);
		PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1* L_2 = L_1;
		float L_3;
		L_3 = PlayerCollisionDetection_get_PushForce_m44201AC23745EC82C39CA7E5BCC4D3025DFC0E04_inline(L_2, NULL);
		PlayerCollisionDetection_set_PushForce_mC1BF1E88F8AEEC1D713EE6A97E29382706BECCB3_inline(L_2, ((float)il2cpp_codegen_add(L_3, (0.5f))), NULL);
		// }
		return;
	}
}
// System.Void GameManager::PlayerSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_PlayerSpeed_m683D3A3C2707DDA8575192117F7CEBEC8C7C0294 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player.GetComponent<PlayerController>().Speed += 0.5f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_10;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1;
		L_1 = GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A(L_0, GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_2 = L_1;
		float L_3;
		L_3 = PlayerController_get_Speed_mCE7012C761D33FBF6703F7EF81533D6758886269_inline(L_2, NULL);
		PlayerController_set_Speed_mB072C37579ADBC4230B5363CFD32FAA43901FE5B_inline(L_2, ((float)il2cpp_codegen_add(L_3, (0.5f))), NULL);
		// }
		return;
	}
}
// System.Void GameManager::StarPickup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StarPickup_m41A149E8F9E1B1FB7BF61D04C9C25BC69308EAC0 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// pickUps.StarDuration += 1f;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_0 = __this->___pickUps_13;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_1 = L_0;
		float L_2;
		L_2 = PickUps_get_StarDuration_mE84C32698EC37DEAB14A5D6ED25A1B52FA665FD4_inline(L_1, NULL);
		PickUps_set_StarDuration_mE6B7CEC675A6B586F67B407D8DD1232D280A7EBF_inline(L_1, ((float)il2cpp_codegen_add(L_2, (1.0f))), NULL);
		// }
		return;
	}
}
// System.Void GameManager::RedPotionPickup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RedPotionPickup_m14CD9C73578F935EDEAAB157A3EA86B140CAF384 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// pickUps.RedPotionForce += .5f;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_0 = __this->___pickUps_13;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_1 = L_0;
		float L_2;
		L_2 = PickUps_get_RedPotionForce_m1772768ECB8FA89102B70C9B424B1F420D9200C2_inline(L_1, NULL);
		PickUps_set_RedPotionForce_mDD00C277EA7D96D349C9AA67ACFDC724405EB44B_inline(L_1, ((float)il2cpp_codegen_add(L_2, (0.5f))), NULL);
		// }
		return;
	}
}
// System.Void GameManager::RadiationPickup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RadiationPickup_m12E29FA9E62B5E9185140F17BD68A70CA0F26C24 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// pickUps.RadDuration += 1f;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_0 = __this->___pickUps_13;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_1 = L_0;
		float L_2;
		L_2 = PickUps_get_RadDuration_m80FEB2912FBD919F0C264F9E3C74FBE7B7348D97_inline(L_1, NULL);
		PickUps_set_RadDuration_m1D2EEC71D96E744EC4AD78FC6EE019A93D9901F3_inline(L_1, ((float)il2cpp_codegen_add(L_2, (1.0f))), NULL);
		// }
		return;
	}
}
// System.Void GameManager::RocketPickup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RocketPickup_m564AA1F2D4E26DD19678462A6072B6CB787AE80B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// rocketScript.MoveSpeed += 2;
		Rockets_t76F3FB82907F55BCF3B172612C762644775CFF9A* L_0 = __this->___rocketScript_7;
		Rockets_t76F3FB82907F55BCF3B172612C762644775CFF9A* L_1 = L_0;
		float L_2;
		L_2 = Rockets_get_MoveSpeed_m155EA453EBB496E26DCD6837F358728DB6EAA92B_inline(L_1, NULL);
		Rockets_set_MoveSpeed_m4801CF710AF6AD3247196ECEB379D6AAEBD2B5DE_inline(L_1, ((float)il2cpp_codegen_add(L_2, (2.0f))), NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
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
// System.Void GameManager/<DisplayPlayPrompt>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayPlayPromptU3Ed__16__ctor_m7E549C7AAAE736679F628E864D2A611B78EC3392 (U3CDisplayPlayPromptU3Ed__16_t2208EC95A468422D595505B0ECA415C73284F171* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<DisplayPlayPrompt>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayPlayPromptU3Ed__16_System_IDisposable_Dispose_mF92DA058F85BA64B606EDD9C0925843FC28B0C8F (U3CDisplayPlayPromptU3Ed__16_t2208EC95A468422D595505B0ECA415C73284F171* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<DisplayPlayPrompt>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDisplayPlayPromptU3Ed__16_MoveNext_mF79227DD30E356CEE6813A3A1D657228830A4512 (U3CDisplayPlayPromptU3Ed__16_t2208EC95A468422D595505B0ECA415C73284F171* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6FE3223698BD8EA6AA20626D83A5CA03724D24E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0047;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// playPrompt.SetTrigger("canPlay");
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___playPrompt_4;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_5, _stringLiteralD6FE3223698BD8EA6AA20626D83A5CA03724D24E, NULL);
		// yield return new WaitForSeconds(4);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (4.0f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0047:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// canEnterGame = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = V_1;
		L_7->___canEnterGame_9 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<DisplayPlayPrompt>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisplayPlayPromptU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m59124521B88C1D142F75F782A26E8C59CCB49E1F (U3CDisplayPlayPromptU3Ed__16_t2208EC95A468422D595505B0ECA415C73284F171* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<DisplayPlayPrompt>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayPlayPromptU3Ed__16_System_Collections_IEnumerator_Reset_mEAE3CCA8D36BE440CE409FA6A1B1AD76326713F9 (U3CDisplayPlayPromptU3Ed__16_t2208EC95A468422D595505B0ECA415C73284F171* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDisplayPlayPromptU3Ed__16_System_Collections_IEnumerator_Reset_mEAE3CCA8D36BE440CE409FA6A1B1AD76326713F9_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<DisplayPlayPrompt>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisplayPlayPromptU3Ed__16_System_Collections_IEnumerator_get_Current_m9E1CCB4F837BC97CBFCF6D1EB5FCA2A524E2D3BE (U3CDisplayPlayPromptU3Ed__16_t2208EC95A468422D595505B0ECA415C73284F171* __this, const RuntimeMethod* method) 
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
// System.Void GameManager/<StartGame>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameU3Ed__17__ctor_mCA2C9CBAB4C2395CAC3A3BEE8A443519D3B06087 (U3CStartGameU3Ed__17_t3EDDEC5A47FA39399648C51E6C80C3C82D8177E9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<StartGame>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameU3Ed__17_System_IDisposable_Dispose_m26A48952A9A4CB026E09561E3DBFACA234BB80F6 (U3CStartGameU3Ed__17_t3EDDEC5A47FA39399648C51E6C80C3C82D8177E9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<StartGame>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartGameU3Ed__17_MoveNext_m11DA76BADD20B30497DDD7BCC1ACD7D1F2FDC868 (U3CStartGameU3Ed__17_t3EDDEC5A47FA39399648C51E6C80C3C82D8177E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRotateCamera_t53F504AA88DED82ADEEFFBDF7388D4FF3EFF133F_mE3AE5319D640FDCB2E5EBCB818FEEFD169AFFDA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_004a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// canEnterGame = false;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = V_1;
		L_4->___canEnterGame_9 = (bool)0;
		// howToOverlay.SetActive(false);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___howToOverlay_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (1.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// player.GetComponent<MeshRenderer>().enabled = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___player_10;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_10;
		L_10 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_9, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_10, (bool)1, NULL);
		// player.GetComponent<PlayerController>().enabled = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_11 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___player_10;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_13;
		L_13 = GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A(L_12, GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)1, NULL);
		// focalPoint.GetComponent<RotateCamera>().enabled = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_14 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = L_14->___focalPoint_11;
		RotateCamera_t53F504AA88DED82ADEEFFBDF7388D4FF3EFF133F* L_16;
		L_16 = GameObject_GetComponent_TisRotateCamera_t53F504AA88DED82ADEEFFBDF7388D4FF3EFF133F_mE3AE5319D640FDCB2E5EBCB818FEEFD169AFFDA3(L_15, GameObject_GetComponent_TisRotateCamera_t53F504AA88DED82ADEEFFBDF7388D4FF3EFF133F_mE3AE5319D640FDCB2E5EBCB818FEEFD169AFFDA3_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_16, (bool)1, NULL);
		// gameCanvas.enabled = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_17 = V_1;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_18 = L_17->___gameCanvas_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_18, (bool)1, NULL);
		// StartCoroutine(ActivateSpawn());
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_19 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_20 = V_1;
		RuntimeObject* L_21;
		L_21 = GameManager_ActivateSpawn_m8B867E0E504EDF7CAC296E75DB3BAE4B9F37D69D(L_20, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_22;
		L_22 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_19, L_21, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<StartGame>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartGameU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m86F91DCBD4F6B00FC0AC50517D698B460485B058 (U3CStartGameU3Ed__17_t3EDDEC5A47FA39399648C51E6C80C3C82D8177E9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<StartGame>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameU3Ed__17_System_Collections_IEnumerator_Reset_m6F8BA3D534ADAB5A827ACC29CAE59D409FCFDB51 (U3CStartGameU3Ed__17_t3EDDEC5A47FA39399648C51E6C80C3C82D8177E9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartGameU3Ed__17_System_Collections_IEnumerator_Reset_m6F8BA3D534ADAB5A827ACC29CAE59D409FCFDB51_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<StartGame>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartGameU3Ed__17_System_Collections_IEnumerator_get_Current_m2FD16E2BEF486F146E93AE7E5C2F5BA0C92A5F36 (U3CStartGameU3Ed__17_t3EDDEC5A47FA39399648C51E6C80C3C82D8177E9* __this, const RuntimeMethod* method) 
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
// System.Void GameManager/<ActivateSpawn>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActivateSpawnU3Ed__18__ctor_mFB9731370C5AB3058773007A50AB174524009848 (U3CActivateSpawnU3Ed__18_tDD768E9C842BE4E71348BCD9CBEB3E166A771ECB* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<ActivateSpawn>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActivateSpawnU3Ed__18_System_IDisposable_Dispose_m5880D6FDC0158823B335D1990E00D74A8CCB44D5 (U3CActivateSpawnU3Ed__18_tDD768E9C842BE4E71348BCD9CBEB3E166A771ECB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<ActivateSpawn>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CActivateSpawnU3Ed__18_MoveNext_mA049776B1120675F149319FF23C2624922A24C0C (U3CActivateSpawnU3Ed__18_tDD768E9C842BE4E71348BCD9CBEB3E166A771ECB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
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
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(3.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (3.5f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// spawnManager.PlayerChoosingPowerup = false;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = V_1;
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_6 = L_5->___spawnManager_12;
		SpawnManager_set_PlayerChoosingPowerup_m5971DB24BE2533A302565DEA5750DDF556437541_inline(L_6, (bool)0, NULL);
		// StartCoroutine(ActivateIsPlaying());
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8 = V_1;
		RuntimeObject* L_9;
		L_9 = GameManager_ActivateIsPlaying_m6160659E22EECCA9B0E4EAE9C2B9AC719AEBBD4B(L_8, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_7, L_9, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<ActivateSpawn>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CActivateSpawnU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m48A1203C1BC7B88B558ACA3B2BB54A6C882D444B (U3CActivateSpawnU3Ed__18_tDD768E9C842BE4E71348BCD9CBEB3E166A771ECB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<ActivateSpawn>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActivateSpawnU3Ed__18_System_Collections_IEnumerator_Reset_m918C60C411C232E6D926F315CCF11F83B82D3C4A (U3CActivateSpawnU3Ed__18_tDD768E9C842BE4E71348BCD9CBEB3E166A771ECB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CActivateSpawnU3Ed__18_System_Collections_IEnumerator_Reset_m918C60C411C232E6D926F315CCF11F83B82D3C4A_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<ActivateSpawn>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CActivateSpawnU3Ed__18_System_Collections_IEnumerator_get_Current_mD0A58B55B8D78432AB645E71C86B2C3417FC6533 (U3CActivateSpawnU3Ed__18_tDD768E9C842BE4E71348BCD9CBEB3E166A771ECB* __this, const RuntimeMethod* method) 
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
// System.Void GameManager/<ActivateIsPlaying>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActivateIsPlayingU3Ed__19__ctor_m8F421CCA538BA2D933C4F69CE0A3D9A5317FEE61 (U3CActivateIsPlayingU3Ed__19_t26DD7876248C590F90E9BEC4FF9257E35D8D5879* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<ActivateIsPlaying>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActivateIsPlayingU3Ed__19_System_IDisposable_Dispose_m9E101897B37418D228351BA47D4A91ADE4A952A4 (U3CActivateIsPlayingU3Ed__19_t26DD7876248C590F90E9BEC4FF9257E35D8D5879* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<ActivateIsPlaying>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CActivateIsPlayingU3Ed__19_MoveNext_mE4843F5934C5BFEE69988CE2435DE8260C5591FE (U3CActivateIsPlayingU3Ed__19_t26DD7876248C590F90E9BEC4FF9257E35D8D5879* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
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
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(6);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (6.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isPlaying = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = V_1;
		L_5->___isPlaying_8 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<ActivateIsPlaying>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CActivateIsPlayingU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m03E1CEE686C1B37ADDA8B31AA2A89AEF6F6DBC6D (U3CActivateIsPlayingU3Ed__19_t26DD7876248C590F90E9BEC4FF9257E35D8D5879* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<ActivateIsPlaying>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActivateIsPlayingU3Ed__19_System_Collections_IEnumerator_Reset_m34898A6C827F9F1B05060C34FBB80A424677DF20 (U3CActivateIsPlayingU3Ed__19_t26DD7876248C590F90E9BEC4FF9257E35D8D5879* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CActivateIsPlayingU3Ed__19_System_Collections_IEnumerator_Reset_m34898A6C827F9F1B05060C34FBB80A424677DF20_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<ActivateIsPlaying>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CActivateIsPlayingU3Ed__19_System_Collections_IEnumerator_get_Current_mF40F8B7DE1457445E3EBCA61F8A9098ACAFEE65A (U3CActivateIsPlayingU3Ed__19_t26DD7876248C590F90E9BEC4FF9257E35D8D5879* __this, const RuntimeMethod* method) 
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
// System.Single PickUps::get_RedPotionForce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PickUps_get_RedPotionForce_m1772768ECB8FA89102B70C9B424B1F420D9200C2 (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) 
{
	{
		// public float RedPotionForce { get { return redPotionForce; } set { redPotionForce = value; } }
		float L_0 = __this->___redPotionForce_7;
		return L_0;
	}
}
// System.Void PickUps::set_RedPotionForce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUps_set_RedPotionForce_mDD00C277EA7D96D349C9AA67ACFDC724405EB44B (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float RedPotionForce { get { return redPotionForce; } set { redPotionForce = value; } }
		float L_0 = ___0_value;
		__this->___redPotionForce_7 = L_0;
		// public float RedPotionForce { get { return redPotionForce; } set { redPotionForce = value; } }
		return;
	}
}
// System.Single PickUps::get_RadDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PickUps_get_RadDuration_m80FEB2912FBD919F0C264F9E3C74FBE7B7348D97 (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) 
{
	{
		// public float RadDuration { get { return radDuration; } set { radDuration = value; } }
		float L_0 = __this->___radDuration_8;
		return L_0;
	}
}
// System.Void PickUps::set_RadDuration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUps_set_RadDuration_m1D2EEC71D96E744EC4AD78FC6EE019A93D9901F3 (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float RadDuration { get { return radDuration; } set { radDuration = value; } }
		float L_0 = ___0_value;
		__this->___radDuration_8 = L_0;
		// public float RadDuration { get { return radDuration; } set { radDuration = value; } }
		return;
	}
}
// System.Single PickUps::get_StarDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PickUps_get_StarDuration_mE84C32698EC37DEAB14A5D6ED25A1B52FA665FD4 (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) 
{
	{
		// public float StarDuration { get { return starDuration; } set { starDuration = value; } }
		float L_0 = __this->___starDuration_9;
		return L_0;
	}
}
// System.Void PickUps::set_StarDuration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUps_set_StarDuration_mE6B7CEC675A6B586F67B407D8DD1232D280A7EBF (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float StarDuration { get { return starDuration; } set { starDuration = value; } }
		float L_0 = ___0_value;
		__this->___starDuration_9 = L_0;
		// public float StarDuration { get { return starDuration; } set { starDuration = value; } }
		return;
	}
}
// System.Boolean PickUps::get_HasPickup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PickUps_get_HasPickup_m238E0FFF76160889729E37B98F06D0A64F4B748E (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasPickup { get { return hasPickup; } set { hasPickup = value; } }
		bool L_0 = __this->___hasPickup_10;
		return L_0;
	}
}
// System.Void PickUps::set_HasPickup(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUps_set_HasPickup_mDF578A1788A76DE70CDB35A2DD3F981D8C6E11FA (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool HasPickup { get { return hasPickup; } set { hasPickup = value; } }
		bool L_0 = ___0_value;
		__this->___hasPickup_10 = L_0;
		// public bool HasPickup { get { return hasPickup; } set { hasPickup = value; } }
		return;
	}
}
// System.Boolean PickUps::get_RadActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PickUps_get_RadActive_m6325CB917383BF874E8D15339811DC6291107CC2 (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) 
{
	{
		// public bool RadActive { get { return radActive; } }
		bool L_0 = __this->___radActive_11;
		return L_0;
	}
}
// System.Boolean PickUps::get_RocketsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PickUps_get_RocketsActive_mF0638C6902817A9339035920FCD7435FAC43EF23 (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) 
{
	{
		// public bool RocketsActive { get { return rocketsActive; } set { rocketsActive = value; } }
		bool L_0 = __this->___rocketsActive_17;
		return L_0;
	}
}
// System.Void PickUps::set_RocketsActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUps_set_RocketsActive_m350FF558ED7FE515F7F2770C3067533514F1C036 (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool RocketsActive { get { return rocketsActive; } set { rocketsActive = value; } }
		bool L_0 = ___0_value;
		__this->___rocketsActive_17 = L_0;
		// public bool RocketsActive { get { return rocketsActive; } set { rocketsActive = value; } }
		return;
	}
}
// System.Void PickUps::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUps_Start_mB68215E5CE417AA1252BD51F1E2FF03AAEA1241A (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1_m978B5068A2ED632F3075D9B38BF830A9E439A3DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_m4CB133EB15CE850B95FBEFC772E2333908B51DAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.Find("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___player_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_19), (void*)L_0);
		// playerCollision = player.GetComponent<PlayerCollisionDetection>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___player_19;
		PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1* L_2;
		L_2 = GameObject_GetComponent_TisPlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1_m978B5068A2ED632F3075D9B38BF830A9E439A3DF(L_1, GameObject_GetComponent_TisPlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1_m978B5068A2ED632F3075D9B38BF830A9E439A3DF_RuntimeMethod_var);
		__this->___playerCollision_20 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerCollision_20), (void*)L_2);
		// playerController = player.GetComponent<PlayerController>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___player_19;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4;
		L_4 = GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A(L_3, GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		__this->___playerController_21 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerController_21), (void*)L_4);
		// spawnManager = FindObjectOfType<SpawnManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_5;
		L_5 = Object_FindObjectOfType_TisSpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_m4CB133EB15CE850B95FBEFC772E2333908B51DAD(Object_FindObjectOfType_TisSpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_m4CB133EB15CE850B95FBEFC772E2333908B51DAD_RuntimeMethod_var);
		__this->___spawnManager_22 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnManager_22), (void*)L_5);
		// SetDefaults();
		PickUps_SetDefaults_m143F7FD37B94BED3466CF2F2B8BF192DD10A679A(__this, NULL);
		// }
		return;
	}
}
// System.Void PickUps::SetDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUps_SetDefaults_m143F7FD37B94BED3466CF2F2B8BF192DD10A679A (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) 
{
	{
		// indicatorPos = new Vector3(player.transform.position.x, indicatorHeight, player.transform.position.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		float L_4 = __this->___indicatorHeight_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___player_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), L_3, L_4, L_8, /*hidden argument*/NULL);
		__this->___indicatorPos_15 = L_9;
		// rocketsActive = false;
		__this->___rocketsActive_17 = (bool)0;
		// radActive = false;
		__this->___radActive_11 = (bool)0;
		// hasPickup = false;
		__this->___hasPickup_10 = (bool)0;
		// starForce = 12;
		__this->___starForce_12 = (12.0f);
		// redPotionForce = 5;
		__this->___redPotionForce_7 = (5.0f);
		// radDuration = 8;
		__this->___radDuration_8 = (8.0f);
		// starDuration = 4;
		__this->___starDuration_9 = (4.0f);
		// }
		return;
	}
}
// System.Void PickUps::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUps_Update_m0B5B1F210572BDEA4B957D0E09FD638E4ECB544D (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (player != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		// indicatorPos = new Vector3(player.transform.position.x, indicatorHeight, player.transform.position.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___player_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		float L_6 = __this->___indicatorHeight_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___player_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_5, L_6, L_10, /*hidden argument*/NULL);
		__this->___indicatorPos_15 = L_11;
		// transform.position = indicatorPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___indicatorPos_15;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_13, NULL);
	}

IL_005a:
	{
		// if (rocketsActive && rocketsCoroutine == null)
		bool L_14 = __this->___rocketsActive_17;
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_15 = __this->___rocketsCoroutine_18;
		if (L_15)
		{
			goto IL_007c;
		}
	}
	{
		// rocketsCoroutine = StartCoroutine(RocketSpawnCoroutine());
		RuntimeObject* L_16;
		L_16 = PickUps_RocketSpawnCoroutine_m8B214A718F1E5C9A8178A40CF3BE3B5F1A55ABBF(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_17;
		L_17 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_16, NULL);
		__this->___rocketsCoroutine_18 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rocketsCoroutine_18), (void*)L_17);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void PickUps::ActivateCorrectPickUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUps_ActivateCorrectPickUp_m1A88A118808F4E4569440E9968109334DF7DA43D (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A9C53836E6520534923D48D3D756F63096DC981);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843925972CA28BE97E74F8A0726E18011A4391B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA0481D621FB3F8F2FF7434F93ABEBDF2F908FE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC578BB9477F0A6CAFF47507A8A3BCE35B086768D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5D4BCF7E80D55D1CBAEB00EBC12CCD347B1624A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7094430547E03C78278153540CA2EF9B26CA54C);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		// if (!hasPickup)
		bool L_0 = __this->___hasPickup_10;
		if (L_0)
		{
			goto IL_0156;
		}
	}
	{
		String_t* L_1 = ___0_name;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_0 = L_2;
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1627430778)))))
		{
			goto IL_003a;
		}
	}
	{
		uint32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)248996601))))
		{
			goto IL_00d5;
		}
	}
	{
		uint32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1365736337))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1627430778))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_014f;
	}

IL_003a:
	{
		uint32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)-2116985569)))))
		{
			goto IL_0057;
		}
	}
	{
		uint32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1654248869))))
		{
			goto IL_00c6;
		}
	}
	{
		uint32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2116985569))))
		{
			goto IL_006c;
		}
	}
	{
		goto IL_014f;
	}

IL_0057:
	{
		uint32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1803980854))))
		{
			goto IL_0090;
		}
	}
	{
		uint32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1282818296))))
		{
			goto IL_00b4;
		}
	}
	{
		goto IL_014f;
	}

IL_006c:
	{
		String_t* L_12 = ___0_name;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteral1A9C53836E6520534923D48D3D756F63096DC981, NULL);
		if (L_13)
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_014f;
	}

IL_007e:
	{
		String_t* L_14 = ___0_name;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralE7094430547E03C78278153540CA2EF9B26CA54C, NULL);
		if (L_15)
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_014f;
	}

IL_0090:
	{
		String_t* L_16 = ___0_name;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralC5D4BCF7E80D55D1CBAEB00EBC12CCD347B1624A, NULL);
		if (L_17)
		{
			goto IL_0101;
		}
	}
	{
		goto IL_014f;
	}

IL_00a2:
	{
		String_t* L_18 = ___0_name;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral843925972CA28BE97E74F8A0726E18011A4391B5, NULL);
		if (L_19)
		{
			goto IL_0111;
		}
	}
	{
		goto IL_014f;
	}

IL_00b4:
	{
		String_t* L_20 = ___0_name;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralC578BB9477F0A6CAFF47507A8A3BCE35B086768D, NULL);
		if (L_21)
		{
			goto IL_0121;
		}
	}
	{
		goto IL_014f;
	}

IL_00c6:
	{
		String_t* L_22 = ___0_name;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralBA0481D621FB3F8F2FF7434F93ABEBDF2F908FE8, NULL);
		if (L_23)
		{
			goto IL_0131;
		}
	}
	{
		goto IL_014f;
	}

IL_00d5:
	{
		String_t* L_24 = ___0_name;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8, NULL);
		if (L_25)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_014f;
	}

IL_00e4:
	{
		// spawnManager.StartDeletingEnemies();
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_26 = __this->___spawnManager_22;
		SpawnManager_StartDeletingEnemies_m2DCE193CFD97F2E290C4019FDCC4BD8B2DE4606F(L_26, NULL);
		// break;
		goto IL_014f;
	}

IL_00f1:
	{
		// StartCoroutine(StarCountdown(name));
		String_t* L_27 = ___0_name;
		RuntimeObject* L_28;
		L_28 = PickUps_StarCountdown_m7D81541D9698902469C53AD4D1F2CE471AA47042(__this, L_27, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_29;
		L_29 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_28, NULL);
		// break;
		goto IL_014f;
	}

IL_0101:
	{
		// StartCoroutine(BluePotionCountdown(name));
		String_t* L_30 = ___0_name;
		RuntimeObject* L_31;
		L_31 = PickUps_BluePotionCountdown_mA9C840913685D32524906F64B55DD271A910105C(__this, L_30, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_32;
		L_32 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_31, NULL);
		// break;
		goto IL_014f;
	}

IL_0111:
	{
		// StartCoroutine(RedPotionCountdown(name));
		String_t* L_33 = ___0_name;
		RuntimeObject* L_34;
		L_34 = PickUps_RedPotionCountdown_m1DFF23CA0BA9C224197D5AFD2958B3123E50EAAA(__this, L_33, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_35;
		L_35 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_34, NULL);
		// break;
		goto IL_014f;
	}

IL_0121:
	{
		// StartCoroutine(RadiationCountdown(name));
		String_t* L_36 = ___0_name;
		RuntimeObject* L_37;
		L_37 = PickUps_RadiationCountdown_mEF01A51AEDA05AE0B0C9DB304163874AE3998703(__this, L_36, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_38;
		L_38 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_37, NULL);
		// break;
		goto IL_014f;
	}

IL_0131:
	{
		// StartCoroutine(LightningCountdown(name));
		String_t* L_39 = ___0_name;
		RuntimeObject* L_40;
		L_40 = PickUps_LightningCountdown_m411F4600317AD24424714187D6994142FEC0C802(__this, L_39, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_41;
		L_41 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_40, NULL);
		// break;
		goto IL_014f;
	}

IL_0141:
	{
		// StartCoroutine(FireCountdown(name));
		String_t* L_42 = ___0_name;
		RuntimeObject* L_43;
		L_43 = PickUps_FireCountdown_m953A5BDDB4D48BDFE673085D89972F0828C3556B(__this, L_42, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_44;
		L_44 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_43, NULL);
	}

IL_014f:
	{
		// hasPickup = true;
		__this->___hasPickup_10 = (bool)1;
	}

IL_0156:
	{
		// }
		return;
	}
}
// System.Void PickUps::FindCorrectIndicator(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUps_FindCorrectIndicator_mC163D6B88C6D46344048150E6DED4EA94534E060 (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, String_t* ___0_name, bool ___1_active, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C2FF485AD7B6CD6C51427A42D39DDA2B9E7B4BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9F8B091F0021350F2D9225E0897163EC5DC28EF);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// string fullName = name + "_Indicator";
		String_t* L_0 = ___0_name;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral3C2FF485AD7B6CD6C51427A42D39DDA2B9E7B4BC, NULL);
		V_0 = L_1;
		// foreach (Transform child in transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		RuntimeObject* L_3;
		L_3 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0087:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0097;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0097:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007d_1;
			}

IL_001a_1:
			{
				// foreach (Transform child in transform)
				RuntimeObject* L_7 = V_1;
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_8, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// if (child.name == fullName)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_2;
				String_t* L_10;
				L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
				String_t* L_11 = V_0;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, L_11, NULL);
				if (!L_12)
				{
					goto IL_0073_1;
				}
			}
			{
				// if (fullName == "Star_Indicator")
				String_t* L_13 = V_0;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralF9F8B091F0021350F2D9225E0897163EC5DC28EF, NULL);
				if (!L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				// indicatorHeight = 0;
				__this->___indicatorHeight_16 = (0.0f);
				// child.gameObject.SetActive(active);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_2;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
				L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
				bool L_17 = ___1_active;
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, L_17, NULL);
				goto IL_007d_1;
			}

IL_005a_1:
			{
				// indicatorHeight = -0.5f;
				__this->___indicatorHeight_16 = (-0.5f);
				// child.gameObject.SetActive(active);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = V_2;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
				L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
				bool L_20 = ___1_active;
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, L_20, NULL);
				goto IL_007d_1;
			}

IL_0073_1:
			{
				// else if (child.name == null)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = V_2;
				String_t* L_22;
				L_22 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_21, NULL);
				if (L_22)
				{
					goto IL_007d_1;
				}
			}
			{
				// return;
				goto IL_0098;
			}

IL_007d_1:
			{
				// foreach (Transform child in transform)
				RuntimeObject* L_23 = V_1;
				bool L_24;
				L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_23);
				if (L_24)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_0098;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator PickUps::StarCountdown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PickUps_StarCountdown_m7D81541D9698902469C53AD4D1F2CE471AA47042 (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStarCountdownU3Ed__41_t6158CBF29312C22A7539E28F374FA8916CD42296_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStarCountdownU3Ed__41_t6158CBF29312C22A7539E28F374FA8916CD42296* L_0 = (U3CStarCountdownU3Ed__41_t6158CBF29312C22A7539E28F374FA8916CD42296*)il2cpp_codegen_object_new(U3CStarCountdownU3Ed__41_t6158CBF29312C22A7539E28F374FA8916CD42296_il2cpp_TypeInfo_var);
		U3CStarCountdownU3Ed__41__ctor_mDF9A7829287E2E6C005D876A1639311CBCD8F267(L_0, 0, NULL);
		U3CStarCountdownU3Ed__41_t6158CBF29312C22A7539E28F374FA8916CD42296* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CStarCountdownU3Ed__41_t6158CBF29312C22A7539E28F374FA8916CD42296* L_2 = L_1;
		String_t* L_3 = ___0_name;
		L_2->___name_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___name_3), (void*)L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator PickUps::RedPotionCountdown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PickUps_RedPotionCountdown_m1DFF23CA0BA9C224197D5AFD2958B3123E50EAAA (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRedPotionCountdownU3Ed__42_tF8A531693BD6D40BE0FFFB2234381B75DDE47124_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRedPotionCountdownU3Ed__42_tF8A531693BD6D40BE0FFFB2234381B75DDE47124* L_0 = (U3CRedPotionCountdownU3Ed__42_tF8A531693BD6D40BE0FFFB2234381B75DDE47124*)il2cpp_codegen_object_new(U3CRedPotionCountdownU3Ed__42_tF8A531693BD6D40BE0FFFB2234381B75DDE47124_il2cpp_TypeInfo_var);
		U3CRedPotionCountdownU3Ed__42__ctor_mE620D20F25075F66D8A49F57545E3DEFD90046A1(L_0, 0, NULL);
		U3CRedPotionCountdownU3Ed__42_tF8A531693BD6D40BE0FFFB2234381B75DDE47124* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CRedPotionCountdownU3Ed__42_tF8A531693BD6D40BE0FFFB2234381B75DDE47124* L_2 = L_1;
		String_t* L_3 = ___0_name;
		L_2->___name_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___name_3), (void*)L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator PickUps::RadiationCountdown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PickUps_RadiationCountdown_mEF01A51AEDA05AE0B0C9DB304163874AE3998703 (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRadiationCountdownU3Ed__43_t776668B70ADAA9189511B0E1A88B1E117C4441EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRadiationCountdownU3Ed__43_t776668B70ADAA9189511B0E1A88B1E117C4441EE* L_0 = (U3CRadiationCountdownU3Ed__43_t776668B70ADAA9189511B0E1A88B1E117C4441EE*)il2cpp_codegen_object_new(U3CRadiationCountdownU3Ed__43_t776668B70ADAA9189511B0E1A88B1E117C4441EE_il2cpp_TypeInfo_var);
		U3CRadiationCountdownU3Ed__43__ctor_m37AFB73D388847C2E647BB572E936AF98F21097D(L_0, 0, NULL);
		U3CRadiationCountdownU3Ed__43_t776668B70ADAA9189511B0E1A88B1E117C4441EE* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CRadiationCountdownU3Ed__43_t776668B70ADAA9189511B0E1A88B1E117C4441EE* L_2 = L_1;
		String_t* L_3 = ___0_name;
		L_2->___name_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___name_3), (void*)L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator PickUps::BluePotionCountdown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PickUps_BluePotionCountdown_mA9C840913685D32524906F64B55DD271A910105C (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBluePotionCountdownU3Ed__44_t9E00762245013CCB346B4CB5BB04A5B296140323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBluePotionCountdownU3Ed__44_t9E00762245013CCB346B4CB5BB04A5B296140323* L_0 = (U3CBluePotionCountdownU3Ed__44_t9E00762245013CCB346B4CB5BB04A5B296140323*)il2cpp_codegen_object_new(U3CBluePotionCountdownU3Ed__44_t9E00762245013CCB346B4CB5BB04A5B296140323_il2cpp_TypeInfo_var);
		U3CBluePotionCountdownU3Ed__44__ctor_mF789FC2B331A20E2B46E72ED267C6DEF0DCFC9C2(L_0, 0, NULL);
		U3CBluePotionCountdownU3Ed__44_t9E00762245013CCB346B4CB5BB04A5B296140323* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CBluePotionCountdownU3Ed__44_t9E00762245013CCB346B4CB5BB04A5B296140323* L_2 = L_1;
		String_t* L_3 = ___0_name;
		L_2->___name_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___name_3), (void*)L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator PickUps::LightningCountdown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PickUps_LightningCountdown_m411F4600317AD24424714187D6994142FEC0C802 (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLightningCountdownU3Ed__45_t5EFD45A868B1A55538A9C719F54F63E061E137F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLightningCountdownU3Ed__45_t5EFD45A868B1A55538A9C719F54F63E061E137F3* L_0 = (U3CLightningCountdownU3Ed__45_t5EFD45A868B1A55538A9C719F54F63E061E137F3*)il2cpp_codegen_object_new(U3CLightningCountdownU3Ed__45_t5EFD45A868B1A55538A9C719F54F63E061E137F3_il2cpp_TypeInfo_var);
		U3CLightningCountdownU3Ed__45__ctor_m587710A1FC16E2213AFE6E6C8CBA7630A9D05A76(L_0, 0, NULL);
		U3CLightningCountdownU3Ed__45_t5EFD45A868B1A55538A9C719F54F63E061E137F3* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CLightningCountdownU3Ed__45_t5EFD45A868B1A55538A9C719F54F63E061E137F3* L_2 = L_1;
		String_t* L_3 = ___0_name;
		L_2->___name_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___name_3), (void*)L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator PickUps::FireCountdown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PickUps_FireCountdown_m953A5BDDB4D48BDFE673085D89972F0828C3556B (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFireCountdownU3Ed__46_t5DB496252598DF02459B5DB66D519E0B4243C9C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFireCountdownU3Ed__46_t5DB496252598DF02459B5DB66D519E0B4243C9C5* L_0 = (U3CFireCountdownU3Ed__46_t5DB496252598DF02459B5DB66D519E0B4243C9C5*)il2cpp_codegen_object_new(U3CFireCountdownU3Ed__46_t5DB496252598DF02459B5DB66D519E0B4243C9C5_il2cpp_TypeInfo_var);
		U3CFireCountdownU3Ed__46__ctor_mB508622E295029240438E56FED905618C866DA37(L_0, 0, NULL);
		U3CFireCountdownU3Ed__46_t5DB496252598DF02459B5DB66D519E0B4243C9C5* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CFireCountdownU3Ed__46_t5DB496252598DF02459B5DB66D519E0B4243C9C5* L_2 = L_1;
		String_t* L_3 = ___0_name;
		L_2->___name_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___name_3), (void*)L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator PickUps::RocketSpawnCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PickUps_RocketSpawnCoroutine_m8B214A718F1E5C9A8178A40CF3BE3B5F1A55ABBF (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRocketSpawnCoroutineU3Ed__47_tDD89450AC6367BA4A838B2D8F4BD93081FF139ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRocketSpawnCoroutineU3Ed__47_tDD89450AC6367BA4A838B2D8F4BD93081FF139ED* L_0 = (U3CRocketSpawnCoroutineU3Ed__47_tDD89450AC6367BA4A838B2D8F4BD93081FF139ED*)il2cpp_codegen_object_new(U3CRocketSpawnCoroutineU3Ed__47_tDD89450AC6367BA4A838B2D8F4BD93081FF139ED_il2cpp_TypeInfo_var);
		U3CRocketSpawnCoroutineU3Ed__47__ctor_mEB7854EBEEE6B0D49D9253EC92CA2670A6442111(L_0, 0, NULL);
		U3CRocketSpawnCoroutineU3Ed__47_tDD89450AC6367BA4A838B2D8F4BD93081FF139ED* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PickUps::CreateLightning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUps_CreateLightning_m86361C805E40B27C30419A4CC505D29D7A5F4A69 (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisEnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A_mF3854313BF9CF3291BF5D67FDA931DD508587AFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EnemyControllerU5BU5D_t5743735DA1FD023E0413A9DADCF4DF86EA642781* V_0 = NULL;
	int32_t V_1 = 0;
	EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// EnemyController[] enemies = FindObjectsOfType<EnemyController>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		EnemyControllerU5BU5D_t5743735DA1FD023E0413A9DADCF4DF86EA642781* L_0;
		L_0 = Object_FindObjectsOfType_TisEnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A_mF3854313BF9CF3291BF5D67FDA931DD508587AFF(Object_FindObjectsOfType_TisEnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A_mF3854313BF9CF3291BF5D67FDA931DD508587AFF_RuntimeMethod_var);
		// foreach (EnemyController enemyController in enemies)
		V_0 = L_0;
		V_1 = 0;
		goto IL_0059;
	}

IL_000a:
	{
		// foreach (EnemyController enemyController in enemies)
		EnemyControllerU5BU5D_t5743735DA1FD023E0413A9DADCF4DF86EA642781* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (enemyController != null)
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		// Vector3 particlePosition = new Vector3(enemyController.transform.position.x, 8f, enemyController.transform.position.z);
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_7 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___x_2;
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_11 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), L_10, (8.0f), L_14, NULL);
		// Instantiate(lightningParticlePrefab, particlePosition, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___lightningParticlePrefab_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_15, L_16, L_17, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
	}

IL_0055:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0059:
	{
		// foreach (EnemyController enemyController in enemies)
		int32_t L_20 = V_1;
		EnemyControllerU5BU5D_t5743735DA1FD023E0413A9DADCF4DF86EA642781* L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_22, NULL);
		// }
		return;
	}
}
// System.Void PickUps::StoreAndSetPushForce(System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUps_StoreAndSetPushForce_m9772940AFEDC33D2F940AB725B2EFBB71C2AAE9F (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, float ___0_oldForce, float ___1_newForce, bool ___2_changeValue, const RuntimeMethod* method) 
{
	{
		// if (changeValue)
		bool L_0 = ___2_changeValue;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// oldPushForce = oldForce;
		float L_1 = ___0_oldForce;
		__this->___oldPushForce_13 = L_1;
		// playerCollision.PushForce = newForce;
		PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1* L_2 = __this->___playerCollision_20;
		float L_3 = ___1_newForce;
		PlayerCollisionDetection_set_PushForce_mC1BF1E88F8AEEC1D713EE6A97E29382706BECCB3_inline(L_2, L_3, NULL);
		return;
	}

IL_0017:
	{
		// else if (!changeValue)
		bool L_4 = ___2_changeValue;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		// playerCollision.PushForce = oldForce;
		PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1* L_5 = __this->___playerCollision_20;
		float L_6 = ___0_oldForce;
		PlayerCollisionDetection_set_PushForce_mC1BF1E88F8AEEC1D713EE6A97E29382706BECCB3_inline(L_5, L_6, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void PickUps::StoreAndSetMoveSpeed(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUps_StoreAndSetMoveSpeed_m1C72680DDA9F045CB47AEF57DDDCB349DEC6BB19 (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, float ___0_oldSpeed, bool ___1_changeValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisEnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A_mF3854313BF9CF3291BF5D67FDA931DD508587AFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EnemyControllerU5BU5D_t5743735DA1FD023E0413A9DADCF4DF86EA642781* V_0 = NULL;
	EnemyControllerU5BU5D_t5743735DA1FD023E0413A9DADCF4DF86EA642781* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// EnemyController[] enemyControllers = FindObjectsOfType<EnemyController>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		EnemyControllerU5BU5D_t5743735DA1FD023E0413A9DADCF4DF86EA642781* L_0;
		L_0 = Object_FindObjectsOfType_TisEnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A_mF3854313BF9CF3291BF5D67FDA931DD508587AFF(Object_FindObjectsOfType_TisEnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A_mF3854313BF9CF3291BF5D67FDA931DD508587AFF_RuntimeMethod_var);
		V_0 = L_0;
		// if (changeValue)
		bool L_1 = ___1_changeValue;
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		// oldMoveSpeed = oldSpeed;
		float L_2 = ___0_oldSpeed;
		__this->___oldMoveSpeed_14 = L_2;
		// foreach (EnemyController enemy in enemyControllers)
		EnemyControllerU5BU5D_t5743735DA1FD023E0413A9DADCF4DF86EA642781* L_3 = V_0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_0042;
	}

IL_0016:
	{
		// foreach (EnemyController enemy in enemyControllers)
		EnemyControllerU5BU5D_t5743735DA1FD023E0413A9DADCF4DF86EA642781* L_4 = V_1;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		// Rigidbody rb = enemy.GetComponent<Rigidbody>();
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_8 = L_7;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9;
		L_9 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_8, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		// rb.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_10, L_11, NULL);
		// rb.angularVelocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_10, L_12, NULL);
		// enemy.MoveSpeed = 0;
		EnemyController_set_MoveSpeed_mAF1084EEBE69866A6DD6D0454277628BBB373C33_inline(L_8, (0.0f), NULL);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0042:
	{
		// foreach (EnemyController enemy in enemyControllers)
		int32_t L_14 = V_2;
		EnemyControllerU5BU5D_t5743735DA1FD023E0413A9DADCF4DF86EA642781* L_15 = V_1;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0049:
	{
		// else if (!changeValue)
		bool L_16 = ___1_changeValue;
		if (L_16)
		{
			goto IL_0065;
		}
	}
	{
		// foreach (EnemyController enemy in enemyControllers)
		EnemyControllerU5BU5D_t5743735DA1FD023E0413A9DADCF4DF86EA642781* L_17 = V_0;
		V_1 = L_17;
		V_2 = 0;
		goto IL_005f;
	}

IL_0052:
	{
		// foreach (EnemyController enemy in enemyControllers)
		EnemyControllerU5BU5D_t5743735DA1FD023E0413A9DADCF4DF86EA642781* L_18 = V_1;
		int32_t L_19 = V_2;
		int32_t L_20 = L_19;
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		// enemy.MoveSpeed = oldSpeed;
		float L_22 = ___0_oldSpeed;
		EnemyController_set_MoveSpeed_mAF1084EEBE69866A6DD6D0454277628BBB373C33_inline(L_21, L_22, NULL);
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_005f:
	{
		// foreach (EnemyController enemy in enemyControllers)
		int32_t L_24 = V_2;
		EnemyControllerU5BU5D_t5743735DA1FD023E0413A9DADCF4DF86EA642781* L_25 = V_1;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0052;
		}
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void PickUps::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUps__ctor_m6E380A7BBD845B0BD398C01F79FBB2634167A4E0 (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) 
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
// System.Void PickUps/<StarCountdown>d__41::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStarCountdownU3Ed__41__ctor_mDF9A7829287E2E6C005D876A1639311CBCD8F267 (U3CStarCountdownU3Ed__41_t6158CBF29312C22A7539E28F374FA8916CD42296* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PickUps/<StarCountdown>d__41::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStarCountdownU3Ed__41_System_IDisposable_Dispose_m45009C82DB6942BF7E55EEB8450D2EF0C85B5D28 (U3CStarCountdownU3Ed__41_t6158CBF29312C22A7539E28F374FA8916CD42296* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PickUps/<StarCountdown>d__41::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStarCountdownU3Ed__41_MoveNext_m97554D47A008BA645CF9B98EA208F76783E8CDF0 (U3CStarCountdownU3Ed__41_t6158CBF29312C22A7539E28F374FA8916CD42296* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// FindCorrectIndicator(name, true);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_4 = V_1;
		String_t* L_5 = __this->___name_3;
		PickUps_FindCorrectIndicator_mC163D6B88C6D46344048150E6DED4EA94534E060(L_4, L_5, (bool)1, NULL);
		// StoreAndSetPushForce(playerCollision.OldPushForce, starForce, true);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_6 = V_1;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_7 = V_1;
		PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1* L_8 = L_7->___playerCollision_20;
		float L_9;
		L_9 = PlayerCollisionDetection_get_OldPushForce_m23BE1D297FD5E46E3459C1A5045A1886590B0F24_inline(L_8, NULL);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_10 = V_1;
		float L_11 = L_10->___starForce_12;
		PickUps_StoreAndSetPushForce_m9772940AFEDC33D2F940AB725B2EFBB71C2AAE9F(L_6, L_9, L_11, (bool)1, NULL);
		// yield return new WaitForSeconds(starDuration);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_12 = V_1;
		float L_13 = L_12->___starDuration_9;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_14 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_14, L_13, NULL);
		__this->___U3CU3E2__current_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StoreAndSetPushForce(oldPushForce, 0, false);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_15 = V_1;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_16 = V_1;
		float L_17 = L_16->___oldPushForce_13;
		PickUps_StoreAndSetPushForce_m9772940AFEDC33D2F940AB725B2EFBB71C2AAE9F(L_15, L_17, (0.0f), (bool)0, NULL);
		// FindCorrectIndicator(name, false);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_18 = V_1;
		String_t* L_19 = __this->___name_3;
		PickUps_FindCorrectIndicator_mC163D6B88C6D46344048150E6DED4EA94534E060(L_18, L_19, (bool)0, NULL);
		// hasPickup = false;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_20 = V_1;
		L_20->___hasPickup_10 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object PickUps/<StarCountdown>d__41::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStarCountdownU3Ed__41_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m42C9269C32EB331DE3F5543BC693D92B72EFDF6E (U3CStarCountdownU3Ed__41_t6158CBF29312C22A7539E28F374FA8916CD42296* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PickUps/<StarCountdown>d__41::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStarCountdownU3Ed__41_System_Collections_IEnumerator_Reset_mED6A68C69B8D9CFDF635D748DD019492612FAB8B (U3CStarCountdownU3Ed__41_t6158CBF29312C22A7539E28F374FA8916CD42296* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStarCountdownU3Ed__41_System_Collections_IEnumerator_Reset_mED6A68C69B8D9CFDF635D748DD019492612FAB8B_RuntimeMethod_var)));
	}
}
// System.Object PickUps/<StarCountdown>d__41::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStarCountdownU3Ed__41_System_Collections_IEnumerator_get_Current_m076C2D48B4264F5F6F15D103DD15F11259E8F915 (U3CStarCountdownU3Ed__41_t6158CBF29312C22A7539E28F374FA8916CD42296* __this, const RuntimeMethod* method) 
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
// System.Void PickUps/<RedPotionCountdown>d__42::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRedPotionCountdownU3Ed__42__ctor_mE620D20F25075F66D8A49F57545E3DEFD90046A1 (U3CRedPotionCountdownU3Ed__42_tF8A531693BD6D40BE0FFFB2234381B75DDE47124* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PickUps/<RedPotionCountdown>d__42::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRedPotionCountdownU3Ed__42_System_IDisposable_Dispose_m79CDBE4D663CC6AB67A2ABE1A18E303A12BE9569 (U3CRedPotionCountdownU3Ed__42_tF8A531693BD6D40BE0FFFB2234381B75DDE47124* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PickUps/<RedPotionCountdown>d__42::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRedPotionCountdownU3Ed__42_MoveNext_m2DFBAD159947F0993C9F667F3C8BF8DDA4CF4559 (U3CRedPotionCountdownU3Ed__42_tF8A531693BD6D40BE0FFFB2234381B75DDE47124* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// FindCorrectIndicator(name, true);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_4 = V_1;
		String_t* L_5 = __this->___name_3;
		PickUps_FindCorrectIndicator_mC163D6B88C6D46344048150E6DED4EA94534E060(L_4, L_5, (bool)1, NULL);
		// StoreAndSetPushForce(playerCollision.OldPushForce, redPotionForce, true);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_6 = V_1;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_7 = V_1;
		PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1* L_8 = L_7->___playerCollision_20;
		float L_9;
		L_9 = PlayerCollisionDetection_get_OldPushForce_m23BE1D297FD5E46E3459C1A5045A1886590B0F24_inline(L_8, NULL);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_10 = V_1;
		float L_11 = L_10->___redPotionForce_7;
		PickUps_StoreAndSetPushForce_m9772940AFEDC33D2F940AB725B2EFBB71C2AAE9F(L_6, L_9, L_11, (bool)1, NULL);
		// yield return new WaitForSeconds(15);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_12 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_12, (15.0f), NULL);
		__this->___U3CU3E2__current_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_12);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StoreAndSetPushForce(oldPushForce, 0, false);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_13 = V_1;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_14 = V_1;
		float L_15 = L_14->___oldPushForce_13;
		PickUps_StoreAndSetPushForce_m9772940AFEDC33D2F940AB725B2EFBB71C2AAE9F(L_13, L_15, (0.0f), (bool)0, NULL);
		// FindCorrectIndicator(name, false);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_16 = V_1;
		String_t* L_17 = __this->___name_3;
		PickUps_FindCorrectIndicator_mC163D6B88C6D46344048150E6DED4EA94534E060(L_16, L_17, (bool)0, NULL);
		// hasPickup = false;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_18 = V_1;
		L_18->___hasPickup_10 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object PickUps/<RedPotionCountdown>d__42::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRedPotionCountdownU3Ed__42_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7BA017B214DBF0DF2BBE0A5FA29B716A42BA78D2 (U3CRedPotionCountdownU3Ed__42_tF8A531693BD6D40BE0FFFB2234381B75DDE47124* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PickUps/<RedPotionCountdown>d__42::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRedPotionCountdownU3Ed__42_System_Collections_IEnumerator_Reset_mEAAC7A4ED938EA55233802B55CE4391FD7BE9436 (U3CRedPotionCountdownU3Ed__42_tF8A531693BD6D40BE0FFFB2234381B75DDE47124* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRedPotionCountdownU3Ed__42_System_Collections_IEnumerator_Reset_mEAAC7A4ED938EA55233802B55CE4391FD7BE9436_RuntimeMethod_var)));
	}
}
// System.Object PickUps/<RedPotionCountdown>d__42::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRedPotionCountdownU3Ed__42_System_Collections_IEnumerator_get_Current_m8E4C996BEEBBE77DD26CC2BED35EFE9A2A202386 (U3CRedPotionCountdownU3Ed__42_tF8A531693BD6D40BE0FFFB2234381B75DDE47124* __this, const RuntimeMethod* method) 
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
// System.Void PickUps/<RadiationCountdown>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRadiationCountdownU3Ed__43__ctor_m37AFB73D388847C2E647BB572E936AF98F21097D (U3CRadiationCountdownU3Ed__43_t776668B70ADAA9189511B0E1A88B1E117C4441EE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PickUps/<RadiationCountdown>d__43::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRadiationCountdownU3Ed__43_System_IDisposable_Dispose_m554191B495F251A8FB3130F0DBAC8540DC36A8A9 (U3CRadiationCountdownU3Ed__43_t776668B70ADAA9189511B0E1A88B1E117C4441EE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PickUps/<RadiationCountdown>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRadiationCountdownU3Ed__43_MoveNext_m69FD7CEDBD7D5940351905F2472785E886ACD6CD (U3CRadiationCountdownU3Ed__43_t776668B70ADAA9189511B0E1A88B1E117C4441EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_004c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// radActive = true;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_4 = V_1;
		L_4->___radActive_11 = (bool)1;
		// FindCorrectIndicator(name, true);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_5 = V_1;
		String_t* L_6 = __this->___name_3;
		PickUps_FindCorrectIndicator_mC163D6B88C6D46344048150E6DED4EA94534E060(L_5, L_6, (bool)1, NULL);
		// yield return new WaitForSeconds(radDuration);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_7 = V_1;
		float L_8 = L_7->___radDuration_8;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, L_8, NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// FindCorrectIndicator(name, false);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_10 = V_1;
		String_t* L_11 = __this->___name_3;
		PickUps_FindCorrectIndicator_mC163D6B88C6D46344048150E6DED4EA94534E060(L_10, L_11, (bool)0, NULL);
		// radActive = false;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_12 = V_1;
		L_12->___radActive_11 = (bool)0;
		// hasPickup = false;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_13 = V_1;
		L_13->___hasPickup_10 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object PickUps/<RadiationCountdown>d__43::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRadiationCountdownU3Ed__43_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m521827C0BCDEB554468A613425B12DF63E3A90A8 (U3CRadiationCountdownU3Ed__43_t776668B70ADAA9189511B0E1A88B1E117C4441EE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PickUps/<RadiationCountdown>d__43::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRadiationCountdownU3Ed__43_System_Collections_IEnumerator_Reset_mC844392567D1FFE149A48CC794AB79608B1EBD0A (U3CRadiationCountdownU3Ed__43_t776668B70ADAA9189511B0E1A88B1E117C4441EE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRadiationCountdownU3Ed__43_System_Collections_IEnumerator_Reset_mC844392567D1FFE149A48CC794AB79608B1EBD0A_RuntimeMethod_var)));
	}
}
// System.Object PickUps/<RadiationCountdown>d__43::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRadiationCountdownU3Ed__43_System_Collections_IEnumerator_get_Current_m09956FDF6ED9A4041B80E6FA34ED5641EF8E8535 (U3CRadiationCountdownU3Ed__43_t776668B70ADAA9189511B0E1A88B1E117C4441EE* __this, const RuntimeMethod* method) 
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
// System.Void PickUps/<BluePotionCountdown>d__44::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBluePotionCountdownU3Ed__44__ctor_mF789FC2B331A20E2B46E72ED267C6DEF0DCFC9C2 (U3CBluePotionCountdownU3Ed__44_t9E00762245013CCB346B4CB5BB04A5B296140323* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PickUps/<BluePotionCountdown>d__44::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBluePotionCountdownU3Ed__44_System_IDisposable_Dispose_mC31FC2FA56D7FC78B81700651FD8EE6E68E25D72 (U3CBluePotionCountdownU3Ed__44_t9E00762245013CCB346B4CB5BB04A5B296140323* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PickUps/<BluePotionCountdown>d__44::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBluePotionCountdownU3Ed__44_MoveNext_mC28F1CCF45530293175E2C15A2EAD77DD81B4823 (U3CBluePotionCountdownU3Ed__44_t9E00762245013CCB346B4CB5BB04A5B296140323* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33BE6E3D894D623FF7A3E2E3ACF63A2678A5F10E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C1E039C237DF540A11C9225178A491B151B3BFA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// playerController.ActivatePickupEffect("isBlue", true);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_4 = V_1;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_5 = L_4->___playerController_21;
		PlayerController_ActivatePickupEffect_m44D7EC7A780EA4FD0D189238715A6D776E5229A3(L_5, _stringLiteral3C1E039C237DF540A11C9225178A491B151B3BFA, (bool)1, NULL);
		// FindCorrectIndicator(name, true);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_6 = V_1;
		String_t* L_7 = __this->___name_3;
		PickUps_FindCorrectIndicator_mC163D6B88C6D46344048150E6DED4EA94534E060(L_6, L_7, (bool)1, NULL);
		// yield return new WaitForSeconds(15);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, (15.0f), NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0055:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// playerController.ActivatePickupEffect("isNotBlue", false);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_9 = V_1;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_10 = L_9->___playerController_21;
		PlayerController_ActivatePickupEffect_m44D7EC7A780EA4FD0D189238715A6D776E5229A3(L_10, _stringLiteral33BE6E3D894D623FF7A3E2E3ACF63A2678A5F10E, (bool)0, NULL);
		// FindCorrectIndicator(name, false);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_11 = V_1;
		String_t* L_12 = __this->___name_3;
		PickUps_FindCorrectIndicator_mC163D6B88C6D46344048150E6DED4EA94534E060(L_11, L_12, (bool)0, NULL);
		// hasPickup = false;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_13 = V_1;
		L_13->___hasPickup_10 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object PickUps/<BluePotionCountdown>d__44::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBluePotionCountdownU3Ed__44_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2FFDD69E91C412E04FDBD17E2E85192557056EAF (U3CBluePotionCountdownU3Ed__44_t9E00762245013CCB346B4CB5BB04A5B296140323* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PickUps/<BluePotionCountdown>d__44::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBluePotionCountdownU3Ed__44_System_Collections_IEnumerator_Reset_m9F23BEF669C962A08B04661BF499A52975206395 (U3CBluePotionCountdownU3Ed__44_t9E00762245013CCB346B4CB5BB04A5B296140323* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBluePotionCountdownU3Ed__44_System_Collections_IEnumerator_Reset_m9F23BEF669C962A08B04661BF499A52975206395_RuntimeMethod_var)));
	}
}
// System.Object PickUps/<BluePotionCountdown>d__44::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBluePotionCountdownU3Ed__44_System_Collections_IEnumerator_get_Current_mA3ED846A14FDBAE6B2D04C793BC30E5F02965C23 (U3CBluePotionCountdownU3Ed__44_t9E00762245013CCB346B4CB5BB04A5B296140323* __this, const RuntimeMethod* method) 
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
// System.Void PickUps/<LightningCountdown>d__45::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLightningCountdownU3Ed__45__ctor_m587710A1FC16E2213AFE6E6C8CBA7630A9D05A76 (U3CLightningCountdownU3Ed__45_t5EFD45A868B1A55538A9C719F54F63E061E137F3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PickUps/<LightningCountdown>d__45::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLightningCountdownU3Ed__45_System_IDisposable_Dispose_m09FD80E2C250FB2B3B642B9922821DB71220388E (U3CLightningCountdownU3Ed__45_t5EFD45A868B1A55538A9C719F54F63E061E137F3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PickUps/<LightningCountdown>d__45::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLightningCountdownU3Ed__45_MoveNext_mCB50BE579831389CF0D3985A5DBFD553E551FAE3 (U3CLightningCountdownU3Ed__45_t5EFD45A868B1A55538A9C719F54F63E061E137F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// FindCorrectIndicator(name, true);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_4 = V_1;
		String_t* L_5 = __this->___name_3;
		PickUps_FindCorrectIndicator_mC163D6B88C6D46344048150E6DED4EA94534E060(L_4, L_5, (bool)1, NULL);
		// CreateLightning();
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_6 = V_1;
		PickUps_CreateLightning_m86361C805E40B27C30419A4CC505D29D7A5F4A69(L_6, NULL);
		// StoreAndSetMoveSpeed(enemy.MoveSpeed, true);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_7 = V_1;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_8 = V_1;
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_9 = L_8->___enemy_6;
		float L_10;
		L_10 = EnemyController_get_MoveSpeed_m4BE7C6B24F0E4D4755D37A549AF246B66353EC16_inline(L_9, NULL);
		PickUps_StoreAndSetMoveSpeed_m1C72680DDA9F045CB47AEF57DDDCB349DEC6BB19(L_7, L_10, (bool)1, NULL);
		// yield return new WaitForSeconds(6);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, (6.0f), NULL);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StoreAndSetMoveSpeed(oldMoveSpeed, false);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_12 = V_1;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_13 = V_1;
		float L_14 = L_13->___oldMoveSpeed_14;
		PickUps_StoreAndSetMoveSpeed_m1C72680DDA9F045CB47AEF57DDDCB349DEC6BB19(L_12, L_14, (bool)0, NULL);
		// FindCorrectIndicator(name, false);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_15 = V_1;
		String_t* L_16 = __this->___name_3;
		PickUps_FindCorrectIndicator_mC163D6B88C6D46344048150E6DED4EA94534E060(L_15, L_16, (bool)0, NULL);
		// hasPickup = false;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_17 = V_1;
		L_17->___hasPickup_10 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object PickUps/<LightningCountdown>d__45::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLightningCountdownU3Ed__45_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m89C0E81CB54651FA6BB5B656CD616BEF525376DC (U3CLightningCountdownU3Ed__45_t5EFD45A868B1A55538A9C719F54F63E061E137F3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PickUps/<LightningCountdown>d__45::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLightningCountdownU3Ed__45_System_Collections_IEnumerator_Reset_m9F30A8B1EB69FA009B620D5B386877B5F526C76C (U3CLightningCountdownU3Ed__45_t5EFD45A868B1A55538A9C719F54F63E061E137F3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLightningCountdownU3Ed__45_System_Collections_IEnumerator_Reset_m9F30A8B1EB69FA009B620D5B386877B5F526C76C_RuntimeMethod_var)));
	}
}
// System.Object PickUps/<LightningCountdown>d__45::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLightningCountdownU3Ed__45_System_Collections_IEnumerator_get_Current_m9B7542BDA69EDBAD5B6E9B18A98AEABCAF7BB469 (U3CLightningCountdownU3Ed__45_t5EFD45A868B1A55538A9C719F54F63E061E137F3* __this, const RuntimeMethod* method) 
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
// System.Void PickUps/<FireCountdown>d__46::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireCountdownU3Ed__46__ctor_mB508622E295029240438E56FED905618C866DA37 (U3CFireCountdownU3Ed__46_t5DB496252598DF02459B5DB66D519E0B4243C9C5* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PickUps/<FireCountdown>d__46::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireCountdownU3Ed__46_System_IDisposable_Dispose_m1019B644F9C52C8AEB069DAA5DB13E6AF42BE0F1 (U3CFireCountdownU3Ed__46_t5DB496252598DF02459B5DB66D519E0B4243C9C5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PickUps/<FireCountdown>d__46::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFireCountdownU3Ed__46_MoveNext_mEE3BF4ABF2216F706CA2CE26E30CF8F61B9D0AE0 (U3CFireCountdownU3Ed__46_t5DB496252598DF02459B5DB66D519E0B4243C9C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// rocketsActive = true;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_4 = V_1;
		L_4->___rocketsActive_17 = (bool)1;
		// FindCorrectIndicator(name, true);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_5 = V_1;
		String_t* L_6 = __this->___name_3;
		PickUps_FindCorrectIndicator_mC163D6B88C6D46344048150E6DED4EA94534E060(L_5, L_6, (bool)1, NULL);
		// yield return new WaitForSeconds(10);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (10.0f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// rocketsActive = false;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_8 = V_1;
		L_8->___rocketsActive_17 = (bool)0;
		// FindCorrectIndicator(name, false);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_9 = V_1;
		String_t* L_10 = __this->___name_3;
		PickUps_FindCorrectIndicator_mC163D6B88C6D46344048150E6DED4EA94534E060(L_9, L_10, (bool)0, NULL);
		// hasPickup = false;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_11 = V_1;
		L_11->___hasPickup_10 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object PickUps/<FireCountdown>d__46::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFireCountdownU3Ed__46_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB07CB58C9557362A3ED022243BADF7D7D0B893E6 (U3CFireCountdownU3Ed__46_t5DB496252598DF02459B5DB66D519E0B4243C9C5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PickUps/<FireCountdown>d__46::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireCountdownU3Ed__46_System_Collections_IEnumerator_Reset_mB83D8314BE09F5D69F1170E75F71B75E1B44D2FC (U3CFireCountdownU3Ed__46_t5DB496252598DF02459B5DB66D519E0B4243C9C5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFireCountdownU3Ed__46_System_Collections_IEnumerator_Reset_mB83D8314BE09F5D69F1170E75F71B75E1B44D2FC_RuntimeMethod_var)));
	}
}
// System.Object PickUps/<FireCountdown>d__46::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFireCountdownU3Ed__46_System_Collections_IEnumerator_get_Current_m121030F29CEC86BD4AE372AE3789C6F76F885399 (U3CFireCountdownU3Ed__46_t5DB496252598DF02459B5DB66D519E0B4243C9C5* __this, const RuntimeMethod* method) 
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
// System.Void PickUps/<RocketSpawnCoroutine>d__47::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRocketSpawnCoroutineU3Ed__47__ctor_mEB7854EBEEE6B0D49D9253EC92CA2670A6442111 (U3CRocketSpawnCoroutineU3Ed__47_tDD89450AC6367BA4A838B2D8F4BD93081FF139ED* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PickUps/<RocketSpawnCoroutine>d__47::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRocketSpawnCoroutineU3Ed__47_System_IDisposable_Dispose_m7575152604DB5EB5B9C10B088E3AC1332D13F6C6 (U3CRocketSpawnCoroutineU3Ed__47_tDD89450AC6367BA4A838B2D8F4BD93081FF139ED* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PickUps/<RocketSpawnCoroutine>d__47::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRocketSpawnCoroutineU3Ed__47_MoveNext_mD311E97DE4DC5D68CE61B623C6112FB6AF010C3D (U3CRocketSpawnCoroutineU3Ed__47_tDD89450AC6367BA4A838B2D8F4BD93081FF139ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_005c;
	}

IL_0020:
	{
		// Instantiate(rocketPrefab, transform.position, Quaternion.identity);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_4 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___rocketPrefab_4;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_6 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_5, L_8, L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0055:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_005c:
	{
		// while (rocketsActive)
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_12 = V_1;
		bool L_13 = L_12->___rocketsActive_17;
		if (L_13)
		{
			goto IL_0020;
		}
	}
	{
		// rocketsCoroutine = null;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_14 = V_1;
		L_14->___rocketsCoroutine_18 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___rocketsCoroutine_18), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
		// }
		return (bool)0;
	}
}
// System.Object PickUps/<RocketSpawnCoroutine>d__47::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRocketSpawnCoroutineU3Ed__47_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m731421FD5572F7105B48B5006A3C302BDE8E3B11 (U3CRocketSpawnCoroutineU3Ed__47_tDD89450AC6367BA4A838B2D8F4BD93081FF139ED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PickUps/<RocketSpawnCoroutine>d__47::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRocketSpawnCoroutineU3Ed__47_System_Collections_IEnumerator_Reset_m8348F5FBD19E77C1EC13DF4E729FE21DEC4D7968 (U3CRocketSpawnCoroutineU3Ed__47_tDD89450AC6367BA4A838B2D8F4BD93081FF139ED* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRocketSpawnCoroutineU3Ed__47_System_Collections_IEnumerator_Reset_m8348F5FBD19E77C1EC13DF4E729FE21DEC4D7968_RuntimeMethod_var)));
	}
}
// System.Object PickUps/<RocketSpawnCoroutine>d__47::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRocketSpawnCoroutineU3Ed__47_System_Collections_IEnumerator_get_Current_m98413440F2BD8650C3A19557D009D1CB111E5D3C (U3CRocketSpawnCoroutineU3Ed__47_tDD89450AC6367BA4A838B2D8F4BD93081FF139ED* __this, const RuntimeMethod* method) 
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
// System.Single PlayerCollisionDetection::get_PushForce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerCollisionDetection_get_PushForce_m44201AC23745EC82C39CA7E5BCC4D3025DFC0E04 (PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1* __this, const RuntimeMethod* method) 
{
	{
		// public float PushForce { get { return pushForce; } set { pushForce = value; } }
		float L_0 = __this->___pushForce_4;
		return L_0;
	}
}
// System.Void PlayerCollisionDetection::set_PushForce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollisionDetection_set_PushForce_mC1BF1E88F8AEEC1D713EE6A97E29382706BECCB3 (PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float PushForce { get { return pushForce; } set { pushForce = value; } }
		float L_0 = ___0_value;
		__this->___pushForce_4 = L_0;
		// public float PushForce { get { return pushForce; } set { pushForce = value; } }
		return;
	}
}
// System.Single PlayerCollisionDetection::get_OldPushForce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerCollisionDetection_get_OldPushForce_m23BE1D297FD5E46E3459C1A5045A1886590B0F24 (PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1* __this, const RuntimeMethod* method) 
{
	{
		// public float OldPushForce { get { return oldPushForce; } }
		float L_0 = __this->___oldPushForce_5;
		return L_0;
	}
}
// System.Void PlayerCollisionDetection::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollisionDetection_OnTriggerEnter_m354A1DE2484D8EADB020CD250C1FF41ED985A65F (PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6_m944CA52B730ADF61BE424836579FB4F4B2B629DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pickUps = FindObjectOfType<PickUps>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_0;
		L_0 = Object_FindObjectOfType_TisPickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6_m944CA52B730ADF61BE424836579FB4F4B2B629DA(Object_FindObjectOfType_TisPickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6_m944CA52B730ADF61BE424836579FB4F4B2B629DA_RuntimeMethod_var);
		__this->___pickUps_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pickUps_7), (void*)L_0);
		// if (!pickUps.HasPickup)
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_1 = __this->___pickUps_7;
		bool L_2;
		L_2 = PickUps_get_HasPickup_m238E0FFF76160889729E37B98F06D0A64F4B748E_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0051;
		}
	}
	{
		// pickUpName = other.gameObject.tag;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___0_other;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		String_t* L_5;
		L_5 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_4, NULL);
		__this->___pickUpName_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pickUpName_6), (void*)L_5);
		// oldPushForce = pushForce;
		float L_6 = __this->___pushForce_4;
		__this->___oldPushForce_5 = L_6;
		// pickUps.ActivateCorrectPickUp(pickUpName);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_7 = __this->___pickUps_7;
		String_t* L_8 = __this->___pickUpName_6;
		PickUps_ActivateCorrectPickUp_m1A88A118808F4E4569440E9968109334DF7DA43D(L_7, L_8, NULL);
		// Destroy(other.gameObject);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9 = ___0_other;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_10, NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void PlayerCollisionDetection::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollisionDetection_OnCollisionEnter_mE2BD6BC5322E63B4112372CBE77CA421B08461EF (PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A_m21C089667D86A61C343003CF090C7E6D355AE728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6_m944CA52B730ADF61BE424836579FB4F4B2B629DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7189CE9E2255CE4BB0CE6A23A3A5499DD741BAEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC578BB9477F0A6CAFF47507A8A3BCE35B086768D);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// pickUps = FindObjectOfType<PickUps>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_0;
		L_0 = Object_FindObjectOfType_TisPickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6_m944CA52B730ADF61BE424836579FB4F4B2B629DA(Object_FindObjectOfType_TisPickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6_m944CA52B730ADF61BE424836579FB4F4B2B629DA_RuntimeMethod_var);
		__this->___pickUps_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pickUps_7), (void*)L_0);
		// if (collision.gameObject.CompareTag("Enemy") || collision.gameObject.CompareTag("Boss") || collision.gameObject.CompareTag("MiniBoss"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_1 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_1, NULL);
		bool L_3;
		L_3 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_2, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (L_3)
		{
			goto IL_0044;
		}
	}
	{
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_4 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_4, NULL);
		bool L_6;
		L_6 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_5, _stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2, NULL);
		if (L_6)
		{
			goto IL_0044;
		}
	}
	{
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_7 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_7, NULL);
		bool L_9;
		L_9 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_8, _stringLiteral7189CE9E2255CE4BB0CE6A23A3A5499DD741BAEF, NULL);
		if (!L_9)
		{
			goto IL_00d0;
		}
	}

IL_0044:
	{
		// if (pickUps.HasPickup)
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_10 = __this->___pickUps_7;
		bool L_11;
		L_11 = PickUps_get_HasPickup_m238E0FFF76160889729E37B98F06D0A64F4B748E_inline(L_10, NULL);
		if (!L_11)
		{
			goto IL_0086;
		}
	}
	{
		// if (collision.gameObject.CompareTag("Enemy"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_12 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_12, NULL);
		bool L_14;
		L_14 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_13, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_14)
		{
			goto IL_0086;
		}
	}
	{
		// if (pickUpName == "Rad")
		String_t* L_15 = __this->___pickUpName_6;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteralC578BB9477F0A6CAFF47507A8A3BCE35B086768D, NULL);
		if (!L_16)
		{
			goto IL_0086;
		}
	}
	{
		// EnemyController enemyController = collision.gameObject.GetComponent<EnemyController>();
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_17 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_17, NULL);
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_19;
		L_19 = GameObject_GetComponent_TisEnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A_m21C089667D86A61C343003CF090C7E6D355AE728(L_18, GameObject_GetComponent_TisEnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A_m21C089667D86A61C343003CF090C7E6D355AE728_RuntimeMethod_var);
		// enemyController.HasTurned = true;
		EnemyController_set_HasTurned_m77E5F1E08E47C7C3F2FBF87DFBBBB860BADB9F03_inline(L_19, (bool)1, NULL);
	}

IL_0086:
	{
		// enemyRb = collision.gameObject.GetComponent<Rigidbody>();
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_20 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_20, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_22;
		L_22 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_21, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->___enemyRb_8 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyRb_8), (void*)L_22);
		// Vector3 playerPushForce = collision.gameObject.transform.position - transform.position;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_23 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_23, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_26, L_28, NULL);
		V_0 = L_29;
		// enemyRb.AddForce(playerPushForce * pushForce, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_30 = __this->___enemyRb_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_0;
		float L_32 = __this->___pushForce_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_31, L_32, NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_30, L_33, 1, NULL);
	}

IL_00d0:
	{
		// }
		return;
	}
}
// System.Void PlayerCollisionDetection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollisionDetection__ctor_m8551D716275F347CF2270D3345F070284AA72665 (PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1* __this, const RuntimeMethod* method) 
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
// System.Single PlayerController::get_Speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerController_get_Speed_mCE7012C761D33FBF6703F7EF81533D6758886269 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// public float Speed { get { return speed; } set { speed = value; } }
		float L_0 = __this->___speed_4;
		return L_0;
	}
}
// System.Void PlayerController::set_Speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_set_Speed_mB072C37579ADBC4230B5363CFD32FAA43901FE5B (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Speed { get { return speed; } set { speed = value; } }
		float L_0 = ___0_value;
		__this->___speed_4 = L_0;
		// public float Speed { get { return speed; } set { speed = value; } }
		return;
	}
}
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m1D83076E8B136A71051F2F02545EE04947D3A8CF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisDeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B_m04580D75F057F82AB38D94F59616798DDE147ABD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3989B163590020DC999FB654F9D035CB6830D95);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// playerRB = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___playerRB_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerRB_7), (void*)L_0);
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_9), (void*)L_1);
		// focalPoint = GameObject.Find("Focal Point");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralB3989B163590020DC999FB654F9D035CB6830D95, NULL);
		__this->___focalPoint_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___focalPoint_8), (void*)L_2);
		// death = FindObjectOfType<DeathHandler>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* L_3;
		L_3 = Object_FindObjectOfType_TisDeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B_m04580D75F057F82AB38D94F59616798DDE147ABD(Object_FindObjectOfType_TisDeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B_m04580D75F057F82AB38D94F59616798DDE147ABD_RuntimeMethod_var);
		__this->___death_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___death_10), (void*)L_3);
		// Vector3 startPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_4;
		// transform.position = startPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_6, NULL);
		// speed = 5f;
		__this->___speed_4 = (5.0f);
		// oldScale = transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_7, NULL);
		__this->___oldScale_6 = L_8;
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m1F4051EB5BCBCCE5EEE2E3E49B7E278C3B14EC33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// CheckIfBlue();
		PlayerController_CheckIfBlue_m2E0E0A6D179BCD2384BD1492A116E068B5D57D65(__this, NULL);
		// Move();
		PlayerController_Move_m68BFC8B882D42955A212B23E7D1DDD56CC87DB09(__this, NULL);
		// KillPlayer();
		PlayerController_KillPlayer_m9B3C9E534298B12DB1675EEC00473D9B70D6E4C3(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::CheckIfBlue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_CheckIfBlue_m2E0E0A6D179BCD2384BD1492A116E068B5D57D65 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// if (isBlue)
		bool L_0 = __this->___isBlue_5;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// transform.localScale = new Vector3(3, 3, 3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (3.0f), (3.0f), (3.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_2, NULL);
		return;
	}

IL_0028:
	{
		// transform.localScale = oldScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___oldScale_6;
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Move_m68BFC8B882D42955A212B23E7D1DDD56CC87DB09 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float forwardInput = Input.GetAxis("Vertical");
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_0 = L_0;
		// playerRB.AddForce(focalPoint.transform.forward * speed * forwardInput);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___playerRB_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___focalPoint_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_3, NULL);
		float L_5 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		float L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_1, L_8, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::KillPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_KillPlayer_m9B3C9E534298B12DB1675EEC00473D9B70D6E4C3 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transform.position.y < -10)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		if ((!(((float)L_2) < ((float)(-10.0f)))))
		{
			goto IL_002d;
		}
	}
	{
		// death.PlayerHasDied();
		DeathHandler_tB51B4A9FBE0FC620A316D5D90717DCFDE136765B* L_3 = __this->___death_10;
		DeathHandler_PlayerHasDied_mD5B3C36F1CE70E867522907F5F7BF44C7F183997(L_3, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void PlayerController::ResetPlayerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ResetPlayerPosition_mFF37C94BD042F36000650CE40C0C77702D8EBF2A (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// playerRB.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___playerRB_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_0, L_1, NULL);
		// playerRB.angularVelocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->___playerRB_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_2, L_3, NULL);
		// Vector3 startPos = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		V_0 = L_4;
		// transform.position = startPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::ActivatePickupEffect(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ActivatePickupEffect_m44D7EC7A780EA4FD0D189238715A6D776E5229A3 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, String_t* ___0_whichOne, bool ___1_activate, const RuntimeMethod* method) 
{
	{
		// animator.SetBool(whichOne, true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_9;
		String_t* L_1 = ___0_whichOne;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, L_1, (bool)1, NULL);
		// StartCoroutine(ResetTrigger(whichOne));
		String_t* L_2 = ___0_whichOne;
		RuntimeObject* L_3;
		L_3 = PlayerController_ResetTrigger_m9030DB1BFC87B451B746FA1AE5E2CDD0EA2E16F9(__this, L_2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// isBlue = activate;
		bool L_5 = ___1_activate;
		__this->___isBlue_5 = L_5;
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerController::ResetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_ResetTrigger_m9030DB1BFC87B451B746FA1AE5E2CDD0EA2E16F9 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CResetTriggerU3Ed__17_t20DE2E10459ACE80F6A8663DD9496BFA6DCBFB15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CResetTriggerU3Ed__17_t20DE2E10459ACE80F6A8663DD9496BFA6DCBFB15* L_0 = (U3CResetTriggerU3Ed__17_t20DE2E10459ACE80F6A8663DD9496BFA6DCBFB15*)il2cpp_codegen_object_new(U3CResetTriggerU3Ed__17_t20DE2E10459ACE80F6A8663DD9496BFA6DCBFB15_il2cpp_TypeInfo_var);
		U3CResetTriggerU3Ed__17__ctor_m5BAF8EA05DA40C881960800ADA4FA7DDE030A2AD(L_0, 0, NULL);
		U3CResetTriggerU3Ed__17_t20DE2E10459ACE80F6A8663DD9496BFA6DCBFB15* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CResetTriggerU3Ed__17_t20DE2E10459ACE80F6A8663DD9496BFA6DCBFB15* L_2 = L_1;
		String_t* L_3 = ___0_name;
		L_2->___name_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___name_3), (void*)L_3);
		return L_2;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
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
// System.Void PlayerController/<ResetTrigger>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetTriggerU3Ed__17__ctor_m5BAF8EA05DA40C881960800ADA4FA7DDE030A2AD (U3CResetTriggerU3Ed__17_t20DE2E10459ACE80F6A8663DD9496BFA6DCBFB15* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<ResetTrigger>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetTriggerU3Ed__17_System_IDisposable_Dispose_m0DFCD84B8348B08F62B8B693F3E6AA4AFEC14442 (U3CResetTriggerU3Ed__17_t20DE2E10459ACE80F6A8663DD9496BFA6DCBFB15* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<ResetTrigger>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CResetTriggerU3Ed__17_MoveNext_mAFC5D3A96685ED16CB8BF1DBB7A899B5F64E6799 (U3CResetTriggerU3Ed__17_t20DE2E10459ACE80F6A8663DD9496BFA6DCBFB15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___U3CU3E4__this_2;
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
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(2.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (2.5f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// animator.SetBool(name, false);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_5 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = L_5->___animator_9;
		String_t* L_7 = __this->___name_3;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_6, L_7, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<ResetTrigger>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CResetTriggerU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB0E22E4ED94F33067495FA917F121FC3A66D064E (U3CResetTriggerU3Ed__17_t20DE2E10459ACE80F6A8663DD9496BFA6DCBFB15* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<ResetTrigger>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetTriggerU3Ed__17_System_Collections_IEnumerator_Reset_mC80747CE247359AEAC78421E951C46E057C21085 (U3CResetTriggerU3Ed__17_t20DE2E10459ACE80F6A8663DD9496BFA6DCBFB15* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResetTriggerU3Ed__17_System_Collections_IEnumerator_Reset_mC80747CE247359AEAC78421E951C46E057C21085_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<ResetTrigger>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CResetTriggerU3Ed__17_System_Collections_IEnumerator_get_Current_m30BAC1EAB19AB921279D710A4F53D186D66314CC (U3CResetTriggerU3Ed__17_t20DE2E10459ACE80F6A8663DD9496BFA6DCBFB15* __this, const RuntimeMethod* method) 
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
// System.Void RotateCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateCamera_Update_m1312BAEDB4E83B914E9FF4E902C625B78C596A20 (RotateCamera_t53F504AA88DED82ADEEFFBDF7388D4FF3EFF133F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float horizontalInput = Input.GetAxis("Horizontal");
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_0;
		// transform.Rotate(Vector3.up, horizontalInput * Time.deltaTime * rotationSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_3 = V_0;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_5 = __this->___rotationSpeed_4;
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_1, L_2, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5)), NULL);
		// }
		return;
	}
}
// System.Void RotateCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateCamera__ctor_m05430CBDE57A93B9C065D6CE0EFA55BD58891D76 (RotateCamera_t53F504AA88DED82ADEEFFBDF7388D4FF3EFF133F* __this, const RuntimeMethod* method) 
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
// System.Single Rockets::get_MoveSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rockets_get_MoveSpeed_m155EA453EBB496E26DCD6837F358728DB6EAA92B (Rockets_t76F3FB82907F55BCF3B172612C762644775CFF9A* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveSpeed { get { return moveSpeed; } set { moveSpeed = value; } }
		float L_0 = __this->___moveSpeed_4;
		return L_0;
	}
}
// System.Void Rockets::set_MoveSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rockets_set_MoveSpeed_m4801CF710AF6AD3247196ECEB379D6AAEBD2B5DE (Rockets_t76F3FB82907F55BCF3B172612C762644775CFF9A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MoveSpeed { get { return moveSpeed; } set { moveSpeed = value; } }
		float L_0 = ___0_value;
		__this->___moveSpeed_4 = L_0;
		// public float MoveSpeed { get { return moveSpeed; } set { moveSpeed = value; } }
		return;
	}
}
// System.Void Rockets::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rockets_Start_mCE194D7A7F4239F1147259B9CECF814E0B4FD828 (Rockets_t76F3FB82907F55BCF3B172612C762644775CFF9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6_m944CA52B730ADF61BE424836579FB4F4B2B629DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7189CE9E2255CE4BB0CE6A23A3A5499DD741BAEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_1 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_2 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_3 = NULL;
	float V_4 = 0.0f;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_5 = NULL;
	int32_t V_6 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_7 = NULL;
	float V_8 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		// pickUps = FindObjectOfType<PickUps>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_0;
		L_0 = Object_FindObjectOfType_TisPickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6_m944CA52B730ADF61BE424836579FB4F4B2B629DA(Object_FindObjectOfType_TisPickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6_m944CA52B730ADF61BE424836579FB4F4B2B629DA_RuntimeMethod_var);
		__this->___pickUps_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pickUps_7), (void*)L_0);
		// moveSpeed = 10;
		__this->___moveSpeed_4 = (10.0f);
		// GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		V_0 = L_1;
		// GameObject[] bosses = GameObject.FindGameObjectsWithTag("Boss");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2;
		L_2 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2, NULL);
		V_1 = L_2;
		// GameObject[] miniBoss = GameObject.FindGameObjectsWithTag("MiniBoss");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3;
		L_3 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral7189CE9E2255CE4BB0CE6A23A3A5499DD741BAEF, NULL);
		V_2 = L_3;
		// GameObject[] allEnemies = new GameObject[enemies.Length + bosses.Length + miniBoss.Length];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), ((int32_t)(((RuntimeArray*)L_5)->max_length)))), ((int32_t)(((RuntimeArray*)L_6)->max_length)))));
		V_3 = L_7;
		// enemies.CopyTo(allEnemies, 0);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = V_3;
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_8, (RuntimeArray*)L_9, 0, NULL);
		// bosses.CopyTo(allEnemies, enemies.Length);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = V_0;
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_10, (RuntimeArray*)L_11, ((int32_t)(((RuntimeArray*)L_12)->max_length)), NULL);
		// miniBoss.CopyTo(allEnemies, enemies.Length + bosses.Length);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = V_1;
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_15)->max_length)), ((int32_t)(((RuntimeArray*)L_16)->max_length)))), NULL);
		// if (allEnemies.Length > 0)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = V_3;
		if (!(((RuntimeArray*)L_17)->max_length))
		{
			goto IL_012f;
		}
	}
	{
		// float minDistance = Mathf.Infinity;
		V_4 = (std::numeric_limits<float>::infinity());
		// foreach (GameObject enemy in allEnemies)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = V_3;
		V_5 = L_18;
		V_6 = 0;
		goto IL_00c0;
	}

IL_007e:
	{
		// foreach (GameObject enemy in allEnemies)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = V_5;
		int32_t L_20 = V_6;
		int32_t L_21 = L_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_7 = L_22;
		// float distance = Vector3.Distance(transform.position, enemy.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		float L_28;
		L_28 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_24, L_27, NULL);
		V_8 = L_28;
		// if (distance < minDistance)
		float L_29 = V_8;
		float L_30 = V_4;
		if ((!(((float)L_29) < ((float)L_30))))
		{
			goto IL_00ba;
		}
	}
	{
		// minDistance = distance;
		float L_31 = V_8;
		V_4 = L_31;
		// target = enemy.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = V_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_32, NULL);
		__this->___target_6 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_6), (void*)L_33);
	}

IL_00ba:
	{
		int32_t L_34 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00c0:
	{
		// foreach (GameObject enemy in allEnemies)
		int32_t L_35 = V_6;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_36 = V_5;
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_007e;
		}
	}
	{
		// if (target != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = __this->___target_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_37, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_38)
		{
			goto IL_0135;
		}
	}
	{
		// rocketRb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_39;
		L_39 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rocketRb_5 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rocketRb_5), (void*)L_39);
		// Vector3 lookDirection = (target.position - transform.position).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = __this->___target_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_40, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_41, L_43, NULL);
		V_10 = L_44;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_10), NULL);
		V_9 = L_45;
		// rocketRb.AddForce(lookDirection * moveSpeed, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_46 = __this->___rocketRb_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_9;
		float L_48 = __this->___moveSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_47, L_48, NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_46, L_49, 1, NULL);
		// StartCoroutine(SelfDestructAfterDelay());
		RuntimeObject* L_50;
		L_50 = Rockets_SelfDestructAfterDelay_m8F8A3C568EDCD97158DEB9378748A055617FCF48(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_51;
		L_51 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_50, NULL);
		return;
	}

IL_012f:
	{
		// SelfDestruct();
		Rockets_SelfDestruct_m592D26DB76E9EB429270680856F084DA846F684D(__this, NULL);
	}

IL_0135:
	{
		// }
		return;
	}
}
// System.Void Rockets::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rockets_OnCollisionEnter_mBEFAF3AE3E90A8FABDBD59C27FAEBD2593C2F9BD (Rockets_t76F3FB82907F55BCF3B172612C762644775CFF9A* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7189CE9E2255CE4BB0CE6A23A3A5499DD741BAEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag("Enemy") || other.gameObject.CompareTag("Boss") || other.gameObject.CompareTag("MiniBoss"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_other;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (L_2)
		{
			goto IL_0036;
		}
	}
	{
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_3 = ___0_other;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_3, NULL);
		bool L_5;
		L_5 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_4, _stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2, NULL);
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_6 = ___0_other;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_6, NULL);
		bool L_8;
		L_8 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_7, _stringLiteral7189CE9E2255CE4BB0CE6A23A3A5499DD741BAEF, NULL);
		if (!L_8)
		{
			goto IL_0041;
		}
	}

IL_0036:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_9, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Rockets::SelfDestruct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rockets_SelfDestruct_m592D26DB76E9EB429270680856F084DA846F684D (Rockets_t76F3FB82907F55BCF3B172612C762644775CFF9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pickUps.RocketsActive = false;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_0 = __this->___pickUps_7;
		PickUps_set_RocketsActive_m350FF558ED7FE515F7F2770C3067533514F1C036_inline(L_0, (bool)0, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Rockets::SelfDestructAfterDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Rockets_SelfDestructAfterDelay_m8F8A3C568EDCD97158DEB9378748A055617FCF48 (Rockets_t76F3FB82907F55BCF3B172612C762644775CFF9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSelfDestructAfterDelayU3Ed__10_t1F021E9748DCF49F960FBC510B7E26DDA8B794AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSelfDestructAfterDelayU3Ed__10_t1F021E9748DCF49F960FBC510B7E26DDA8B794AA* L_0 = (U3CSelfDestructAfterDelayU3Ed__10_t1F021E9748DCF49F960FBC510B7E26DDA8B794AA*)il2cpp_codegen_object_new(U3CSelfDestructAfterDelayU3Ed__10_t1F021E9748DCF49F960FBC510B7E26DDA8B794AA_il2cpp_TypeInfo_var);
		U3CSelfDestructAfterDelayU3Ed__10__ctor_m4C536DACEE71807D823663230BB9A524922C0836(L_0, 0, NULL);
		U3CSelfDestructAfterDelayU3Ed__10_t1F021E9748DCF49F960FBC510B7E26DDA8B794AA* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Rockets::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rockets__ctor_m870DB6879D9E4010D104138767294E0C0F7553FC (Rockets_t76F3FB82907F55BCF3B172612C762644775CFF9A* __this, const RuntimeMethod* method) 
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
// System.Void Rockets/<SelfDestructAfterDelay>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelfDestructAfterDelayU3Ed__10__ctor_m4C536DACEE71807D823663230BB9A524922C0836 (U3CSelfDestructAfterDelayU3Ed__10_t1F021E9748DCF49F960FBC510B7E26DDA8B794AA* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Rockets/<SelfDestructAfterDelay>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelfDestructAfterDelayU3Ed__10_System_IDisposable_Dispose_m040C06B6DD38CF36C716FBBD5B2E30D57707C069 (U3CSelfDestructAfterDelayU3Ed__10_t1F021E9748DCF49F960FBC510B7E26DDA8B794AA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Rockets/<SelfDestructAfterDelay>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSelfDestructAfterDelayU3Ed__10_MoveNext_m9B46963E493DD9EF5DFD0E2A7A338F931060EB16 (U3CSelfDestructAfterDelayU3Ed__10_t1F021E9748DCF49F960FBC510B7E26DDA8B794AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Rockets_t76F3FB82907F55BCF3B172612C762644775CFF9A* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Rockets_t76F3FB82907F55BCF3B172612C762644775CFF9A* L_1 = __this->___U3CU3E4__this_2;
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
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy(gameObject);
		Rockets_t76F3FB82907F55BCF3B172612C762644775CFF9A* L_5 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Rockets/<SelfDestructAfterDelay>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelfDestructAfterDelayU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6ECDB87DF553C34F567602E0650D5DF037B8251F (U3CSelfDestructAfterDelayU3Ed__10_t1F021E9748DCF49F960FBC510B7E26DDA8B794AA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Rockets/<SelfDestructAfterDelay>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelfDestructAfterDelayU3Ed__10_System_Collections_IEnumerator_Reset_m81D5B401505847CB2E64568F86B3BAC4DBD6B06E (U3CSelfDestructAfterDelayU3Ed__10_t1F021E9748DCF49F960FBC510B7E26DDA8B794AA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSelfDestructAfterDelayU3Ed__10_System_Collections_IEnumerator_Reset_m81D5B401505847CB2E64568F86B3BAC4DBD6B06E_RuntimeMethod_var)));
	}
}
// System.Object Rockets/<SelfDestructAfterDelay>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelfDestructAfterDelayU3Ed__10_System_Collections_IEnumerator_get_Current_m1AF5BDC5E9906A07B71D49371D6D160D26DCA5B5 (U3CSelfDestructAfterDelayU3Ed__10_t1F021E9748DCF49F960FBC510B7E26DDA8B794AA* __this, const RuntimeMethod* method) 
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
// System.Void SpawnManager::set_PlayerChoosingPowerup(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_set_PlayerChoosingPowerup_m5971DB24BE2533A302565DEA5750DDF556437541 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool PlayerChoosingPowerup { set { playerChoosingPowerup = value; } }
		bool L_0 = ___0_value;
		__this->___playerChoosingPowerup_13 = L_0;
		// public bool PlayerChoosingPowerup { set { playerChoosingPowerup = value; } }
		return;
	}
}
// System.Int32 SpawnManager::get_OverallRoundNum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpawnManager_get_OverallRoundNum_mFF04CC5C30F4B2C6133FFC8D85516E773320D9AC (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	{
		// public int OverallRoundNum { get { return overallRoundNum; } }
		int32_t L_0 = __this->___overallRoundNum_21;
		return L_0;
	}
}
// System.Void SpawnManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_Start_m65C9EA67649948222CFF4FBBF77BE2319D813DAF (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6_m944CA52B730ADF61BE424836579FB4F4B2B629DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_m1DB5C5E1929C3A8C2124F9B79F1F90AA47BAD2E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisUIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_mAC0AAC10F1B403FC3FAF0DF9338BFB3886D58D7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManager = FindObjectOfType<GameManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40(Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var);
		__this->___gameManager_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_18), (void*)L_0);
		// uiController = FindObjectOfType<UIController>();
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_1;
		L_1 = Object_FindObjectOfType_TisUIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_mAC0AAC10F1B403FC3FAF0DF9338BFB3886D58D7D(Object_FindObjectOfType_TisUIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_mAC0AAC10F1B403FC3FAF0DF9338BFB3886D58D7D_RuntimeMethod_var);
		__this->___uiController_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uiController_17), (void*)L_1);
		// playerController = FindObjectOfType<PlayerController>();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_2;
		L_2 = Object_FindObjectOfType_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_m1DB5C5E1929C3A8C2124F9B79F1F90AA47BAD2E9(Object_FindObjectOfType_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_m1DB5C5E1929C3A8C2124F9B79F1F90AA47BAD2E9_RuntimeMethod_var);
		__this->___playerController_19 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerController_19), (void*)L_2);
		// pickups = FindObjectOfType<PickUps>();
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_3;
		L_3 = Object_FindObjectOfType_TisPickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6_m944CA52B730ADF61BE424836579FB4F4B2B629DA(Object_FindObjectOfType_TisPickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6_m944CA52B730ADF61BE424836579FB4F4B2B629DA_RuntimeMethod_var);
		__this->___pickups_20 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pickups_20), (void*)L_3);
		// playerChoosingPowerup = true;
		__this->___playerChoosingPowerup_13 = (bool)1;
		// playerDied = false;
		__this->___playerDied_14 = (bool)0;
		// }
		return;
	}
}
// System.Void SpawnManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_Update_mD714BA3EADCC182FB7A93B9DE347D727E3A1BC53 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!playerDied)
		bool L_0 = __this->___playerDied_14;
		if (L_0)
		{
			goto IL_006d;
		}
	}
	{
		// if (activeEnemies.Count == 0 && gameManager.IsPlaying)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___activeEnemies_15;
		int32_t L_2;
		L_2 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_1, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3 = __this->___gameManager_18;
		bool L_4;
		L_4 = GameManager_get_IsPlaying_m2FCB423637D8FE01E5EF3CE1FF8A3D0887750786_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		// pauseTime = true;
		__this->___pauseTime_27 = (bool)1;
		// playerController.ResetPlayerPosition();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_5 = __this->___playerController_19;
		PlayerController_ResetPlayerPosition_mFF37C94BD042F36000650CE40C0C77702D8EBF2A(L_5, NULL);
		// ShowCorrectCanvas();
		SpawnManager_ShowCorrectCanvas_m5182C3353EAAD6B06D80A99749A757DBE02EF447(__this, NULL);
		goto IL_0043;
	}

IL_003c:
	{
		// pauseTime = false;
		__this->___pauseTime_27 = (bool)0;
	}

IL_0043:
	{
		// if (!pauseTime && gameManager.IsPlaying)
		bool L_6 = __this->___pauseTime_27;
		if (L_6)
		{
			goto IL_005e;
		}
	}
	{
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = __this->___gameManager_18;
		bool L_8;
		L_8 = GameManager_get_IsPlaying_m2FCB423637D8FE01E5EF3CE1FF8A3D0887750786_inline(L_7, NULL);
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		// PickupTimer();
		SpawnManager_PickupTimer_mDA6C93B17307689793D1E9D4770872FE88DAFA66(__this, NULL);
	}

IL_005e:
	{
		// if (!playerChoosingPowerup)
		bool L_9 = __this->___playerChoosingPowerup_13;
		if (L_9)
		{
			goto IL_0073;
		}
	}
	{
		// InstantiateCorrectEnemy();
		SpawnManager_InstantiateCorrectEnemy_m08BF14585A32AA34611658CE79ECB949D3FDF301(__this, NULL);
		return;
	}

IL_006d:
	{
		// CheckForActive();
		SpawnManager_CheckForActive_m6EC7718EE89EB4A7C8339A078C238882A507B785(__this, NULL);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void SpawnManager::ShowCorrectCanvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_ShowCorrectCanvas_m5182C3353EAAD6B06D80A99749A757DBE02EF447 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	{
		// if (!uiController.PlayerInMenu)
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_0 = __this->___uiController_17;
		bool L_1;
		L_1 = UIController_get_PlayerInMenu_mC5FDF020D7A7D4DFF8D7C8AD931E885B450959EE_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0042;
		}
	}
	{
		// if (overallRoundNum % 5 == 0 && overallRoundNum != 0)
		int32_t L_2 = __this->___overallRoundNum_21;
		if (((int32_t)(L_2%5)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = __this->___overallRoundNum_21;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// uiController.ActivateCorrectCanvas(1, true);
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_4 = __this->___uiController_17;
		UIController_ActivateCorrectCanvas_m48A9A563EC670DA362E4D0FA643096F3F92C7AFC(L_4, 1, (bool)1, NULL);
		return;
	}

IL_002d:
	{
		// else if (overallRoundNum != 0)
		int32_t L_5 = __this->___overallRoundNum_21;
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		// uiController.ActivateCorrectCanvas(2, true);
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_6 = __this->___uiController_17;
		UIController_ActivateCorrectCanvas_m48A9A563EC670DA362E4D0FA643096F3F92C7AFC(L_6, 2, (bool)1, NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void SpawnManager::PickupTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_PickupTimer_mDA6C93B17307689793D1E9D4770872FE88DAFA66 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	{
		// timeSinceLastPickupSpawn += Time.deltaTime;
		float L_0 = __this->___timeSinceLastPickupSpawn_28;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timeSinceLastPickupSpawn_28 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (timeSinceLastPickupSpawn > 15)
		float L_2 = __this->___timeSinceLastPickupSpawn_28;
		if ((!(((float)L_2) > ((float)(15.0f)))))
		{
			goto IL_0030;
		}
	}
	{
		// timeSinceLastPickupSpawn = 0;
		__this->___timeSinceLastPickupSpawn_28 = (0.0f);
		// PickUpProbability();
		SpawnManager_PickUpProbability_mA27B32308ECABA2067739A3869C77455835E377A(__this, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void SpawnManager::InstantiateCorrectEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_InstantiateCorrectEnemy_m08BF14585A32AA34611658CE79ECB949D3FDF301 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (activeEnemies.Count == 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___activeEnemies_15;
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		// overallRoundNum++;
		int32_t L_2 = __this->___overallRoundNum_21;
		__this->___overallRoundNum_21 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// StartCoroutine(UpdateRound());
		RuntimeObject* L_3;
		L_3 = SpawnManager_UpdateRound_m47F7D502D2127D4F7A8D5FA44B9637D7CFCE52AC(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SpawnManager::UpdateRound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnManager_UpdateRound_m47F7D502D2127D4F7A8D5FA44B9637D7CFCE52AC (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdateRoundU3Ed__39_t2A7B0383C0335B7107070CBBB3FB128FDCD56343_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdateRoundU3Ed__39_t2A7B0383C0335B7107070CBBB3FB128FDCD56343* L_0 = (U3CUpdateRoundU3Ed__39_t2A7B0383C0335B7107070CBBB3FB128FDCD56343*)il2cpp_codegen_object_new(U3CUpdateRoundU3Ed__39_t2A7B0383C0335B7107070CBBB3FB128FDCD56343_il2cpp_TypeInfo_var);
		U3CUpdateRoundU3Ed__39__ctor_mE12FA52C59BCDEB29EDE02EADA70BE05ED4E1B4D(L_0, 0, NULL);
		U3CUpdateRoundU3Ed__39_t2A7B0383C0335B7107070CBBB3FB128FDCD56343* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SpawnManager::CheckForActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_CheckForActive_m6EC7718EE89EB4A7C8339A078C238882A507B785 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (activeEnemies.Count > 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___activeEnemies_15;
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		// foreach (GameObject enemy in activeEnemies)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___activeEnemies_15;
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_3;
		L_3 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_2, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_001c_1:
			{
				// foreach (GameObject enemy in activeEnemies)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
				L_4 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// Destroy(enemy);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
			}

IL_0028_1:
			{
				// foreach (GameObject enemy in activeEnemies)
				bool L_5;
				L_5 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// if (activePickup.Count > 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___activePickup_16;
		int32_t L_7;
		L_7 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_6, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0082;
		}
	}
	{
		// foreach (GameObject pickup in activePickup)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->___activePickup_16;
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_9;
		L_9 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_8, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0074:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0069_1;
			}

IL_005d_1:
			{
				// foreach (GameObject pickup in activePickup)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// Destroy(pickup);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_10, NULL);
			}

IL_0069_1:
			{
				// foreach (GameObject pickup in activePickup)
				bool L_11;
				L_11 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_005d_1;
				}
			}
			{
				goto IL_0082;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void SpawnManager::ActivateBossFight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_ActivateBossFight_m91C374AD905288C8A0EC7C3E3545DDDEEFB4638A (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// bossRoundNum++;
		int32_t L_0 = __this->___bossRoundNum_23;
		__this->___bossRoundNum_23 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// miniBossRoundNum++;
		int32_t L_1 = __this->___miniBossRoundNum_24;
		__this->___miniBossRoundNum_24 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// int bossNum = 1;
		V_0 = 1;
		// int bodyguardNum = 2;
		V_1 = 2;
		// int minionsNum = 7;
		V_2 = 7;
		// SpawnEnemyWave(bossNum * bossRoundNum, bossPrefab);
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___bossRoundNum_23;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___bossPrefab_5;
		SpawnManager_SpawnEnemyWave_m6609FA4A29FE60DF9176EC8D4BE6471F1449560B(__this, ((int32_t)il2cpp_codegen_multiply(L_2, L_3)), L_4, NULL);
		// SpawnEnemyWave(bodyguardNum * bossRoundNum, bodyguardPrefab);
		int32_t L_5 = V_1;
		int32_t L_6 = __this->___bossRoundNum_23;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___bodyguardPrefab_4;
		SpawnManager_SpawnEnemyWave_m6609FA4A29FE60DF9176EC8D4BE6471F1449560B(__this, ((int32_t)il2cpp_codegen_multiply(L_5, L_6)), L_7, NULL);
		// SpawnEnemyWave(minionsNum * bossRoundNum, minionPrefab);
		int32_t L_8 = V_2;
		int32_t L_9 = __this->___bossRoundNum_23;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___minionPrefab_9;
		SpawnManager_SpawnEnemyWave_m6609FA4A29FE60DF9176EC8D4BE6471F1449560B(__this, ((int32_t)il2cpp_codegen_multiply(L_8, L_9)), L_10, NULL);
		// }
		return;
	}
}
// System.Void SpawnManager::ActivateMiniBossFight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_ActivateMiniBossFight_m08E0E548A19D2C263F23D07DC027EED9BEA91BDD (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// miniBossRoundNum++;
		int32_t L_0 = __this->___miniBossRoundNum_24;
		__this->___miniBossRoundNum_24 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// int miniBossNum = 1;
		V_0 = 1;
		// int henchmanNum = 1;
		V_1 = 1;
		// int minionsNum = 3;
		V_2 = 3;
		// SpawnEnemyWave(miniBossNum * miniBossRoundNum, miniBossPrefab);
		int32_t L_1 = V_0;
		int32_t L_2 = __this->___miniBossRoundNum_24;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___miniBossPrefab_8;
		SpawnManager_SpawnEnemyWave_m6609FA4A29FE60DF9176EC8D4BE6471F1449560B(__this, ((int32_t)il2cpp_codegen_multiply(L_1, L_2)), L_3, NULL);
		// SpawnEnemyWave(henchmanNum * miniBossRoundNum, henchmanPrefab);
		int32_t L_4 = V_1;
		int32_t L_5 = __this->___miniBossRoundNum_24;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___henchmanPrefab_7;
		SpawnManager_SpawnEnemyWave_m6609FA4A29FE60DF9176EC8D4BE6471F1449560B(__this, ((int32_t)il2cpp_codegen_multiply(L_4, L_5)), L_6, NULL);
		// SpawnEnemyWave(minionsNum * miniBossRoundNum, minionPrefab);
		int32_t L_7 = V_2;
		int32_t L_8 = __this->___miniBossRoundNum_24;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___minionPrefab_9;
		SpawnManager_SpawnEnemyWave_m6609FA4A29FE60DF9176EC8D4BE6471F1449560B(__this, ((int32_t)il2cpp_codegen_multiply(L_7, L_8)), L_9, NULL);
		// }
		return;
	}
}
// System.Void SpawnManager::ActivateBruteEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_ActivateBruteEnemy_m3747D233AC589DBC149413AB4BABF9AE0161ED2F (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int lastDigit = overallRoundNum % 10;
		int32_t L_0 = __this->___overallRoundNum_21;
		V_0 = ((int32_t)(L_0%((int32_t)10)));
		// bruteRoundNum = lastDigit;
		int32_t L_1 = V_0;
		__this->___bruteRoundNum_22 = L_1;
		// SpawnEnemyWave(bruteRoundNum, brutePrefab);
		int32_t L_2 = __this->___bruteRoundNum_22;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___brutePrefab_6;
		SpawnManager_SpawnEnemyWave_m6609FA4A29FE60DF9176EC8D4BE6471F1449560B(__this, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void SpawnManager::SpawnEnemyWave(System.Int32,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_SpawnEnemyWave_m6609FA4A29FE60DF9176EC8D4BE6471F1449560B (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, int32_t ___0_enemiesToSpawn, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_prefab, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyCollisionDetection_t1BC70DA0EF964D2A73273BB25A2DDE939B13CBE0_m5C9FDA9FE859B512074D83F2B90ECC022E0004D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A_m21C089667D86A61C343003CF090C7E6D355AE728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// for (int i = 0; i < enemiesToSpawn; i++)
		V_0 = 0;
		goto IL_0096;
	}

IL_0007:
	{
		// if (prefab == brutePrefab)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___1_prefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___brutePrefab_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		// GameObject bruteEnemy = Instantiate(prefab, GenerateSpawnPos(), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___1_prefab;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = SpawnManager_GenerateSpawnPos_m2C3AF7C670BBE22D7C82185225176EF11AD5933B(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_3, L_4, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_1 = L_6;
		// bruteEnemy.GetComponent<EnemyController>().MoveSpeed += 0.08f * bossRoundNum;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_1;
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_8;
		L_8 = GameObject_GetComponent_TisEnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A_m21C089667D86A61C343003CF090C7E6D355AE728(L_7, GameObject_GetComponent_TisEnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A_m21C089667D86A61C343003CF090C7E6D355AE728_RuntimeMethod_var);
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_9 = L_8;
		float L_10;
		L_10 = EnemyController_get_MoveSpeed_m4BE7C6B24F0E4D4755D37A549AF246B66353EC16_inline(L_9, NULL);
		int32_t L_11 = __this->___bossRoundNum_23;
		EnemyController_set_MoveSpeed_mAF1084EEBE69866A6DD6D0454277628BBB373C33_inline(L_9, ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply((0.0799999982f), ((float)L_11))))), NULL);
		// activeEnemies.Add(bruteEnemy);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = __this->___activeEnemies_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_1;
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_12, L_13, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		goto IL_0092;
	}

IL_0054:
	{
		// GameObject newEnemy = Instantiate(prefab, GenerateSpawnPos(), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = ___1_prefab;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = SpawnManager_GenerateSpawnPos_m2C3AF7C670BBE22D7C82185225176EF11AD5933B(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_2 = L_17;
		// if (newEnemy.GetComponent<EnemyCollisionDetection>() != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_2;
		EnemyCollisionDetection_t1BC70DA0EF964D2A73273BB25A2DDE939B13CBE0* L_19;
		L_19 = GameObject_GetComponent_TisEnemyCollisionDetection_t1BC70DA0EF964D2A73273BB25A2DDE939B13CBE0_m5C9FDA9FE859B512074D83F2B90ECC022E0004D0(L_18, GameObject_GetComponent_TisEnemyCollisionDetection_t1BC70DA0EF964D2A73273BB25A2DDE939B13CBE0_m5C9FDA9FE859B512074D83F2B90ECC022E0004D0_RuntimeMethod_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_0086;
		}
	}
	{
		// newEnemy.GetComponent<EnemyCollisionDetection>().PushForce = bossRoundNum;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_2;
		EnemyCollisionDetection_t1BC70DA0EF964D2A73273BB25A2DDE939B13CBE0* L_22;
		L_22 = GameObject_GetComponent_TisEnemyCollisionDetection_t1BC70DA0EF964D2A73273BB25A2DDE939B13CBE0_m5C9FDA9FE859B512074D83F2B90ECC022E0004D0(L_21, GameObject_GetComponent_TisEnemyCollisionDetection_t1BC70DA0EF964D2A73273BB25A2DDE939B13CBE0_m5C9FDA9FE859B512074D83F2B90ECC022E0004D0_RuntimeMethod_var);
		int32_t L_23 = __this->___bossRoundNum_23;
		EnemyCollisionDetection_set_PushForce_m62A1773C0E1B7E15D9E14C6BA02EE3150D329570_inline(L_22, ((float)L_23), NULL);
	}

IL_0086:
	{
		// activeEnemies.Add(newEnemy);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_24 = __this->___activeEnemies_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_2;
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_24, L_25, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
	}

IL_0092:
	{
		// for (int i = 0; i < enemiesToSpawn; i++)
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0096:
	{
		// for (int i = 0; i < enemiesToSpawn; i++)
		int32_t L_27 = V_0;
		int32_t L_28 = ___0_enemiesToSpawn;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0007;
		}
	}
	{
		// playerChoosingPowerup = true;
		__this->___playerChoosingPowerup_13 = (bool)1;
		// }
		return;
	}
}
// System.Void SpawnManager::PickUpProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_PickUpProbability_mA27B32308ECABA2067739A3869C77455835E377A (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	{
		// randomNum = Random.Range(1, 101);
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, ((int32_t)101), NULL);
		__this->___randomNum_29 = L_0;
		// if (randomNum <= 65)
		int32_t L_1 = __this->___randomNum_29;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)65))))
		{
			goto IL_0025;
		}
	}
	{
		// SpawnPickUp(commonPickUps);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___commonPickUps_10;
		SpawnManager_SpawnPickUp_m243AB6625FBACD2ADD8159CA7323B436621A1474(__this, L_2, NULL);
		return;
	}

IL_0025:
	{
		// else if (randomNum <= 90)
		int32_t L_3 = __this->___randomNum_29;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)90))))
		{
			goto IL_003c;
		}
	}
	{
		// SpawnPickUp(uncommonPickUps);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->___uncommonPickUps_11;
		SpawnManager_SpawnPickUp_m243AB6625FBACD2ADD8159CA7323B436621A1474(__this, L_4, NULL);
		return;
	}

IL_003c:
	{
		// else if (randomNum <= 100)
		int32_t L_5 = __this->___randomNum_29;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)100))))
		{
			goto IL_0052;
		}
	}
	{
		// SpawnPickUp(rarePickUps);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___rarePickUps_12;
		SpawnManager_SpawnPickUp_m243AB6625FBACD2ADD8159CA7323B436621A1474(__this, L_6, NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void SpawnManager::SpawnPickUp(UnityEngine.GameObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_SpawnPickUp_m243AB6625FBACD2ADD8159CA7323B436621A1474 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___0_pickupList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (activePickup.Count >= 2)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___activePickup_16;
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		// RemovePickUpFromList();
		SpawnManager_RemovePickUpFromList_m21CAAA1DE4EF038D465A0982C5F3A8605DC196D3(__this, NULL);
	}

IL_0014:
	{
		// AvoidRepetitiveChoice(pickupList);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = ___0_pickupList;
		SpawnManager_AvoidRepetitiveChoice_m02260000134E1C6455C2567E36FE2C0E66BFB148(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void SpawnManager::AvoidRepetitiveChoice(UnityEngine.GameObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_AvoidRepetitiveChoice_m02260000134E1C6455C2567E36FE2C0E66BFB148 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___0_pickupList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Contains_m3ABAE00CC43C9B6561CE5F94724ED2FCD962BD64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int maxAttempts = pickupList.Length;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = ___0_pickupList;
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		// int currentAttempt = 0;
		V_1 = 0;
	}

IL_0006:
	{
		// randomIndex = Random.Range(0, pickupList.Length);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = ___0_pickupList;
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		__this->___randomIndex_30 = L_2;
		// if (randomIndex != previousIndex)
		int32_t L_3 = __this->___randomIndex_30;
		int32_t L_4 = __this->___previousIndex_33;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0074;
		}
	}
	{
		// if (!pickupHistory.Contains(randomIndex))
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_5 = __this->___pickupHistory_31;
		int32_t L_6 = __this->___randomIndex_30;
		bool L_7;
		L_7 = Queue_1_Contains_m3ABAE00CC43C9B6561CE5F94724ED2FCD962BD64(L_5, L_6, Queue_1_Contains_m3ABAE00CC43C9B6561CE5F94724ED2FCD962BD64_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0074;
		}
	}
	{
		// pickupHistory.Enqueue(randomIndex);
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_8 = __this->___pickupHistory_31;
		int32_t L_9 = __this->___randomIndex_30;
		Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A(L_8, L_9, Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		// if (pickupHistory.Count > maxHistoryLength)
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_10 = __this->___pickupHistory_31;
		int32_t L_11;
		L_11 = Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline(L_10, Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var);
		int32_t L_12 = __this->___maxHistoryLength_32;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0066;
		}
	}
	{
		// pickupHistory.Dequeue();
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_13 = __this->___pickupHistory_31;
		int32_t L_14;
		L_14 = Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650(L_13, Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
	}

IL_0066:
	{
		// previousIndex = randomIndex;
		int32_t L_15 = __this->___randomIndex_30;
		__this->___previousIndex_33 = L_15;
		// break;
		goto IL_007c;
	}

IL_0074:
	{
		// currentAttempt++;
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		// while (currentAttempt < maxAttempts);
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0006;
		}
	}

IL_007c:
	{
		// if (currentAttempt >= maxAttempts)
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0092;
		}
	}
	{
		// pickupHistory.Clear();
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_21 = __this->___pickupHistory_31;
		Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1(L_21, Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1_RuntimeMethod_var);
		// previousIndex = -1;
		__this->___previousIndex_33 = (-1);
	}

IL_0092:
	{
		// newPickUp = Instantiate(pickupList[randomIndex], GenerateSpawnPos(), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_22 = ___0_pickupList;
		int32_t L_23 = __this->___randomIndex_30;
		int32_t L_24 = L_23;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = SpawnManager_GenerateSpawnPos_m2C3AF7C670BBE22D7C82185225176EF11AD5933B(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_25, L_26, L_27, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___newPickUp_26 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___newPickUp_26), (void*)L_28);
		// activePickup.Add(newPickUp);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_29 = __this->___activePickup_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___newPickUp_26;
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_29, L_30, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SpawnManager::RemovePickUpFromList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_RemovePickUpFromList_m21CAAA1DE4EF038D465A0982C5F3A8605DC196D3 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (activePickup.Count > 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___activePickup_16;
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		// Destroy(activePickup[0]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___activePickup_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_2, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// activePickup.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___activePickup_16;
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_4, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
	}

IL_002a:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 SpawnManager::GenerateSpawnPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SpawnManager_GenerateSpawnPos_m2C3AF7C670BBE22D7C82185225176EF11AD5933B (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float spawnPosX = Random.Range(-spawnRange, spawnRange);
		float L_0 = __this->___spawnRange_25;
		float L_1 = __this->___spawnRange_25;
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_0)), L_1, NULL);
		V_0 = L_2;
		// float spawnPosZ = Random.Range(-spawnRange, spawnRange);
		float L_3 = __this->___spawnRange_25;
		float L_4 = __this->___spawnRange_25;
		float L_5;
		L_5 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_3)), L_4, NULL);
		V_1 = L_5;
		// Vector3 spawnPos = new Vector3(spawnPosX, 0, spawnPosZ);
		float L_6 = V_0;
		float L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_6, (0.0f), L_7, /*hidden argument*/NULL);
		// return spawnPos;
		return L_8;
	}
}
// System.Void SpawnManager::RemoveEnemyFromList(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_RemoveEnemyFromList_mB3EFC8A265085AD5FEAACA9BAED6F8AD4983A778 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_enemyToRemove, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeEnemies.Remove(enemyToRemove);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___activeEnemies_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_enemyToRemove;
		bool L_2;
		L_2 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_0, L_1, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SpawnManager::PlayerDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_PlayerDeath_m64214F1FDCC1945C1903140294FF4BF159992574 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C5D7A493A2CDED94D4FC81797213DF9DC84EF8D);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// playerDied = true;
		__this->___playerDied_14 = (bool)1;
		// foreach (GameObject enemy in activeEnemies)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___activeEnemies_15;
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_1), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0021_1;
			}

IL_0015_1:
			{
				// foreach (GameObject enemy in activeEnemies)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_1), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// Destroy(enemy);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
			}

IL_0021_1:
			{
				// foreach (GameObject enemy in activeEnemies)
				bool L_3;
				L_3 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_1), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// activeEnemies.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___activeEnemies_15;
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_4, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// GameObject ghost = new GameObject("GhostEnemy");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_5, _stringLiteral9C5D7A493A2CDED94D4FC81797213DF9DC84EF8D, NULL);
		V_0 = L_5;
		// activeEnemies.Add(ghost);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___activeEnemies_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_6, L_7, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// RemovePickUpFromList();
		SpawnManager_RemovePickUpFromList_m21CAAA1DE4EF038D465A0982C5F3A8605DC196D3(__this, NULL);
		// }
		return;
	}
}
// System.Void SpawnManager::StartDeletingEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_StartDeletingEnemies_m2DCE193CFD97F2E290C4019FDCC4BD8B2DE4606F (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(DeleteEnemiesRoutine());
		RuntimeObject* L_0;
		L_0 = SpawnManager_DeleteEnemiesRoutine_mC8C57808882F5C765F4E725B5C135A7C03B05B86(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SpawnManager::DeleteEnemiesRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnManager_DeleteEnemiesRoutine_mC8C57808882F5C765F4E725B5C135A7C03B05B86 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDeleteEnemiesRoutineU3Ed__53_tF205C174FEE4ED8E612A7A9A803A37C5C6D5AA97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDeleteEnemiesRoutineU3Ed__53_tF205C174FEE4ED8E612A7A9A803A37C5C6D5AA97* L_0 = (U3CDeleteEnemiesRoutineU3Ed__53_tF205C174FEE4ED8E612A7A9A803A37C5C6D5AA97*)il2cpp_codegen_object_new(U3CDeleteEnemiesRoutineU3Ed__53_tF205C174FEE4ED8E612A7A9A803A37C5C6D5AA97_il2cpp_TypeInfo_var);
		U3CDeleteEnemiesRoutineU3Ed__53__ctor_m6A828107B844E213316199C2C59C8E07EFF436E4(L_0, 0, NULL);
		U3CDeleteEnemiesRoutineU3Ed__53_tF205C174FEE4ED8E612A7A9A803A37C5C6D5AA97* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SpawnManager::KillOne()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_KillOne_mB6F177F538F1BDC2BEC8DFA30671FDA49C846EE8 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (activeEnemies.Count > 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___activeEnemies_15;
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		// GameObject enemy = activeEnemies[0];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___activeEnemies_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_2, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		// activeEnemies.RemoveAt(0);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___activeEnemies_15;
		List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_4, 0, List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		// Destroy(enemy);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void SpawnManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager__ctor_m8DD503A0FFE79FA38CF0B7F013E54D24A04D166A (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<GameObject> activeEnemies = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___activeEnemies_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeEnemies_15), (void*)L_0);
		// List<GameObject> activePickup = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_1, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___activePickup_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activePickup_16), (void*)L_1);
		// float spawnRange = 9.0f;
		__this->___spawnRange_25 = (9.0f);
		// Queue<int> pickupHistory = new Queue<int>();
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_2 = (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*)il2cpp_codegen_object_new(Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D(L_2, Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		__this->___pickupHistory_31 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pickupHistory_31), (void*)L_2);
		// int maxHistoryLength = 3;
		__this->___maxHistoryLength_32 = 3;
		// int previousIndex = -1;
		__this->___previousIndex_33 = (-1);
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
// System.Void SpawnManager/<UpdateRound>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateRoundU3Ed__39__ctor_mE12FA52C59BCDEB29EDE02EADA70BE05ED4E1B4D (U3CUpdateRoundU3Ed__39_t2A7B0383C0335B7107070CBBB3FB128FDCD56343* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SpawnManager/<UpdateRound>d__39::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateRoundU3Ed__39_System_IDisposable_Dispose_m6D818D25C2BEA102A855CF1DB78F71CF8DD3395E (U3CUpdateRoundU3Ed__39_t2A7B0383C0335B7107070CBBB3FB128FDCD56343* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SpawnManager/<UpdateRound>d__39::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateRoundU3Ed__39_MoveNext_m9A01363DB12902B4C8BA01A7E94057F7CDFEC185 (U3CUpdateRoundU3Ed__39_t2A7B0383C0335B7107070CBBB3FB128FDCD56343* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_004f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// playerChoosingPowerup = true;
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_4 = V_1;
		L_4->___playerChoosingPowerup_13 = (bool)1;
		// uiController.UpdateRoundNum(overallRoundNum);
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_5 = V_1;
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_6 = L_5->___uiController_17;
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_7 = V_1;
		int32_t L_8 = L_7->___overallRoundNum_21;
		UIController_UpdateRoundNum_mDCB5E2E267C1D64AC9EC596F6E4100EDC7C6432D(L_6, L_8, NULL);
		// yield return new WaitForSeconds(5);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (overallRoundNum % 10 == 0)
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_10 = V_1;
		int32_t L_11 = L_10->___overallRoundNum_21;
		if (((int32_t)(L_11%((int32_t)10))))
		{
			goto IL_0069;
		}
	}
	{
		// ActivateBossFight();
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_12 = V_1;
		SpawnManager_ActivateBossFight_m91C374AD905288C8A0EC7C3E3545DDDEEFB4638A(L_12, NULL);
		goto IL_0081;
	}

IL_0069:
	{
		// else if (overallRoundNum % 5 == 0)
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_13 = V_1;
		int32_t L_14 = L_13->___overallRoundNum_21;
		if (((int32_t)(L_14%5)))
		{
			goto IL_007b;
		}
	}
	{
		// ActivateMiniBossFight();
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_15 = V_1;
		SpawnManager_ActivateMiniBossFight_m08E0E548A19D2C263F23D07DC027EED9BEA91BDD(L_15, NULL);
		goto IL_0081;
	}

IL_007b:
	{
		// ActivateBruteEnemy();
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_16 = V_1;
		SpawnManager_ActivateBruteEnemy_m3747D233AC589DBC149413AB4BABF9AE0161ED2F(L_16, NULL);
	}

IL_0081:
	{
		// }
		return (bool)0;
	}
}
// System.Object SpawnManager/<UpdateRound>d__39::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateRoundU3Ed__39_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m74F2B5E025BD7D7EE361D554DD57762DC1582207 (U3CUpdateRoundU3Ed__39_t2A7B0383C0335B7107070CBBB3FB128FDCD56343* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SpawnManager/<UpdateRound>d__39::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateRoundU3Ed__39_System_Collections_IEnumerator_Reset_m00ACF723EF7F373C72827A578CD322379F4C57FB (U3CUpdateRoundU3Ed__39_t2A7B0383C0335B7107070CBBB3FB128FDCD56343* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateRoundU3Ed__39_System_Collections_IEnumerator_Reset_m00ACF723EF7F373C72827A578CD322379F4C57FB_RuntimeMethod_var)));
	}
}
// System.Object SpawnManager/<UpdateRound>d__39::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateRoundU3Ed__39_System_Collections_IEnumerator_get_Current_m767DF349F819BDA556E99141EDDD82A594C3F92D (U3CUpdateRoundU3Ed__39_t2A7B0383C0335B7107070CBBB3FB128FDCD56343* __this, const RuntimeMethod* method) 
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
// System.Void SpawnManager/<DeleteEnemiesRoutine>d__53::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteEnemiesRoutineU3Ed__53__ctor_m6A828107B844E213316199C2C59C8E07EFF436E4 (U3CDeleteEnemiesRoutineU3Ed__53_tF205C174FEE4ED8E612A7A9A803A37C5C6D5AA97* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SpawnManager/<DeleteEnemiesRoutine>d__53::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteEnemiesRoutineU3Ed__53_System_IDisposable_Dispose_m01F8F5B7B99D69872FCD29B97D1E41619A466283 (U3CDeleteEnemiesRoutineU3Ed__53_tF205C174FEE4ED8E612A7A9A803A37C5C6D5AA97* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SpawnManager/<DeleteEnemiesRoutine>d__53::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDeleteEnemiesRoutineU3Ed__53_MoveNext_m1B2B8A7485CF717BBF27BBAC998720C5878BEBEB (U3CDeleteEnemiesRoutineU3Ed__53_tF205C174FEE4ED8E612A7A9A803A37C5C6D5AA97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0046;
	}

IL_0020:
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// KillOne();
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_5 = V_1;
		SpawnManager_KillOne_mB6F177F538F1BDC2BEC8DFA30671FDA49C846EE8(L_5, NULL);
	}

IL_0046:
	{
		// while (activeEnemies.Count > 0)
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_6 = V_1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = L_6->___activeEnemies_15;
		int32_t L_8;
		L_8 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_7, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		// pickups.HasPickup = false;
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_9 = V_1;
		PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* L_10 = L_9->___pickups_20;
		PickUps_set_HasPickup_mDF578A1788A76DE70CDB35A2DD3F981D8C6E11FA_inline(L_10, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object SpawnManager/<DeleteEnemiesRoutine>d__53::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDeleteEnemiesRoutineU3Ed__53_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1E55F583D153F0EBFBE0E8020B42B76E4A10C5D8 (U3CDeleteEnemiesRoutineU3Ed__53_tF205C174FEE4ED8E612A7A9A803A37C5C6D5AA97* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SpawnManager/<DeleteEnemiesRoutine>d__53::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteEnemiesRoutineU3Ed__53_System_Collections_IEnumerator_Reset_m3D410FDD44D0E15611483A317F6035D4065163E5 (U3CDeleteEnemiesRoutineU3Ed__53_tF205C174FEE4ED8E612A7A9A803A37C5C6D5AA97* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDeleteEnemiesRoutineU3Ed__53_System_Collections_IEnumerator_Reset_m3D410FDD44D0E15611483A317F6035D4065163E5_RuntimeMethod_var)));
	}
}
// System.Object SpawnManager/<DeleteEnemiesRoutine>d__53::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDeleteEnemiesRoutineU3Ed__53_System_Collections_IEnumerator_get_Current_m790E125E8F788F329B8A63D759537B6D368F518B (U3CDeleteEnemiesRoutineU3Ed__53_tF205C174FEE4ED8E612A7A9A803A37C5C6D5AA97* __this, const RuntimeMethod* method) 
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
// System.Boolean UIController::get_PlayerInMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIController_get_PlayerInMenu_mC5FDF020D7A7D4DFF8D7C8AD931E885B450959EE (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// public bool PlayerInMenu { get { return playerInMenu; } }
		bool L_0 = __this->___playerInMenu_11;
		return L_0;
	}
}
// System.Void UIController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Start_mDB390A5128712606F938A56F294FBDE7DFE649D4 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_m4CB133EB15CE850B95FBEFC772E2333908B51DAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawnManager = FindObjectOfType<SpawnManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_0;
		L_0 = Object_FindObjectOfType_TisSpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_m4CB133EB15CE850B95FBEFC772E2333908B51DAD(Object_FindObjectOfType_TisSpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_m4CB133EB15CE850B95FBEFC772E2333908B51DAD_RuntimeMethod_var);
		__this->___spawnManager_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnManager_13), (void*)L_0);
		// playerInMenu = false;
		__this->___playerInMenu_11 = (bool)0;
		// }
		return;
	}
}
// System.Void UIController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Update_m8F538932F53B831D5B82191902ADADACD32B108B (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27C60FAA9427B448DB11F89B3DBF242D13518BBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// roundText.text = "Round: " + roundNum;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___roundText_10;
		int32_t* L_1 = (&__this->___roundNum_12);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral27C60FAA9427B448DB11F89B3DBF242D13518BBF, L_2, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void UIController::ActivateCorrectCanvas(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_ActivateCorrectCanvas_m48A9A563EC670DA362E4D0FA643096F3F92C7AFC (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, int32_t ___0_choice, bool ___1_value, const RuntimeMethod* method) 
{
	{
		// playerInMenu = true;
		__this->___playerInMenu_11 = (bool)1;
		// if (choice == 1)
		int32_t L_0 = ___0_choice;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		// powerAndPickupCanvas.SetActive(value);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___powerAndPickupCanvas_5;
		bool L_2 = ___1_value;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, L_2, NULL);
		return;
	}

IL_0018:
	{
		// else if (choice == 2)
		int32_t L_3 = ___0_choice;
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0028;
		}
	}
	{
		// powerupCanvas.SetActive(value);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___powerupCanvas_4;
		bool L_5 = ___1_value;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, L_5, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void UIController::DoneChoosingPowerup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_DoneChoosingPowerup_m3B9C3189003F2D0F3C1E1A927AB3C5C1B6711973 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(ResumeGame());
		RuntimeObject* L_0;
		L_0 = UIController_ResumeGame_m2E6F8A3C84ADC71489238AA03666A7DACA82ED46(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// StartCoroutine(ChangeMenuValue());
		RuntimeObject* L_2;
		L_2 = UIController_ChangeMenuValue_m5952CAFE50FA0BD2133C7D8485DD6AE5CA26D5E8(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator UIController::ResumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIController_ResumeGame_m2E6F8A3C84ADC71489238AA03666A7DACA82ED46 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CResumeGameU3Ed__16_tAF9B4A81B44C1B9E8124D6F7B65CAAF9DCBB9345_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CResumeGameU3Ed__16_tAF9B4A81B44C1B9E8124D6F7B65CAAF9DCBB9345* L_0 = (U3CResumeGameU3Ed__16_tAF9B4A81B44C1B9E8124D6F7B65CAAF9DCBB9345*)il2cpp_codegen_object_new(U3CResumeGameU3Ed__16_tAF9B4A81B44C1B9E8124D6F7B65CAAF9DCBB9345_il2cpp_TypeInfo_var);
		U3CResumeGameU3Ed__16__ctor_m3C5525EB4E369BDD3B61974A41672CD635751C60(L_0, 0, NULL);
		U3CResumeGameU3Ed__16_tAF9B4A81B44C1B9E8124D6F7B65CAAF9DCBB9345* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator UIController::ChangeMenuValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIController_ChangeMenuValue_m5952CAFE50FA0BD2133C7D8485DD6AE5CA26D5E8 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CChangeMenuValueU3Ed__17_t1DCB5A37881CA3921679B62F64D339D81F65AF05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CChangeMenuValueU3Ed__17_t1DCB5A37881CA3921679B62F64D339D81F65AF05* L_0 = (U3CChangeMenuValueU3Ed__17_t1DCB5A37881CA3921679B62F64D339D81F65AF05*)il2cpp_codegen_object_new(U3CChangeMenuValueU3Ed__17_t1DCB5A37881CA3921679B62F64D339D81F65AF05_il2cpp_TypeInfo_var);
		U3CChangeMenuValueU3Ed__17__ctor_mE087B212C9A930B8D6CEFCAC735D2737012C5306(L_0, 0, NULL);
		U3CChangeMenuValueU3Ed__17_t1DCB5A37881CA3921679B62F64D339D81F65AF05* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void UIController::UpdateRoundNum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_UpdateRoundNum_mDCB5E2E267C1D64AC9EC596F6E4100EDC7C6432D (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, int32_t ___0_num, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09A0933DB6540A74731BCA5013EB37EAC90DFF23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27C60FAA9427B448DB11F89B3DBF242D13518BBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33DD02ECC10D12861E681D3B752496F2FD2875C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C59C4DCE47B143E77D92BB627A542E038CD0A77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8762414CA43D56C3DBDB89C25574593F04C38CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// roundNum = num;
		int32_t L_0 = ___0_num;
		__this->___roundNum_12 = L_0;
		// if (roundNum % 10 == 0)
		int32_t L_1 = __this->___roundNum_12;
		if (((int32_t)(L_1%((int32_t)10))))
		{
			goto IL_0029;
		}
	}
	{
		// roundTextAnim.GetComponent<TextMeshProUGUI>().text = "BOSS FIGHT \n Start";
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___roundTextAnim_9;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3;
		L_3 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(L_2, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, _stringLiteral9C59C4DCE47B143E77D92BB627A542E038CD0A77);
		goto IL_0074;
	}

IL_0029:
	{
		// else if (roundNum % 5 == 0)
		int32_t L_4 = __this->___roundNum_12;
		if (((int32_t)(L_4%5)))
		{
			goto IL_004a;
		}
	}
	{
		// roundTextAnim.GetComponent<TextMeshProUGUI>().text = "MINI BOSS FIGHT \n Start";
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___roundTextAnim_9;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6;
		L_6 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(L_5, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, _stringLiteral09A0933DB6540A74731BCA5013EB37EAC90DFF23);
		goto IL_0074;
	}

IL_004a:
	{
		// roundTextAnim.GetComponent<TextMeshProUGUI>().text = "Round: " + roundNum + "\n Start";
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___roundTextAnim_9;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8;
		L_8 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(L_7, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		int32_t* L_9 = (&__this->___roundNum_12);
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral27C60FAA9427B448DB11F89B3DBF242D13518BBF, L_10, _stringLiteral33DD02ECC10D12861E681D3B752496F2FD2875C9, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_11);
	}

IL_0074:
	{
		// roundTextAnim.SetTrigger("playAnim");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___roundTextAnim_9;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_12, _stringLiteralC8762414CA43D56C3DBDB89C25574593F04C38CD, NULL);
		// }
		return;
	}
}
// System.Void UIController::PlayerDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_PlayerDeath_mEC2D52744924842D07394843903F159A69986FBB (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// deathCanvas.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___deathCanvas_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// gameCanvas.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___gameCanvas_8;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UIController::RestartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_RestartGame_m79F5F74879B996AB943874DD2FA6580416B0FFFC (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6FE3223698BD8EA6AA20626D83A5CA03724D24E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// deathOverlay.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___deathOverlay_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// deathOverlay.GetComponent<Animator>().SetBool("canPlay", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___deathOverlay_7;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2;
		L_2 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_1, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteralD6FE3223698BD8EA6AA20626D83A5CA03724D24E, (bool)1, NULL);
		// StartCoroutine(WaitForAnimAndReload());
		RuntimeObject* L_3;
		L_3 = UIController_WaitForAnimAndReload_m32D4447A0A672EF859FB5EE8429A969CEEFDF623(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator UIController::WaitForAnimAndReload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIController_WaitForAnimAndReload_m32D4447A0A672EF859FB5EE8429A969CEEFDF623 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForAnimAndReloadU3Ed__21_t7F5BDC0F783D890ED3EA46E3C78C75421424DFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForAnimAndReloadU3Ed__21_t7F5BDC0F783D890ED3EA46E3C78C75421424DFFC* L_0 = (U3CWaitForAnimAndReloadU3Ed__21_t7F5BDC0F783D890ED3EA46E3C78C75421424DFFC*)il2cpp_codegen_object_new(U3CWaitForAnimAndReloadU3Ed__21_t7F5BDC0F783D890ED3EA46E3C78C75421424DFFC_il2cpp_TypeInfo_var);
		U3CWaitForAnimAndReloadU3Ed__21__ctor_mD67BA2664949A2746A91DEA1C39F91EDED99AB30(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void UIController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController__ctor_mFF218DBC8CCEFE36AAC295D2376501658CD8B7A2 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
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
// System.Void UIController/<ResumeGame>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResumeGameU3Ed__16__ctor_m3C5525EB4E369BDD3B61974A41672CD635751C60 (U3CResumeGameU3Ed__16_tAF9B4A81B44C1B9E8124D6F7B65CAAF9DCBB9345* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UIController/<ResumeGame>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResumeGameU3Ed__16_System_IDisposable_Dispose_m9FDD6084F507C26AA3E47B8A9840EA3F2520B762 (U3CResumeGameU3Ed__16_tAF9B4A81B44C1B9E8124D6F7B65CAAF9DCBB9345* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UIController/<ResumeGame>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CResumeGameU3Ed__16_MoveNext_mC94A97AF54D037F0CA40B35881BFA64AA4632AFC (U3CResumeGameU3Ed__16_tAF9B4A81B44C1B9E8124D6F7B65CAAF9DCBB9345* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_1 = __this->___U3CU3E4__this_2;
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
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.5f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// spawnManager.PlayerChoosingPowerup = false;
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_5 = V_1;
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_6 = L_5->___spawnManager_13;
		SpawnManager_set_PlayerChoosingPowerup_m5971DB24BE2533A302565DEA5750DDF556437541_inline(L_6, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object UIController/<ResumeGame>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CResumeGameU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5567215A91E39133F598B441793FE59A459E9576 (U3CResumeGameU3Ed__16_tAF9B4A81B44C1B9E8124D6F7B65CAAF9DCBB9345* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UIController/<ResumeGame>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResumeGameU3Ed__16_System_Collections_IEnumerator_Reset_mF91725B01A3CE48788915D777E3CC87246FC22E1 (U3CResumeGameU3Ed__16_tAF9B4A81B44C1B9E8124D6F7B65CAAF9DCBB9345* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResumeGameU3Ed__16_System_Collections_IEnumerator_Reset_mF91725B01A3CE48788915D777E3CC87246FC22E1_RuntimeMethod_var)));
	}
}
// System.Object UIController/<ResumeGame>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CResumeGameU3Ed__16_System_Collections_IEnumerator_get_Current_m80C6249FAD094B6258E299AE890AD9B0E1BCFB20 (U3CResumeGameU3Ed__16_tAF9B4A81B44C1B9E8124D6F7B65CAAF9DCBB9345* __this, const RuntimeMethod* method) 
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
// System.Void UIController/<ChangeMenuValue>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeMenuValueU3Ed__17__ctor_mE087B212C9A930B8D6CEFCAC735D2737012C5306 (U3CChangeMenuValueU3Ed__17_t1DCB5A37881CA3921679B62F64D339D81F65AF05* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UIController/<ChangeMenuValue>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeMenuValueU3Ed__17_System_IDisposable_Dispose_mB381956B1ADC184BF6A9E1A99C288099104009AD (U3CChangeMenuValueU3Ed__17_t1DCB5A37881CA3921679B62F64D339D81F65AF05* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UIController/<ChangeMenuValue>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CChangeMenuValueU3Ed__17_MoveNext_m1807D3D3ED066E435D427A7A295A66718D02C292 (U3CChangeMenuValueU3Ed__17_t1DCB5A37881CA3921679B62F64D339D81F65AF05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_1 = __this->___U3CU3E4__this_2;
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
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(7f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (7.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// playerInMenu = false;
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_5 = V_1;
		L_5->___playerInMenu_11 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object UIController/<ChangeMenuValue>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeMenuValueU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE99D597F9713305D08B9D8FD8BDE151FF8061AFC (U3CChangeMenuValueU3Ed__17_t1DCB5A37881CA3921679B62F64D339D81F65AF05* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UIController/<ChangeMenuValue>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeMenuValueU3Ed__17_System_Collections_IEnumerator_Reset_m469B4A76A67F0E3D25FE0654653B4BC5B48F2EC0 (U3CChangeMenuValueU3Ed__17_t1DCB5A37881CA3921679B62F64D339D81F65AF05* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CChangeMenuValueU3Ed__17_System_Collections_IEnumerator_Reset_m469B4A76A67F0E3D25FE0654653B4BC5B48F2EC0_RuntimeMethod_var)));
	}
}
// System.Object UIController/<ChangeMenuValue>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeMenuValueU3Ed__17_System_Collections_IEnumerator_get_Current_m7BBC1946A98055989922DB8756B7C3CC8752AB16 (U3CChangeMenuValueU3Ed__17_t1DCB5A37881CA3921679B62F64D339D81F65AF05* __this, const RuntimeMethod* method) 
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
// System.Void UIController/<WaitForAnimAndReload>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForAnimAndReloadU3Ed__21__ctor_mD67BA2664949A2746A91DEA1C39F91EDED99AB30 (U3CWaitForAnimAndReloadU3Ed__21_t7F5BDC0F783D890ED3EA46E3C78C75421424DFFC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UIController/<WaitForAnimAndReload>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForAnimAndReloadU3Ed__21_System_IDisposable_Dispose_mCFD30B5BC7AFD4F54AEED3CF8D22C5D4BFBDD5A5 (U3CWaitForAnimAndReloadU3Ed__21_t7F5BDC0F783D890ED3EA46E3C78C75421424DFFC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UIController/<WaitForAnimAndReload>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForAnimAndReloadU3Ed__21_MoveNext_mBAB89647F667A56ABC2EC17768E43AD8D91108FD (U3CWaitForAnimAndReloadU3Ed__21_t7F5BDC0F783D890ED3EA46E3C78C75421424DFFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
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
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(5);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object UIController/<WaitForAnimAndReload>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForAnimAndReloadU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAE554CEB8F718673A61FEF67168FC9816C83F600 (U3CWaitForAnimAndReloadU3Ed__21_t7F5BDC0F783D890ED3EA46E3C78C75421424DFFC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UIController/<WaitForAnimAndReload>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForAnimAndReloadU3Ed__21_System_Collections_IEnumerator_Reset_mD08B91BE6B5190627C8603846EB2E83C25E25B0F (U3CWaitForAnimAndReloadU3Ed__21_t7F5BDC0F783D890ED3EA46E3C78C75421424DFFC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForAnimAndReloadU3Ed__21_System_Collections_IEnumerator_Reset_mD08B91BE6B5190627C8603846EB2E83C25E25B0F_RuntimeMethod_var)));
	}
}
// System.Object UIController/<WaitForAnimAndReload>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForAnimAndReloadU3Ed__21_System_Collections_IEnumerator_get_Current_m9F4F4E2E20BFF39FC1680446285F0AC4F80C19FC (U3CWaitForAnimAndReloadU3Ed__21_t7F5BDC0F783D890ED3EA46E3C78C75421424DFFC* __this, const RuntimeMethod* method) 
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PickUps_get_RadActive_m6325CB917383BF874E8D15339811DC6291107CC2_inline (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) 
{
	{
		// public bool RadActive { get { return radActive; } }
		bool L_0 = __this->___radActive_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerCollisionDetection_get_PushForce_m44201AC23745EC82C39CA7E5BCC4D3025DFC0E04_inline (PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1* __this, const RuntimeMethod* method) 
{
	{
		// public float PushForce { get { return pushForce; } set { pushForce = value; } }
		float L_0 = __this->___pushForce_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerCollisionDetection_set_PushForce_mC1BF1E88F8AEEC1D713EE6A97E29382706BECCB3_inline (PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float PushForce { get { return pushForce; } set { pushForce = value; } }
		float L_0 = ___0_value;
		__this->___pushForce_4 = L_0;
		// public float PushForce { get { return pushForce; } set { pushForce = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerController_get_Speed_mCE7012C761D33FBF6703F7EF81533D6758886269_inline (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// public float Speed { get { return speed; } set { speed = value; } }
		float L_0 = __this->___speed_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerController_set_Speed_mB072C37579ADBC4230B5363CFD32FAA43901FE5B_inline (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Speed { get { return speed; } set { speed = value; } }
		float L_0 = ___0_value;
		__this->___speed_4 = L_0;
		// public float Speed { get { return speed; } set { speed = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PickUps_get_StarDuration_mE84C32698EC37DEAB14A5D6ED25A1B52FA665FD4_inline (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) 
{
	{
		// public float StarDuration { get { return starDuration; } set { starDuration = value; } }
		float L_0 = __this->___starDuration_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PickUps_set_StarDuration_mE6B7CEC675A6B586F67B407D8DD1232D280A7EBF_inline (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float StarDuration { get { return starDuration; } set { starDuration = value; } }
		float L_0 = ___0_value;
		__this->___starDuration_9 = L_0;
		// public float StarDuration { get { return starDuration; } set { starDuration = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PickUps_get_RedPotionForce_m1772768ECB8FA89102B70C9B424B1F420D9200C2_inline (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) 
{
	{
		// public float RedPotionForce { get { return redPotionForce; } set { redPotionForce = value; } }
		float L_0 = __this->___redPotionForce_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PickUps_set_RedPotionForce_mDD00C277EA7D96D349C9AA67ACFDC724405EB44B_inline (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float RedPotionForce { get { return redPotionForce; } set { redPotionForce = value; } }
		float L_0 = ___0_value;
		__this->___redPotionForce_7 = L_0;
		// public float RedPotionForce { get { return redPotionForce; } set { redPotionForce = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PickUps_get_RadDuration_m80FEB2912FBD919F0C264F9E3C74FBE7B7348D97_inline (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) 
{
	{
		// public float RadDuration { get { return radDuration; } set { radDuration = value; } }
		float L_0 = __this->___radDuration_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PickUps_set_RadDuration_m1D2EEC71D96E744EC4AD78FC6EE019A93D9901F3_inline (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float RadDuration { get { return radDuration; } set { radDuration = value; } }
		float L_0 = ___0_value;
		__this->___radDuration_8 = L_0;
		// public float RadDuration { get { return radDuration; } set { radDuration = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rockets_get_MoveSpeed_m155EA453EBB496E26DCD6837F358728DB6EAA92B_inline (Rockets_t76F3FB82907F55BCF3B172612C762644775CFF9A* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveSpeed { get { return moveSpeed; } set { moveSpeed = value; } }
		float L_0 = __this->___moveSpeed_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Rockets_set_MoveSpeed_m4801CF710AF6AD3247196ECEB379D6AAEBD2B5DE_inline (Rockets_t76F3FB82907F55BCF3B172612C762644775CFF9A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MoveSpeed { get { return moveSpeed; } set { moveSpeed = value; } }
		float L_0 = ___0_value;
		__this->___moveSpeed_4 = L_0;
		// public float MoveSpeed { get { return moveSpeed; } set { moveSpeed = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpawnManager_set_PlayerChoosingPowerup_m5971DB24BE2533A302565DEA5750DDF556437541_inline (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool PlayerChoosingPowerup { set { playerChoosingPowerup = value; } }
		bool L_0 = ___0_value;
		__this->___playerChoosingPowerup_13 = L_0;
		// public bool PlayerChoosingPowerup { set { playerChoosingPowerup = value; } }
		return;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnemyController_set_MoveSpeed_mAF1084EEBE69866A6DD6D0454277628BBB373C33_inline (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MoveSpeed { get { return moveSpeed; } set { moveSpeed = value; } }
		float L_0 = ___0_value;
		__this->___moveSpeed_4 = L_0;
		// public float MoveSpeed { get { return moveSpeed; } set { moveSpeed = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerCollisionDetection_get_OldPushForce_m23BE1D297FD5E46E3459C1A5045A1886590B0F24_inline (PlayerCollisionDetection_tC3185336D4E83279A40DB5D8CB256FB8DFDA9BC1* __this, const RuntimeMethod* method) 
{
	{
		// public float OldPushForce { get { return oldPushForce; } }
		float L_0 = __this->___oldPushForce_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EnemyController_get_MoveSpeed_m4BE7C6B24F0E4D4755D37A549AF246B66353EC16_inline (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveSpeed { get { return moveSpeed; } set { moveSpeed = value; } }
		float L_0 = __this->___moveSpeed_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PickUps_get_HasPickup_m238E0FFF76160889729E37B98F06D0A64F4B748E_inline (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasPickup { get { return hasPickup; } set { hasPickup = value; } }
		bool L_0 = __this->___hasPickup_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnemyController_set_HasTurned_m77E5F1E08E47C7C3F2FBF87DFBBBB860BADB9F03_inline (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool HasTurned { set { hasTurned = value; } }
		bool L_0 = ___0_value;
		__this->___hasTurned_5 = L_0;
		// public bool HasTurned { set { hasTurned = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PickUps_set_RocketsActive_m350FF558ED7FE515F7F2770C3067533514F1C036_inline (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool RocketsActive { get { return rocketsActive; } set { rocketsActive = value; } }
		bool L_0 = ___0_value;
		__this->___rocketsActive_17 = L_0;
		// public bool RocketsActive { get { return rocketsActive; } set { rocketsActive = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameManager_get_IsPlaying_m2FCB423637D8FE01E5EF3CE1FF8A3D0887750786_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPlaying { get { return isPlaying; } }
		bool L_0 = __this->___isPlaying_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UIController_get_PlayerInMenu_mC5FDF020D7A7D4DFF8D7C8AD931E885B450959EE_inline (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// public bool PlayerInMenu { get { return playerInMenu; } }
		bool L_0 = __this->___playerInMenu_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnemyCollisionDetection_set_PushForce_m62A1773C0E1B7E15D9E14C6BA02EE3150D329570_inline (EnemyCollisionDetection_t1BC70DA0EF964D2A73273BB25A2DDE939B13CBE0* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float PushForce { get { return pushForce; } set { pushForce = value; } }
		float L_0 = ___0_value;
		__this->___pushForce_4 = L_0;
		// public float PushForce { get { return pushForce; } set { pushForce = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PickUps_set_HasPickup_mDF578A1788A76DE70CDB35A2DD3F981D8C6E11FA_inline (PickUps_t93F5D3F4BCB8A988CA4F43BD0AF84F93B3FEF7C6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool HasPickup { get { return hasPickup; } set { hasPickup = value; } }
		bool L_0 = ___0_value;
		__this->___hasPickup_10 = L_0;
		// public bool HasPickup { get { return hasPickup; } set { hasPickup = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_gshared_inline (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
