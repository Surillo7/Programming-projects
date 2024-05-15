CREATE DATABASE StayWell_Students; 
  
CREATE TABLE OFFICE(OFFICE_NUM DECIMAL(2,0) NOT NULL PRIMARY KEY, OFFICE_NAME char(25), 
ADDRESS char(25), AREA char(25), CITY char(25) ,STATE CHAR(2), ZIPCODE char(5)); 
  
INSERT INTO OFFICE VALUES('1','StayWell-Columbia City', '1135 N. Wells Avenue', 'Columbia City', 
'Seattle', 'WA', '98118'); 
  
INSERT INTO OFFICE VALUES('2', 'StayWell-Georgetown',  '986 S. Madison Rd', 'Georgetown',
 'Seattle','WA', '98108'); 
   
CREATE TABLE OWNER(OWNER_NUM CHAR(5) NOT NULL PRIMARY KEY, LAST_NAME CHAR(25), 
FIRST_NAME CHAR(25), ADDRESS CHAR(25), CITY VARCHAR(25), STATE CHAR(2), ZIPCODE CHAR(5)); 
  
INSERT INTO OWNER VALUES('MO100','Moore','Elle-May','8006 W. Newport Ave.','Reno',  
'NV','89508'); 
  
INSERT INTO OWNER VALUES('PA101','Patel','Makesh','7337 Sheffield St.','Seattle',  
'WA','98119'); 
  
INSERT INTO OWNER VALUES('AK102','Aksoy','Ceyda','411 Griffin Rd.','Seattle', 'WA','98131'); 
  
INSERT INTO OWNER VALUES('CO103','Cole','Meerab','9486 Circle Ave.','Olympia', 'WA','98506'); 
  
INSERT INTO OWNER VALUES('KO104','Kowalczyk','Jakub','7431 S. Bishop St.','Bellingham',  'WA','98226'); 
  
INSERT INTO OWNER VALUES('SI105','Sims','Haydon','527 Primrose Rd.','Portland', 'OR','97203'); 
  
INSERT INTO OWNER VALUES('BU106','Burke','Ernest','613 Old Pleasant St.','Twin Falls', 'ID','83303'); 
  
INSERT INTO OWNER VALUES('RE107','Redman','Seth','7681 Fordham St.','Seattle', 'WA','98119'); 
  
INSERT INTO OWNER VALUES('LO108','Lopez','Janine','9856 Pumpkin Hill Ln.','Everett', 'WA','98213'); 
  
INSERT INTO OWNER VALUES('BI109','Bianchi','Nicole','7990 Willow Dr.','New York','NY','10005'); 
  
INSERT INTO OWNER VALUES('JO110','Jones','Ammarah','730 Military Ave.','Seattle','WA','98126'); 
  
CREATE TABLE PROPERTY(PROPERTY_ID DECIMAL(2,0) NOT NULL PRIMARY KEY, OFFICE_NUM DECIMAL(2,0),
 ADDRESS CHAR(25), SQR_FT DECIMAL(5,0),BDRMS DECIMAL(2,0),FLOORS DECIMAL(2,0), MONTHLY_RENT DECIMAL(6,2),
 OWNER_NUM CHAR(5)); 
   
INSERT INTO PROPERTY VALUES(1,'1','30 West Thomas Rd.',1600,3,1,1400,'BU106'); 
INSERT INTO PROPERTY VALUES(2,'1','782 Queen Ln.',2100,4,2,1900,'AK102'); 
INSERT INTO PROPERTY VALUES(3,'1','9800 Sunbeam Ave.',1005,2,1,1200,'BI109'); 
INSERT INTO PROPERTY VALUES(4,'1','105 North Illinois Rd.',1750,3,1,1650,'KO104'); 
INSERT INTO PROPERTY VALUES(5,'1','887 Vine Rd.',1125,2,1,1160,'SI105'); 
INSERT INTO PROPERTY VALUES(6,'1','8 Laurel Dr.',2125,4,2,2050,'MO100'); 
INSERT INTO PROPERTY VALUES(7,'2','447 Goldfield St.',1675,3,2,1700,'CO103'); 
INSERT INTO PROPERTY VALUES(8,'2','594 Leatherwood Dr.',2700,5,2,2750,'KO104'); 
INSERT INTO PROPERTY VALUES(9,'2','504 Windsor Ave.',700,2,1,1050,'PA101'); 
INSERT INTO PROPERTY VALUES(10,'2','891 Alton Dr.',1300,3,1,1600,'LO108'); 
INSERT INTO PROPERTY VALUES(11,'2','9531 Sherwood Rd.',1075,2,1,1100,'JO110'); 
INSERT INTO PROPERTY VALUES(12,'2','2 Bow Ridge Ave.',1400,3,2,1700,'RE107'); 
  
CREATE TABLE SERVICE_CATEGORY(CATEGORY_NUM DECIMAL(2,0) NOT NULL PRIMARY KEY, 
CATEGORY_DESCRIPTION CHAR(35)); 
  
INSERT INTO SERVICE_CATEGORY VALUES('1', 'Plumbing'); 
INSERT INTO SERVICE_CATEGORY VALUES('2', 'Heating'); 
INSERT INTO SERVICE_CATEGORY VALUES('3', 'Painting'); 
INSERT INTO SERVICE_CATEGORY VALUES('4', 'Electrical Systems'); 
INSERT INTO SERVICE_CATEGORY VALUES('5', 'Carpentry'); 
INSERT INTO SERVICE_CATEGORY VALUES('6', 'Furniture Replacement'); 
  
