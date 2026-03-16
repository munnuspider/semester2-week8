typedef struct _pgm {
    int width;
    int height;
    int max_gray;
    unsigned char **pixels;
} PGMImage;

// function headers
void display();
//function prototypes
unsigned char **allocate_image_array(int height, int width);
void free_image_array(unsigned char **image, int height);
unsigned char **read_pgm_image(const char *filename, int *height, int *width, int *max_gray);
void print_image_info(const char *filename, int height, int width, int max_gray);
void print_image_values(unsigned char **pixels, int height, int width);
unsigned char **invert_image_colors(unsigned char **original_image, int height, int width, int max_gray);
unsigned char **rotate_image(unsigned char **original_image, int height, int width, int degrees);
int save_pgm_image(const char *filename, unsigned char **pixels, int height, int width, int max_gray);
int get_user_menu_choice(const char *message);
void display_menu(void);