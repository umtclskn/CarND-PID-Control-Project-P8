#include "PID.h"

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */

    Kd = Kd_;
    Kp = Kp_;
    Ki = Ki_;

    p_error = 0.00;
    i_error = 0.00;
    d_error = 0.00;
}

void PID::UpdateError(double cte) {
  /**
   * TODO: Update PID errors based on cte.
   */

    // update differential error
    d_error = cte - p_error;

    // update proportion error
    p_error = cte;

    // update integral error
    i_error += cte;

}

double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   */

  return -Kp * p_error - Kd * d_error - Ki * i_error;
}

void PID::twiddle() {

}
