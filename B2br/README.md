# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    README.md                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clalfons <clalfons@student.42madrid.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/09 19:36:11 by clalfons          #+#    #+#              #
#    Updated: 2025/12/09 20:04:59 by clalfons         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

This project has been created as part of the 42 curriculum by clalfons.


***DESCRIPTION***

**Born2BeRoot** is a project from the 42 Common Course focused on system 
administration and security. It involves setting up and configuring a Linux 
virtual machine (Debian or Rocky) from scratch, applying best practices in 
partitioning, user management, firewalls, security policies, and monitoring.

This version was done using **Debian** for its stability, extensive 
documentation, and simplicity for educational environments.


***INSTRUCTIONS***

### **Installation**
1. Create a virtual machine in VirtualBox or UTM.
2. Install **Debian minimal** from the official ISO.
3. Manually partition using LVM, separating key directories.
4. Create a sudo user and enforce strict sudo rules.
5. Install and configure:
   - **SSH** (no root login)
   - **UFW** (deny by default)
   - **AppArmor**
   - **Cron** for the monitoring script

### **Usage**
The project is validated by powering on the VM and demonstrating the required 
configurations.

Useful commands: `lsblk`, `aa-status`, `sudo -l`, `ufw status`, `ss -tulnp`.


***PROJECT DESCRIPTION***

### **Usage**

This project involves setting up a Linux server, where the choice of operating
system is between Debian and Rocky Linux.

Debian is chosen for its stability, vast software repositories, and strong
community support, though it can be less cutting-edge in terms of software
updates.

Rocky Linux is selected for its enterprise-level stability, security features,
and long-term support, making it ideal for production environments.

The setup involves key design decisions including partitioning (for optimized
disk space and performance), security policies (to minimize vulnerabilities),
user management (ensuring least privilege principle), and installation of
essential services (to meet project requirements while ensuring minimal attack
surface).

### Debian vs Rocky Linux
- **Debian:** community-driven, flexible, stable.
- **Rocky:** corporate-focused, RHEL clone, very predictable.

### AppArmor vs SELinux
- **AppArmor:** simpler, path-based security.
- **SELinux:** more complex, label-based security.

### UFW vs firewalld
- **UFW:** very simple, ideal for Debian.
- **firewalld:** more advanced, designed for RHEL/Rocky.

### VirtualBox vs UTM
- **VirtualBox:** excellent on x86.
- **UTM:** ideal for Macs with Apple Silicon (ARM).


***RESOURCES***

Additional resources and information can be found at:

- https://www.debian.org/download.en.html
- AppArmor Documentation
- Linux FHS & LVM guides
- SSH hardening references
