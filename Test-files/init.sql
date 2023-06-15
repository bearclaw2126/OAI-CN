-- Create the database
CREATE DATABASE IF NOT EXISTS oai_db;

-- Use the oai_db database
USE oai_db;

-- Create the amf_registration table
CREATE TABLE IF NOT EXISTS amf_registration (
  id INT PRIMARY KEY AUTO_INCREMENT,
  amf_id VARCHAR(255) NOT NULL,
  served_plmn VARCHAR(255) NOT NULL,
  last_seen TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP
);

-- Create the ue_context table
CREATE TABLE IF NOT EXISTS ue_context (
  id INT PRIMARY KEY AUTO_INCREMENT,
  suci VARCHAR(255) NOT NULL,
  amf_id VARCHAR(255) NOT NULL,
  serving_plmn VARCHAR(255) NOT NULL,
  last_updated TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP
);

-- Create any other necessary tables for the AMF

-- Grant privileges to the necessary users
GRANT ALL PRIVILEGES ON oai_db.* TO 'open5gs'@'%' IDENTIFIED BY 'open5gs';

