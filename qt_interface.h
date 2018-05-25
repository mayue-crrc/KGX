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
//��ʼ��fb�Լ�live555
void live555_init (void);

//��rtsp����,chn_id��Χ0~15,�໭����ʾʱchn_id�����ظ��� p_rtsp_url��ָ��rtsp�ַ�����ָ�룬posָ������ʾ�����ָ�룬��������������ʾ�������ص�
int open_connect(unsigned int chn_id, char const *p_rtsp_url, region *pos);

//�ر����ӣ�chn_id��Χ0~15
int close_connect(unsigned int chn_id);

//�ر�ͨ��chn_id��ʾ���򣬵����ֺ�̨����
int close_chn(unsigned int chn_id);

//��ͨ��chn_id������posΪĬ��ֵʱ�ָ���һ�µ���ʾ���򣬲�����ֵ�ǽ�chn_id��ʾ���µ�λ�ã���close_chn���ʹ�ÿ�ʵ�ֵ���ȫ����Ŵ��Ч��
int open_chn(unsigned int chn_id, region *pos = NULL);


//��ѯͨ��chn_id���������Ƿ�����������ʱstatus��0���ж�chn_id�Ƿ�������Ҫ���ڵ��øú���
int chn_status_query(unsigned int chn_id, int &status);



#endif
