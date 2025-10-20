#include "pch.h"

const double PI = 3.14159265358979323846;

Eigen::Vector3d _offset = {0, 1, 0};
float _pitch;
float _yaw;
Eigen::Vector3d _camera_fowards = { 1, 0, 0 };
Eigen::Vector3d _camera_up = { 0, 1, 0 };
Eigen::Vector3d _camera_right = { 0, 0, 1 };

Avril_FSD::FirstPersonCamera::FirstPersonCamera()
{

}

Avril_FSD::FirstPersonCamera::~FirstPersonCamera()
{

}

void Avril_FSD::FirstPersonCamera::Update_Pitch(float deltaDegY)
{
    Set_pitch(Get_pitch() + (float)((PI / 180) * deltaDegY));
    if (Get_pitch() > (float)(PI / 180) * 85)
    {
        Set_pitch((float)(PI / 180) * 85);
    }
    if (Get_pitch() <= (PI / 180) * -85)
    {
        Set_pitch((float)(PI / 180) * -85);
    }
}
void Avril_FSD::FirstPersonCamera::Update_Yaw(float deltaDegX)
{
    Set_yaw(Get_yaw() + (float)((PI / 180) * deltaDegX));
    if (Get_yaw() > (float)(PI / 180) * 180)
    {
        Set_yaw(Get_yaw() - (float)(PI * 2));
    }
    if (Get_yaw() <= (PI / 180) * -180)
    {
        Set_yaw(Get_yaw() + (float)(PI * 2));
    }
}
void Avril_FSD::FirstPersonCamera::UpdateVectors(float pitch, float yaw)
{
    _camera_fowards = { (float)(cos(pitch) * cos(yaw)), (float)(sin(pitch)), (float)(cos(pitch) * sin(yaw)) };

    _camera_up = {0, 1, 0};

    _camera_right = _camera_fowards.cross(_camera_up);
}

Eigen::Vector3d Avril_FSD::FirstPersonCamera::Get_offset()
{
	return _offset;
}
float Avril_FSD::FirstPersonCamera::Get_pitch()
{
	return _pitch;
}
float Avril_FSD::FirstPersonCamera::Get_yaw()
{
	return _yaw;
}
Eigen::Vector3d Avril_FSD::FirstPersonCamera::Get_fowards()
{
	return _camera_fowards;
}
Eigen::Vector3d Avril_FSD::FirstPersonCamera::Get_up()
{
	return _camera_up;
}
Eigen::Vector3d Avril_FSD::FirstPersonCamera::Get_right()
{
	return _camera_right;
}

void Avril_FSD::FirstPersonCamera::Set_offset(Eigen::Vector3d offset)
{
	_offset = offset;
}
void Avril_FSD::FirstPersonCamera::Set_pitch(float pitch)
{
	_pitch = pitch;
}
void Avril_FSD::FirstPersonCamera::Set_yaw(float yaw)
{
	_yaw = yaw;
}
void Avril_FSD::FirstPersonCamera::Set_fowards(Eigen::Vector3d fowards)
{
	_camera_fowards = fowards;
}
void Avril_FSD::FirstPersonCamera::Set_up(Eigen::Vector3d up)
{
	_camera_up = up;
}
void Avril_FSD::FirstPersonCamera::Set_right(Eigen::Vector3d right)
{
	_camera_right = right;
}