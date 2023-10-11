# Networking 101

Networking is about connecting computers, devices, and systems together to share resources.

## 1. Basic Concepts

### 1.1 IP Address

Every device connected to the Internet has a unique IP (Internet Protocol) address that distinguishes it from others. It's like a home address for devices.

- **IPv4**: A 32-bit address format, e.g., `192.168.1.1`.
- **IPv6**: A 128-bit address format designed to overcome the limitation of available IPv4 addresses. e.g., `2001:0db8:85a3:0000:0000:8a2e:0370:7334`.

### 1.2 MAC Address

A MAC (Media Access Control) address is a unique identifier assigned to network interfaces for communications on a network segment. It's hardware-specific, unlike IP addresses which can change based on the network.

### 1.3 External vs. Internal IP

- **External IP (or Public IP)**: This IP is assigned by your ISP (Internet Service Provider) and is shared by all devices in your network when accessing the Internet.
- **Internal IP (or Private IP)**: Devices within your network have distinct internal IPs assigned by your router. These are unique within your local network but aren't directly exposed to the Internet.

## 2. Protocols

A protocol defines a set of rules for data communication.

### 2.1 TCP/IP

TCP/IP (Transmission Control Protocol/Internet Protocol) is the basic communication language or protocol of the Internet. 

- **TCP (Transmission Control Protocol)**: Ensures end-to-end data delivery. It breaks down the data into packets, sends them, and then the recipient reassembles the packets.
- **IP (Internet Protocol)**: Responsible for addressing and routing packets of data so that they can travel across networks and arrive at the correct destination.

### 2.2 IMAP and POP3

Both are mail retrieval protocols:

- **IMAP (Internet Message Access Protocol)**: Allows multiple devices to access the same mailbox, making it useful for users who need to check their email from different locations. With IMAP, messages are stored on the server.

- **POP3 (Post Office Protocol 3)**: Downloads email from a server to a single computer, then deletes it from the server. Best suited for accessing mail from only one device.

### 2.3 HTTP/HTTPS

- **HTTP (HyperText Transfer Protocol)**: Used for transferring web pages on the internet. When you access a website, your browser uses HTTP to fetch the web page from a server.
- **HTTPS (HTTP Secure)**: A secure version of HTTP. It uses SSL/TLS to encrypt the data transferred, adding a layer of security.

## 3. Networking Hardware

### 3.1 Routers

A device that forwards data packets between computer networks. If you have a home Wi-Fi, you likely have a router that connects your local network to your ISP.

### 3.2 Switches

Used in a local network, switches operate at the data link layer (Layer 2) to create a local area network (LAN). They direct data based on MAC addresses.

### 3.3 Modems

A device that modulates digital data from a computer into an analog signal to send over a phone line, and demodulates incoming analog signals into digital data for the receiving computer.


Absolutely! Here's a list of common networking interview questions spanning a range of complexities:

## Basic Networking Questions

1. **What is an IP address and how is it different from a MAC address?**
2. **Differentiate between a hub, a switch, and a router.**
3. **What are the differences between IPv4 and IPv6?**
4. **Explain the OSI model and its layers.**
5. **What is a subnet? Why is subnetting used in IP networks?**

## Protocols

6. **Explain the difference between TCP and UDP.**
7. **What is DHCP and why is it used in networks?**
8. **Describe the purpose of DNS. How does it work?**
9. **What is ARP, and how does it work?**
10. **Explain the difference between HTTP and HTTPS.**

## Advanced Networking

11. **What is NAT (Network Address Translation)?**
12. **How do firewalls protect networks?**
13. **Describe the three-way handshake in TCP.**
14. **What is the difference between static and dynamic routing?**
15. **Explain the concept of VPN (Virtual Private Network). How does it enhance security?**

## Network Troubleshooting

16. **How would you diagnose a network slowdown issue?**
17. **What is a traceroute/tracert command, and how is it used?**
18. **Which command/tool would you use to display the routing table of a machine?**
19. **How would you determine where packet loss is occurring in a network?**
20. **What are common reasons for DNS failures?**

## Real-World Application

