#pragma once

#include "math_definitions.hpp"

#include "datatypes/vec2_t.hpp"
#include "datatypes/vec3_t.hpp"
#include "datatypes/angle_t.hpp"
#include "datatypes/vec4_t.hpp"
#include "datatypes/matrix3x4_t.hpp"
#include "datatypes/vert_t.h"
#include "datatypes/view_matrix_t.hpp"

namespace math
{
	angle_t calc_angle( const vec3_t& src, const vec3_t& dst );

	void normalize_angle( float& angle );

	void angle_vectors( const angle_t& ang, vec3_t& out_forward );

	void angle_vectors( const angle_t& ang, vec3_t& out_forward, vec3_t& out_right, vec3_t& out_up );

	void vector_angles( const vec3_t& vec, angle_t& out );

	void vector_transform( const vec3_t& in_vec, const matrix3x4_t& in_mat, vec3_t& out_vec );

}