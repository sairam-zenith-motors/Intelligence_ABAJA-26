# Meshes Directory - aBAJA Buggy
# ================================
#
# This directory is a placeholder for custom 3D mesh files.
#
# Currently, the aBAJA buggy model uses only primitive shapes
# (boxes, cylinders, spheres) which don't require mesh files.
#
# In the future, you can add custom mesh files here to improve
# the visual appearance of the model. Supported formats:
#
#   - STL  (.stl)  - Simple triangulated surfaces, small file size
#   - DAE  (.dae)  - Collada format, supports colors and textures
#   - OBJ  (.obj)  - Wavefront format, widely supported
#
# To use a mesh in your XACRO/URDF:
#
#   <visual>
#     <geometry>
#       <mesh filename="package://abaja_description/meshes/chassis.stl"
#             scale="1.0 1.0 1.0"/>
#     </geometry>
#   </visual>
#
# Tips:
#   - Keep mesh files under 5 MB each for fast loading
#   - Use simplified meshes for collision geometry
#   - Export from CAD software (SolidWorks, Fusion 360, FreeCAD)
#   - Ensure the mesh origin matches your URDF joint positions
#   - STL files don't carry color info - use URDF <material> tags
#   - DAE files can include textures and materials