21. **Describe a challenging network problem you faced at a previous job and how you resolved it.**
22. **How do you prioritize network traffic in a busy network to ensure critical applications have the necessary bandwidth?**
23. **What measures would you take to secure a wireless network?**
24. **How do you handle a situation where a key part of the company network goes down during peak hours?**
25. **How do you stay updated with the latest network technologies and security threats?**

---

## Advanced Networking Concepts

1. **Discuss the concept of Quality of Service (QoS) in networking. How can it be implemented?**
2. **Describe the differences between interior and exterior gateway protocols. Give examples of each.**
3. **What is Network Function Virtualization (NFV)?**
4. **Discuss the purpose and function of Border Gateway Protocol (BGP).**
5. **How does traffic shaping work, and why is it essential?**

## Network Security

6. **Explain the differences between IDS and IPS.**
7. **How would you secure a network against man-in-the-middle attacks?**
8. **Describe the SSL/TLS handshake process.**
9. **What is a DDoS attack, and how would you mitigate it?**
10. **Discuss the differences and similarities between symmetric and asymmetric encryption.**

## Protocol Deep Dives

11. **Explain the role of Sequence and Acknowledgment numbers in TCP.**
12. **What is Path MTU Discovery, and why is it important?**
13. **Discuss the implications and solutions to TCP Starvation/UDP Dominance.**
14. **Describe the operation of the Spanning Tree Protocol (STP).**
15. **How do sliding window protocols like TCP ensure data integrity?**

## Network Design and Architecture

16. **How would you design a scalable network for a growing company?**
17. **Explain the concept of split-horizon DNS.**
18. **Describe a situation where you'd recommend a mesh topology over a star topology.**
19. **What considerations should be made when designing a network for a data center versus a corporate office?**
20. **How would you handle network design for a multinational corporation with locations in countries with strict data sovereignty laws?**

## Deep Troubleshooting

21. **A user is experiencing slow download speeds but fast upload speeds. How would you diagnose and resolve the issue?**
22. **Explain an instance where modifying TCP parameters (like window size) might be necessary.**
23. **How would you identify and address a routing loop in a network?**
24. **What tools or methods would you use to pinpoint packet loss occurring outside of a company's internal network?**
25. **A critical application's real-time data is arriving out of sequence, causing errors. How would you identify the cause and rectify it?**

---

## Network Interface Controller (NIC)

A **Network Interface Controller (NIC)**, often also referred to as a network card, network adapter, or LAN (Local Area Network) adapter, is a hardware component that connects a computer or other device to a computer network. Its primary function is to serve as the interface between a computer's internal systems and the network, be it local or an external network like the internet.

### Key Features and Functions:

1. **Data Link Layer Operations**: In the OSI model, the NIC primarily operates at Layer 2, the Data Link Layer. It is responsible for frame sequencing and MAC addressing.

2. **MAC Address**: Each NIC has a globally unique identifier known as the MAC (Media Access Control) address. This address is hard-coded onto the NIC by its manufacturer, ensuring each device on a network has a unique Layer 2 address.

3. **Signal Conversion**: The NIC takes the data generated by the computer, converts it into an electrical or optical signal (depending on the network medium), and then sends it over the network. When receiving data, the NIC converts the signal back into digital data for the computer to process.

4. **Connectors**: NICs have connectors compatible with the network medium they are designed for. For example, Ethernet NICs usually have an RJ-45 connector, while older ones might have had a BNC or AUI connector. Wireless NICs (Wi-Fi adapters) don't have such connectors but will instead have antennas.

5. **Driver Software**: To function correctly, NICs require driver software to interface with the computer's operating system. This software ensures the OS can recognize and communicate with the NIC.

6. **Buffering & Error Handling**: NICs come with built-in memory to buffer data when network traffic is high. They can also detect errors in data transmission and request retransmission if necessary.

7. **Types & Forms**:
   - **Wired NICs**: Often just called Ethernet cards, these are designed for cable-based networks, usually Ethernet.
   - **Wireless NICs (WNICs)**: These are designed for connecting to wireless networks, most commonly Wi-Fi. They can be integrated into laptops, desktops, and even mobile devices.
   - **External NICs**: Often found as USB devices that you can plug into a computer. Useful for devices that don't have an integrated NIC or require an additional one.
   - **On-board NICs**: Integrated directly onto the motherboard of modern computers and servers.

