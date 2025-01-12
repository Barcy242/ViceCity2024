class CfgPatches
{
	class KelleysIsland
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = { "arm_centraleurope" };
	};
};
class CfgWorldList
{
	class KelleysIsland{};
};
class CfgWorlds
{
	class Altis;
	class KelleysIsland: Altis
	{
		cutscenes[] = {};
		description = "Kelleys Island 2024";
		worldName = "KelleysIsland2024\KelleysIsland.wrp";
		grma3_revision = 3;
		author = "Jeremy Barcy";
		icon = "KelleysIsland2024\data\picturemap_ca.paa";
		previewVideo = "";
		pictureShot = "KelleysIsland2024\data\picturemap_ca.paa";
		newRoadsShape = "KelleysIsland2024\data\roads\roads.shp";
		ilsDirection[] = { 0, 0.08, 1 };
		ilsPosition[] = {0, 0};
		ilsTaxiIn[] = {};
		ilsTaxiOff[] = {};
		drawTaxiway = 0;
		class SecondaryAirports{};
		class ReplaceObjects{};
		class Sounds
		{
			sounds[] = {};
		};
		class Animation
		{
			vehicles[] = {};
		};
		minTreesInForestSquare = 5;
		minRocksInRockSquare = 10;
		class Subdivision{};
		class Names {
			#include "names.hpp"
		};
        class DefaultClutter;
		class clutter {
			#include "clutter.hpp"
		};
		#include"mapinfos.hpp"
		#include"ace-weather.hpp"
		loadingTexts[]={
			"Pendant près de 10 ans un certain David eu le monopole sur une belle petite bourgade désormais tous le monde peut profiter de Kelleys Island...",
			"En cas de suppresion workshop par DMCA les sources de la map sauront publiez sur github..."
		};
		pictureMap = "KelleysIsland2024\data\picturemap_ca.paa";
	};
};
#include "surfaces.hpp"
