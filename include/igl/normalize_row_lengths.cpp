#include "normalize_row_lengths.h"

template <typename DerivedV>
IGL_INLINE void igl::normalize_row_lengths(
  const Eigen::PlainObjectBase<DerivedV>& A,
  Eigen::PlainObjectBase<DerivedV> & B)
{
  // Resize output
  B.resize(A.rows(),A.cols());

  // loop over rows
  for(int i = 0; i < A.rows();i++)
  {
    B.row(i) = A.row(i).normalized();
  }
}
#ifndef IGL_HEADER_ONLY
// Explicit template specialization
// generated by autoexplicit.sh
template void igl::normalize_row_lengths<Eigen::Matrix<double, -1, -1, 0, -1, -1> >(Eigen::PlainObjectBase<Eigen::Matrix<double, -1, -1, 0, -1, -1> > const&, Eigen::PlainObjectBase<Eigen::Matrix<double, -1, -1, 0, -1, -1> >&);
template void igl::normalize_row_lengths<Eigen::Matrix<double, -1, 3, 1, -1, 3> >(Eigen::PlainObjectBase<Eigen::Matrix<double, -1, 3, 1, -1, 3> > const&, Eigen::PlainObjectBase<Eigen::Matrix<double, -1, 3, 1, -1, 3> >&);
template void igl::normalize_row_lengths<Eigen::Matrix<double, -1, 3, 0, -1, 3> >(Eigen::PlainObjectBase<Eigen::Matrix<double, -1, 3, 0, -1, 3> > const&, Eigen::PlainObjectBase<Eigen::Matrix<double, -1, 3, 0, -1, 3> >&);
#endif