8. **Additional Features**: Some advanced NICs come with features like offloading (where the NIC takes over certain network-related operations to relieve the CPU), teaming/bonding (where multiple NICs are used in tandem for redundancy or increased bandwidth), and VLAN support.

### Importance:

The NIC is a foundational component for networking. Without it, a device would not be able to connect or communicate on a network. It plays a pivotal role in ensuring data is correctly packaged, transmitted, received, and interpreted between devices.

In essence, the NIC serves as the bridge between a device's internal processes and the outside network world, allowing data to flow in and out.

---

## MAC Address: An Overview

A **MAC (Media Access Control) address** is a unique identifier assigned to a network interface controller (NIC) for use as a network address in communications within a network segment. This address is usually used within the local network and is different from the IP address, which is used for identifying devices on the internet.

Here's a breakdown of its aspects:

### 1. Format:

A MAC address is typically given in a six-byte format, which translates to 12 characters when written in hexadecimal. It's usually divided into pairs by colons or hyphens.

For example: `3A-1F-5C-7D-4B-8E` or `3A:1F:5C:7D:4B:8E`

### 2. Structure:

- The **first half (or 24 bits)** of the MAC address represents the **Organizationally Unique Identifier (OUI)**. This is assigned by the IEEE and is unique to every hardware manufacturer.
  
- The **second half (remaining 24 bits)** is the **Network Interface Controller Specific** value, which is assigned by the manufacturer. This ensures every NIC they produce has a unique MAC address.

### 3. Types:

- **Unicast**: This is the most common type of MAC address. It represents a specific NIC on a network.
  
- **Multicast**: Represents a specific group of NICs on a network. If a NIC is part of this group, it listens to packets sent to this MAC address.
  
- **Broadcast**: Represents all NICs in the network segment. A packet sent to the broadcast address goes to all devices in the segment.

### 4. Universality:

- MAC addresses are supposed to be unique worldwide. This uniqueness is achieved through coordination between the IEEE and the manufacturers. 

- However, modern NICs and operating systems often allow MAC address modification (called "MAC spoofing"). This can be useful in certain scenarios but can also be used for nefarious purposes, like bypassing MAC-based security controls or avoiding network usage tracking.

### 5. Application:

- **Layer 2 Communications**: While IP addresses operate at Layer 3 (the Network Layer) of the OSI model, MAC addresses operate at Layer 2 (the Data Link Layer). When devices communicate within a local network, they use MAC addresses to identify each other.

- **Address Resolution**: ARP (Address Resolution Protocol) is used to map 32-bit IP addresses to MAC addresses within a local network, facilitating proper packet delivery.

### 6. Limitations:

Even though MAC addresses offer a robust way to identify devices on a local network, they're not meant for routing traffic over the broader internet. That job is reserved for IP addresses.

In simpler terms, think of a MAC address as the unique "serial number" given to the network card in your device by its manufacturer. It's like a permanent name tag, letting other devices in the same local network know who's sending or receiving a message.

---

## How  IP addresses change based on the network

## 1. **Types of IP Addresses**:

First, it's important to understand the two primary types of IP addresses:

- **Static IP Address**: This is a fixed IP address manually set for a device. It doesn't change unless the network administrator changes it.

- **Dynamic IP Address**: This IP address is assigned automatically by a Dynamic Host Configuration Protocol (DHCP) server each time a device joins a network. It can change over time.

## 2. **Local vs. Public IP Addresses**:

- **Local IP Address (Private IP Address)**: Devices within a local network (like your home or office) are assigned local IP addresses. These are unique only within that network. Most commonly, they fall in the ranges:
  - `192.168.0.0` to `192.168.255.255`
  - `172.16.0.0` to `172.31.255.255`
  - `10.0.0.0` to `10.255.255.255`

- **Public IP Address**: This is the IP address assigned to a network by the ISP (Internet Service Provider). All devices on the same local network share this public IP when accessing the internet. You can think of the public IP as the address of your entire local network in the broader context of the internet.

