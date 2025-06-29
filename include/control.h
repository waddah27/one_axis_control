#ifndef CONTROL_H
#define CONTROL_H
#include <vector>
#ifdef __cplusplus
extern "C" {
#endif


void initialize_control_system();
void send_motion_command(double position, double velocity, double step);
double get_current_position();
double get_current_pos_trapz(bool &is_done);
std::vector<double> get_current_pos_trapzND(bool &is_done); 
#ifdef __cplusplus
}
#endif

#endif // CONTROL_H