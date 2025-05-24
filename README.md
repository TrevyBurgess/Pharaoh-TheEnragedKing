
# Pharaoh - The Enraged King

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
1. ncient Ruins – Free Asset Pack (26 Pieces + Custom Rematerials)
1. Quadruped Fantasy Creatures

## 1. Synopsis

Genre: An Unreal horror game, combining puzzles and magic

### 1.1. Synopsizes

You are an archeologist who discovered an untouched Egyptian tomb. Within the underground labyrinth of the pharaoh, you plundered countless treasures. Now the king is angry. He wants his treasures back.

As punishment, you are now immortal. But is that a good thing, when every night you are viciously attacked and murdered by terrifying monsters, only to resurrect the next day?

Will you free yourself of the curse, or spend the rest of eternity in torment?

### 1.2. Lore References

1. [Medical Plants](https://www.bing.com/search?q=medicinal+plants+and+herbs+list)
1. [The Egyptian Book of the Dead](https://archive.org/details/TheEgyptianBookOfTheDead)
1. [Hieroglyphics Translator](https://engdic.org/hieroglyphics-translator/)

### 1.3. Publishing

1. [Compiling Game](https://www.youtube.com/watch?v=BLXhZTK4HkY)

## 2. Game Customizations

### 2.1. Dual suns

For the second sun, change these to 1

1. Directional Light: Both suns = Movable
1. Atmosphere Sun Light Index = 1
1. ForwardShadingPriority = 1
1. Temperature - 1000
1. Intensity - 1 lux
1. Source angle - sun size = 4
1. SkyLight: Movable, Real Time Capture = Checked
1. Exponential Fog Density:

### 2.2. Water Management

1. Plugins: Water, Water Advanced

### 2.3. 3D text

1. Plugin: Text 3D

## 2.4. Fix for trees going up and down

[Unreal Engine 5 Foliage Bug: FIX Weird Stretching Tree Movement](https://www.youtube.com/watch?v=BWxUOWkv2hI)

1. In content browser, search for: MF_SimpleWind
1. Open blueprint
1. Under "Main Rotator", open "ObjectPivotPoint"
1. Select "TransformPosition" (Connected to OutputObjectPivotLocation)
1.1. Set "Source" = "Instance & Particle Space"
1.1. Set "Destination" = "Absolute World Space"
1. Save

### 2.5. Displacement

[UE5 Nanite Tessellation](https://unrealstack.com/how-to-use-ue5-nanite-tessellation/)

1. [Material texture](https://www.youtube.com/watch?v=oRDmp0RLy7Q)
1. Open Config/DefaultEngine.ini
1. Go to [/Script/Engine.RendererSettings]
1. Add: r.Nanite.AllowTessellation=1 -> r.Nanite.AllowTessellation 1
1. Add: r.Nanite.Tessellation=1 ------> r.Nanite.Tessellation 1
1. In console, enter replacing = with space
1.1. Enter: r.Nanite.AllowTessellation 1
1.1. Enter: r.Nanite.Tessellation 1
1. Enable Nanite in Landscape

For ORM textures...

1. R -> Ambient Occulsion
1. G -> Roughness
1. B -> Displacement

## 3. Blueprint info

1. [Character tracking](https://www.youtube.com/watch?v=FvOSdkhQ6ag)

## 4. C++ Coding

1. [Coding Standards](https://dev.epicgames.com/documentation/en-us/unreal-engine/epic-cplusplus-coding-standard-for-unreal-engine)

## 5. UE 5.6 Customizations

1. To show new tool bar: ToolMenusViewportToolbars (0 for old, 2 for new, 1 for both)

## 6. Standard Libraries

1. Characters
1. Developers
1. Fab
1. FirstPerson
1. FirstPersonArms
1. FPWeapon
1. LevelPrototyping
1. MSPresets
1. StarterContent
1. ThirdPerson

## 7. 3rd Party Librariers

### 7.1. General

1. Stylized_Egypt------------: Stone fireplace
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
1. 250BigPrincess_Assets_Set-: 250+ Cute Princesses Avatars Icons BIG PACK
1. Vegetation----------------: Mountains & Meadows I Outdoor Environment

### 7.2. Avatars

1. Free -> Paragon: Sparrow

### 7.3. Buildings

1. Free -> Korea Heritage Service
1. Stylized Egypt
1. Ancient_Ruins-------------: Ancient Ruins - Free Asset Pack (26 Pieces + Custom Rematerials)

### 7.4. Creatures/monsters

1. AnimalVarietyPack---------: ANIMAL VARIETY PACK
1. FarmAnimalsPack-----------: FARM ANIMALS PACK
1. Dragon for Boss Monster : Handpainted
1. Dragon for Boss Monster : PBR

## 7.5. Materials

1. Marble_Materials_4K-------: Marble Materials
1. AutomotiveMaterials---------: Automotive Materials

## 7.6. Music

1. CavesAndDungeons------------: Caves and Dungeons

### 7.7. Special Effects

1. BigNiagaraBundle------------: Big Niagara Bundle
1. DungeonLamps----------------: Dungeon Lamps

## 7.8. Underwater

1. Underwater: Underwater World / 70 Assets
