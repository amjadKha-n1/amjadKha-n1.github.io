#ifndef CONFIG_HPP
#define CONFIG_HPP

#define SCALE_FACTOR            60
#define PLATE_Z                 10000
#define PLATE_START             10, 10, PLATE_Z

#define X_CENTER                450
#define Y_CENTER                380

#define SCALE_VALUE             0.1

#define ILLUM_VIS_X             1000
#define ILLUM_VIS_Y             1000

#define MOVE_UNIT               50
#define ROTATE_UNIT             3.14159265358979323846 / 8

#define BLACK_COLOUR            0, 0, 0

#define GRASS_COLOR             178, 215, 50
#define DARK_GRASS_COLOR        102, 176, 50
//#define GRASS_COLOR             176, 196, 222        // Lawn green
//#define DARK_GRASS_COLOR        119, 136, 153       // Forest green

//#define HOUS_COLOR              219, 159, 40
//#define DARK_HOUS_COLOR         184, 131, 26
#define HOUS_COLOR              238, 223, 204       // Soft beige
#define DARK_HOUS_COLOR         210, 193, 175       // Darker beige

//#define ROOF_HOUS_COLOR         132, 29, 29
//#define DARK_ROOF_HOUS_COLOR    111, 19, 19
#define ROOF_HOUS_COLOR         60, 60, 60          // Slate gray
#define DARK_ROOF_HOUS_COLOR    40, 40, 40          // Darker slate gray

//#define WINDOWS_HOUS_COLOR      227, 206, 123
//#define DARK_WINDOWS_HOUS_COLOR 210, 182, 65
#define WINDOWS_HOUS_COLOR      70, 130, 180        // Steel blue
#define DARK_WINDOWS_HOUS_COLOR 50, 100, 140        // Darker steel blue

#define TREE_FOLIAGE_COLOR      34, 134, 83
#define DARK_TREE_FOLIAGE_COLOR 0, 116, 57

#define TREE_TRUNK_COLOR        191, 109, 48
#define DARK_TREE_TRUNK_COLOR   166, 70, 0

//#define ROAD_ASPHALT_COLOR      57, 57, 57
//#define DARK_ROAD_ASPHALT_COLOR 43, 43, 43
#define ROAD_ASPHALT_COLOR      80, 90, 100        // Slate gray
#define DARK_ROAD_ASPHALT_COLOR 60, 70, 80         // Darker slate gray
	
//#define ROAD_STRIPE_COLOR       255, 253, 251
//#define DARK_ROAD_STRIPE_COLOR  226, 224, 223
#define ROAD_STRIPE_COLOR       255, 215, 0        // Gold
#define DARK_ROAD_STRIPE_COLOR  220, 180, 0        // Darker gold

//#define CAR_COLOR               106, 72, 215
//#define DARK_CAR_COLOR          65, 44, 132
#define CAR_COLOR               220, 20, 60        // Crimson red
#define DARK_CAR_COLOR          180, 15, 50        // Darker crimson

//#define CAR_WHEELS_COLOR        78, 84, 92
//#define DARK_CAR_WHEELS_COLOR   66, 71, 76
#define CAR_WHEELS_COLOR        30, 30, 30         // Dark gray
#define DARK_CAR_WHEELS_COLOR   20, 20, 20         // Even darker gray

//#define CAR_GLASS_COLOR         255, 253, 251
//#define DARK_CAR_GLASS_COLOR    226, 224, 223
#define CAR_GLASS_COLOR         135, 206, 250      // Light sky blue
#define DARK_CAR_GLASS_COLOR    100, 180, 230      // Darker sky blue

#define EPS 1e-3

#endif // CONFIG_HPP
