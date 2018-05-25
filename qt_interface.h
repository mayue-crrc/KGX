#ifndef __QT_INTERFACE__
#define __QT_INTERFACE__
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <memory.h>

#define ALIGN_BACK(x, a)              ((a) * (((x) / (a))))
#define ALIGN_UP(x, a)                ((x+a-1)&(~(a-1)))

#define MAX_WIDTH 1920
#define MAX_HEIGHT  1080

#define MAX_CHANNEL_NUM 16

struct region {
		int x;
		int y;
    unsigned int width;
    unsigned int height;
};

typedef struct screen_slice {
		struct screen_slice *next;
        struct screen_slice *prev;
		struct region rect;
        int cam_num;
} t_screen_slice;

typedef struct cam_display {
	int cam_num;
	int force_overlap;
	struct region rect;
} s_cam_display;

typedef enum {
    DIS_PAR_ERROR = -6,
    DIS_HI_ERROR,
    DIS_MALLOC_ERROR,
    DIS_REGION_OUT_OF_RANGE,
    DIS_REGION_OVERLAP,
    DIS_REGION_FORCE_OVERLAP,
    DIS_OK = 0
} DIS_RET;


//===================================
//初始化fb以及live555
void live555_init (void);

//打开rtsp连接,chn_id范围0~15,多画面显示时chn_id不能重复， p_rtsp_url是指向rtsp字符串的指针，pos指向画面显示区域的指针，任意两个画面显示区域不能重叠
int open_connect(unsigned int chn_id, char const *p_rtsp_url, region *pos);

//关闭连接，chn_id范围0~15
int close_connect(unsigned int chn_id);

//关闭通道chn_id显示区域，但保持后台连接
int close_chn(unsigned int chn_id);

//打开通道chn_id，参数pos为默认值时恢复上一下的显示区域，参数有值是讲chn_id显示到新的位置，和close_chn配合使用可实现单击全屏或放大的效果
int open_chn(unsigned int chn_id, region *pos = NULL);


//查询通道chn_id码流接收是否正常，正常时status非0，判断chn_id是否正常需要周期调用该函数
int chn_status_query(unsigned int chn_id, int &status);



#endif
