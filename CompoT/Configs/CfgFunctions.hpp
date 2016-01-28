class CfgFunctions {
	class composition_tool {
		tag = "CT";
		project = "Composition tool";
		class Common {
			file = "composition_tool\functions";
			class handler{};
			class init{};
		};
		class KeyboardMouseHandling {
			file = "composition_tool\functions\KeyboardMouseHandling"; 
			class handleKeyDown{}; 
			class handleKeyUp{}; 
			class handleMouseMove{}; 
			class handleMouseHold{}; 
			class handleMouseWheel{}; 
			class handleMouseButtonDown{}; 
			class handleMouseButtonUp{}; 
			class toggleKeys{}; 
		}; 
		class Camera {
			file = "composition_tool\functions\Camera"; 
			class camMove{}; 
			class camRotate{}; 
			class adjustCamSpeed{}; 
			class setPB{}; 
			class getPB{}; 
		}; 
		class Cursor {
			file = "composition_tool\functions\Cursor"; 
			class cursorFindClosestObject{}; 
			class findCirclePoints{}; 
			class findSquarePoints{}; 
			class findLineUpPoints{}; 
			class findToClonesPoints{}; 
			class drawSelection{}; 
			class reDrawSelection{}; 
			class cursorUpdate{}; 
			class cursorChangeTool{}; 
			class cursorChangeValue{}; 
			class alignWithSurface{}; 
			class toggleStickToObjectMode{}; 
		}; 
		class MouseCursor {
			file = "composition_tool\functions\MouseCursor"; 
			class MC_init{}; 
			class MC_handleMouseButtonUp{}; 
			class MC_handleMouseButtonDown{}; 
		}; 
		class SelectTool {
			file = "composition_tool\functions\SelectTool"; 
			class rotateObject{}; 
			class moveObject{}; 
			class liftObject{}; 
			class deleteObject{}; 
			class deleteAll{}; 
			class cursorSelect{}; 
			class clearSelect{}; 
			class cursorRotate{}; 
			class toggleRotateMode{}; 
			class cursorGrab{}; 
			class cursorLift{}; 
			class cursorChangeRadius{}; 
			class handleSpecialGrabWheel{}; 
			class getSpecialGrabDistance{}; 
			class reclaimObjectsInRadius{}; 
			class reclaimObject{}; 
			class changePivotOwner{}; 
			class resetOwner{}; 
			class selectToolChangeSize{}; 
			class buildToolresetHeight{}; 
		}; 
		class BuildTool {
			file = "composition_tool\functions\BuildTool"; 
			class findBuildable{}; 
			class getBuildable{}; 
			class pickCurrentBuildable{}; 
			class changeBuildLib{}; 
			class handleBuildToolMouseWheel{}; 
			class handleBuildToolMouseButton{}; 
			class getRelPos{}; 
			class build{}; 
			class buildMainPivot{}; 
			class reBuildAll{}; 
			class reBuild{}; 
			class clearPreview{}; 
			class makePreview{}; 
			class buildPivot{}; 
			class rotateBuildTool{}; 
			class liftBuildTool{}; 
			class changeCenterPos{}; 
			class toggleSlopeMode{}; 
		}; 
		class Clipboard {
			file = "composition_tool\functions\Clipboard"; 
			class copy{}; 
			class paste{}; 
		}; 
		class Library {
			file = "composition_tool\functions\Library"; 
			class mapComposition{}; 
			class saveElement{}; 
			class saveElementAs{}; 
			class exportStructure{}; 
			class importStructure{}; 
			class isNameUsed{}; 
			class addName{}; 
			class deleteName{}; 
			class makeName{}; 
			class initLibraries{}; 
			class initProjects{}; 
			class checkName{}; 
			class changeName{}; 
			class updateForbidden{}; 
			class cloneComposition{}; 
			class isPivotCloned{}; 
			class replaceDeep{}; 
		}; 
		class Draw {
			file = "composition_tool\functions\Draw"; 
			class handleDrawOrders{}; 
			class drawCircle{}; 
			class drawLineUp{}; 
			class drawLine{}; 
			class drawCloneLines{}; 
			class handleDraw3D{}; 
		}; 
		class Misc {
			file = "composition_tool\functions\Misc"; 
			class rocketBurst{}; 
			class checkMods{}; 
			class closeEditor{}; 
			class openEditor{}; 
		}; 
		class ExportMenuGUI {
			file = "composition_tool\functions\ExportMenuGUI"; 
			class EM_openGUI{}; 
			class EM_closeGUI{}; 
			class EM_toggleDestination{}; 
			class EM_firstListHandle{}; 
			class EM_secondListHandle{}; 
			class EM_thirdListHandle{}; 
			class EM_updateHint{}; 
			class EM_performExport{}; 
			class EM_exportLibrary{}; 
		}; 
		class ImportMenuGUI {
			file = "composition_tool\functions\ImportMenuGUI"; 
			class IM_openGUI{}; 
			class IM_closeGUI{}; 
			class IM_handleKeydown{}; 
			class IM_handleImportSelection{}; 
			class IM_toggleSource{}; 
			class IM_toggleOptions{}; 
			class IM_performImport{}; 
			class IM_importLibrary{}; 
			class IM_importElement{}; 
			class IM_preloadInput{}; 
			class IM_updateHint{}; 
			class IM_importCategory{}; 
			class IM_setCategory{}; 
		}; 
		class BuildToolSelectGUI {
			file = "composition_tool\functions\BuildToolSelectGUI"; 
			class buildToolGUI{}; 
		}; 
		class SaveCompositionGUI {
			file = "composition_tool\functions\SaveCompositionGUI"; 
			class scGUIOpen{}; 
			class scGUISaveComposition{}; 
		}; 
		class GeneralGUI {
			file = "composition_tool\functions\GeneralGUI"; 
			class switchLib{}; 
			class switchGUIMode{}; 
		}; 
		class ObjectSelectGUI {
			file = "composition_tool\functions\ObjectSelectGUI"; 
			class OS_openGUI{}; 
			class OS_closeGUI{}; 
			class OS_groupBy{}; 
			class OS_search{}; 
			class OS_selectObject{}; 
			class OS_scroll{}; 
			class OS_setFocus{}; 
			class OS_handleKeyDown{}; 
			class OS_draw{}; 
			class OS_getImage{}; 
			class OS_selectCat{}; 
		}; 
		class InfoGUI {
			file = "composition_tool\functions\InfoGUI"; 
			class infoGUI{}; 
			class infoUpdate{}; 
			class controlsGUI{}; 
			class controlsUpdate{}; 
		}; 
		class ObjectLibrary {
			file = "composition_tool\functions\ObjectLibrary"; 
			class ObL_openGUI{}; 
			class ObL_handleKeydown{}; 
			class ObL_renameCat{}; 
			class ObL_close{}; 
			class ObL_fillCategories{}; 
			class ObL_fillContent{}; 
			class ObL_newCategory{}; 
			class ObL_addObject{}; 
			class ObL_move{}; 
			class ObL_deleteObject{}; 
			class ObL_groupBy{}; 
			class ObL_collectConfigData{}; 
			class ObL_showInfo{}; 
			class ObL_adjustPreviewDistance{}; 
			class ObL_search{}; 
		}; 
		class CompositionLibrary {
			file = "composition_tool\functions\CompositionLibrary"; 
			class CmL_openGUI{}; 
			class CmL_handleKeydown{}; 
			class CmL_setCam{}; 
			class CmL_fillCategories{}; 
			class CmL_fillList{}; 
			class CmL_showInfo{}; 
			class CmL_close{}; 
			class CmL_drop{}; 
			class CmL_deleteCat{}; 
			class CmL_deleteCom{}; 
			class CmL_NewCat{}; 
			class CmL_rename{}; 
			class CmL_move{}; 
			class CmL_preview{}; 
		}; 
		class CollectionLibrary {
			file = "composition_tool\functions\CollectionLibrary"; 
			class CiL_openGUI{}; 
			class CiL_renameCat{}; 
			class CiL_renameCol{}; 
			class CiL_NewCat{}; 
			class CiL_NewCol{}; 
			class CiL_close{}; 
			class CiL_fillCategories{}; 
			class CiL_fillCollections{}; 
			class CiL_fillContent{}; 
			class CiL_fillObjects{}; 
			class CiL_showInfo{}; 
			class CiL_getObjectsData{}; 
			class CiL_addObject{}; 
			class CiL_handleKeydown{}; 
			class CiL_move{}; 
			class CiL_search{}; 
		}; 
		class PrefabLibrary {
			file = "composition_tool\functions\PrefabLibrary"; 
			class PrL_openGUI{}; 
			class PrL_addObject{}; 
			class PrL_close{}; 
			class PrL_renameCat{}; 
			class PrL_renamePref{}; 
			class PrL_NewCat{}; 
			class PrL_NewPref{}; 
			class PrL_showInfo{}; 
			class PrL_fillCategories{}; 
			class PrL_fillPrefabs{}; 
			class PrL_fillContent{}; 
			class PrL_fillCompositions{}; 
			class PrL_handleKeydown{}; 
			class PrL_getCompositionData{}; 
			class PrL_preview{}; 
			class PrL_move{}; 
		}; 
		class EventHandlers {
			file = "composition_tool\functions\EventHandlers"; 
			class disableAllEHs{}; 
			class installAllEHs{}; 
		}; 
		class UserInformation {
			file = "composition_tool\functions\UserInformation"; 
			class errorMsg{}; 
			class notification{}; 
		};
		class 3DenRel {
			file = "composition_tool\functions\3DenRel"; 
			class openCT{}; 
			class saveFile{}; 
			class previewMission{}; 
			class syncWith3Den{}; 
			class linkLibsAndProjects{}; 
			class updateProjectsList{}; 
			class 3denKeyDown{}; 
			class 3denKeyUp{}; 
			class 3denMouseMove{}; 
			class 3denMouseButtonDown{}; 
			class 3denMouseZChange{}; 
			class updateUsedNames{}; 
		};
		class OptionMenu {
			file = "composition_tool\functions\OptionMenu";
			class OM_closeGUI{};
			class OM_handleEdit{};
			class OM_handleSlider{};
			class OM_handleToggle{};
			class OM_openGUI{};
			class OM_setValue{};
			class OM_switchTab{};
		};
	};
};