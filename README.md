# Pharaoh - The Enraged King

## 1. Synopsis

Genre: An Unreal horror game, combining puzzles and magic

### 1.1. Synopsizes

You are an archaeologist who discovered an untouched Egyptian tomb. Within the underground labyrinth of the pharaoh, you plundered countless treasures. Now the king is angry. He wants his treasures back.

As punishment, you are now immortal. But is that a good thing, when every night you are viciously attacked and murdered by terrifying monsters, only to resurrect the next day?

Will you free yourself of the curse, or spend the rest of eternity in torment?

### 1.2. Lore References

1. [Medical Plants](https://www.bing.com/search?q=medicinal+plants+and+herbs+list)
1. [The Egyptian Book of the Dead](https://archive.org/details/TheEgyptianBookOfTheDead)
1. [Hieroglyphics Translator](https://engdic.org/hieroglyphics-translator/)

### 1.3. Publishing

1. [Compiling Game](https://www.youtube.com/watch?v=BLXhZTK4HkY)
1. [Git LFS download](https://git-lfs.com/)
1. [Source Tree](https://www.sourcetreeapp.com/)

## 2. Visual Studio/Git

### 2.1. Git

1. [Git Setup](https://www.youtube.com/watch?v=n3x1fErlmYA)

### 2.2. Visual Studio Setup

Go to Options:

- Disable error list

1. Go to: Projects and Solutions | General
1. Uncheck: Always show Error List if build finishes with errors

- Hide external dependencies

1. Go to: Text Editor | C/C++ | Advanced
1. Set "Hide External Dependencies Folders" = True
1. Set "Disable IntelliSense = False

- Hide inactive macros

1. Go to: Text Editor | C/C++ | View | Inactive Code
1. Set: "Show Inactive Blocks" = False

- Disable Live coding. This can cause Blueprint corruption

1. Open Editor Preferences
1. Go to: "Enable Reinstancing"
1. Disable

- Ensure Visual Studio Support

1. Open Visual Studio Installer
1. Modify Current Installation
1. Go to Installation Details
1. Go to: "Game development with C++"
1. Enable: Unreal Engine Installer
1. Enable: Unreal Engine Test Adaper
1. Etc.

## 3. Editor Settings

## 4. Project Settings

## 5. Plugins

### 5.1. 3D text

1. Plugin: Text 3D

## 5.2. Water Management

1. Plugins: Water, Water Advanced

## 5.3. Modeling (PCG)

1. Plugin: Modeling Tools Editor Mode
1. Plugin: Procedural Content Generation Framework
1. [TUtorial](https://www.youtube.com/watch?v=STqt92VF3KM)

Unblund PCG volume

1. Edit PCG VOlume
1. Select Sampler (Surface, Volume, Splien, etc.)
1. Check 'Unbound', or use bounding shape

## 5.4. Landscape

1. Plugin: Landscape Patch

## 6. Game Customizations

### 6.1. Dual suns

For the second sun, change these to 1

1. Directional Light: Both suns = Movable
1. Atmosphere Sun Light Index = 1
1. ForwardShadingPriority = 1
1. Temperature - 1000
1. Intensity - 1 lux
1. Source angle - sun size = 4
1. SkyLight: Movable, Real Time Capture = Checked
1. Exponential Fog Density:

### 6.2. Displacement

[UE5 Nanite Tessellation](https://unrealstack.com/how-to-use-ue5-nanite-tessellation/)

1. [Material texture](https://www.youtube.com/watch?v=oRDmp0RLy7Q)
1. Open Config/DefaultEngine.ini
1. Go to [/Script/Engine.RendererSettings]
1. Add: r.Nanite.AllowTessellation=1 -> r.Nanite.AllowTessellation 1
1. Add: r.Nanite.Tessellation=1 ------> r.Nanite.Tessellation 1
1. In console, enter replacing = with space
1. Enter: r.Nanite.AllowTessellation 1
1. Enter: r.Nanite.Tessellation 1
1. Enable Nanite in Landscape

For ORM textures...

1. R -> Ambient Occlusion
1. G -> Roughness
1. B -> Displacement

### 6.3. Fix for trees going up and down

[Unreal Engine 5 Foliage Bug: FIX Weird Stretching Tree Movement](https://www.youtube.com/watch?v=BWxUOWkv2hI)

1. In content browser, search for: MF_SimpleWind
1. Open blueprint
1. Under "Main Rotator", open "ObjectPivotPoint"
1. Select "TransformPosition" (Connected to OutputObjectPivotLocation)
1. Set "Source" = "Instance & Particle Space"
1. Set "Destination" = "Absolute World Space"
1. Save

### 6.4 Always show, visible

1. Always show: Uncheck 'Is Spatially Loaded'

### 6.5. World Settings

1. GameMode Override = BP_MyCharacter_GameMode

### 6.6. Issue with water

1.

### Islam Pray Animations

1. Plug Required: [OpenXR](https://community.gamedev.tv/t/additional-compile-error-in-thirdpersoncharacter/233284/3)
1. Select: OpenXR

## 7. Game Packaging

### 7.1. Packaging

Go to: Project Settings/Packaging
Go to:

1. Target Hardware
1. Default RHI

## 8. General

### 8.1. Blueprint info

1. [Character tracking](https://www.youtube.com/watch?v=FvOSdkhQ6ag)
1. [List View Implimentation](https://www.youtube.com/watch?v=76SWLfeyO0o)

### 8.2. C++ Coding

1. [Coding Standards](https://dev.epicgames.com/documentation/en-us/unreal-engine/epic-cplusplus-coding-standard-for-unreal-engine)

## 9. UE 5.6 Customizations

1. To show new tool bar: ToolMenusViewportToolbars (0 for old, 2 for new, 1 for both)

## 10. Game Assets

Imported assets from Fab and other locations

### 10.1. Standard Libraries

1. Fab
1. StarterContent-----: Starter Content
1. FirstPerson--------: First Person
1. ThirdPerson--------: Third Person

## 8.2. 3rd Party Librariers

| Animations               | Folder Name               | Library Name                                                     |
| ------------------------ | ------------------------- | ---------------------------------------------------------------- |
|                          | Islam_Pray_Animations     | Islam Pray Animations (Islamic praying)                          |
|                          | ActorCore_Sample_Motions  | ActorCore Sample Motions                                         |
|                          | Cat_Animation_Pack        | Cat Animation Pack                                               |
|                          |                           |                                                                  |
| Avatars                  | **Folder Name**           | **Library Name**                                                 |
|                          | ParagonSparrow            | Paragon: Sparrow                                                 |
|                          |                           |                                                                  |
| Creatures                | **Folder Name**           | **Library Name**                                                 |
|                          | DesertDragon              | Desert Dragon                                                    |
|                          | FarmAnimalsPack           | FARM ANIMALS PACK                                                |
|                          | FourEvilDragonsHP         | Dragon for Boss Monster : Handpainted                            |
|                          | AnimalVarietyPack         | ANIMAL VARIETY PACK                                              |
|                          | FourEvilDragonsPBR        | Dragon for Boss Monster : PBR                                    |
|                          |                           |                                                                  |
| Environment - Caves      | **Folder Name**           | **Library Name**                                                 |
|                          | SoulCave                  | Soul: Cave                                                       |
|                          | FantasyBundle             | Fantasy Bundle Environment Kit 3 in 1                            |
|                          | MedievalDungeon           | Medieval Dungeon                                                 |
|                          |                           |                                                                  |
| Environment - Landscapes | **Folder Name**           | **Library Name**                                                 |
|                          | Elite_Landscapes          | Elite Landscapes: Bundle Pack                                    |
|                          | Vegetation                | Mountains & Meadows I Outdoor Environment                        |
|                          |                           |                                                                  |
| Environment - Trees      | **Folder Name**           | **Library Name**                                                 |
|                          | EuropeanBeech             | European Beech                                                   |
|                          | BlackAlder                | European Black Alder                                             |
|                          | EuropeanHornbeam          | European Hornbeam                                                |
|                          |                           |                                                                  |
| Environment - Underwater | **Folder Name**           | **Library Name**                                                 |
|                          | Underwater                | Underwater World / 70 Assets                                     |
|                          |                           |                                                                  |
| Environment - World      | **Folder Name**           | **Library Name**                                                 |
|                          | StarSphere                | StarSphere                                                       |
|                          |                           |                                                                  |
| Environment - Citgies    | **Folder Name**           | **Library Name**                                                 |
|                          | - Medieval_Kingdom        | Medieval Kingdom                                                 |
|                          |                           |                                                                  |
| Environment - World      | **Folder Name**           | **Library Name**                                                 |
|                          | DungeonLamps              | Dungeon Lamps                                                    |
|                          |                           |                                                                  |
| Images                   | **Folder Name**           | **Library Name**                                                 |
|                          | 250BigPrincess_Assets_Set | 250+ Cute Princesses Avatars Icons BIG PACK                      |
|                          | TheTravelerV1             | [FBG] - The Traveler Vol. 1                                      |
|                          |                           |                                                                  |
| Niagara Effects          | **Folder Name**           | **Library Name**                                                 |
|                          | CharacterBodyFX           | Character Body FX Vol. 1                                         |
| Materials                | **Folder Name**           | **Library Name**                                                 |
|                          | Marble_Materials_4K       | Marble Materials                                                 |
|                          | AutomotiveMaterials       | Automotive Materials                                             |
|                          | STF                       | Landscape Pro 2.0 Auto-Generated Material                        |
| Music                    | **Folder Name**           | **Library Name**                                                 |
|                          | CavesAndDungeons          | Caves and Dungeons                                               |
|                          |                           |                                                                  |
| Structures - Buildings   | **Folder Name**           | **Library Name**                                                 |
|                          | ModularFantasyHouse       | Modular Fantasy House                                            |
|                          | MesoamericaConstructions  | Ancient Constructions and Platforms                              |
|                          | Village                   | Slavic Village                                                   |
|                          | Gothic_Cathedral          | UCreate - Gothic Cathedral Asset Pack                            |
|                          |                           |                                                                  |
| Structures - Cities      | **Folder Name**           | **Library Name**                                                 |
|                          | Stylized_Egypt            | Stylized Egypt                                                   |
|                          | Bazaar_Meshingun          | The Bazaar                                                       |
|                          | ModularOldTown            | Modular Old Town                                                 |
|                          | Valley_Gul                | Valley of Guldur                                                 |
|                          |                           |                                                                  |
| Structures - Ruins       | **Folder Name**           | **Library Name**                                                 |
|                          | Ancient_Ruins             | Ancient Ruins - Free Asset Pack (26 Pieces + Custom Rematerials) |
|                          | ModularLostRuinKit        | Modular Lost Ruins Kit                                           |
|                          | TemplesOfCambodia         | [VP] Temples of Cambodia - Ruins exterior and interior           |
|                          |                           |                                                                  |
| Shaders                  | **Folder Name**           | **Library Name**                                                 |
|                          | BlackHole                 | Black Hole Fragment Shader                                       |
|                          |                           |                                                                  |
| Special Effects          | **Folder Name**           | **Library Name**                                                 |
|                          | BigNiagaraBundle          | Big Niagara Bundle                                               |
|                          |                           |                                                                  |
| Projects                 | **Folder Name**           | **Library Name**                                                 |
|                          | EpicZenGarden2            | Epic Zen Garden                                                  |
|                          |                           | Magician's Library Environment and VFX Pack                      |
|                          |                           | Simple Procedural Asset Creator                                  |
|                          |                           |                                                                  |
| Fonts                    | **Folder Name**           | **Library Name**                                                 |
|                          | ntlibrary.org             | RunaHollow Medium                                                |

For Later: ----------------------

1. Asset Naming Convention Keeper
1. Interactive Justice Scale
1. Renamer Tool
1. Portal Travel
1. Cat Animation Pack
1. Marble Materials
1. Sci-Fi Shrine props VOL 5
1. Korean Railroad Mika 3 161
1. Rocks and combined
1. FREE Sword + Animation
1. bright letters and numbers
1. KCISA -Korean Presidential Coach
1. Dark Man GHS
1. Magic Potion Free
1. Ancient Ruins – Free Asset Pack (26 Pieces + Custom Rematerials)
1. Quadruped Fantasy Creatures