## 3. **How IP Addresses Change**:

### **Within a Local Network**:

- When you connect a device to a network (e.g., your home Wi-Fi), the router's DHCP server assigns it a local IP address. This address can change:
  - If the device is disconnected and then reconnected later.
  - If the DHCP lease expires. (The lease duration is a set period for which the DHCP server guarantees the IP won't change.)
  - If the device connects to a different network (e.g., switching from home Wi-Fi to office Wi-Fi).

### **Public IP Address**:

- Your ISP typically assigns this. It can be either static (rare and usually requires extra payment) or dynamic.
- Most home users have dynamic public IPs. This means your public IP can change:
  - Every time your modem/router restarts.
  - When the DHCP lease from your ISP expires.
  - If there are network changes initiated by the ISP.

## 4. **Special Cases: Mobile Networks & VPNs**:

- **Mobile Networks**: If you're using cellular data, your device doesn't have a fixed public IP. As you move and switch between cell towers or regions, your IP might change based on the infrastructure of the mobile service provider.

- **VPNs (Virtual Private Networks)**: When you use a VPN, your device connects to another network over the internet, and all your internet traffic gets routed through this network. This will change your public IP to the IP address of the VPN server you're connected to.

In essence, while devices have a relatively stable local IP within their immediate network, the public IP address, representing the entire local network on the internet, can change for various reasons.

---
 ## OSI Model

The OSI (Open Systems Interconnection) model is a conceptual framework that standardizes the functions of a telecommunication or computing system into seven distinct layers. It's a way to understand and design a network architecture that operates across various protocols and technologies.

Here's a detailed breakdown of each layer:

## **1. Physical Layer (Layer 1)**:

**Function**: Concerned with the actual physical connection between devices. It defines the hardware elements involved, such as cables, switches, and NICs.

**Characteristics & Components**:
- **Medium**: Defines whether the communication is through optical (fiber), electrical (copper cables), or wireless (radio waves).
- **Signal Type**: Determines how data is represented, whether digital or analog.
- **Bit Rate**: The number of bits sent each second.
- **Examples**: Ethernet cables, USB cables, Bluetooth, and physical network adapters.

## **2. Data Link Layer (Layer 2)**:

**Function**: Ensures reliable point-to-point communication and handles access to the shared medium.

**Sublayers**:
- **MAC (Media Access Control)**: Responsible for channel access control mechanisms like how a device on the network gains access to the data and permission to transmit.
- **LLC (Logical Link Control)**: Responsible for flow control, acknowledgment, and frame synchronization.

**Characteristics & Components**:
- **Frames**: Packets are encapsulated into frames for transmission.
- **MAC Address**: Each device's unique identifier.
- **Switches**: Operate at this layer to forward frames based on MAC addresses.
- **Examples**: Ethernet, PPP, and Switches.

## **3. Network Layer (Layer 3)**:

**Function**: Determines the best path to route data from the source to the destination across the network.

**Characteristics & Components**:
- **IP Addressing**: Uses logical addresses (like IP addresses) for devices.
- **Routers**: Devices that forward packets across networks.
- **IP Protocols**: IPv4 and IPv6.
- **Examples**: IP (Internet Protocol), ICMP (Internet Control Message Protocol), and Routers.

## **4. Transport Layer (Layer 4)**:

**Function**: Ensures end-to-end communication, reliability, and data integrity between two devices on different networks.

**Characteristics & Components**:
- **Ports**: Logical endpoints for communication.
- **Segmentation & Reassembly**: Data from the application layer is segmented into smaller chunks for transmission and reassembled at the destination.
- **Flow Control**: Ensures data integrity by adjusting the flow of data.
- **Examples**: TCP (Transmission Control Protocol), UDP (User Datagram Protocol).

## **5. Session Layer (Layer 5)**:

**Function**: Establishes, maintains, and terminates connections (sessions) between applications on different devices.

**Characteristics & Components**:
- **Session Establishment, Maintenance, Termination**: Sets up, maintains, and ends communication sessions.
- **Dialog Control**: Determines which device will communicate and when.
- **Synchronization**: Keeps data in sync.
- **Examples**: RPC (Remote Procedure Call), SQL, NFS (Network File System).

## **6. Presentation Layer (Layer 6)**:

**Function**: Translates data between the application and transport layers. It's responsible for data compression, encryption, and translation services.

**Characteristics & Components**:
- **Translation**: Converts data from one format to another.
- **Encryption**: Transforms data into a secure format.
- **Compression**: Reduces data size for faster transmission.
- **Examples**: SSL/TLS, JPEG, GIF, TIFF.

## **7. Application Layer (Layer 7)**:

**Function**: Directly interacts with end-users and provides network services to applications.

**Characteristics & Components**:
- **End-User Interfaces**: What the end-users interact with.
- **Network Services**: E.g., remote file access, directory services, and email.
- **Examples**: HTTP, HTTPS, FTP (File Transfer Protocol), SMTP (Simple Mail Transfer Protocol), SNMP (Simple Network Management Protocol).

The OSI model provides a structured approach to understanding how different protocols and technologies fit together in a networked communication system. While it's a theoretical model (with the real-world internet largely based on the simpler TCP/IP model), understanding the OSI layers can be very beneficial for comprehending and designing complex networks.

---

## **Network Layer (Layer 3): An Overview**

The primary function of the Network Layer is to determine the best path to route data packets from the source to the destination across potentially multiple networks. While moving through this layer, data packets may traverse multiple routers and networks until they reach their intended destination.

### **Key Responsibilities**:

1. **Logical Addressing**: 
   - Every device on an IP network is identified by a logical IP address. This address is used to determine the source and destination of each packet.
   - For IPv4, addresses are 32 bits in length, while in IPv6, they are 128 bits long.

2. **Routing**: 
   - It's the process of selecting a path over which to send the packets. Routers are crucial devices at this layer, examining the destination IP address of a packet, determining the next hop, and forwarding the packet accordingly.
   - Routing can be static (predefined routes) or dynamic (routes determined using algorithms and routing protocols like OSPF, EIGRP, BGP).

3. **Path Selection**:
   - Based on various metrics like hop count, bandwidth, latency, or cost, the best path is chosen for packet traversal.

4. **Packet Forwarding**:
   - After determining the best path, routers then forward packets towards their destination.

5. **Fragmentation and Reassembly**:
   - Data packets might need to traverse networks with varying maximum transmission unit (MTU) sizes. If a packet exceeds the MTU of a network, it needs to be fragmented into smaller packets. These smaller packets are then reassembled back to the original packet at the destination or at a device where the larger MTU is supported again.

6. **Error Handling and Diagnostics**:
   - Protocols at the Network Layer can diagnose issues and report errors. A commonly known tool for this is the "ping" command, which uses ICMP (Internet Control Message Protocol) to check the reachability of a networked device.

### **Key Components and Protocols**:

1. **Routers**:
   - Primary devices operating at the Network Layer. They determine the optimal path for data packets and forward them towards their destination.

2. **IP (Internet Protocol)**:
   - It's the principal protocol in the Network Layer and is used for relaying datagrams across network boundaries.

3. **ICMP (Internet Control Message Protocol)**:
   - Used by network devices to send error messages and operational information.

4. **IGMP (Internet Group Management Protocol)**:
   - Used by hosts and adjacent routers to establish multicast group memberships.

5. **Routing Protocols**:
   - **RIP (Routing Information Protocol)**: Distance-vector routing protocol.
   - **OSPF (Open Shortest Path First)**: Link-state routing protocol.
   - **BGP (Border Gateway Protocol)**: Standard for routing across the internet.
   - **EIGRP (Enhanced Interior Gateway Routing Protocol)**: Advanced distance-vector routing protocol.

6. **ARP (Address Resolution Protocol)**:
   - Resolves IP addresses to MAC (Media Access Control) addresses within a local network.

### **Key Concepts**:

1. **Subnetting**:
   - Dividing an IP network into sub-networks to improve performance and security.

2. **VPN (Virtual Private Network)**:
   - Allows creating a secure connection to another network over the public internet. It utilizes the Network Layer for its operations.

3. **NAT (Network Address Translation)**:
   - Translates IP addresses in the header of data packets while they are traveling through a router or firewall. This allows multiple devices in a local network to share a single public IP address.

In essence, the Network Layer plays a pivotal role in ensuring data packets are correctly routed across complex networks, possibly spanning multiple regions or even continents. It deals with logical addressing, path selection, packet forwarding, and handling network topology complexities.

---

## **Transport Layer (Layer 4): An Overview**

The primary function of the Transport Layer is to provide end-to-end communication services for applications. It establishes, maintains, and terminates connections between two devices on different networks. It also ensures data integrity, delivery, and error correction.

### **Key Responsibilities**:

1. **Segmentation and Reassembly**:
   - Data from the application layer is segmented (divided) into smaller chunks suitable for transmission. Each segment gets a sequence number for proper reassembly at the destination.

2. **Connection Establishment, Maintenance, and Termination**:
   - Protocols at this layer can be either connection-oriented (like TCP) or connectionless (like UDP). Connection-oriented protocols establish a connection before transferring data and terminate it afterward.
   
3. **Flow Control**:
   - To prevent congestion and to ensure efficient data transfer, flow control mechanisms are used. This ensures that a sender does not overwhelm a receiver by sending too much data too quickly.
   
4. **Error Detection and Correction**:
   - This layer is responsible for ensuring data integrity. If a segment is found to be corrupted or missing, the transport layer handles the error recovery.
   
5. **Port Addressing**:
   - Each application or service on a device is identified by a port number. This allows the transport layer to deliver data to the correct application.

6. **Multiplexing**:
   - Allows multiple applications or services to use the network simultaneously. Data from various applications is multiplexed into segments, transmitted, and then demultiplexed at the destination.

### **Key Protocols**:

1. **TCP (Transmission Control Protocol)**:
   - **Connection-Oriented**: Establishes a connection before data transfer and ensures the data's ordered and reliable delivery.
   - **Flow Control**: Uses windowing to manage the rate of data transfer.
   - **Error Recovery**: Acknowledgments (ACKs) are sent for received packets, and missing packets are retransmitted.
   - **Used By**: Web browsers, email, file transfer applications, etc.

2. **UDP (User Datagram Protocol)**:
   - **Connectionless**: Does not establish a connection before data transfer. It sends data as datagrams.
   - **No Error Recovery**: Does not ensure ordered or reliable delivery. If a packet is lost, it's lost.
   - **Used By**: Streaming media, online gaming, VoIP, DNS, DHCP.

3. **SCTP (Stream Control Transmission Protocol)**:
   - Designed to transport telephony signaling over IP networks. It combines some characteristics of TCP and UDP.
   - Supports multihoming, where one or both endpoints of a connection can consist of multiple IP addresses.

4. **DCCP (Datagram Congestion Control Protocol)**:
   - A transport protocol that provides bidirectional, unicast connections of congestion-controlled, unreliable datagrams. It is suitable for applications like streaming media where timely delivery is more crucial than accuracy.

### **Key Concepts**:

1. **Ports**:
   - Logical endpoints for communication. Commonly used ports include 80 for HTTP, 443 for HTTPS, 21 for FTP, etc.
   
2. **Socket**:
   - A combination of an IP address and a port number. It represents a unique endpoint in a network.

3. **Windowing**:
   - A flow control mechanism where the sender can send a set number of segments before needing an acknowledgment.

4. **Three-Way Handshake**:
   - In TCP, a method to establish a connection. It involves:
     1. SYN (from the client).
     2. SYN-ACK (from the server).
     3. ACK (from the client).

5. **Four-Way Termination**:
   - In TCP, a method to terminate a connection. It involves:
     1. FIN (from the client).
     2. ACK (from the server).
     3. FIN (from the server).
     4. ACK (from the client).

In essence, the Transport Layer acts as the communication manager, ensuring that data flows smoothly between two devices over a network. By handling tasks like segmentation, error correction, flow control, and port addressing, it ensures data is delivered accurately and efficiently.