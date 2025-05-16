
# Pharaoh - The Enraged King

Genre: An Unreal horror game, combining puzzles and magic

## Synopsizes

You are an archeologist who discovered an untouched Egyptian tomb. Within the underground labyrinth of the pharaoh, you plundered countless treasures. Now the king is angry. He wants his treasures back.

As punishment, you are now immortal. But is that a good thing, when every night you are viciously attacked and murdered by terrifying monsters, only to resurrect the next day?

Will you free yourself of the curse, or spend the rest of eternity in torment?

## Lore

1. [Medical Plants](https://www.bing.com/search?q=medicinal+plants+and+herbs+list)
1. [The Egyptian Book of the Dead](https://archive.org/details/TheEgyptianBookOfTheDead)
1. [Hieroglyphics Translator](https://engdic.org/hieroglyphics-translator/)

## Dual suns

For the second sun, change these to 1

1. Directional Light: Both suns = Movable
1. Atmosphere Sun Light Index = 1
1. ForwardShadingPriority = 1
1. Temperature - 1000
1. Intensity - 1 lux
1. Source angle - sun size = 4
1. SkyLight: Movable, Real Time Capture = Checked
1. Exponential Fog Density: 

## Default Content

1. Characters
1. Developers
1. FirstPerson
1. FirstPersonArms
1. FPWeapon
1. LevelPrototyping
1. StarterContent
1. ThirdPerson

## Unreal Libraries

1. Fab _______________:
1. MSPresets__________:

## 3rd Party Libraries

1. 250+ Cute Princesses Avatars Icons BIG PACK
1. Bazaar_Meshingun----------: The Bazaar
1. BlackAlder----------------: European Black Alder (Megascans Trees: European)
1. DesertDragon--------------: Desert Dragon
1. Elite_Landscapes----------: Elite Landscapes: Bundle Pack
1. EnvironmentPack2----------:
1. LandscapeAutoMaterial_v2--:
1. MesoamericaConstructions--: Ancient Constructions and Platforms
1. ModularLostRuinKit--------: Modular Lost Ruins Kit
1. ModularOldTown------------: Modular Old Town
1. StarSphere----------------: StarSphere
1. TemplesOfCambodia---------: [VP] Temples of Cambodia - Ruins exterior and interior
1. Valley_Gul----------------: Valley of Guldur

1. Vegetation----------------: Mountains & Meadows I Outdoor Environment

## Pawns

1. AnimalVarietyPack---------: ANIMAL VARIETY PACK
1. FarmAnimalsPack-----------: FARM ANIMALS PACK


## Assets - Underwater

1. Underwater: Underwater World / 70 Assets

## Special Effects

1. BigNiagaraBundle------------: Big Niagara Bundle
1. DungeonLamps----------------: Dungeon Lamps

## Music

1. CavesAndDungeons------------: Caves and Dungeons
1.

## Free Contente

1. - Infinity Blade------------: InfinityBladeAdversaries,
1. - Infinity Blade------------:
1. - Infinity Blade------------:
1. - Infinity Blade------------:
1. - Infinity Blade------------:
1. - Infinity Blade------------:
1. - Infinity Blade------------:
1. - Infinity Blade------------:
1. - Infinity Blade------------:

## Plugins

1. Water plugins
1. PCG Extended Toolkit (PCGEx)
1. Nanite Displacement Mesh
1. For Under water: NiagaraFluids
1. For Under water: Water

## Fix for trees going up and down

[Unreal Engine 5 Foliage Bug: FIX Weird Stretching Tree Movement](https://www.youtube.com/watch?v=BWxUOWkv2hI)

1. In content browser, search for: MF_SimpleWind
1. Open blueprint
1. Under "Main Rotator", open "ObjectPivotPoint"
1. Select "TransformPosition" (Connected to OutputObjectPivotLocation)
1.1. Set "Source" = "Instance & Particle Space"
1.1. Set "Destination" = "Absolute World Space"
1. Save

## Configuration - DefaultEngine.ini

[UE5 Nanite Tessellation](https://unrealstack.com/how-to-use-ue5-nanite-tessellation/)

1. [Material texture](https://www.youtube.com/watch?v=oRDmp0RLy7Q)
1. Go to [/Script/Engine.RendererSettings]
1. Add: r.Nanite.AllowTessellation=1 -> r.Nanite.AllowTessellation 1
1. Add: r.Nanite.Tessellation=1 ------> r.Nanite.Tessellation 1
1. In console, enter replacing = with space
1. Enable Nanite in Landscape

For ORM textures...

1. R -> Ambient Occulsion
1. G -> Roughness
1. B -> Displacement

## Project Settings

Rendering
Shadow Map Method: Virtual Shadow Maps -> Shadow Maps
Anti-aliasing method: Temporal Super-Resolution(TSR) -> Temporal Anti-aliasing (TAA)

---------------
Fantasy Cave Environment Set

## C++ Coding

1. [Coding Standards](https://dev.epicgames.com/documentation/en-us/unreal-engine/epic-cplusplus-coding-standard-for-unreal-engine)

## UE 5.6

1. To show new tool bar: ToolMenusViewportToolbars (0 for old, 2 for new, 1 for both)
