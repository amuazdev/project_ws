; Auto-generated. Do not edit!


(cl:in-package mobile_base-msg)


;//! \htmlinclude joy.msg.html

(cl:defclass <joy> (roslisp-msg-protocol:ros-message)
  ((dirA
    :reader dirA
    :initarg :dirA
    :type cl:boolean
    :initform cl:nil)
   (dirB
    :reader dirB
    :initarg :dirB
    :type cl:boolean
    :initform cl:nil)
   (speedA
    :reader speedA
    :initarg :speedA
    :type cl:fixnum
    :initform 0)
   (speedB
    :reader speedB
    :initarg :speedB
    :type cl:fixnum
    :initform 0))
)

(cl:defclass joy (<joy>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <joy>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'joy)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mobile_base-msg:<joy> is deprecated: use mobile_base-msg:joy instead.")))

(cl:ensure-generic-function 'dirA-val :lambda-list '(m))
(cl:defmethod dirA-val ((m <joy>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobile_base-msg:dirA-val is deprecated.  Use mobile_base-msg:dirA instead.")
  (dirA m))

(cl:ensure-generic-function 'dirB-val :lambda-list '(m))
(cl:defmethod dirB-val ((m <joy>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobile_base-msg:dirB-val is deprecated.  Use mobile_base-msg:dirB instead.")
  (dirB m))

(cl:ensure-generic-function 'speedA-val :lambda-list '(m))
(cl:defmethod speedA-val ((m <joy>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobile_base-msg:speedA-val is deprecated.  Use mobile_base-msg:speedA instead.")
  (speedA m))

(cl:ensure-generic-function 'speedB-val :lambda-list '(m))
(cl:defmethod speedB-val ((m <joy>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobile_base-msg:speedB-val is deprecated.  Use mobile_base-msg:speedB instead.")
  (speedB m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <joy>) ostream)
  "Serializes a message object of type '<joy>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'dirA) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'dirB) 1 0)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'speedA)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'speedB)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <joy>) istream)
  "Deserializes a message object of type '<joy>"
    (cl:setf (cl:slot-value msg 'dirA) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'dirB) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'speedA) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'speedB) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<joy>)))
  "Returns string type for a message object of type '<joy>"
  "mobile_base/joy")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'joy)))
  "Returns string type for a message object of type 'joy"
  "mobile_base/joy")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<joy>)))
  "Returns md5sum for a message object of type '<joy>"
  "65a21cca78a5147fa5f897d0fbef56fe")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'joy)))
  "Returns md5sum for a message object of type 'joy"
  "65a21cca78a5147fa5f897d0fbef56fe")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<joy>)))
  "Returns full string definition for message of type '<joy>"
  (cl:format cl:nil "bool dirA~%bool dirB~%int16 speedA~%int16 speedB~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'joy)))
  "Returns full string definition for message of type 'joy"
  (cl:format cl:nil "bool dirA~%bool dirB~%int16 speedA~%int16 speedB~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <joy>))
  (cl:+ 0
     1
     1
     2
     2
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <joy>))
  "Converts a ROS message object to a list"
  (cl:list 'joy
    (cl:cons ':dirA (dirA msg))
    (cl:cons ':dirB (dirB msg))
    (cl:cons ':speedA (speedA msg))
    (cl:cons ':speedB (speedB msg))
))
