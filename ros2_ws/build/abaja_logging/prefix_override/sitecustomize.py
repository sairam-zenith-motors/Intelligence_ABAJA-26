import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/pavithra/Intelligence_ABAJA-26/ros2_ws/install/abaja_logging'
