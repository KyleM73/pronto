
(cl:in-package :asdf)

(defsystem "pronto_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "BipedForceTorqueSensors" :depends-on ("_package_BipedForceTorqueSensors"))
    (:file "_package_BipedForceTorqueSensors" :depends-on ("_package"))
    (:file "ControllerFootContact" :depends-on ("_package_ControllerFootContact"))
    (:file "_package_ControllerFootContact" :depends-on ("_package"))
    (:file "FilterState" :depends-on ("_package_FilterState"))
    (:file "_package_FilterState" :depends-on ("_package"))
    (:file "GPSData" :depends-on ("_package_GPSData"))
    (:file "_package_GPSData" :depends-on ("_package"))
    (:file "IndexedMeasurement" :depends-on ("_package_IndexedMeasurement"))
    (:file "_package_IndexedMeasurement" :depends-on ("_package"))
    (:file "LidarOdometryUpdate" :depends-on ("_package_LidarOdometryUpdate"))
    (:file "_package_LidarOdometryUpdate" :depends-on ("_package"))
    (:file "QuadrupedForceTorqueSensors" :depends-on ("_package_QuadrupedForceTorqueSensors"))
    (:file "_package_QuadrupedForceTorqueSensors" :depends-on ("_package"))
    (:file "QuadrupedStance" :depends-on ("_package_QuadrupedStance"))
    (:file "_package_QuadrupedStance" :depends-on ("_package"))
    (:file "VelocityWithSigmaBounds" :depends-on ("_package_VelocityWithSigmaBounds"))
    (:file "_package_VelocityWithSigmaBounds" :depends-on ("_package"))
    (:file "VisualOdometryUpdate" :depends-on ("_package_VisualOdometryUpdate"))
    (:file "_package_VisualOdometryUpdate" :depends-on ("_package"))
  ))