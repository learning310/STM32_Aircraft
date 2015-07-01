#ifndef STICK_H_
#define STICK_H_

#ifdef __cplusplus
 extern "C" {
#endif

typedef enum {
  NEGATIVE_LOGIC // 负逻辑，反向即可
} DATA_MODE; // 数据模式

class Stick {
 private:
  DATA_MODE mode_;
  float now_duty_; // 现在的占空比，通过调度器接口获得
  float min_duty_; // 操作杆通道最低占空比
  float max_duty_; //
  float balance_duty_; // 不动操作杆时的占空比
  float std_duty_; // 标准化后的占空比
  data_standardize();
 public:
  Stick(float min_duty, float max_duty, float balance_duty, DATA_MODE mode);
  Stick();
}; // class Stick

#ifdef __cplusplus
}
#endif

#endif