CREATE TABLE SERVICE_REQUEST(SERVICE_ID DECIMAL(2,0) NOT NULL PRIMARY KEY, 
PROPERTY_ID DECIMAL(2,0), CATEGORY_NUM DECIMAL(2,0),  OFFICE_NUM DECIMAL (2,0), 
DESCRIPTION CHAR(255), STATUS CHAR(255), EST_HOURS DECIMAL(4,0), SPENT_HOURS DECIMAL(4,0), 
NEXT_SERVICE_DATE DATE); 
  
INSERT INTO SERVICE_REQUEST VALUES(1,11,2,2,'The second bedroom upstairs is not heating up at night.', 
'Problem has been confirmed. Central heating engineer has been scheduled',2,1,'2019-11-01'); 
  
INSERT INTO SERVICE_REQUEST VALUES(2,1,4,1,'A new strip light is needed for the kitchen', 
'Scheduled',1,0,'2019-10-02'); 
  
INSERT INTO SERVICE_REQUEST VALUES(3,6,5,1,'The bathroom door does not close properly.', 
'Service rep has confirmed issue. Scheduled to be refitted',3,1,'2019-11-09'); 
  
INSERT INTO SERVICE_REQUEST VALUES(4,2,4,1,'New outlet has been requested for upstairs bedroom.', 
'Scheduled',1,0,'2019-10-02'); 
  
INSERT INTO SERVICE_REQUEST VALUES(5,8,3,2,'New paint job requested for common area.', 
'Open',10,0, null); 
  
INSERT INTO SERVICE_REQUEST VALUES(6,4,1,1,'Shower is dripping when not in use.', 
'Problem has been confirmed. Plumber scheduled',4,2,'2019-10-07'); 
  
INSERT INTO SERVICE_REQUEST VALUES(7,2,2,1,'Heating unit in entrance smells like its burning', 
'Service rep confirmed the issue to be dust in heating unit.To be cleaned',1,0,'2019-10-09'); 
  
INSERT INTO SERVICE_REQUEST VALUES(8,9,1,2,'Kitchen sink does not drain properly.', 
'Problem has been confirmed. Plumber scheduled',6,2,'2019-11-12'); 
  
INSERT INTO SERVICE_REQUEST VALUES(9,12,6,2,'New sofa requested.', 'Open',2,0, null); 
  
CREATE TABLE RESIDENTS(RESIDENT_ID DECIMAL(2,0) NOT NULL PRIMARY KEY, FIRST_NAME CHAR(25), 
SURNAME CHAR(25),PROPERTY_ID DECIMAL(2,0)); 
  
INSERT INTO RESIDENTS Values(1,'Albie',"O'Ryan",1); 
INSERT INTO RESIDENTS Values(2,'Tariq',"Khan",1); 
INSERT INTO RESIDENTS Values(3,'Ismail',"Salib",1); 
INSERT INTO RESIDENTS Values(4,'Callen',"Beek",2); 
INSERT INTO RESIDENTS Values(5,'Milosz',"Polansky",2); 
INSERT INTO RESIDENTS Values(6,'Ashanti',"Lucas",2); 
INSERT INTO RESIDENTS Values(7,'Randy',"Woodrue",2); 
INSERT INTO RESIDENTS Values(8,'Aislinn',"Lawrence",3); 
INSERT INTO RESIDENTS Values(9,'Monique',"French",3); 
INSERT INTO RESIDENTS Values(10,'Amara',"Dejsuwan",4); 
INSERT INTO RESIDENTS Values(11,'Rosalie',"Blackmore",4); 
INSERT INTO RESIDENTS Values(12,'Carina',"Britton",4); 
INSERT INTO RESIDENTS Values(13,'Valentino',"Ortega",5); 
INSERT INTO RESIDENTS Values(14,'Kaylem',"Kent",5); 
INSERT INTO RESIDENTS Values(15,'Alessia',"Wagner",6); 
INSERT INTO RESIDENTS Values(16,'Tyrone',"Galvan",6); 
INSERT INTO RESIDENTS Values(17,'Constance',"Fleming",6); 
INSERT INTO RESIDENTS Values(18,'Eamonn',"Bain",6); 
INSERT INTO RESIDENTS Values(19,'Misbah',"Yacob",7); 
INSERT INTO RESIDENTS Values(20,'Gianluca',"Esposito",7); 
INSERT INTO RESIDENTS Values(21,'Elinor',"Lake",7); 
INSERT INTO RESIDENTS Values(22,'Ray',"Rosas",8); 
INSERT INTO RESIDENTS Values(23,'Damon',"Caldwell",8); 
INSERT INTO RESIDENTS Values(24,'Dawood',"Busby",8); 
INSERT INTO RESIDENTS Values(25,'Dora',"Harries",8); 
INSERT INTO RESIDENTS Values(26,'Leroy',"Stokes",8); 
INSERT INTO RESIDENTS Values(27,'Tamia',"Hess",9); 
INSERT INTO RESIDENTS Values(28,'Amelia',"Sanders",9); 
INSERT INTO RESIDENTS Values(29,'Zarah',"Byers",10); 
INSERT INTO RESIDENTS Values(30,'Sara',"Farrow",10); 
INSERT INTO RESIDENTS Values(31,'Delilah',"Roy",10); 
INSERT INTO RESIDENTS Values(32,'Dougie',"McDaniel",11); 
INSERT INTO RESIDENTS Values(33,'Tahir',"Halabi",11); 
INSERT INTO RESIDENTS Values(34,'Mila',"Zhikin",12); 
INSERT INTO RESIDENTS Values(35,'Glenn',"Donovan",12); 
INSERT INTO RESIDENTS Values(36,'Zayn',"Fowler",12); 