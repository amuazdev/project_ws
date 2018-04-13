;; Auto-generated. Do not edit!


(when (boundp 'mobile_base::joy)
  (if (not (find-package "MOBILE_BASE"))
    (make-package "MOBILE_BASE"))
  (shadow 'joy (find-package "MOBILE_BASE")))
(unless (find-package "MOBILE_BASE::JOY")
  (make-package "MOBILE_BASE::JOY"))

(in-package "ROS")
;;//! \htmlinclude joy.msg.html


(defclass mobile_base::joy
  :super ros::object
  :slots (_dirA _dirB _speedA _speedB ))

(defmethod mobile_base::joy
  (:init
   (&key
    ((:dirA __dirA) nil)
    ((:dirB __dirB) nil)
    ((:speedA __speedA) 0)
    ((:speedB __speedB) 0)
    )
   (send-super :init)
   (setq _dirA __dirA)
   (setq _dirB __dirB)
   (setq _speedA (round __speedA))
   (setq _speedB (round __speedB))
   self)
  (:dirA
   (&optional __dirA)
   (if __dirA (setq _dirA __dirA)) _dirA)
  (:dirB
   (&optional __dirB)
   (if __dirB (setq _dirB __dirB)) _dirB)
  (:speedA
   (&optional __speedA)
   (if __speedA (setq _speedA __speedA)) _speedA)
  (:speedB
   (&optional __speedB)
   (if __speedB (setq _speedB __speedB)) _speedB)
  (:serialization-length
   ()
   (+
    ;; bool _dirA
    1
    ;; bool _dirB
    1
    ;; int16 _speedA
    2
    ;; int16 _speedB
    2
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _dirA
       (if _dirA (write-byte -1 s) (write-byte 0 s))
     ;; bool _dirB
       (if _dirB (write-byte -1 s) (write-byte 0 s))
     ;; int16 _speedA
       (write-word _speedA s)
     ;; int16 _speedB
       (write-word _speedB s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _dirA
     (setq _dirA (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _dirB
     (setq _dirB (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; int16 _speedA
     (setq _speedA (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _speedB
     (setq _speedB (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(setf (get mobile_base::joy :md5sum-) "65a21cca78a5147fa5f897d0fbef56fe")
(setf (get mobile_base::joy :datatype-) "mobile_base/joy")
(setf (get mobile_base::joy :definition-)
      "bool dirA
bool dirB
int16 speedA
int16 speedB
")



(provide :mobile_base/joy "65a21cca78a5147fa5f897d0fbef56fe")


